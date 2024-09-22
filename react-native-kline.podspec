require "json"

package = JSON.parse(File.read(File.join(__dir__, "package.json")))

Pod::Spec.new do |s|
  s.name         = "react-native-kline"
  s.version      = package["version"]
  s.summary      = package["description"]
  s.description  = package["description"]
  s.homepage     = package["homepage"]
  # brief license entry:
  s.license      = package["license"]
  # optional - use expanded license entry instead:
  s.author       = package["author"]
  s.platforms    = { :ios => "9.0" }
  s.source       = { :git => "https://github.com/TahaUsmanK/react-native-kline.git", :tag => "#{s.version}" }

  s.source_files = "ios/**/*.{h,c,m,swift,xib}"
  s.requires_arc = true

  s.dependency "React"
  # ...
  # s.dependency "..."
end