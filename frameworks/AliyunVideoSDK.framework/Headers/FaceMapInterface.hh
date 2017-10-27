#ifndef FACEMAPINTERFACE_HH
#define FACEMAPINTERFACE_HH
#include <stdint.h>
#include <memory>
#include <unordered_map>
namespace alivc {
namespace render {
class AlivcRenderer;
}
}
class Dongtu;

/*
 * FaceMapInterface所有接口都必须在
 * 渲染线程中创建，处理和释放
 */
class FaceMapInterface
{
public:
    /*
     * @param output_width 输出宽
     * @param output_height 输出高
     */
    FaceMapInterface(int output_width, int output_height);
    ~FaceMapInterface();

    /*
     * 设置TransformMatrix
     * @param fm float[16]
     */
    void setTransforamMatrix(float texture_asp, float* fm);

    /*
     * 用于android
     * @param isProceed 0, GL_TEXTURE_EXTERNAL_OES; 1, texture2D
     */
    void textureProceed(int isProceed);

    /*
     * 添加动图
     * important: vid由调用者维护，在FaceMapInterface生命周期内
     * 不允许重复，且必须大于1000
     * @param vid 动图的id
     * @param dongtu_dir 动图的绝对目录
     * @param duration 持续时间微妙
     */
    int  addGif(int vid, char const* dongtu_dir, int64_t duration);

    /*
     * 删除动图
     * @param vid 动图的id
     */
    void deleteGif(int vid);
    /*
     * 设置人脸数据
     * @param vid 动图的id
     * @param face [left_eye_x, left_eye_y, right_eye_x, right_eye_y,
     *              mouth_x, mouth_y]
     * @param size 目前必须是6，只用到3个点
     */
    void setFace(int vid, float* face, int size);

    /*
     * 渲染
     * @param texture_id 输入纹理id
     * @return 输出纹理id
     */
    int render(int texture_id);
private:
    void setPosition(int vid, float x, float y);
    void setRotate(int vid, float ang);
    void setSize(int vid, float width, float height);
private:
    int mCameraId = 98;
    alivc::render::AlivcRenderer* rd = 0;
    std::unordered_map<int, std::unique_ptr<Dongtu>>  dongtu_map_;
    float screen_asp;
    float crop_mat[16]{0};
    float converted_face[6];
};

#endif // FACEMAPINTERFACE_HH
