
Pod::Spec.new do |s|

  s.name         = "bytedesk-core"
  s.version      = "1.0.0"
  s.summary      = "bytedesk.com core lib."

  s.description  = <<-DESC
                    Online chat Lib for ios, Helpdesk system
                   DESC

  s.homepage     = "https://www.bytedesk.com"
  s.license      = "MIT"
  s.author       = { "jackning" => "270580156@qq.com" }
  s.platform     = :ios, "8.0"
  s.source       = { :git => "https://github.com/pengjinning/bytedesk-core-pod.git", :tag => "#{s.version}" }
  s.vendored_frameworks = "frameworks/cocoapods/bytedesk-core.framework"
  s.requires_arc = true

  s.dependency "FMDB"
  s.dependency "MQTTClient"
  s.dependency "AFNetworking"
  s.swift_version = "4.0"

end
