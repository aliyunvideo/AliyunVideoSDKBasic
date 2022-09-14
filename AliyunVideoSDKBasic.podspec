Pod::Spec.new do |s|
  s.name         = "AliyunVideoSDKBasic"
  s.version      = "3.34.0"
  s.summary      = "aliyun video sdk basic"
  s.description  = <<-DESC
                   It's an basic SDK for aliyun video, which implement by Objective-C.
                   DESC
  s.homepage     = "https://help.aliyun.com/document_detail/53407.html"
  s.license      = { :type => 'MIT', :text => <<-LICENSE
                       Alibaba-INC copyright
                     LICENSE
                   }
  s.author       = { "aliyunvideo" => "videosdk@service.aliyun.com" }
  s.platform     = :ios
  s.platform     = :ios, "9.0"
  s.source       = { :http => "https://alivc-demo-cms.alicdn.com/versionProduct/sdk/shortVideo/#{s.version}/iOS/AliyunVideoSDKBasic.zip" }
  s.frameworks   = "SystemConfiguration", "MobileCoreServices", "CoreTelephony"
  s.libraries    = "resolv","c++"
  s.vendored_frameworks = "AliyunVideoSDKBasic.framework"
  s.dependency 'QuCore-ThirdParty', '~> 4.3.2'
end
