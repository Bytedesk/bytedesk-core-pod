
Pod::Spec.new do |s|

  s.name         = "bytedesk-core"
  s.version      = "2.5.4"
  s.summary      = "bytedesk.com core lib."

  s.description  = <<-DESC
                    Online chat Lib for ios, Helpdesk system
                   DESC

  s.homepage     = "https://www.bytedesk.com"
  s.license      = "MIT"
  s.authors      = { "jackning" => "270580156@qq.com" }
  s.platform     = :ios, "10.0"
  s.source       = { :git => "https://github.com/pengjinning/bytedesk-core-pod.git", :tag => "#{s.version}" }
  s.vendored_frameworks = "frameworks/cocoapods/bytedesk-core.framework"
  s.requires_arc = true
  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

  s.dependency "FMDB"
  s.dependency "Protobuf"
  s.dependency "MQTTClient"
  s.dependency "MQTTClient/Websocket"
  s.dependency "SJVideoPlayer"
  s.dependency "AFNetworking"
  s.dependency "CocoaLumberjack"
  s.swift_version = "4.0"

end
