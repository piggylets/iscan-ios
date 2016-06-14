Pod::Spec.new do |s|
  s.authors      = "iscan"
  s.name         = "ISDrivingLicense"
  s.version      = "1.0.0"
  s.summary      = "ISDrivingLicense SDK"
  s.description  = "ISDrivingLicense SDK"
  s.homepage     = "http://is.com/"
  s.license      = { :type => "Commercial", :text => "©2016 iscan.com"}
  s.author       = { "iscan" => "iscan@iscan.com" }
  s.source       = { :http => "https://raw.githubusercontent.com/lamb/iscan-ios/master/ISDrivingLicense-1.0.0.zip" }
  s.requires_arc = true
  s.platform     = :ios
  s.ios.deployment_target = '8.0'
  s.vendored_frameworks ='ISDrivingLicensePreviewSDK.framework'
  s.frameworks = 'libstdc++'
  end