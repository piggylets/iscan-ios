Pod::Spec.new do |s|
  s.authors      = "iscan"
  s.name         = "ISOpen"
  s.version      = "1.0.0"
  s.summary      = "ISOpen SDK"
  s.description  = "ISOpen SDK"
  s.homepage     = "http://is.com/"
  s.license      = { :type => "Commercial", :text => "©2016 iscan.com"}
  s.author       = { "iscan" => "iscan@iscan.com" }
  s.source       = { :http => "https://raw.githubusercontent.com/lamb/iscan-ios/master/release/ISOpen-1.0.0.zip" }
  s.requires_arc = true
  s.platform     = :ios
  s.ios.deployment_target = '8.0'
  s.vendored_frameworks ='ISOpenSDKFoundation.embeddedframework'
  s.frameworks = 'libstdc++'
  end