[33mcommit e3b4b92e97383729b239a3f06e789d1640833056[m[33m ([m[1;36mHEAD -> [m[1;32mmaster[m[33m)[m
Author: Muhammad Haad Hashmi <you@example.com>
Date:   Fri Aug 26 16:06:20 2022 +0500

    MyApp

[1mdiff --git a/.gitignore b/.gitignore[m
[1mnew file mode 100644[m
[1mindex 0000000..a8e938c[m
[1m--- /dev/null[m
[1m+++ b/.gitignore[m
[36m@@ -0,0 +1,47 @@[m
[32m+[m[32m# Miscellaneous[m
[32m+[m[32m*.class[m
[32m+[m[32m*.log[m
[32m+[m[32m*.pyc[m
[32m+[m[32m*.swp[m
[32m+[m[32m.DS_Store[m
[32m+[m[32m.atom/[m
[32m+[m[32m.buildlog/[m
[32m+[m[32m.history[m
[32m+[m[32m.svn/[m
[32m+[m[32mmigrate_working_dir/[m
[32m+[m
[32m+[m[32m# IntelliJ related[m
[32m+[m[32m*.iml[m
[32m+[m[32m*.ipr[m
[32m+[m[32m*.iws[m
[32m+[m[32m.idea/[m
[32m+[m
[32m+[m[32m# The .vscode folder contains launch configuration and tasks you configure in[m
[32m+[m[32m# VS Code which you may wish to be included in version control, so this line[m
[32m+[m[32m# is commented out by default.[m
[32m+[m[32m#.vscode/[m
[32m+[m
[32m+[m[32m# Flutter/Dart/Pub related[m
[32m+[m[32m**/doc/api/[m
[32m+[m[32m**/ios/Flutter/.last_build_id[m
[32m+[m[32m.dart_tool/[m
[32m+[m[32m.flutter-plugins[m
[32m+[m[32m.flutter-plugins-dependencies[m
[32m+[m[32m.packages[m
[32m+[m[32m.pub-cache/[m
[32m+[m[32m.pub/[m
[32m+[m[32m/build/[m
[32m+[m
[32m+[m[32m# Web related[m
[32m+[m[32mlib/generated_plugin_registrant.dart[m
[32m+[m
[32m+[m[32m# Symbolication related[m
[32m+[m[32mapp.*.symbols[m
[32m+[m
[32m+[m[32m# Obfuscation related[m
[32m+[m[32mapp.*.map.json[m
[32m+[m
[32m+[m[32m# Android Studio will place build artifacts here[m
[32m+[m[32m/android/app/debug[m
[32m+[m[32m/android/app/profile[m
[32m+[m[32m/android/app/release[m
[1mdiff --git a/.metadata b/.metadata[m
[1mnew file mode 100644[m
[1mindex 0000000..95f73f5[m
[1m--- /dev/null[m
[1m+++ b/.metadata[m
[36m@@ -0,0 +1,45 @@[m
[32m+[m[32m# This file tracks properties of this Flutter project.[m
[32m+[m[32m# Used by Flutter tool to assess capabilities and perform upgrades etc.[m
[32m+[m[32m#[m
[32m+[m[32m# This file should be version controlled.[m
[32m+[m
[32m+[m[32mversion:[m
[32m+[m[32m  revision: fb57da5f945d02ef4f98dfd9409a72b7cce74268[m
[32m+[m[32m  channel: stable[m
[32m+[m
[32m+[m[32mproject_type: app[m
[32m+[m
[32m+[m[32m# Tracks metadata for the flutter migrate command[m
[32m+[m[32mmigration:[m
[32m+[m[32m  platforms:[m
[32m+[m[32m    - platform: root[m
[32m+[m[32m      create_revision: fb57da5f945d02ef4f98dfd9409a72b7cce74268[m
[32m+[m[32m      base_revision: fb57da5f945d02ef4f98dfd9409a72b7cce74268[m
[32m+[m[32m    - platform: android[m
[32m+[m[32m      create_revision: fb57da5f945d02ef4f98dfd9409a72b7cce74268[m
[32m+[m[32m      base_revision: fb57da5f945d02ef4f98dfd9409a72b7cce74268[m
[32m+[m[32m    - platform: ios[m
[32m+[m[32m      create_revision: fb57da5f945d02ef4f98dfd9409a72b7cce74268[m
[32m+[m[32m      base_revision: fb57da5f945d02ef4f98dfd9409a72b7cce74268[m
[32m+[m[32m    - platform: linux[m
[32m+[m[32m      create_revision: fb57da5f945d02ef4f98dfd9409a72b7cce74268[m
[32m+[m[32m      base_revision: fb57da5f945d02ef4f98dfd9409a72b7cce74268[m
[32m+[m[32m    - platform: macos[m
[32m+[m[32m      create_revision: fb57da5f945d02ef4f98dfd9409a72b7cce74268[m
[32m+[m[32m      base_revision: fb57da5f945d02ef4f98dfd9409a72b7cce74268[m
[32m+[m[32m    - platform: web[m
[32m+[m[32m      create_revision: fb57da5f945d02ef4f98dfd9409a72b7cce74268[m
[32m+[m[32m      base_revision: fb57da5f945d02ef4f98dfd9409a72b7cce74268[m
[32m+[m[32m    - platform: windows[m
[32m+[m[32m      create_revision: fb57da5f945d02ef4f98dfd9409a72b7cce74268[m
[32m+[m[32m      base_revision: fb57da5f945d02ef4f98dfd9409a72b7cce74268[m
[32m+[m
[32m+[m[32m  # User provided section[m
[32m+[m
[32m+[m[32m  # List of Local paths (relative to this file) that should be[m
[32m+[m[32m  # ignored by the migrate tool.[m
[32m+[m[32m  #[m
[32m+[m[32m  # Files that are not part of the templates will be ignored by default.[m
[32m+[m[32m  unmanaged_files:[m
[32m+[m[32m    - 'lib/main.dart'[m
[32m+[m[32m    - 'ios/Runner.xcodeproj/project.pbxproj'[m
[1mdiff --git a/README.md b/README.md[m
[1mnew file mode 100644[m
[1mindex 0000000..33e95ff[m
[1m--- /dev/null[m
[1m+++ b/README.md[m
[36m@@ -0,0 +1,16 @@[m
[32m+[m[32m# fooddeliveryapp[m
[32m+[m
[32m+[m[32mA new Flutter project.[m
[32m+[m
[32m+[m[32m## Getting Started[m
[32m+[m
[32m+[m[32mThis project is a starting point for a Flutter application.[m
[32m+[m
[32m+[m[32mA few resources to get you started if this is your first Flutter project:[m
[32m+[m
[32m+[m[32m- [Lab: Write your first Flutter app](https://docs.flutter.dev/get-started/codelab)[m
[32m+[m[32m- [Cookbook: Useful Flutter samples](https://docs.flutter.dev/cookbook)[m
[32m+[m
[32m+[m[32mFor help getting started with Flutter development, view the[m
[32m+[m[32m[online documentation](https://docs.flutter.dev/), which offers tutorials,[m
[32m+[m[32msamples, guidance on mobile development, and a full API reference.[m
[1mdiff --git a/analysis_options.yaml b/analysis_options.yaml[m
[1mnew file mode 100644[m
[1mindex 0000000..61b6c4d[m
[1m--- /dev/null[m
[1m+++ b/analysis_options.yaml[m
[36m@@ -0,0 +1,29 @@[m
[32m+[m[32m# This file configures the analyzer, which statically analyzes Dart code to[m
[32m+[m[32m# check for errors, warnings, and lints.[m
[32m+[m[32m#[m
[32m+[m[32m# The issues identified by the analyzer are surfaced in the UI of Dart-enabled[m
[32m+[m[32m# IDEs (https://dart.dev/tools#ides-and-editors). The analyzer can also be[m
[32m+[m[32m# invoked from the command line by running `flutter analyze`.[m
[32m+[m
[32m+[m[32m# The following line activates a set of recommended lints for Flutter apps,[m
[32m+[m[32m# packages, and plugins designed to encourage good coding practices.[m
[32m+[m[32minclude: package:flutter_lints/flutter.yaml[m
[32m+[m
[32m+[m[32mlinter:[m
[32m+[m[32m  # The lint rules applied to this project can be customized in the[m
[32m+[m[32m  # section below to disable rules from the `package:flutter_lints/flutter.yaml`[m
[32m+[m[32m  # included above or to enable additional rules. A list of all available lints[m
[32m+[m[32m  # and their documentation is published at[m
[32m+[m[32m  # https://dart-lang.github.io/linter/lints/index.html.[m
[32m+[m[32m  #[m
[32m+[m[32m  # Instead of disabling a lint rule for the entire project in the[m
[32m+[m[32m  # section below, it can also be suppressed for a single line of code[m
[32m+[m[32m  # or a specific dart file by using the `// ignore: name_of_lint` and[m
[32m+[m[32m  # `// ignore_for_file: name_of_lint` syntax on the line or in the file[m
[32m+[m[32m  # producing the lint.[m
[32m+[m[32m  rules:[m
[32m+[m[32m    # avoid_print: false  # Uncomment to disable the `avoid_print` rule[m
[32m+[m[32m    # prefer_single_quotes: true  # Uncomment to enable the `prefer_single_quotes` rule[m
[32m+[m
[32m+[m[32m# Additional information about this file can be found at[m
[32m+[m[32m# https://dart.dev/guides/language/analysis-options[m
[1mdiff --git a/android/.gitignore b/android/.gitignore[m
[1mnew file mode 100644[m
[1mindex 0000000..6f56801[m
[1m--- /dev/null[m
[1m+++ b/android/.gitignore[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32mgradle-wrapper.jar[m
[32m+[m[32m/.gradle[m
[32m+[m[32m/captures/[m
[32m+[m[32m/gradlew[m
[32m+[m[32m/gradlew.bat[m
[32m+[m[32m/local.properties[m
[32m+[m[32mGeneratedPluginRegistrant.java[m
[32m+[m
[32m+[m[32m# Remember to never publicly share your keystore.[m
[32m+[m[32m# See https://flutter.dev/docs/deployment/android#reference-the-keystore-from-the-app[m
[32m+[m[32mkey.properties[m
[32m+[m[32m**/*.keystore[m
[32m+[m[32m**/*.jks[m
[1mdiff --git a/android/app/build.gradle b/android/app/build.gradle[m
[1mnew file mode 100644[m
[1mindex 0000000..9b0985a[m
[1m--- /dev/null[m
[1m+++ b/android/app/build.gradle[m
[36m@@ -0,0 +1,74 @@[m
[32m+[m[32mdef localProperties = new Properties()[m
[32m+[m[32mdef localPropertiesFile = rootProject.file('local.properties')[m
[32m+[m[32mif (localPropertiesFile.exists()) {[m
[32m+[m[32m    localPropertiesFile.withReader('UTF-8') { reader ->[m
[32m+[m[32m        localProperties.load(reader)[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mdef flutterRoot = localProperties.getProperty('flutter.sdk')[m
[32m+[m[32mif (flutterRoot == null) {[m
[32m+[m[32m    throw new FileNotFoundException("Flutter SDK not found. Define location with flutter.sdk in the local.properties file.")[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mdef flutterVersionCode = localProperties.getProperty('flutter.versionCode')[m
[32m+[m[32mif (flutterVersionCode == null) {[m
[32m+[m[32m    flutterVersionCode = '1'[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mdef flutterVersionName = localProperties.getProperty('flutter.versionName')[m
[32m+[m[32mif (flutterVersionName == null) {[m
[32m+[m[32m    flutterVersionName = '1.0'[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mapply plugin: 'com.android.application'[m
[32m+[m[32mapply plugin: 'kotlin-android'[m
[32m+[m[32mapply plugin: 'com.google.gms.google-services'[m
[32m+[m[32mapply from: "$flutterRoot/packages/flutter_tools/gradle/flutter.gradle"[m
[32m+[m
[32m+[m[32mandroid {[m
[32m+[m[32m    compileSdkVersion 31[m
[32m+[m[32m    ndkVersion flutter.ndkVersion[m
[32m+[m
[32m+[m[32m    compileOptions {[m
[32m+[m[32m        sourceCompatibility JavaVersion.VERSION_1_8[m
[32m+[m[32m        targetCompatibility JavaVersion.VERSION_1_8[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    kotlinOptions {[m
[32m+[m[32m        jvmTarget = '1.8'[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    sourceSets {[m
[32m+[m[32m        main.java.srcDirs += 'src/main/kotlin'[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    defaultConfig {[m
[32m+[m[32m        // TODO: Specify your own unique Application ID (https://developer.android.com/studio/build/application-id.html).[m
[32m+[m[32m        applicationId "com.example.fooddeliveryapp"[m
[32m+[m[32m        // You can update the following values to match your application needs.[m
[32m+[m[32m        // For more information, see: https://docs.flutter.dev/deployment/android#reviewing-the-build-configuration.[m
[32m+[m[32m        minSdkVersion 20[m
[32m+[m[32m        targetSdkVersion 31[m
[32m+[m[32m        multiDexEnabled true[m
[32m+[m[32m        versionCode flutterVersionCode.toInteger()[m
[32m+[m[32m        versionName flutterVersionName[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    buildTypes {[m
[32m+[m[32m        release {[m
[32m+[m[32m            // TODO: Add your own signing config for the release build.[m
[32m+[m[32m            // Signing with the debug keys for now, so `flutter run --release` works.[m
[32m+[m[32m            signingConfig signingConfigs.debug[m
[32m+[m[32m        }[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mflutter {[m
[32m+[m[32m    source '../..'[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mdependencies {[m
[32m+[m[32m    implementation "org.jetbrains.kotlin:kotlin-stdlib-jdk7:$kotlin_version"[m
[32m+[m[32m    implementation platform('com.google.firebase:firebase-bom:30.0.1')[m
[32m+[m[32m}[m
[1mdiff --git a/android/app/google-services.json b/android/app/google-services.json[m
[1mnew file mode 100644[m
[1mindex 0000000..c529c5d[m
[1m--- /dev/null[m
[1m+++ b/android/app/google-services.json[m
[36m@@ -0,0 +1,47 @@[m
[32m+[m[32m{[m
[32m+[m[32m  "project_info": {[m
[32m+[m[32m    "project_number": "377355110679",[m
[32m+[m[32m    "project_id": "fooddeliveryapp-1db3c",[m
[32m+[m[32m    "storage_bucket": "fooddeliveryapp-1db3c.appspot.com"[m
[32m+[m[32m  },[m
[32m+[m[32m  "client": [[m
[32m+[m[32m    {[m
[32m+[m[32m      "client_info": {[m
[32m+[m[32m        "mobilesdk_app_id": "1:377355110679:android:38c7d455e1408acc004f52",[m
[32m+[m[32m        "android_client_info": {[m
[32m+[m[32m          "package_name": "com.example.fooddeliveryapp"[m
[32m+[m[32m        }[m
[32m+[m[32m      },[m
[32m+[m[32m      "oauth_client": [[m
[32m+[m[32m        {[m
[32m+[m[32m          "client_id": "377355110679-kp26nabr0l02hlut02086p89dbgubppg.apps.googleusercontent.com",[m
[32m+[m[32m          "client_type": 1,[m
[32m+[m[32m          "android_info": {[m
[32m+[m[32m            "package_name": "com.example.fooddeliveryapp",[m
[32m+[m[32m            "certificate_hash": "419fca47f04ba8a842f4e0138fc551748387bbc1"[m
[32m+[m[32m          }[m
[32m+[m[32m        },[m
[32m+[m[32m        {[m
[32m+[m[32m          "client_id": "377355110679-bc39rc51l4msf7kc6r4t1qhlot1uvfuc.apps.googleusercontent.com",[m
[32m+[m[32m          "client_type": 3[m
[32m+[m[32m        }[m
[32m+[m[32m      ],[m
[32m+[m[32m      "api_key": [[m
[32m+[m[32m        {[m
[32m+[m[32m          "current_key": "AIzaSyD8P-KHMxbhNFu55HsDRw6I8kI7J0ryFGU"[m
[32m+[m[32m        }[m
[32m+[m[32m      ],[m
[32m+[m[32m      "services": {[m
[32m+[m[32m        "appinvite_service": {[m
[32m+[m[32m          "other_platform_oauth_client": [[m
[32m+[m[32m            {[m
[32m+[m[32m              "client_id": "377355110679-bc39rc51l4msf7kc6r4t1qhlot1uvfuc.apps.googleusercontent.com",[m
[32m+[m[32m              "client_type": 3[m
[32m+[m[32m            }[m
[32m+[m[32m          ][m
[32m+[m[32m        }[m
[32m+[m[32m      }[m
[32m+[m[32m    }[m
[32m+[m[32m  ],[m
[32m+[m[32m  "configuration_version": "1"[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/android/app/src/debug/AndroidManifest.xml b/android/app/src/debug/AndroidManifest.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..e97442f[m
[1m--- /dev/null[m
[1m+++ b/android/app/src/debug/AndroidManifest.xml[m
[36m@@ -0,0 +1,8 @@[m
[32m+[m[32m<manifest xmlns:android="http://schemas.android.com/apk/res/android"[m
[32m+[m[32m    package="com.example.fooddeliveryapp">[m
[32m+[m[32m    <!-- The INTERNET permission is required for development. Specifically,[m
[32m+[m[32m         the Flutter tool needs it to communicate with the running application[m
[32m+[m[32m         to allow setting breakpoints, to provide hot reload, etc.[m
[32m+[m[32m    -->[m
[32m+[m[32m    <uses-permission android:name="android.permission.INTERNET"/>[m
[32m+[m[32m</manifest>[m
[1mdiff --git a/android/app/src/main/AndroidManifest.xml b/android/app/src/main/AndroidManifest.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..2c1acce[m
[1m--- /dev/null[m
[1m+++ b/android/app/src/main/AndroidManifest.xml[m
[36m@@ -0,0 +1,43 @@[m
[32m+[m[32m<manifest xmlns:android="http://schemas.android.com/apk/res/android"[m
[32m+[m[32m    xmlns:tools="http://schemas.android.com/tools"[m
[32m+[m[32m    package="com.example.fooddeliveryapp">[m
[32m+[m[32m    <uses-permission android:name="android.permission.ACCESS_NETWORK_STATE" />[m
[32m+[m[32m    <uses-permission[m
[32m+[m[32m        android:name="android.permission.ACCESS_FINE_LOCATION" />[m
[32m+[m[32m    <uses-permission[m
[32m+[m[32m        android:name="android.permission.ACCESS_COARSE_LOCATION" />[m
[32m+[m[32m   <application[m
[32m+[m[32m        android:label="fooddeliveryapp"[m
[32m+[m[32m        android:name="${applicationName}"[m
[32m+[m[32m        android:icon="@mipmap/ic_launcher">[m
[32m+[m[32m       <meta-data android:name="com.google.android.geo.API_KEY"[m
[32m+[m[32m           android:value="AIzaSyDduqF2GqLgUR1xSvLbW_ssUL6ACpCCWdw"/>[m
[32m+[m[32m        <activity[m
[32m+[m[32m            android:name=".MainActivity"[m
[32m+[m[32m            android:exported="true"[m
[32m+[m[32m            android:launchMode="singleTop"[m
[32m+[m[32m            android:theme="@style/LaunchTheme"[m
[32m+[m[32m            android:configChanges="orientation|keyboardHidden|keyboard|screenSize|smallestScreenSize|locale|layoutDirection|fontScale|screenLayout|density|uiMode"[m
[32m+[m[32m            android:hardwareAccelerated="true"[m
[32m+[m[32m            android:windowSoftInputMode="adjustResize"[m
[32m+[m[32m            tools:ignore="Instantiatable">[m
[32m+[m[32m            <!-- Specifies an Android theme to apply to this Activity as soon as[m
[32m+[m[32m                 the Android process has started. This theme is visible to the user[m
[32m+[m[32m                 while the Flutter UI initializes. After that, this theme continues[m
[32m+[m[32m                 to determine the Window background behind the Flutter UI. -->[m
[32m+[m[32m            <meta-data[m
[32m+[m[32m              android:name="io.flutter.embedding.android.NormalTheme"[m
[32m+[m[32m              android:resource="@style/NormalTheme"[m
[32m+[m[32m              />[m
[32m+[m[32m            <intent-filter>[m
[32m+[m[32m                <action android:name="android.intent.action.MAIN"/>[m
[32m+[m[32m                <category android:name="android.intent.category.LAUNCHER"/>[m
[32m+[m[32m            </intent-filter>[m
[32m+[m[32m        </activity>[m
[32m+[m[32m        <!-- Don't delete the meta-data below.[m
[32m+[m[32m             This is used by the Flutter tool to generate GeneratedPluginRegistrant.java -->[m
[32m+[m[32m        <meta-data[m
[32m+[m[32m            android:name="flutterEmbedding"[m
[32m+[m[32m            android:value="2" />[m
[32m+[m[32m    </application>[m
[32m+[m[32m</manifest>[m
[1mdiff --git a/android/app/src/main/kotlin/com/example/fooddeliveryapp/MainActivity.kt b/android/app/src/main/kotlin/com/example/fooddeliveryapp/MainActivity.kt[m
[1mnew file mode 100644[m
[1mindex 0000000..6382c8a[m
[1m--- /dev/null[m
[1m+++ b/android/app/src/main/kotlin/com/example/fooddeliveryapp/MainActivity.kt[m
[36m@@ -0,0 +1,6 @@[m
[32m+[m[32mpackage com.example.fooddeliveryapp[m
[32m+[m
[32m+[m[32mimport io.flutter.embedding.android.FlutterActivity[m
[32m+[m
[32m+[m[32mclass MainActivity: FlutterActivity() {[m
[32m+[m[32m}[m
[1mdiff --git a/android/app/src/main/res/drawable-v21/launch_background.xml b/android/app/src/main/res/drawable-v21/launch_background.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..f74085f[m
[1m--- /dev/null[m
[1m+++ b/android/app/src/main/res/drawable-v21/launch_background.xml[m
[36m@@ -0,0 +1,12 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<!-- Modify this file to customize your launch splash screen -->[m
[32m+[m[32m<layer-list xmlns:android="http://schemas.android.com/apk/res/android">[m
[32m+[m[32m    <item android:drawable="?android:colorBackground" />[m
[32m+[m
[32m+[m[32m    <!-- You can insert your own image assets here -->[m
[32m+[m[32m    <!-- <item>[m
[32m+[m[32m        <bitmap[m
[32m+[m[32m            android:gravity="center"[m
[32m+[m[32m            android:src="@mipmap/launch_image" />[m
[32m+[m[32m    </item> -->[m
[32m+[m[32m</layer-list>[m
[1mdiff --git a/android/app/src/main/res/drawable/launch_background.xml b/android/app/src/main/res/drawable/launch_background.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..304732f[m
[1m--- /dev/null[m
[1m+++ b/android/app/src/main/res/drawable/launch_background.xml[m
[36m@@ -0,0 +1,12 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<!-- Modify this file to customize your launch splash screen -->[m
[32m+[m[32m<layer-list xmlns:android="http://schemas.android.com/apk/res/android">[m
[32m+[m[32m    <item android:drawable="@android:color/white" />[m
[32m+[m
[32m+[m[32m    <!-- You can insert your own image assets here -->[m
[32m+[m[32m    <!-- <item>[m
[32m+[m[32m        <bitmap[m
[32m+[m[32m            android:gravity="center"[m
[32m+[m[32m            android:src="@mipmap/launch_image" />[m
[32m+[m[32m    </item> -->[m
[32m+[m[32m</layer-list>[m
[1mdiff --git a/android/app/src/main/res/mipmap-hdpi/ic_launcher.png b/android/app/src/main/res/mipmap-hdpi/ic_launcher.png[m
[1mnew file mode 100644[m
[1mindex 0000000..b3d9886[m
Binary files /dev/null and b/android/app/src/main/res/mipmap-hdpi/ic_launcher.png differ
[1mdiff --git a/android/app/src/main/res/mipmap-mdpi/ic_launcher.png b/android/app/src/main/res/mipmap-mdpi/ic_launcher.png[m
[1mnew file mode 100644[m
[1mindex 0000000..44b19dc[m
Binary files /dev/null and b/android/app/src/main/res/mipmap-mdpi/ic_launcher.png differ
[1mdiff --git a/android/app/src/main/res/mipmap-xhdpi/ic_launcher.png b/android/app/src/main/res/mipmap-xhdpi/ic_launcher.png[m
[1mnew file mode 100644[m
[1mindex 0000000..7835468[m
Binary files /dev/null and b/android/app/src/main/res/mipmap-xhdpi/ic_launcher.png differ
[1mdiff --git a/android/app/src/main/res/mipmap-xxhdpi/ic_launcher.png b/android/app/src/main/res/mipmap-xxhdpi/ic_launcher.png[m
[1mnew file mode 100644[m
[1mindex 0000000..dfa94c4[m
Binary files /dev/null and b/android/app/src/main/res/mipmap-xxhdpi/ic_launcher.png differ
[1mdiff --git a/android/app/src/main/res/mipmap-xxxhdpi/ic_launcher.png b/android/app/src/main/res/mipmap-xxxhdpi/ic_launcher.png[m
[1mnew file mode 100644[m
[1mindex 0000000..7dfb34a[m
Binary files /dev/null and b/android/app/src/main/res/mipmap-xxxhdpi/ic_launcher.png differ
[1mdiff --git a/android/app/src/main/res/values-night/styles.xml b/android/app/src/main/res/values-night/styles.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..06952be[m
[1m--- /dev/null[m
[1m+++ b/android/app/src/main/res/values-night/styles.xml[m
[36m@@ -0,0 +1,18 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<resources>[m
[32m+[m[32m    <!-- Theme applied to the Android Window while the process is starting when the OS's Dark Mode setting is on -->[m
[32m+[m[32m    <style name="LaunchTheme" parent="@android:style/Theme.Black.NoTitleBar">[m
[32m+[m[32m        <!-- Show a splash screen on the activity. Automatically removed when[m
[32m+[m[32m             the Flutter engine draws its first frame -->[m
[32m+[m[32m        <item name="android:windowBackground">@drawable/launch_background</item>[m
[32m+[m[32m    </style>[m
[32m+[m[32m    <!-- Theme applied to the Android Window as soon as the process has started.[m
[32m+[m[32m         This theme determines the color of the Android Window while your[m
[32m+[m[32m         Flutter UI initializes, as well as behind your Flutter UI while its[m
[32m+[m[32m         running.[m
[32m+[m
[32m+[m[32m         This Theme is only used starting with V2 of Flutter's Android embedding. -->[m
[32m+[m[32m    <style name="NormalTheme" parent="@android:style/Theme.Black.NoTitleBar">[m
[32m+[m[32m        <item name="android:windowBackground">?android:colorBackground</item>[m
[32m+[m[32m    </style>[m
[32m+[m[32m</resources>[m
[1mdiff --git a/android/app/src/main/res/values/styles.xml b/android/app/src/main/res/values/styles.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..cb1ef88[m
[1m--- /dev/null[m
[1m+++ b/android/app/src/main/res/values/styles.xml[m
[36m@@ -0,0 +1,18 @@[m
[32m+[m[32m<?xml version="1.0" encoding="utf-8"?>[m
[32m+[m[32m<resources>[m
[32m+[m[32m    <!-- Theme applied to the Android Window while the process is starting when the OS's Dark Mode setting is off -->[m
[32m+[m[32m    <style name="LaunchTheme" parent="@android:style/Theme.Light.NoTitleBar">[m
[32m+[m[32m        <!-- Show a splash screen on the activity. Automatically removed when[m
[32m+[m[32m             the Flutter engine draws its first frame -->[m
[32m+[m[32m        <item name="android:windowBackground">@drawable/launch_background</item>[m
[32m+[m[32m    </style>[m
[32m+[m[32m    <!-- Theme applied to the Android Window as soon as the process has started.[m
[32m+[m[32m         This theme determines the color of the Android Window while your[m
[32m+[m[32m         Flutter UI initializes, as well as behind your Flutter UI while its[m
[32m+[m[32m         running.[m
[32m+[m
[32m+[m[32m         This Theme is only used starting with V2 of Flutter's Android embedding. -->[m
[32m+[m[32m    <style name="NormalTheme" parent="@android:style/Theme.Light.NoTitleBar">[m
[32m+[m[32m        <item name="android:windowBackground">?android:colorBackground</item>[m
[32m+[m[32m    </style>[m
[32m+[m[32m</resources>[m
[1mdiff --git a/android/app/src/profile/AndroidManifest.xml b/android/app/src/profile/AndroidManifest.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..e97442f[m
[1m--- /dev/null[m
[1m+++ b/android/app/src/profile/AndroidManifest.xml[m
[36m@@ -0,0 +1,8 @@[m
[32m+[m[32m<manifest xmlns:android="http://schemas.android.com/apk/res/android"[m
[32m+[m[32m    package="com.example.fooddeliveryapp">[m
[32m+[m[32m    <!-- The INTERNET permission is required for development. Specifically,[m
[32m+[m[32m         the Flutter tool needs it to communicate with the running application[m
[32m+[m[32m         to allow setting breakpoints, to provide hot reload, etc.[m
[32m+[m[32m    -->[m
[32m+[m[32m    <uses-permission android:name="android.permission.INTERNET"/>[m
[32m+[m[32m</manifest>[m
[1mdiff --git a/android/build.gradle b/android/build.gradle[m
[1mnew file mode 100644[m
[1mindex 0000000..6f5ac97[m
[1m--- /dev/null[m
[1m+++ b/android/build.gradle[m
[36m@@ -0,0 +1,32 @@[m
[32m+[m[32mbuildscript {[m
[32m+[m[32m    ext.kotlin_version = '1.6.10'[m
[32m+[m[32m    repositories {[m
[32m+[m[32m        google()[m
[32m+[m[32m        mavenCentral()[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    dependencies {[m
[32m+[m[32m        classpath 'com.android.tools.build:gradle:7.1.2'[m
[32m+[m[32m        classpath "org.jetbrains.kotlin:kotlin-gradle-plugin:$kotlin_version"[m
[32m+[m[32m        classpath 'com.google.gms:google-services:4.3.10'[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mallprojects {[m
[32m+[m[32m    repositories {[m
[32m+[m[32m        google()[m
[32m+[m[32m        mavenCentral()[m
[32m+[m[32m    }[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mrootProject.buildDir = '../build'[m
[32m+[m[32msubprojects {[m
[32m+[m[32m    project.buildDir = "${rootProject.buildDir}/${project.name}"[m
[32m+[m[32m}[m
[32m+[m[32msubprojects {[m
[32m+[m[32m    project.evaluationDependsOn(':app')[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mtask clean(type: Delete) {[m
[32m+[m[32m    delete rootProject.buildDir[m
[32m+[m[32m}[m
[1mdiff --git a/android/gradle.properties b/android/gradle.properties[m
[1mnew file mode 100644[m
[1mindex 0000000..94adc3a[m
[1m--- /dev/null[m
[1m+++ b/android/gradle.properties[m
[36m@@ -0,0 +1,3 @@[m
[32m+[m[32morg.gradle.jvmargs=-Xmx1536M[m
[32m+[m[32mandroid.useAndroidX=true[m
[32m+[m[32mandroid.enableJetifier=true[m
[1mdiff --git a/android/gradle/wrapper/gradle-wrapper.properties b/android/gradle/wrapper/gradle-wrapper.properties[m
[1mnew file mode 100644[m
[1mindex 0000000..cc5527d[m
[1m--- /dev/null[m
[1m+++ b/android/gradle/wrapper/gradle-wrapper.properties[m
[36m@@ -0,0 +1,6 @@[m
[32m+[m[32m#Fri Jun 23 08:50:38 CEST 2017[m
[32m+[m[32mdistributionBase=GRADLE_USER_HOME[m
[32m+[m[32mdistributionPath=wrapper/dists[m
[32m+[m[32mzipStoreBase=GRADLE_USER_HOME[m
[32m+[m[32mzipStorePath=wrapper/dists[m
[32m+[m[32mdistributionUrl=https\://services.gradle.org/distributions/gradle-7.4-all.zip[m
[1mdiff --git a/android/settings.gradle b/android/settings.gradle[m
[1mnew file mode 100644[m
[1mindex 0000000..44e62bc[m
[1m--- /dev/null[m
[1m+++ b/android/settings.gradle[m
[36m@@ -0,0 +1,11 @@[m
[32m+[m[32minclude ':app'[m
[32m+[m
[32m+[m[32mdef localPropertiesFile = new File(rootProject.projectDir, "local.properties")[m
[32m+[m[32mdef properties = new Properties()[m
[32m+[m
[32m+[m[32massert localPropertiesFile.exists()[m
[32m+[m[32mlocalPropertiesFile.withReader("UTF-8") { reader -> properties.load(reader) }[m
[32m+[m
[32m+[m[32mdef flutterSdkPath = properties.getProperty("flutter.sdk")[m
[32m+[m[32massert flutterSdkPath != null, "flutter.sdk not set in local.properties"[m
[32m+[m[32mapply from: "$flutterSdkPath/packages/flutter_tools/gradle/app_plugin_loader.gradle"[m
[1mdiff --git a/images/background.png b/images/background.png[m
[1mnew file mode 100644[m
[1mindex 0000000..9651e69[m
Binary files /dev/null and b/images/background.png differ
[1mdiff --git a/images/order.png b/images/order.png[m
[1mnew file mode 100644[m
[1mindex 0000000..8446973[m
Binary files /dev/null and b/images/order.png differ
[1mdiff --git a/images/sample_payment_configuration.json b/images/sample_payment_configuration.json[m
[1mnew file mode 100644[m
[1mindex 0000000..33d3396[m
[1m--- /dev/null[m
[1m+++ b/images/sample_payment_configuration.json[m
[36m@@ -0,0 +1,35 @@[m
[32m+[m[32m{[m
[32m+[m[32m    "provider": "google_pay",[m
[32m+[m[32m    "data": {[m
[32m+[m[32m      "environment": "TEST",[m
[32m+[m[32m      "apiVersion": 2,[m
[32m+[m[32m      "apiVersionMinor": 0,[m
[32m+[m[32m      "allowedPaymentMethods": [{[m
[32m+[m[32m        "type": "CARD",[m
[32m+[m[32m        "tokenizationSpecification": {[m
[32m+[m[32m          "type": "PAYMENT_GATEWAY",[m
[32m+[m[32m          "parameters": {[m
[32m+[m[32m            "gateway": "example",[m
[32m+[m[32m            "gatewayMerchantId": "gatewayMerchantId"[m
[32m+[m[32m          }[m
[32m+[m[32m        },[m
[32m+[m[32m        "parameters": {[m
[32m+[m[32m          "allowedCardNetworks": ["VISA", "MASTERCARD"],[m
[32m+[m[32m          "allowedAuthMethods": ["PAN_ONLY", "CRYPTOGRAM_3DS"],[m
[32m+[m[32m          "billingAddressRequired": true,[m
[32m+[m[32m          "billingAddressParameters": {[m
[32m+[m[32m            "format": "FULL",[m
[32m+[m[32m            "phoneNumberRequired": true[m
[32m+[m[32m          }[m
[32m+[m[32m        }[m
[32m+[m[32m      }],[m
[32m+[m[32m      "merchantInfo": {[m
[32m+[m[32m        "merchantId": "01234567890123456789",[m
[32m+[m[32m        "merchantName": "Example Merchant Name"[m
[32m+[m[32m      },[m
[32m+[m[32m      "transactionInfo": {[m
[32m+[m[32m        "countryCode": "US",[m
[32m+[m[32m        "currencyCode": "USD"[m
[32m+[m[32m      }[m
[32m+[m[32m    }[m
[32m+[m[32m  }[m
\ No newline at end of file[m
[1mdiff --git a/images/successfully.gif b/images/successfully.gif[m
[1mnew file mode 100644[m
[1mindex 0000000..99a7cd8[m
Binary files /dev/null and b/images/successfully.gif differ
[1mdiff --git a/ios/.gitignore b/ios/.gitignore[m
[1mnew file mode 100644[m
[1mindex 0000000..7a7f987[m
[1m--- /dev/null[m
[1m+++ b/ios/.gitignore[m
[36m@@ -0,0 +1,34 @@[m
[32m+[m[32m**/dgph[m
[32m+[m[32m*.mode1v3[m
[32m+[m[32m*.mode2v3[m
[32m+[m[32m*.moved-aside[m
[32m+[m[32m*.pbxuser[m
[32m+[m[32m*.perspectivev3[m
[32m+[m[32m**/*sync/[m
[32m+[m[32m.sconsign.dblite[m
[32m+[m[32m.tags*[m
[32m+[m[32m**/.vagrant/[m
[32m+[m[32m**/DerivedData/[m
[32m+[m[32mIcon?[m
[32m+[m[32m**/Pods/[m
[32m+[m[32m**/.symlinks/[m
[32m+[m[32mprofile[m
[32m+[m[32mxcuserdata[m
[32m+[m[32m**/.generated/[m
[32m+[m[32mFlutter/App.framework[m
[32m+[m[32mFlutter/Flutter.framework[m
[32m+[m[32mFlutter/Flutter.podspec[m
[32m+[m[32mFlutter/Generated.xcconfig[m
[32m+[m[32mFlutter/ephemeral/[m
[32m+[m[32mFlutter/app.flx[m
[32m+[m[32mFlutter/app.zip[m
[32m+[m[32mFlutter/flutter_assets/[m
[32m+[m[32mFlutter/flutter_export_environment.sh[m
[32m+[m[32mServiceDefinitions.json[m
[32m+[m[32mRunner/GeneratedPluginRegistrant.*[m
[32m+[m
[32m+[m[32m# Exceptions to above rules.[m
[32m+[m[32m!default.mode1v3[m
[32m+[m[32m!default.mode2v3[m
[32m+[m[32m!default.pbxuser[m
[32m+[m[32m!default.perspectivev3[m
[1mdiff --git a/ios/Flutter/AppFrameworkInfo.plist b/ios/Flutter/AppFrameworkInfo.plist[m
[1mnew file mode 100644[m
[1mindex 0000000..8d4492f[m
[1m--- /dev/null[m
[1m+++ b/ios/Flutter/AppFrameworkInfo.plist[m
[36m@@ -0,0 +1,26 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">[m
[32m+[m[32m<plist version="1.0">[m
[32m+[m[32m<dict>[m
[32m+[m[32m  <key>CFBundleDevelopmentRegion</key>[m
[32m+[m[32m  <string>en</string>[m
[32m+[m[32m  <key>CFBundleExecutable</key>[m
[32m+[m[32m  <string>App</string>[m
[32m+[m[32m  <key>CFBundleIdentifier</key>[m
[32m+[m[32m  <string>io.flutter.flutter.app</string>[m
[32m+[m[32m  <key>CFBundleInfoDictionaryVersion</key>[m
[32m+[m[32m  <string>6.0</string>[m
[32m+[m[32m  <key>CFBundleName</key>[m
[32m+[m[32m  <string>App</string>[m
[32m+[m[32m  <key>CFBundlePackageType</key>[m
[32m+[m[32m  <string>FMWK</string>[m
[32m+[m[32m  <key>CFBundleShortVersionString</key>[m
[32m+[m[32m  <string>1.0</string>[m
[32m+[m[32m  <key>CFBundleSignature</key>[m
[32m+[m[32m  <string>????</string>[m
[32m+[m[32m  <key>CFBundleVersion</key>[m
[32m+[m[32m  <string>1.0</string>[m
[32m+[m[32m  <key>MinimumOSVersion</key>[m
[32m+[m[32m  <string>9.0</string>[m
[32m+[m[32m</dict>[m
[32m+[m[32m</plist>[m
[1mdiff --git a/ios/Flutter/Debug.xcconfig b/ios/Flutter/Debug.xcconfig[m
[1mnew file mode 100644[m
[1mindex 0000000..592ceee[m
[1m--- /dev/null[m
[1m+++ b/ios/Flutter/Debug.xcconfig[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32m#include "Generated.xcconfig"[m
[1mdiff --git a/ios/Flutter/Release.xcconfig b/ios/Flutter/Release.xcconfig[m
[1mnew file mode 100644[m
[1mindex 0000000..592ceee[m
[1m--- /dev/null[m
[1m+++ b/ios/Flutter/Release.xcconfig[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32m#include "Generated.xcconfig"[m
[1mdiff --git a/ios/Runner.xcodeproj/project.pbxproj b/ios/Runner.xcodeproj/project.pbxproj[m
[1mnew file mode 100644[m
[1mindex 0000000..6603c01[m
[1m--- /dev/null[m
[1m+++ b/ios/Runner.xcodeproj/project.pbxproj[m
[36m@@ -0,0 +1,481 @@[m
[32m+[m[32m// !$*UTF8*$![m
[32m+[m[32m{[m
[32m+[m	[32marchiveVersion = 1;[m
[32m+[m	[32mclasses = {[m
[32m+[m	[32m};[m
[32m+[m	[32mobjectVersion = 50;[m
[32m+[m	[32mobjects = {[m
[32m+[m
[32m+[m[32m/* Begin PBXBuildFile section */[m
[32m+[m		[32m1498D2341E8E89220040F4C2 /* GeneratedPluginRegistrant.m in Sources */ = {isa = PBXBuildFile; fileRef = 1498D2331E8E89220040F4C2 /* GeneratedPluginRegistrant.m */; };[m
[32m+[m		[32m3B3967161E833CAA004F5970 /* AppFrameworkInfo.plist in Resources */ = {isa = PBXBuildFile; fileRef = 3B3967151E833CAA004F5970 /* AppFrameworkInfo.plist */; };[m
[32m+[m		[32m74858FAF1ED2DC5600515810 /* AppDelegate.swift in Sources */ = {isa = PBXBuildFile; fileRef = 74858FAE1ED2DC5600515810 /* AppDelegate.swift */; };[m
[32m+[m		[32m97C146FC1CF9000F007C117D /* Main.storyboard in Resources */ = {isa = PBXBuildFile; fileRef = 97C146FA1CF9000F007C117D /* Main.storyboard */; };[m
[32m+[m		[32m97C146FE1CF9000F007C117D /* Assets.xcassets in Resources */ = {isa = PBXBuildFile; fileRef = 97C146FD1CF9000F007C117D /* Assets.xcassets */; };[m
[32m+[m		[32m97C147011CF9000F007C117D /* LaunchScreen.storyboard in Resources */ = {isa = PBXBuildFile; fileRef = 97C146FF1CF9000F007C117D /* LaunchScreen.storyboard */; };[m
[32m+[m[32m/* End PBXBuildFile section */[m
[32m+[m
[32m+[m[32m/* Begin PBXCopyFilesBuildPhase section */[m
[32m+[m		[32m9705A1C41CF9048500538489 /* Embed Frameworks */ = {[m
[32m+[m			[32misa = PBXCopyFilesBuildPhase;[m
[32m+[m			[32mbuildActionMask = 2147483647;[m
[32m+[m			[32mdstPath = "";[m
[32m+[m			[32mdstSubfolderSpec = 10;[m
[32m+[m			[32mfiles = ([m
[32m+[m			[32m);[m
[32m+[m			[32mname = "Embed Frameworks";[m
[32m+[m			[32mrunOnlyForDeploymentPostprocessing = 0;[m
[32m+[m		[32m};[m
[32m+[m[32m/* End PBXCopyFilesBuildPhase section */[m
[32m+[m
[32m+[m[32m/* Begin PBXFileReference section */[m
[32m+[m		[32m1498D2321E8E86230040F4C2 /* GeneratedPluginRegistrant.h */ = {isa = PBXFileReference; lastKnownFileType = sourcecode.c.h; path = GeneratedPluginRegistrant.h; sourceTree = "<group>"; };[m
[32m+[m		[32m1498D2331E8E89220040F4C2 /* GeneratedPluginRegistrant.m */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.objc; path = GeneratedPluginRegistrant.m; sourceTree = "<group>"; };[m
[32m+[m		[32m3B3967151E833CAA004F5970 /* AppFrameworkInfo.plist */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.plist.xml; name = AppFrameworkInfo.plist; path = Flutter/AppFrameworkInfo.plist; sourceTree = "<group>"; };[m
[32m+[m		[32m74858FAD1ED2DC5600515810 /* Runner-Bridging-Header.h */ = {isa = PBXFileReference; lastKnownFileType = sourcecode.c.h; path = "Runner-Bridging-Header.h"; sourceTree = "<group>"; };[m
[32m+[m		[32m74858FAE1ED2DC5600515810 /* AppDelegate.swift */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.swift; path = AppDelegate.swift; sourceTree = "<group>"; };[m
[32m+[m		[32m7AFA3C8E1D35360C0083082E /* Release.xcconfig */ = {isa = PBXFileReference; lastKnownFileType = text.xcconfig; name = Release.xcconfig; path = Flutter/Release.xcconfig; sourceTree = "<group>"; };[m
[32m+[m		[32m9740EEB21CF90195004384FC /* Debug.xcconfig */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.xcconfig; name = Debug.xcconfig; path = Flutter/Debug.xcconfig; sourceTree = "<group>"; };[m
[32m+[m		[32m9740EEB31CF90195004384FC /* Generated.xcconfig */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.xcconfig; name = Generated.xcconfig; path = Flutter/Generated.xcconfig; sourceTree = "<group>"; };[m
[32m+[m		[32m97C146EE1CF9000F007C117D /* Runner.app */ = {isa = PBXFileReference; explicitFileType = wrapper.application; includeInIndex = 0; path = Runner.app; sourceTree = BUILT_PRODUCTS_DIR; };[m
[32m+[m		[32m97C146FB1CF9000F007C117D /* Base */ = {isa = PBXFileReference; lastKnownFileType = file.storyboard; name = Base; path = Base.lproj/Main.storyboard; sourceTree = "<group>"; };[m
[32m+[m		[32m97C146FD1CF9000F007C117D /* Assets.xcassets */ = {isa = PBXFileReference; lastKnownFileType = folder.assetcatalog; path = Assets.xcassets; sourceTree = "<group>"; };[m
[32m+[m		[32m97C147001CF9000F007C117D /* Base */ = {isa = PBXFileReference; lastKnownFileType = file.storyboard; name = Base; path = Base.lproj/LaunchScreen.storyboard; sourceTree = "<group>"; };[m
[32m+[m		[32m97C147021CF9000F007C117D /* Info.plist */ = {isa = PBXFileReference; lastKnownFileType = text.plist.xml; path = Info.plist; sourceTree = "<group>"; };[m
[32m+[m[32m/* End PBXFileReference section */[m
[32m+[m
[32m+[m[32m/* Begin PBXFrameworksBuildPhase section */[m
[32m+[m		[32m97C146EB1CF9000F007C117D /* Frameworks */ = {[m
[32m+[m			[32misa = PBXFrameworksBuildPhase;[m
[32m+[m			[32mbuildActionMask = 2147483647;[m
[32m+[m			[32mfiles = ([m
[32m+[m			[32m);[m
[32m+[m			[32mrunOnlyForDeploymentPostprocessing = 0;[m
[32m+[m		[32m};[m
[32m+[m[32m/* End PBXFrameworksBuildPhase section */[m
[32m+[m
[32m+[m[32m/* Begin PBXGroup section */[m
[32m+[m		[32m9740EEB11CF90186004384FC /* Flutter */ = {[m
[32m+[m			[32misa = PBXGroup;[m
[32m+[m			[32mchildren = ([m
[32m+[m				[32m3B3967151E833CAA004F5970 /* AppFrameworkInfo.plist */,[m
[32m+[m				[32m9740EEB21CF90195004384FC /* Debug.xcconfig */,[m
[32m+[m				[32m7AFA3C8E1D35360C0083082E /* Release.xcconfig */,[m
[32m+[m				[32m9740EEB31CF90195004384FC /* Generated.xcconfig */,[m
[32m+[m			[32m);[m
[32m+[m			[32mname = Flutter;[m
[32m+[m			[32msourceTree = "<group>";[m
[32m+[m		[32m};[m
[32m+[m		[32m97C146E51CF9000F007C117D = {[m
[32m+[m			[32misa = PBXGroup;[m
[32m+[m			[32mchildren = ([m
[32m+[m				[32m9740EEB11CF90186004384FC /* Flutter */,[m
[32m+[m				[32m97C146F01CF9000F007C117D /* Runner */,[m
[32m+[m				[32m97C146EF1CF9000F007C117D /* Products */,[m
[32m+[m			[32m);[m
[32m+[m			[32msourceTree = "<group>";[m
[32m+[m		[32m};[m
[32m+[m		[32m97C146EF1CF9000F007C117D /* Products */ = {[m
[32m+[m			[32misa = PBXGroup;[m
[32m+[m			[32mchildren = ([m
[32m+[m				[32m97C146EE1CF9000F007C117D /* Runner.app */,[m
[32m+[m			[32m);[m
[32m+[m			[32mname = Products;[m
[32m+[m			[32msourceTree = "<group>";[m
[32m+[m		[32m};[m
[32m+[m		[32m97C146F01CF9000F007C117D /* Runner */ = {[m
[32m+[m			[32misa = PBXGroup;[m
[32m+[m			[32mchildren = ([m
[32m+[m				[32m97C146FA1CF9000F007C117D /* Main.storyboard */,[m
[32m+[m				[32m97C146FD1CF9000F007C117D /* Assets.xcassets */,[m
[32m+[m				[32m97C146FF1CF9000F007C117D /* LaunchScreen.storyboard */,[m
[32m+[m				[32m97C147021CF9000F007C117D /* Info.plist */,[m
[32m+[m				[32m1498D2321E8E86230040F4C2 /* GeneratedPluginRegistrant.h */,[m
[32m+[m				[32m1498D2331E8E89220040F4C2 /* GeneratedPluginRegistrant.m */,[m
[32m+[m				[32m74858FAE1ED2DC5600515810 /* AppDelegate.swift */,[m
[32m+[m				[32m74858FAD1ED2DC5600515810 /* Runner-Bridging-Header.h */,[m
[32m+[m			[32m);[m
[32m+[m			[32mpath = Runner;[m
[32m+[m			[32msourceTree = "<group>";[m
[32m+[m		[32m};[m
[32m+[m[32m/* End PBXGroup section */[m
[32m+[m
[32m+[m[32m/* Begin PBXNativeTarget section */[m
[32m+[m		[32m97C146ED1CF9000F007C117D /* Runner */ = {[m
[32m+[m			[32misa = PBXNativeTarget;[m
[32m+[m			[32mbuildConfigurationList = 97C147051CF9000F007C117D /* Build configuration list for PBXNativeTarget "Runner" */;[m
[32m+[m			[32mbuildPhases = ([m
[32m+[m				[32m9740EEB61CF901F6004384FC /* Run Script */,[m
[32m+[m				[32m97C146EA1CF9000F007C117D /* Sources */,[m
[32m+[m				[32m97C146EB1CF9000F007C117D /* Frameworks */,[m
[32m+[m				[32m97C146EC1CF9000F007C117D /* Resources */,[m
[32m+[m				[32m9705A1C41CF9048500538489 /* Embed Frameworks */,[m
[32m+[m				[32m3B06AD1E1E4923F5004D2608 /* Thin Binary */,[m
[32m+[m			[32m);[m
[32m+[m			[32mbuildRules = ([m
[32m+[m			[32m);[m
[32m+[m			[32mdependencies = ([m
[32m+[m			[32m);[m
[32m+[m			[32mname = Runner;[m
[32m+[m			[32mproductName = Runner;[m
[32m+[m			[32mproductReference = 97C146EE1CF9000F007C117D /* Runner.app */;[m
[32m+[m			[32mproductType = "com.apple.product-type.application";[m
[32m+[m		[32m};[m
[32m+[m[32m/* End PBXNativeTarget section */[m
[32m+[m
[32m+[m[32m/* Begin PBXProject section */[m
[32m+[m		[32m97C146E61CF9000F007C117D /* Project object */ = {[m
[32m+[m			[32misa = PBXProject;[m
[32m+[m			[32mattributes = {[m
[32m+[m				[32mLastUpgradeCheck = 1300;[m
[32m+[m				[32mORGANIZATIONNAME = "";[m
[32m+[m				[32mTargetAttributes = {[m
[32m+[m					[32m97C146ED1CF9000F007C117D = {[m
[32m+[m						[32mCreatedOnToolsVersion = 7.3.1;[m
[32m+[m						[32mLastSwiftMigration = 1100;[m
[32m+[m					[32m};[m
[32m+[m				[32m};[m
[32m+[m			[32m};[m
[32m+[m			[32mbuildConfigurationList = 97C146E91CF9000F007C117D /* Build configuration list for PBXProject "Runner" */;[m
[32m+[m			[32mcompatibilityVersion = "Xcode 9.3";[m
[32m+[m			[32mdevelopmentRegion = en;[m
[32m+[m			[32mhasScannedForEncodings = 0;[m
[32m+[m			[32mknownRegions = ([m
[32m+[m				[32men,[m
[32m+[m				[32mBase,[m
[32m+[m			[32m);[m
[32m+[m			[32mmainGroup = 97C146E51CF9000F007C117D;[m
[32m+[m			[32mproductRefGroup = 97C146EF1CF9000F007C117D /* Products */;[m
[32m+[m			[32mprojectDirPath = "";[m
[32m+[m			[32mprojectRoot = "";[m
[32m+[m			[32mtargets = ([m
[32m+[m				[32m97C146ED1CF9000F007C117D /* Runner */,[m
[32m+[m			[32m);[m
[32m+[m		[32m};[m
[32m+[m[32m/* End PBXProject section */[m
[32m+[m
[32m+[m[32m/* Begin PBXResourcesBuildPhase section */[m
[32m+[m		[32m97C146EC1CF9000F007C117D /* Resources */ = {[m
[32m+[m			[32misa = PBXResourcesBuildPhase;[m
[32m+[m			[32mbuildActionMask = 2147483647;[m
[32m+[m			[32mfiles = ([m
[32m+[m				[32m97C147011CF9000F007C117D /* LaunchScreen.storyboard in Resources */,[m
[32m+[m				[32m3B3967161E833CAA004F5970 /* AppFrameworkInfo.plist in Resources */,[m
[32m+[m				[32m97C146FE1CF9000F007C117D /* Assets.xcassets in Resources */,[m
[32m+[m				[32m97C146FC1CF9000F007C117D /* Main.storyboard in Resources */,[m
[32m+[m			[32m);[m
[32m+[m			[32mrunOnlyForDeploymentPostprocessing = 0;[m
[32m+[m		[32m};[m
[32m+[m[32m/* End PBXResourcesBuildPhase section */[m
[32m+[m
[32m+[m[32m/* Begin PBXShellScriptBuildPhase section */[m
[32m+[m		[32m3B06AD1E1E4923F5004D2608 /* Thin Binary */ = {[m
[32m+[m			[32misa = PBXShellScriptBuildPhase;[m
[32m+[m			[32mbuildActionMask = 2147483647;[m
[32m+[m			[32mfiles = ([m
[32m+[m			[32m);[m
[32m+[m			[32minputPaths = ([m
[32m+[m			[32m);[m
[32m+[m			[32mname = "Thin Binary";[m
[32m+[m			[32moutputPaths = ([m
[32m+[m			[32m);[m
[32m+[m			[32mrunOnlyForDeploymentPostprocessing = 0;[m
[32m+[m			[32mshellPath = /bin/sh;[m
[32m+[m			[32mshellScript = "/bin/sh \"$FLUTTER_ROOT/packages/flutter_tools/bin/xcode_backend.sh\" embed_and_thin";[m
[32m+[m		[32m};[m
[32m+[m		[32m9740EEB61CF901F6004384FC /* Run Script */ = {[m
[32m+[m			[32misa = PBXShellScriptBuildPhase;[m
[32m+[m			[32mbuildActionMask = 2147483647;[m
[32m+[m			[32mfiles = ([m
[32m+[m			[32m);[m
[32m+[m			[32minputPaths = ([m
[32m+[m			[32m);[m
[32m+[m			[32mname = "Run Script";[m
[32m+[m			[32moutputPaths = ([m
[32m+[m			[32m);[m
[32m+[m			[32mrunOnlyForDeploymentPostprocessing = 0;[m
[32m+[m			[32mshellPath = /bin/sh;[m
[32m+[m			[32mshellScript = "/bin/sh \"$FLUTTER_ROOT/packages/flutter_tools/bin/xcode_backend.sh\" build";[m
[32m+[m		[32m};[m
[32m+[m[32m/* End PBXShellScriptBuildPhase section */[m
[32m+[m
[32m+[m[32m/* Begin PBXSourcesBuildPhase section */[m
[32m+[m		[32m97C146EA1CF9000F007C117D /* Sources */ = {[m
[32m+[m			[32misa = PBXSourcesBuildPhase;[m
[32m+[m			[32mbuildActionMask = 2147483647;[m
[32m+[m			[32mfiles = ([m
[32m+[m				[32m74858FAF1ED2DC5600515810 /* AppDelegate.swift in Sources */,[m
[32m+[m				[32m1498D2341E8E89220040F4C2 /* GeneratedPluginRegistrant.m in Sources */,[m
[32m+[m			[32m);[m
[32m+[m			[32mrunOnlyForDeploymentPostprocessing = 0;[m
[32m+[m		[32m};[m
[32m+[m[32m/* End PBXSourcesBuildPhase section */[m
[32m+[m
[32m+[m[32m/* Begin PBXVariantGroup section */[m
[32m+[m		[32m97C146FA1CF9000F007C117D /* Main.storyboard */ = {[m
[32m+[m			[32misa = PBXVariantGroup;[m
[32m+[m			[32mchildren = ([m
[32m+[m				[32m97C146FB1CF9000F007C117D /* Base */,[m
[32m+[m			[32m);[m
[32m+[m			[32mname = Main.storyboard;[m
[32m+[m			[32msourceTree = "<group>";[m
[32m+[m		[32m};[m
[32m+[m		[32m97C146FF1CF9000F007C117D /* LaunchScreen.storyboard */ = {[m
[32m+[m			[32misa = PBXVariantGroup;[m
[32m+[m			[32mchildren = ([m
[32m+[m				[32m97C147001CF9000F007C117D /* Base */,[m
[32m+[m			[32m);[m
[32m+[m			[32mname = LaunchScreen.storyboard;[m
[32m+[m			[32msourceTree = "<group>";[m
[32m+[m		[32m};[m
[32m+[m[32m/* End PBXVariantGroup section */[m
[32m+[m
[32m+[m[32m/* Begin XCBuildConfiguration section */[m
[32m+[m		[32m249021D3217E4FDB00AE95B9 /* Profile */ = {[m
[32m+[m			[32misa = XCBuildConfiguration;[m
[32m+[m			[32mbuildSettings = {[m
[32m+[m				[32mALWAYS_SEARCH_USER_PATHS = NO;[m
[32m+[m				[32mCLANG_ANALYZER_NONNULL = YES;[m
[32m+[m				[32mCLANG_CXX_LANGUAGE_STANDARD = "gnu++0x";[m
[32m+[m				[32mCLANG_CXX_LIBRARY = "libc++";[m
[32m+[m				[32mCLANG_ENABLE_MODULES = YES;[m
[32m+[m				[32mCLANG_ENABLE_OBJC_ARC = YES;[m
[32m+[m				[32mCLANG_WARN_BLOCK_CAPTURE_AUTORELEASING = YES;[m
[32m+[m				[32mCLANG_WARN_BOOL_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_COMMA = YES;[m
[32m+[m				[32mCLANG_WARN_CONSTANT_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_DEPRECATED_OBJC_IMPLEMENTATIONS = YES;[m
[32m+[m				[32mCLANG_WARN_DIRECT_OBJC_ISA_USAGE = YES_ERROR;[m
[32m+[m				[32mCLANG_WARN_EMPTY_BODY = YES;[m
[32m+[m				[32mCLANG_WARN_ENUM_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_INFINITE_RECURSION = YES;[m
[32m+[m				[32mCLANG_WARN_INT_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_NON_LITERAL_NULL_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_OBJC_IMPLICIT_RETAIN_SELF = YES;[m
[32m+[m				[32mCLANG_WARN_OBJC_LITERAL_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_OBJC_ROOT_CLASS = YES_ERROR;[m
[32m+[m				[32mCLANG_WARN_RANGE_LOOP_ANALYSIS = YES;[m
[32m+[m				[32mCLANG_WARN_STRICT_PROTOTYPES = YES;[m
[32m+[m				[32mCLANG_WARN_SUSPICIOUS_MOVE = YES;[m
[32m+[m				[32mCLANG_WARN_UNREACHABLE_CODE = YES;[m
[32m+[m				[32mCLANG_WARN__DUPLICATE_METHOD_MATCH = YES;[m
[32m+[m				[32m"CODE_SIGN_IDENTITY[sdk=iphoneos*]" = "iPhone Developer";[m
[32m+[m				[32mCOPY_PHASE_STRIP = NO;[m
[32m+[m				[32mDEBUG_INFORMATION_FORMAT = "dwarf-with-dsym";[m
[32m+[m				[32mENABLE_NS_ASSERTIONS = NO;[m
[32m+[m				[32mENABLE_STRICT_OBJC_MSGSEND = YES;[m
[32m+[m				[32mGCC_C_LANGUAGE_STANDARD = gnu99;[m
[32m+[m				[32mGCC_NO_COMMON_BLOCKS = YES;[m
[32m+[m				[32mGCC_WARN_64_TO_32_BIT_CONVERSION = YES;[m
[32m+[m				[32mGCC_WARN_ABOUT_RETURN_TYPE = YES_ERROR;[m
[32m+[m				[32mGCC_WARN_UNDECLARED_SELECTOR = YES;[m
[32m+[m				[32mGCC_WARN_UNINITIALIZED_AUTOS = YES_AGGRESSIVE;[m
[32m+[m				[32mGCC_WARN_UNUSED_FUNCTION = YES;[m
[32m+[m				[32mGCC_WARN_UNUSED_VARIABLE = YES;[m
[32m+[m				[32mIPHONEOS_DEPLOYMENT_TARGET = 9.0;[m
[32m+[m				[32mMTL_ENABLE_DEBUG_INFO = NO;[m
[32m+[m				[32mSDKROOT = iphoneos;[m
[32m+[m				[32mSUPPORTED_PLATFORMS = iphoneos;[m
[32m+[m				[32mTARGETED_DEVICE_FAMILY = "1,2";[m
[32m+[m				[32mVALIDATE_PRODUCT = YES;[m
[32m+[m			[32m};[m
[32m+[m			[32mname = Profile;[m
[32m+[m		[32m};[m
[32m+[m		[32m249021D4217E4FDB00AE95B9 /* Profile */ = {[m
[32m+[m			[32misa = XCBuildConfiguration;[m
[32m+[m			[32mbaseConfigurationReference = 7AFA3C8E1D35360C0083082E /* Release.xcconfig */;[m
[32m+[m			[32mbuildSettings = {[m
[32m+[m				[32mASSETCATALOG_COMPILER_APPICON_NAME = AppIcon;[m
[32m+[m				[32mCLANG_ENABLE_MODULES = YES;[m
[32m+[m				[32mCURRENT_PROJECT_VERSION = "$(FLUTTER_BUILD_NUMBER)";[m
[32m+[m				[32mENABLE_BITCODE = NO;[m
[32m+[m				[32mINFOPLIST_FILE = Runner/Info.plist;[m
[32m+[m				[32mLD_RUNPATH_SEARCH_PATHS = ([m
[32m+[m					[32m"$(inherited)",[m
[32m+[m					[32m"@executable_path/Frameworks",[m
[32m+[m				[32m);[m
[32m+[m				[32mPRODUCT_BUNDLE_IDENTIFIER = com.example.fooddeliveryapp;[m
[32m+[m				[32mPRODUCT_NAME = "$(TARGET_NAME)";[m
[32m+[m				[32mSWIFT_OBJC_BRIDGING_HEADER = "Runner/Runner-Bridging-Header.h";[m
[32m+[m				[32mSWIFT_VERSION = 5.0;[m
[32m+[m				[32mVERSIONING_SYSTEM = "apple-generic";[m
[32m+[m			[32m};[m
[32m+[m			[32mname = Profile;[m
[32m+[m		[32m};[m
[32m+[m		[32m97C147031CF9000F007C117D /* Debug */ = {[m
[32m+[m			[32misa = XCBuildConfiguration;[m
[32m+[m			[32mbuildSettings = {[m
[32m+[m				[32mALWAYS_SEARCH_USER_PATHS = NO;[m
[32m+[m				[32mCLANG_ANALYZER_NONNULL = YES;[m
[32m+[m				[32mCLANG_CXX_LANGUAGE_STANDARD = "gnu++0x";[m
[32m+[m				[32mCLANG_CXX_LIBRARY = "libc++";[m
[32m+[m				[32mCLANG_ENABLE_MODULES = YES;[m
[32m+[m				[32mCLANG_ENABLE_OBJC_ARC = YES;[m
[32m+[m				[32mCLANG_WARN_BLOCK_CAPTURE_AUTORELEASING = YES;[m
[32m+[m				[32mCLANG_WARN_BOOL_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_COMMA = YES;[m
[32m+[m				[32mCLANG_WARN_CONSTANT_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_DEPRECATED_OBJC_IMPLEMENTATIONS = YES;[m
[32m+[m				[32mCLANG_WARN_DIRECT_OBJC_ISA_USAGE = YES_ERROR;[m
[32m+[m				[32mCLANG_WARN_EMPTY_BODY = YES;[m
[32m+[m				[32mCLANG_WARN_ENUM_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_INFINITE_RECURSION = YES;[m
[32m+[m				[32mCLANG_WARN_INT_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_NON_LITERAL_NULL_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_OBJC_IMPLICIT_RETAIN_SELF = YES;[m
[32m+[m				[32mCLANG_WARN_OBJC_LITERAL_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_OBJC_ROOT_CLASS = YES_ERROR;[m
[32m+[m				[32mCLANG_WARN_RANGE_LOOP_ANALYSIS = YES;[m
[32m+[m				[32mCLANG_WARN_STRICT_PROTOTYPES = YES;[m
[32m+[m				[32mCLANG_WARN_SUSPICIOUS_MOVE = YES;[m
[32m+[m				[32mCLANG_WARN_UNREACHABLE_CODE = YES;[m
[32m+[m				[32mCLANG_WARN__DUPLICATE_METHOD_MATCH = YES;[m
[32m+[m				[32m"CODE_SIGN_IDENTITY[sdk=iphoneos*]" = "iPhone Developer";[m
[32m+[m				[32mCOPY_PHASE_STRIP = NO;[m
[32m+[m				[32mDEBUG_INFORMATION_FORMAT = dwarf;[m
[32m+[m				[32mENABLE_STRICT_OBJC_MSGSEND = YES;[m
[32m+[m				[32mENABLE_TESTABILITY = YES;[m
[32m+[m				[32mGCC_C_LANGUAGE_STANDARD = gnu99;[m
[32m+[m				[32mGCC_DYNAMIC_NO_PIC = NO;[m
[32m+[m				[32mGCC_NO_COMMON_BLOCKS = YES;[m
[32m+[m				[32mGCC_OPTIMIZATION_LEVEL = 0;[m
[32m+[m				[32mGCC_PREPROCESSOR_DEFINITIONS = ([m
[32m+[m					[32m"DEBUG=1",[m
[32m+[m					[32m"$(inherited)",[m
[32m+[m				[32m);[m
[32m+[m				[32mGCC_WARN_64_TO_32_BIT_CONVERSION = YES;[m
[32m+[m				[32mGCC_WARN_ABOUT_RETURN_TYPE = YES_ERROR;[m
[32m+[m				[32mGCC_WARN_UNDECLARED_SELECTOR = YES;[m
[32m+[m				[32mGCC_WARN_UNINITIALIZED_AUTOS = YES_AGGRESSIVE;[m
[32m+[m				[32mGCC_WARN_UNUSED_FUNCTION = YES;[m
[32m+[m				[32mGCC_WARN_UNUSED_VARIABLE = YES;[m
[32m+[m				[32mIPHONEOS_DEPLOYMENT_TARGET = 9.0;[m
[32m+[m				[32mMTL_ENABLE_DEBUG_INFO = YES;[m
[32m+[m				[32mONLY_ACTIVE_ARCH = YES;[m
[32m+[m				[32mSDKROOT = iphoneos;[m
[32m+[m				[32mTARGETED_DEVICE_FAMILY = "1,2";[m
[32m+[m			[32m};[m
[32m+[m			[32mname = Debug;[m
[32m+[m		[32m};[m
[32m+[m		[32m97C147041CF9000F007C117D /* Release */ = {[m
[32m+[m			[32misa = XCBuildConfiguration;[m
[32m+[m			[32mbuildSettings = {[m
[32m+[m				[32mALWAYS_SEARCH_USER_PATHS = NO;[m
[32m+[m				[32mCLANG_ANALYZER_NONNULL = YES;[m
[32m+[m				[32mCLANG_CXX_LANGUAGE_STANDARD = "gnu++0x";[m
[32m+[m				[32mCLANG_CXX_LIBRARY = "libc++";[m
[32m+[m				[32mCLANG_ENABLE_MODULES = YES;[m
[32m+[m				[32mCLANG_ENABLE_OBJC_ARC = YES;[m
[32m+[m				[32mCLANG_WARN_BLOCK_CAPTURE_AUTORELEASING = YES;[m
[32m+[m				[32mCLANG_WARN_BOOL_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_COMMA = YES;[m
[32m+[m				[32mCLANG_WARN_CONSTANT_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_DEPRECATED_OBJC_IMPLEMENTATIONS = YES;[m
[32m+[m				[32mCLANG_WARN_DIRECT_OBJC_ISA_USAGE = YES_ERROR;[m
[32m+[m				[32mCLANG_WARN_EMPTY_BODY = YES;[m
[32m+[m				[32mCLANG_WARN_ENUM_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_INFINITE_RECURSION = YES;[m
[32m+[m				[32mCLANG_WARN_INT_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_NON_LITERAL_NULL_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_OBJC_IMPLICIT_RETAIN_SELF = YES;[m
[32m+[m				[32mCLANG_WARN_OBJC_LITERAL_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_OBJC_ROOT_CLASS = YES_ERROR;[m
[32m+[m				[32mCLANG_WARN_RANGE_LOOP_ANALYSIS = YES;[m
[32m+[m				[32mCLANG_WARN_STRICT_PROTOTYPES = YES;[m
[32m+[m				[32mCLANG_WARN_SUSPICIOUS_MOVE = YES;[m
[32m+[m				[32mCLANG_WARN_UNREACHABLE_CODE = YES;[m
[32m+[m				[32mCLANG_WARN__DUPLICATE_METHOD_MATCH = YES;[m
[32m+[m				[32m"CODE_SIGN_IDENTITY[sdk=iphoneos*]" = "iPhone Developer";[m
[32m+[m				[32mCOPY_PHASE_STRIP = NO;[m
[32m+[m				[32mDEBUG_INFORMATION_FORMAT = "dwarf-with-dsym";[m
[32m+[m				[32mENABLE_NS_ASSERTIONS = NO;[m
[32m+[m				[32mENABLE_STRICT_OBJC_MSGSEND = YES;[m
[32m+[m				[32mGCC_C_LANGUAGE_STANDARD = gnu99;[m
[32m+[m				[32mGCC_NO_COMMON_BLOCKS = YES;[m
[32m+[m				[32mGCC_WARN_64_TO_32_BIT_CONVERSION = YES;[m
[32m+[m				[32mGCC_WARN_ABOUT_RETURN_TYPE = YES_ERROR;[m
[32m+[m				[32mGCC_WARN_UNDECLARED_SELECTOR = YES;[m
[32m+[m				[32mGCC_WARN_UNINITIALIZED_AUTOS = YES_AGGRESSIVE;[m
[32m+[m				[32mGCC_WARN_UNUSED_FUNCTION = YES;[m
[32m+[m				[32mGCC_WARN_UNUSED_VARIABLE = YES;[m
[32m+[m				[32mIPHONEOS_DEPLOYMENT_TARGET = 9.0;[m
[32m+[m				[32mMTL_ENABLE_DEBUG_INFO = NO;[m
[32m+[m				[32mSDKROOT = iphoneos;[m
[32m+[m				[32mSUPPORTED_PLATFORMS = iphoneos;[m
[32m+[m				[32mSWIFT_COMPILATION_MODE = wholemodule;[m
[32m+[m				[32mSWIFT_OPTIMIZATION_LEVEL = "-O";[m
[32m+[m				[32mTARGETED_DEVICE_FAMILY = "1,2";[m
[32m+[m				[32mVALIDATE_PRODUCT = YES;[m
[32m+[m			[32m};[m
[32m+[m			[32mname = Release;[m
[32m+[m		[32m};[m
[32m+[m		[32m97C147061CF9000F007C117D /* Debug */ = {[m
[32m+[m			[32misa = XCBuildConfiguration;[m
[32m+[m			[32mbaseConfigurationReference = 9740EEB21CF90195004384FC /* Debug.xcconfig */;[m
[32m+[m			[32mbuildSettings = {[m
[32m+[m				[32mASSETCATALOG_COMPILER_APPICON_NAME = AppIcon;[m
[32m+[m				[32mCLANG_ENABLE_MODULES = YES;[m
[32m+[m				[32mCURRENT_PROJECT_VERSION = "$(FLUTTER_BUILD_NUMBER)";[m
[32m+[m				[32mENABLE_BITCODE = NO;[m
[32m+[m				[32mINFOPLIST_FILE = Runner/Info.plist;[m
[32m+[m				[32mLD_RUNPATH_SEARCH_PATHS = ([m
[32m+[m					[32m"$(inherited)",[m
[32m+[m					[32m"@executable_path/Frameworks",[m
[32m+[m				[32m);[m
[32m+[m				[32mPRODUCT_BUNDLE_IDENTIFIER = com.example.fooddeliveryapp;[m
[32m+[m				[32mPRODUCT_NAME = "$(TARGET_NAME)";[m
[32m+[m				[32mSWIFT_OBJC_BRIDGING_HEADER = "Runner/Runner-Bridging-Header.h";[m
[32m+[m				[32mSWIFT_OPTIMIZATION_LEVEL = "-Onone";[m
[32m+[m				[32mSWIFT_VERSION = 5.0;[m
[32m+[m				[32mVERSIONING_SYSTEM = "apple-generic";[m
[32m+[m			[32m};[m
[32m+[m			[32mname = Debug;[m
[32m+[m		[32m};[m
[32m+[m		[32m97C147071CF9000F007C117D /* Release */ = {[m
[32m+[m			[32misa = XCBuildConfiguration;[m
[32m+[m			[32mbaseConfigurationReference = 7AFA3C8E1D35360C0083082E /* Release.xcconfig */;[m
[32m+[m			[32mbuildSettings = {[m
[32m+[m				[32mASSETCATALOG_COMPILER_APPICON_NAME = AppIcon;[m
[32m+[m				[32mCLANG_ENABLE_MODULES = YES;[m
[32m+[m				[32mCURRENT_PROJECT_VERSION = "$(FLUTTER_BUILD_NUMBER)";[m
[32m+[m				[32mENABLE_BITCODE = NO;[m
[32m+[m				[32mINFOPLIST_FILE = Runner/Info.plist;[m
[32m+[m				[32mLD_RUNPATH_SEARCH_PATHS = ([m
[32m+[m					[32m"$(inherited)",[m
[32m+[m					[32m"@executable_path/Frameworks",[m
[32m+[m				[32m);[m
[32m+[m				[32mPRODUCT_BUNDLE_IDENTIFIER = com.example.fooddeliveryapp;[m
[32m+[m				[32mPRODUCT_NAME = "$(TARGET_NAME)";[m
[32m+[m				[32mSWIFT_OBJC_BRIDGING_HEADER = "Runner/Runner-Bridging-Header.h";[m
[32m+[m				[32mSWIFT_VERSION = 5.0;[m
[32m+[m				[32mVERSIONING_SYSTEM = "apple-generic";[m
[32m+[m			[32m};[m
[32m+[m			[32mname = Release;[m
[32m+[m		[32m};[m
[32m+[m[32m/* End XCBuildConfiguration section */[m
[32m+[m
[32m+[m[32m/* Begin XCConfigurationList section */[m
[32m+[m		[32m97C146E91CF9000F007C117D /* Build configuration list for PBXProject "Runner" */ = {[m
[32m+[m			[32misa = XCConfigurationList;[m
[32m+[m			[32mbuildConfigurations = ([m
[32m+[m				[32m97C147031CF9000F007C117D /* Debug */,[m
[32m+[m				[32m97C147041CF9000F007C117D /* Release */,[m
[32m+[m				[32m249021D3217E4FDB00AE95B9 /* Profile */,[m
[32m+[m			[32m);[m
[32m+[m			[32mdefaultConfigurationIsVisible = 0;[m
[32m+[m			[32mdefaultConfigurationName = Release;[m
[32m+[m		[32m};[m
[32m+[m		[32m97C147051CF9000F007C117D /* Build configuration list for PBXNativeTarget "Runner" */ = {[m
[32m+[m			[32misa = XCConfigurationList;[m
[32m+[m			[32mbuildConfigurations = ([m
[32m+[m				[32m97C147061CF9000F007C117D /* Debug */,[m
[32m+[m				[32m97C147071CF9000F007C117D /* Release */,[m
[32m+[m				[32m249021D4217E4FDB00AE95B9 /* Profile */,[m
[32m+[m			[32m);[m
[32m+[m			[32mdefaultConfigurationIsVisible = 0;[m
[32m+[m			[32mdefaultConfigurationName = Release;[m
[32m+[m		[32m};[m
[32m+[m[32m/* End XCConfigurationList section */[m
[32m+[m	[32m};[m
[32m+[m	[32mrootObject = 97C146E61CF9000F007C117D /* Project object */;[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/ios/Runner.xcodeproj/project.xcworkspace/contents.xcworkspacedata b/ios/Runner.xcodeproj/project.xcworkspace/contents.xcworkspacedata[m
[1mnew file mode 100644[m
[1mindex 0000000..919434a[m
[1m--- /dev/null[m
[1m+++ b/ios/Runner.xcodeproj/project.xcworkspace/contents.xcworkspacedata[m
[36m@@ -0,0 +1,7 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<Workspace[m
[32m+[m[32m   version = "1.0">[m
[32m+[m[32m   <FileRef[m
[32m+[m[32m      location = "self:">[m
[32m+[m[32m   </FileRef>[m
[32m+[m[32m</Workspace>[m
[1mdiff --git a/ios/Runner.xcodeproj/project.xcworkspace/xcshareddata/IDEWorkspaceChecks.plist b/ios/Runner.xcodeproj/project.xcworkspace/xcshareddata/IDEWorkspaceChecks.plist[m
[1mnew file mode 100644[m
[1mindex 0000000..18d9810[m
[1m--- /dev/null[m
[1m+++ b/ios/Runner.xcodeproj/project.xcworkspace/xcshareddata/IDEWorkspaceChecks.plist[m
[36m@@ -0,0 +1,8 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">[m
[32m+[m[32m<plist version="1.0">[m
[32m+[m[32m<dict>[m
[32m+[m	[32m<key>IDEDidComputeMac32BitWarning</key>[m
[32m+[m	[32m<true/>[m
[32m+[m[32m</dict>[m
[32m+[m[32m</plist>[m
[1mdiff --git a/ios/Runner.xcodeproj/project.xcworkspace/xcshareddata/WorkspaceSettings.xcsettings b/ios/Runner.xcodeproj/project.xcworkspace/xcshareddata/WorkspaceSettings.xcsettings[m
[1mnew file mode 100644[m
[1mindex 0000000..f9b0d7c[m
[1m--- /dev/null[m
[1m+++ b/ios/Runner.xcodeproj/project.xcworkspace/xcshareddata/WorkspaceSettings.xcsettings[m
[36m@@ -0,0 +1,8 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">[m
[32m+[m[32m<plist version="1.0">[m
[32m+[m[32m<dict>[m
[32m+[m	[32m<key>PreviewsEnabled</key>[m
[32m+[m	[32m<false/>[m
[32m+[m[32m</dict>[m
[32m+[m[32m</plist>[m
[1mdiff --git a/ios/Runner.xcodeproj/xcshareddata/xcschemes/Runner.xcscheme b/ios/Runner.xcodeproj/xcshareddata/xcschemes/Runner.xcscheme[m
[1mnew file mode 100644[m
[1mindex 0000000..c87d15a[m
[1m--- /dev/null[m
[1m+++ b/ios/Runner.xcodeproj/xcshareddata/xcschemes/Runner.xcscheme[m
[36m@@ -0,0 +1,87 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<Scheme[m
[32m+[m[32m   LastUpgradeVersion = "1300"[m
[32m+[m[32m   version = "1.3">[m
[32m+[m[32m   <BuildAction[m
[32m+[m[32m      parallelizeBuildables = "YES"[m
[32m+[m[32m      buildImplicitDependencies = "YES">[m
[32m+[m[32m      <BuildActionEntries>[m
[32m+[m[32m         <BuildActionEntry[m
[32m+[m[32m            buildForTesting = "YES"[m
[32m+[m[32m            buildForRunning = "YES"[m
[32m+[m[32m            buildForProfiling = "YES"[m
[32m+[m[32m            buildForArchiving = "YES"[m
[32m+[m[32m            buildForAnalyzing = "YES">[m
[32m+[m[32m            <BuildableReference[m
[32m+[m[32m               BuildableIdentifier = "primary"[m
[32m+[m[32m               BlueprintIdentifier = "97C146ED1CF9000F007C117D"[m
[32m+[m[32m               BuildableName = "Runner.app"[m
[32m+[m[32m               BlueprintName = "Runner"[m
[32m+[m[32m               ReferencedContainer = "container:Runner.xcodeproj">[m
[32m+[m[32m            </BuildableReference>[m
[32m+[m[32m         </BuildActionEntry>[m
[32m+[m[32m      </BuildActionEntries>[m
[32m+[m[32m   </BuildAction>[m
[32m+[m[32m   <TestAction[m
[32m+[m[32m      buildConfiguration = "Debug"[m
[32m+[m[32m      selectedDebuggerIdentifier = "Xcode.DebuggerFoundation.Debugger.LLDB"[m
[32m+[m[32m      selectedLauncherIdentifier = "Xcode.DebuggerFoundation.Launcher.LLDB"[m
[32m+[m[32m      shouldUseLaunchSchemeArgsEnv = "YES">[m
[32m+[m[32m      <MacroExpansion>[m
[32m+[m[32m         <BuildableReference[m
[32m+[m[32m            BuildableIdentifier = "primary"[m
[32m+[m[32m            BlueprintIdentifier = "97C146ED1CF9000F007C117D"[m
[32m+[m[32m            BuildableName = "Runner.app"[m
[32m+[m[32m            BlueprintName = "Runner"[m
[32m+[m[32m            ReferencedContainer = "container:Runner.xcodeproj">[m
[32m+[m[32m         </BuildableReference>[m
[32m+[m[32m      </MacroExpansion>[m
[32m+[m[32m      <Testables>[m
[32m+[m[32m      </Testables>[m
[32m+[m[32m   </TestAction>[m
[32m+[m[32m   <LaunchAction[m
[32m+[m[32m      buildConfiguration = "Debug"[m
[32m+[m[32m      selectedDebuggerIdentifier = "Xcode.DebuggerFoundation.Debugger.LLDB"[m
[32m+[m[32m      selectedLauncherIdentifier = "Xcode.DebuggerFoundation.Launcher.LLDB"[m
[32m+[m[32m      launchStyle = "0"[m
[32m+[m[32m      useCustomWorkingDirectory = "NO"[m
[32m+[m[32m      ignoresPersistentStateOnLaunch = "NO"[m
[32m+[m[32m      debugDocumentVersioning = "YES"[m
[32m+[m[32m      debugServiceExtension = "internal"[m
[32m+[m[32m      allowLocationSimulation = "YES">[m
[32m+[m[32m      <BuildableProductRunnable[m
[32m+[m[32m         runnableDebuggingMode = "0">[m
[32m+[m[32m         <BuildableReference[m
[32m+[m[32m            BuildableIdentifier = "primary"[m
[32m+[m[32m            BlueprintIdentifier = "97C146ED1CF9000F007C117D"[m
[32m+[m[32m            BuildableName = "Runner.app"[m
[32m+[m[32m            BlueprintName = "Runner"[m
[32m+[m[32m            ReferencedContainer = "container:Runner.xcodeproj">[m
[32m+[m[32m         </BuildableReference>[m
[32m+[m[32m      </BuildableProductRunnable>[m
[32m+[m[32m   </LaunchAction>[m
[32m+[m[32m   <ProfileAction[m
[32m+[m[32m      buildConfiguration = "Profile"[m
[32m+[m[32m      shouldUseLaunchSchemeArgsEnv = "YES"[m
[32m+[m[32m      savedToolIdentifier = ""[m
[32m+[m[32m      useCustomWorkingDirectory = "NO"[m
[32m+[m[32m      debugDocumentVersioning = "YES">[m
[32m+[m[32m      <BuildableProductRunnable[m
[32m+[m[32m         runnableDebuggingMode = "0">[m
[32m+[m[32m         <BuildableReference[m
[32m+[m[32m            BuildableIdentifier = "primary"[m
[32m+[m[32m            BlueprintIdentifier = "97C146ED1CF9000F007C117D"[m
[32m+[m[32m            BuildableName = "Runner.app"[m
[32m+[m[32m            BlueprintName = "Runner"[m
[32m+[m[32m            ReferencedContainer = "container:Runner.xcodeproj">[m
[32m+[m[32m         </BuildableReference>[m
[32m+[m[32m      </BuildableProductRunnable>[m
[32m+[m[32m   </ProfileAction>[m
[32m+[m[32m   <AnalyzeAction[m
[32m+[m[32m      buildConfiguration = "Debug">[m
[32m+[m[32m   </AnalyzeAction>[m
[32m+[m[32m   <ArchiveAction[m
[32m+[m[32m      buildConfiguration = "Release"[m
[32m+[m[32m      revealArchiveInOrganizer = "YES">[m
[32m+[m[32m   </ArchiveAction>[m
[32m+[m[32m</Scheme>[m
[1mdiff --git a/ios/Runner.xcworkspace/contents.xcworkspacedata b/ios/Runner.xcworkspace/contents.xcworkspacedata[m
[1mnew file mode 100644[m
[1mindex 0000000..1d526a1[m
[1m--- /dev/null[m
[1m+++ b/ios/Runner.xcworkspace/contents.xcworkspacedata[m
[36m@@ -0,0 +1,7 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<Workspace[m
[32m+[m[32m   version = "1.0">[m
[32m+[m[32m   <FileRef[m
[32m+[m[32m      location = "group:Runner.xcodeproj">[m
[32m+[m[32m   </FileRef>[m
[32m+[m[32m</Workspace>[m
[1mdiff --git a/ios/Runner.xcworkspace/xcshareddata/IDEWorkspaceChecks.plist b/ios/Runner.xcworkspace/xcshareddata/IDEWorkspaceChecks.plist[m
[1mnew file mode 100644[m
[1mindex 0000000..18d9810[m
[1m--- /dev/null[m
[1m+++ b/ios/Runner.xcworkspace/xcshareddata/IDEWorkspaceChecks.plist[m
[36m@@ -0,0 +1,8 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">[m
[32m+[m[32m<plist version="1.0">[m
[32m+[m[32m<dict>[m
[32m+[m	[32m<key>IDEDidComputeMac32BitWarning</key>[m
[32m+[m	[32m<true/>[m
[32m+[m[32m</dict>[m
[32m+[m[32m</plist>[m
[1mdiff --git a/ios/Runner.xcworkspace/xcshareddata/WorkspaceSettings.xcsettings b/ios/Runner.xcworkspace/xcshareddata/WorkspaceSettings.xcsettings[m
[1mnew file mode 100644[m
[1mindex 0000000..f9b0d7c[m
[1m--- /dev/null[m
[1m+++ b/ios/Runner.xcworkspace/xcshareddata/WorkspaceSettings.xcsettings[m
[36m@@ -0,0 +1,8 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">[m
[32m+[m[32m<plist version="1.0">[m
[32m+[m[32m<dict>[m
[32m+[m	[32m<key>PreviewsEnabled</key>[m
[32m+[m	[32m<false/>[m
[32m+[m[32m</dict>[m
[32m+[m[32m</plist>[m
[1mdiff --git a/ios/Runner/AppDelegate.swift b/ios/Runner/AppDelegate.swift[m
[1mnew file mode 100644[m
[1mindex 0000000..70693e4[m
[1m--- /dev/null[m
[1m+++ b/ios/Runner/AppDelegate.swift[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32mimport UIKit[m
[32m+[m[32mimport Flutter[m
[32m+[m
[32m+[m[32m@UIApplicationMain[m
[32m+[m[32m@objc class AppDelegate: FlutterAppDelegate {[m
[32m+[m[32m  override func application([m
[32m+[m[32m    _ application: UIApplication,[m
[32m+[m[32m    didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?[m
[32m+[m[32m  ) -> Bool {[m
[32m+[m[32m    GeneratedPluginRegistrant.register(with: self)[m
[32m+[m[32m    return super.application(application, didFinishLaunchingWithOptions: launchOptions)[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/ios/Runner/Assets.xcassets/AppIcon.appiconset/Contents.json b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Contents.json[m
[1mnew file mode 100644[m
[1mindex 0000000..d36b1fa[m
[1m--- /dev/null[m
[1m+++ b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Contents.json[m
[36m@@ -0,0 +1,122 @@[m
[32m+[m[32m{[m
[32m+[m[32m  "images" : [[m
[32m+[m[32m    {[m
[32m+[m[32m      "size" : "20x20",[m
[32m+[m[32m      "idiom" : "iphone",[m
[32m+[m[32m      "filename" : "Icon-App-20x20@2x.png",[m
[32m+[m[32m      "scale" : "2x"[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "size" : "20x20",[m
[32m+[m[32m      "idiom" : "iphone",[m
[32m+[m[32m      "filename" : "Icon-App-20x20@3x.png",[m
[32m+[m[32m      "scale" : "3x"[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "size" : "29x29",[m
[32m+[m[32m      "idiom" : "iphone",[m
[32m+[m[32m      "filename" : "Icon-App-29x29@1x.png",[m
[32m+[m[32m      "scale" : "1x"[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "size" : "29x29",[m
[32m+[m[32m      "idiom" : "iphone",[m
[32m+[m[32m      "filename" : "Icon-App-29x29@2x.png",[m
[32m+[m[32m      "scale" : "2x"[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "size" : "29x29",[m
[32m+[m[32m      "idiom" : "iphone",[m
[32m+[m[32m      "filename" : "Icon-App-29x29@3x.png",[m
[32m+[m[32m      "scale" : "3x"[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "size" : "40x40",[m
[32m+[m[32m      "idiom" : "iphone",[m
[32m+[m[32m      "filename" : "Icon-App-40x40@2x.png",[m
[32m+[m[32m      "scale" : "2x"[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "size" : "40x40",[m
[32m+[m[32m      "idiom" : "iphone",[m
[32m+[m[32m      "filename" : "Icon-App-40x40@3x.png",[m
[32m+[m[32m      "scale" : "3x"[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "size" : "60x60",[m
[32m+[m[32m      "idiom" : "iphone",[m
[32m+[m[32m      "filename" : "Icon-App-60x60@2x.png",[m
[32m+[m[32m      "scale" : "2x"[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "size" : "60x60",[m
[32m+[m[32m      "idiom" : "iphone",[m
[32m+[m[32m      "filename" : "Icon-App-60x60@3x.png",[m
[32m+[m[32m      "scale" : "3x"[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "size" : "20x20",[m
[32m+[m[32m      "idiom" : "ipad",[m
[32m+[m[32m      "filename" : "Icon-App-20x20@1x.png",[m
[32m+[m[32m      "scale" : "1x"[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "size" : "20x20",[m
[32m+[m[32m      "idiom" : "ipad",[m
[32m+[m[32m      "filename" : "Icon-App-20x20@2x.png",[m
[32m+[m[32m      "scale" : "2x"[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "size" : "29x29",[m
[32m+[m[32m      "idiom" : "ipad",[m
[32m+[m[32m      "filename" : "Icon-App-29x29@1x.png",[m
[32m+[m[32m      "scale" : "1x"[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "size" : "29x29",[m
[32m+[m[32m      "idiom" : "ipad",[m
[32m+[m[32m      "filename" : "Icon-App-29x29@2x.png",[m
[32m+[m[32m      "scale" : "2x"[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "size" : "40x40",[m
[32m+[m[32m      "idiom" : "ipad",[m
[32m+[m[32m      "filename" : "Icon-App-40x40@1x.png",[m
[32m+[m[32m      "scale" : "1x"[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "size" : "40x40",[m
[32m+[m[32m      "idiom" : "ipad",[m
[32m+[m[32m      "filename" : "Icon-App-40x40@2x.png",[m
[32m+[m[32m      "scale" : "2x"[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "size" : "76x76",[m
[32m+[m[32m      "idiom" : "ipad",[m
[32m+[m[32m      "filename" : "Icon-App-76x76@1x.png",[m
[32m+[m[32m      "scale" : "1x"[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "size" : "76x76",[m
[32m+[m[32m      "idiom" : "ipad",[m
[32m+[m[32m      "filename" : "Icon-App-76x76@2x.png",[m
[32m+[m[32m      "scale" : "2x"[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "size" : "83.5x83.5",[m
[32m+[m[32m      "idiom" : "ipad",[m
[32m+[m[32m      "filename" : "Icon-App-83.5x83.5@2x.png",[m
[32m+[m[32m      "scale" : "2x"[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "size" : "1024x1024",[m
[32m+[m[32m      "idiom" : "ios-marketing",[m
[32m+[m[32m      "filename" : "Icon-App-1024x1024@1x.png",[m
[32m+[m[32m      "scale" : "1x"[m
[32m+[m[32m    }[m
[32m+[m[32m  ],[m
[32m+[m[32m  "info" : {[m
[32m+[m[32m    "version" : 1,[m
[32m+[m[32m    "author" : "xcode"[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-1024x1024@1x.png b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-1024x1024@1x.png[m
[1mnew file mode 100644[m
[1mindex 0000000..861b113[m
Binary files /dev/null and b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-1024x1024@1x.png differ
[1mdiff --git a/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-20x20@1x.png b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-20x20@1x.png[m
[1mnew file mode 100644[m
[1mindex 0000000..4603eb7[m
Binary files /dev/null and b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-20x20@1x.png differ
[1mdiff --git a/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-20x20@2x.png b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-20x20@2x.png[m
[1mnew file mode 100644[m
[1mindex 0000000..8788eb9[m
Binary files /dev/null and b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-20x20@2x.png differ
[1mdiff --git a/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-20x20@3x.png b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-20x20@3x.png[m
[1mnew file mode 100644[m
[1mindex 0000000..5aaf79c[m
Binary files /dev/null and b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-20x20@3x.png differ
[1mdiff --git a/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-29x29@1x.png b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-29x29@1x.png[m
[1mnew file mode 100644[m
[1mindex 0000000..76d191d[m
Binary files /dev/null and b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-29x29@1x.png differ
[1mdiff --git a/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-29x29@2x.png b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-29x29@2x.png[m
[1mnew file mode 100644[m
[1mindex 0000000..d8480f2[m
Binary files /dev/null and b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-29x29@2x.png differ
[1mdiff --git a/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-29x29@3x.png b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-29x29@3x.png[m
[1mnew file mode 100644[m
[1mindex 0000000..2d4d3ce[m
Binary files /dev/null and b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-29x29@3x.png differ
[1mdiff --git a/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-40x40@1x.png b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-40x40@1x.png[m
[1mnew file mode 100644[m
[1mindex 0000000..8788eb9[m
Binary files /dev/null and b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-40x40@1x.png differ
[1mdiff --git a/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-40x40@2x.png b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-40x40@2x.png[m
[1mnew file mode 100644[m
[1mindex 0000000..6b7d856[m
Binary files /dev/null and b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-40x40@2x.png differ
[1mdiff --git a/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-40x40@3x.png b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-40x40@3x.png[m
[1mnew file mode 100644[m
[1mindex 0000000..387aeed[m
Binary files /dev/null and b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-40x40@3x.png differ
[1mdiff --git a/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-60x60@2x.png b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-60x60@2x.png[m
[1mnew file mode 100644[m
[1mindex 0000000..387aeed[m
Binary files /dev/null and b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-60x60@2x.png differ
[1mdiff --git a/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-60x60@3x.png b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-60x60@3x.png[m
[1mnew file mode 100644[m
[1mindex 0000000..9cac105[m
Binary files /dev/null and b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-60x60@3x.png differ
[1mdiff --git a/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-76x76@1x.png b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-76x76@1x.png[m
[1mnew file mode 100644[m
[1mindex 0000000..c87cb37[m
Binary files /dev/null and b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-76x76@1x.png differ
[1mdiff --git a/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-76x76@2x.png b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-76x76@2x.png[m
[1mnew file mode 100644[m
[1mindex 0000000..56eee2d[m
Binary files /dev/null and b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-76x76@2x.png differ
[1mdiff --git a/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-83.5x83.5@2x.png b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-83.5x83.5@2x.png[m
[1mnew file mode 100644[m
[1mindex 0000000..d3e7cbf[m
Binary files /dev/null and b/ios/Runner/Assets.xcassets/AppIcon.appiconset/Icon-App-83.5x83.5@2x.png differ
[1mdiff --git a/ios/Runner/Assets.xcassets/LaunchImage.imageset/Contents.json b/ios/Runner/Assets.xcassets/LaunchImage.imageset/Contents.json[m
[1mnew file mode 100644[m
[1mindex 0000000..0bedcf2[m
[1m--- /dev/null[m
[1m+++ b/ios/Runner/Assets.xcassets/LaunchImage.imageset/Contents.json[m
[36m@@ -0,0 +1,23 @@[m
[32m+[m[32m{[m
[32m+[m[32m  "images" : [[m
[32m+[m[32m    {[m
[32m+[m[32m      "idiom" : "universal",[m
[32m+[m[32m      "filename" : "LaunchImage.png",[m
[32m+[m[32m      "scale" : "1x"[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "idiom" : "universal",[m
[32m+[m[32m      "filename" : "LaunchImage@2x.png",[m
[32m+[m[32m      "scale" : "2x"[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "idiom" : "universal",[m
[32m+[m[32m      "filename" : "LaunchImage@3x.png",[m
[32m+[m[32m      "scale" : "3x"[m
[32m+[m[32m    }[m
[32m+[m[32m  ],[m
[32m+[m[32m  "info" : {[m
[32m+[m[32m    "version" : 1,[m
[32m+[m[32m    "author" : "xcode"[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/ios/Runner/Assets.xcassets/LaunchImage.imageset/LaunchImage.png b/ios/Runner/Assets.xcassets/LaunchImage.imageset/LaunchImage.png[m
[1mnew file mode 100644[m
[1mindex 0000000..9da19ea[m
Binary files /dev/null and b/ios/Runner/Assets.xcassets/LaunchImage.imageset/LaunchImage.png differ
[1mdiff --git a/ios/Runner/Assets.xcassets/LaunchImage.imageset/LaunchImage@2x.png b/ios/Runner/Assets.xcassets/LaunchImage.imageset/LaunchImage@2x.png[m
[1mnew file mode 100644[m
[1mindex 0000000..9da19ea[m
Binary files /dev/null and b/ios/Runner/Assets.xcassets/LaunchImage.imageset/LaunchImage@2x.png differ
[1mdiff --git a/ios/Runner/Assets.xcassets/LaunchImage.imageset/LaunchImage@3x.png b/ios/Runner/Assets.xcassets/LaunchImage.imageset/LaunchImage@3x.png[m
[1mnew file mode 100644[m
[1mindex 0000000..9da19ea[m
Binary files /dev/null and b/ios/Runner/Assets.xcassets/LaunchImage.imageset/LaunchImage@3x.png differ
[1mdiff --git a/ios/Runner/Assets.xcassets/LaunchImage.imageset/README.md b/ios/Runner/Assets.xcassets/LaunchImage.imageset/README.md[m
[1mnew file mode 100644[m
[1mindex 0000000..89c2725[m
[1m--- /dev/null[m
[1m+++ b/ios/Runner/Assets.xcassets/LaunchImage.imageset/README.md[m
[36m@@ -0,0 +1,5 @@[m
[32m+[m[32m# Launch Screen Assets[m
[32m+[m
[32m+[m[32mYou can customize the launch screen with your own desired assets by replacing the image files in this directory.[m
[32m+[m
[32m+[m[32mYou can also do it by opening your Flutter project's Xcode project with `open ios/Runner.xcworkspace`, selecting `Runner/Assets.xcassets` in the Project Navigator and dropping in the desired images.[m
\ No newline at end of file[m
[1mdiff --git a/ios/Runner/Base.lproj/LaunchScreen.storyboard b/ios/Runner/Base.lproj/LaunchScreen.storyboard[m
[1mnew file mode 100644[m
[1mindex 0000000..f2e259c[m
[1m--- /dev/null[m
[1m+++ b/ios/Runner/Base.lproj/LaunchScreen.storyboard[m
[36m@@ -0,0 +1,37 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8" standalone="no"?>[m
[32m+[m[32m<document type="com.apple.InterfaceBuilder3.CocoaTouch.Storyboard.XIB" version="3.0" toolsVersion="12121" systemVersion="16G29" targetRuntime="iOS.CocoaTouch" propertyAccessControl="none" useAutolayout="YES" launchScreen="YES" colorMatched="YES" initialViewController="01J-lp-oVM">[m
[32m+[m[32m    <dependencies>[m
[32m+[m[32m        <deployment identifier="iOS"/>[m
[32m+[m[32m        <plugIn identifier="com.apple.InterfaceBuilder.IBCocoaTouchPlugin" version="12089"/>[m
[32m+[m[32m    </dependencies>[m
[32m+[m[32m    <scenes>[m
[32m+[m[32m        <!--View Controller-->[m
[32m+[m[32m        <scene sceneID="EHf-IW-A2E">[m
[32m+[m[32m            <objects>[m
[32m+[m[32m                <viewController id="01J-lp-oVM" sceneMemberID="viewController">[m
[32m+[m[32m                    <layoutGuides>[m
[32m+[m[32m                        <viewControllerLayoutGuide type="top" id="Ydg-fD-yQy"/>[m
[32m+[m[32m                        <viewControllerLayoutGuide type="bottom" id="xbc-2k-c8Z"/>[m
[32m+[m[32m                    </layoutGuides>[m
[32m+[m[32m                    <view key="view" contentMode="scaleToFill" id="Ze5-6b-2t3">[m
[32m+[m[32m                        <autoresizingMask key="autoresizingMask" widthSizable="YES" heightSizable="YES"/>[m
[32m+[m[32m                        <subviews>[m
[32m+[m[32m                            <imageView opaque="NO" clipsSubviews="YES" multipleTouchEnabled="YES" contentMode="center" image="LaunchImage" translatesAutoresizingMaskIntoConstraints="NO" id="YRO-k0-Ey4">[m
[32m+[m[32m                            </imageView>[m
[32m+[m[32m                        </subviews>[m
[32m+[m[32m                        <color key="backgroundColor" red="1" green="1" blue="1" alpha="1" colorSpace="custom" customColorSpace="sRGB"/>[m
[32m+[m[32m                        <constraints>[m
[32m+[m[32m                            <constraint firstItem="YRO-k0-Ey4" firstAttribute="centerX" secondItem="Ze5-6b-2t3" secondAttribute="centerX" id="1a2-6s-vTC"/>[m
[32m+[m[32m                            <constraint firstItem="YRO-k0-Ey4" firstAttribute="centerY" secondItem="Ze5-6b-2t3" secondAttribute="centerY" id="4X2-HB-R7a"/>[m
[32m+[m[32m                        </constraints>[m
[32m+[m[32m                    </view>[m
[32m+[m[32m                </viewController>[m
[32m+[m[32m                <placeholder placeholderIdentifier="IBFirstResponder" id="iYj-Kq-Ea1" userLabel="First Responder" sceneMemberID="firstResponder"/>[m
[32m+[m[32m            </objects>[m
[32m+[m[32m            <point key="canvasLocation" x="53" y="375"/>[m
[32m+[m[32m        </scene>[m
[32m+[m[32m    </scenes>[m
[32m+[m[32m    <resources>[m
[32m+[m[32m        <image name="LaunchImage" width="168" height="185"/>[m
[32m+[m[32m    </resources>[m
[32m+[m[32m</document>[m
[1mdiff --git a/ios/Runner/Base.lproj/Main.storyboard b/ios/Runner/Base.lproj/Main.storyboard[m
[1mnew file mode 100644[m
[1mindex 0000000..f3c2851[m
[1m--- /dev/null[m
[1m+++ b/ios/Runner/Base.lproj/Main.storyboard[m
[36m@@ -0,0 +1,26 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8" standalone="no"?>[m
[32m+[m[32m<document type="com.apple.InterfaceBuilder3.CocoaTouch.Storyboard.XIB" version="3.0" toolsVersion="10117" systemVersion="15F34" targetRuntime="iOS.CocoaTouch" propertyAccessControl="none" useAutolayout="YES" useTraitCollections="YES" initialViewController="BYZ-38-t0r">[m
[32m+[m[32m    <dependencies>[m
[32m+[m[32m        <deployment identifier="iOS"/>[m
[32m+[m[32m        <plugIn identifier="com.apple.InterfaceBuilder.IBCocoaTouchPlugin" version="10085"/>[m
[32m+[m[32m    </dependencies>[m
[32m+[m[32m    <scenes>[m
[32m+[m[32m        <!--Flutter View Controller-->[m
[32m+[m[32m        <scene sceneID="tne-QT-ifu">[m
[32m+[m[32m            <objects>[m
[32m+[m[32m                <viewController id="BYZ-38-t0r" customClass="FlutterViewController" sceneMemberID="viewController">[m
[32m+[m[32m                    <layoutGuides>[m
[32m+[m[32m                        <viewControllerLayoutGuide type="top" id="y3c-jy-aDJ"/>[m
[32m+[m[32m                        <viewControllerLayoutGuide type="bottom" id="wfy-db-euE"/>[m
[32m+[m[32m                    </layoutGuides>[m
[32m+[m[32m                    <view key="view" contentMode="scaleToFill" id="8bC-Xf-vdC">[m
[32m+[m[32m                        <rect key="frame" x="0.0" y="0.0" width="600" height="600"/>[m
[32m+[m[32m                        <autoresizingMask key="autoresizingMask" widthSizable="YES" heightSizable="YES"/>[m
[32m+[m[32m                        <color key="backgroundColor" white="1" alpha="1" colorSpace="custom" customColorSpace="calibratedWhite"/>[m
[32m+[m[32m                    </view>[m
[32m+[m[32m                </viewController>[m
[32m+[m[32m                <placeholder placeholderIdentifier="IBFirstResponder" id="dkx-z0-nzr" sceneMemberID="firstResponder"/>[m
[32m+[m[32m            </objects>[m
[32m+[m[32m        </scene>[m
[32m+[m[32m    </scenes>[m
[32m+[m[32m</document>[m
[1mdiff --git a/ios/Runner/Info.plist b/ios/Runner/Info.plist[m
[1mnew file mode 100644[m
[1mindex 0000000..1d69f9f[m
[1m--- /dev/null[m
[1m+++ b/ios/Runner/Info.plist[m
[36m@@ -0,0 +1,49 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">[m
[32m+[m[32m<plist version="1.0">[m
[32m+[m[32m<dict>[m
[32m+[m	[32m<key>CFBundleDevelopmentRegion</key>[m
[32m+[m	[32m<string>$(DEVELOPMENT_LANGUAGE)</string>[m
[32m+[m	[32m<key>CFBundleDisplayName</key>[m
[32m+[m	[32m<string>Fooddeliveryapp</string>[m
[32m+[m	[32m<key>CFBundleExecutable</key>[m
[32m+[m	[32m<string>$(EXECUTABLE_NAME)</string>[m
[32m+[m	[32m<key>CFBundleIdentifier</key>[m
[32m+[m	[32m<string>$(PRODUCT_BUNDLE_IDENTIFIER)</string>[m
[32m+[m	[32m<key>CFBundleInfoDictionaryVersion</key>[m
[32m+[m	[32m<string>6.0</string>[m
[32m+[m	[32m<key>CFBundleName</key>[m
[32m+[m	[32m<string>fooddeliveryapp</string>[m
[32m+[m	[32m<key>CFBundlePackageType</key>[m
[32m+[m	[32m<string>APPL</string>[m
[32m+[m	[32m<key>CFBundleShortVersionString</key>[m
[32m+[m	[32m<string>$(FLUTTER_BUILD_NAME)</string>[m
[32m+[m	[32m<key>CFBundleSignature</key>[m
[32m+[m	[32m<string>????</string>[m
[32m+[m	[32m<key>CFBundleVersion</key>[m
[32m+[m	[32m<string>$(FLUTTER_BUILD_NUMBER)</string>[m
[32m+[m	[32m<key>LSRequiresIPhoneOS</key>[m
[32m+[m	[32m<true/>[m
[32m+[m	[32m<key>UILaunchStoryboardName</key>[m
[32m+[m	[32m<string>LaunchScreen</string>[m
[32m+[m	[32m<key>UIMainStoryboardFile</key>[m
[32m+[m	[32m<string>Main</string>[m
[32m+[m	[32m<key>UISupportedInterfaceOrientations</key>[m
[32m+[m	[32m<array>[m
[32m+[m		[32m<string>UIInterfaceOrientationPortrait</string>[m
[32m+[m		[32m<string>UIInterfaceOrientationLandscapeLeft</string>[m
[32m+[m		[32m<string>UIInterfaceOrientationLandscapeRight</string>[m
[32m+[m	[32m</array>[m
[32m+[m	[32m<key>UISupportedInterfaceOrientations~ipad</key>[m
[32m+[m	[32m<array>[m
[32m+[m		[32m<string>UIInterfaceOrientationPortrait</string>[m
[32m+[m		[32m<string>UIInterfaceOrientationPortraitUpsideDown</string>[m
[32m+[m		[32m<string>UIInterfaceOrientationLandscapeLeft</string>[m
[32m+[m		[32m<string>UIInterfaceOrientationLandscapeRight</string>[m
[32m+[m	[32m</array>[m
[32m+[m	[32m<key>UIViewControllerBasedStatusBarAppearance</key>[m
[32m+[m	[32m<false/>[m
[32m+[m	[32m<key>CADisableMinimumFrameDurationOnPhone</key>[m
[32m+[m	[32m<true/>[m
[32m+[m[32m</dict>[m
[32m+[m[32m</plist>[m
[1mdiff --git a/ios/Runner/Runner-Bridging-Header.h b/ios/Runner/Runner-Bridging-Header.h[m
[1mnew file mode 100644[m
[1mindex 0000000..308a2a5[m
[1m--- /dev/null[m
[1m+++ b/ios/Runner/Runner-Bridging-Header.h[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32m#import "GeneratedPluginRegistrant.h"[m
[1mdiff --git a/lib/auth/signin.dart b/lib/auth/signin.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..2bc2681[m
[1m--- /dev/null[m
[1m+++ b/lib/auth/signin.dart[m
[36m@@ -0,0 +1,117 @@[m
[32m+[m[32mimport 'package:firebase_auth/firebase_auth.dart';[m
[32m+[m[32mimport 'package:flutter/material.dart';[m
[32m+[m[32mimport 'package:flutter_signin_button/button_list.dart';[m
[32m+[m[32mimport 'package:flutter_signin_button/button_view.dart';[m
[32m+[m[32mimport 'package:fooddeliveryapp/providers/user_provider.dart';[m
[32m+[m[32mimport 'package:google_sign_in/google_sign_in.dart';[m
[32m+[m[32mimport 'package:provider/provider.dart';[m
[32m+[m
[32m+[m[32mimport '../screens/home/homes_creen.dart';[m
[32m+[m[32mclass Signin extends StatefulWidget {[m
[32m+[m[32m  const Signin({Key key}) : super(key: key);[m
[32m+[m
[32m+[m[32m  @override[m
[32m+[m[32m  State<Signin> createState() => _SigninState();[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mclass _SigninState extends State<Signin> {[m
[32m+[m
[32m+[m[32m  UserProvider userProvider;[m
[32m+[m
[32m+[m[32m  Future <void> _googleSignUp() async {[m
[32m+[m[32m    try {[m
[32m+[m[32m      final GoogleSignIn _googleSignIn = GoogleSignIn([m
[32m+[m[32m        scopes: ['email'],[m
[32m+[m[32m      );[m
[32m+[m[32m      final FirebaseAuth _auth = FirebaseAuth.instance;[m
[32m+[m
[32m+[m[32m      final GoogleSignInAccount googleUser = await _googleSignIn.signIn();[m
[32m+[m[32m      final GoogleSignInAuthentication googleAuth =[m
[32m+[m[32m      await googleUser.authentication;[m
[32m+[m
[32m+[m[32m      final AuthCredential credential = GoogleAuthProvider.credential([m
[32m+[m[32m        accessToken: googleAuth.accessToken,[m
[32m+[m[32m        idToken: googleAuth.idToken,[m
[32m+[m[32m      );[m
[32m+[m
[32m+[m[32m      final User user = (await _auth.signInWithCredential(credential)).user;[m
[32m+[m[32m      // print("signed in " + user.displayName);[m
[32m+[m[32m      userProvider.addUserData([m
[32m+[m[32m        currentUser: user,[m
[32m+[m[32m        userEmail: user.email,[m
[32m+[m[32m        userImage: user.photoURL,[m
[32m+[m[32m        userName: user.displayName,[m
[32m+[m[32m      );[m
[32m+[m[32m      return user;[m
[32m+[m[32m    } catch (e) {[m
[32m+[m[32m      print(e.message);[m
[32m+[m[32m    }[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32m  @override[m
[32m+[m[32m  Widget build(BuildContext context) {[m
[32m+[m[32m   userProvider=Provider.of<UserProvider>(context);[m
[32m+[m[32m    return Scaffold([m
[32m+[m[32m      body: Container([m
[32m+[m[32m        width: double.infinity,[m
[32m+[m[32m          height: double.infinity,[m
[32m+[m[32m          decoration: BoxDecoration([m
[32m+[m[32m            image: DecorationImage([m
[32m+[m[32m              fit: BoxFit.cover,[m
[32m+[m[32m              image: AssetImage("images/background.png")[m
[32m+[m[32m            ),[m
[32m+[m[32m        ),[m
[32m+[m[32m        child: Column([m
[32m+[m[32m          mainAxisAlignment: MainAxisAlignment.center,[m
[32m+[m[32m          children: [[m
[32m+[m[32m            Container([m
[32m+[m[32m              height: 400,[m
[32m+[m[32m              width: double.infinity,[m
[32m+[m[32m              child: Column([m
[32m+[m[32m                mainAxisAlignment: MainAxisAlignment.spaceEvenly,[m
[32m+[m[32m                children: [[m
[32m+[m[32m                  Text("Sign in to continue",style: TextStyle(fontSize: 15,fontWeight: FontWeight.bold),),[m
[32m+[m[32m                  Text("Vegi",style: TextStyle(fontSize: 50,color: Colors.white,[m
[32m+[m[32m                    shadows: [[m
[32m+[m[32m                      BoxShadow([m
[32m+[m[32m                        blurRadius: 5,[m
[32m+[m[32m                        color: Colors.green.shade900,[m
[32m+[m[32m                        offset: Offset(3,3),[m
[32m+[m[32m                      )[m
[32m+[m[32m                    ][m
[32m+[m[32m                  )[m
[32m+[m[32m                  ),[m
[32m+[m[32m                  Column([m
[32m+[m[32m                    children: [[m
[32m+[m[32m                      SignInButton([m
[32m+[m[32m                        Buttons.Google,[m
[32m+[m[32m                        text: "Sign in  with Apple",[m
[32m+[m[32m                        onPressed: () {},[m
[32m+[m[32m                      ),[m
[32m+[m[32m                      SignInButton([m
[32m+[m[32m                        Buttons.Google,[m
[32m+[m[32m                        text: "Sign in with Google",[m
[32m+[m[32m                        onPressed: () async{[m
[32m+[m[32m                          await _googleSignUp().then((value) =>[m
[32m+[m[32m                               Navigator.of(context).pushReplacement(MaterialPageRoute(builder: (context)=>HomeScreen())));[m
[32m+[m[32m                        },[m
[32m+[m[32m                      ),[m
[32m+[m[32m                    ],[m
[32m+[m[32m                  ),[m
[32m+[m[32m                  Column([m
[32m+[m[32m                    children: [[m
[32m+[m[32m                      Text("By Signing in you are agreeing to our",style: TextStyle(color: Colors.grey[800]),),[m
[32m+[m[32m                      Text("Terms and Privacy Policy",style: TextStyle(color: Colors.grey[800])),[m
[32m+[m[32m                    ],[m
[32m+[m[32m                  ),[m
[32m+[m[32m                ],[m
[32m+[m[32m              ),[m
[32m+[m[32m            ),[m
[32m+[m[32m          ],[m
[32m+[m[32m        ),[m
[32m+[m[32m      ),[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/lib/check_out/Paymentsummary/Payment_Summary.dart b/lib/check_out/Paymentsummary/Payment_Summary.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..4107bb9[m
[1m--- /dev/null[m
[1m+++ b/lib/check_out/Paymentsummary/Payment_Summary.dart[m
[36m@@ -0,0 +1,202 @@[m
[32m+[m[32mimport 'package:flutter/material.dart';[m
[32m+[m[32mimport 'package:provider/provider.dart';[m
[32m+[m[32mimport '../../config/colors.dart';[m
[32m+[m[32mimport '../../models/delivery_address_model.dart';[m
[32m+[m[32mimport '../../providers/Reviewcart_provider.dart';[m
[32m+[m[32mimport '../deliverydetails/single delivery_item.dart';[m
[32m+[m[32mimport 'google_pay.dart';[m
[32m+[m[32mimport 'order_item.dart';[m
[32m+[m
[32m+[m[32mclass PaymentSummary extends StatefulWidget {[m
[32m+[m[32m  final DeliveryAddressModel deliverAddressList;[m
[32m+[m[32m  PaymentSummary({this.deliverAddressList, DeliveryAddressModel deliveryAddressList});[m
[32m+[m
[32m+[m[32m  @override[m
[32m+[m[32m  _PaymentSummaryState createState() => _PaymentSummaryState();[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32menum AddressTypes {[m
[32m+[m[32m  Home,[m
[32m+[m[32m  OnlinePayment,[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mclass _PaymentSummaryState extends State<PaymentSummary> {[m
[32m+[m[32m  var myType = AddressTypes.Home;[m
[32m+[m
[32m+[m[32m  @override[m
[32m+[m[32m  Widget build(BuildContext context) {[m
[32m+[m[32m    ReviewCartProvider reviewCartProvider = Provider.of(context);[m
[32m+[m[32m    reviewCartProvider.getReviewCartData();[m
[32m+[m
[32m+[m[32m    double discount = 30;[m
[32m+[m[32m    double discountValue;[m
[32m+[m[32m    double shippingCharge = 3.7;[m
[32m+[m[32m    double total;[m
[32m+[m[32m    double totalPrice = reviewCartProvider.getTotalPrice();[m
[32m+[m[32m    if (totalPrice > 300) {[m
[32m+[m[32m      discountValue = (totalPrice * discount) / 100;[m
[32m+[m[32m      total = totalPrice - discountValue;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    return Scaffold([m
[32m+[m[32m      appBar: AppBar([m
[32m+[m[32m        iconTheme: IconThemeData(color: textColor),[m
[32m+[m[32m        title: Text([m
[32m+[m[32m          "Payment Summary",[m
[32m+[m[32m          style: TextStyle(fontSize: 18,color: textColor),[m
[32m+[m[32m        ),[m
[32m+[m[32m        backgroundColor:  Color(0xffd6b738),[m
[32m+[m[32m      ),[m
[32m+[m[32m      bottomNavigationBar: ListTile([m
[32m+[m[32m        title: Text("Total Amount"),[m
[32m+[m[32m        subtitle: Text([m
[32m+[m[32m          "\$${total ?? totalPrice}",[m
[32m+[m[32m          style: TextStyle([m
[32m+[m[32m            color: Colors.green[900],[m
[32m+[m[32m            fontWeight: FontWeight.bold,[m
[32m+[m[32m            fontSize: 17,[m
[32m+[m[32m          ),[m
[32m+[m[32m        ),[m
[32m+[m[32m        trailing: Container([m
[32m+[m[32m          width: 160,[m
[32m+[m[32m          child: MaterialButton([m
[32m+[m[32m            onPressed: () {[m
[32m+[m[32m               myType == AddressTypes.OnlinePayment[m
[32m+[m[32m                   ? Navigator.of(context).push([m
[32m+[m[32m                       MaterialPageRoute([m
[32m+[m[32m                         builder: (context) => MyGooglePay([m
[32m+[m[32m                           total: total,[m
[32m+[m[32m                         ),[m
[32m+[m[32m                       ),[m
[32m+[m[32m                    )[m
[32m+[m[32m                  : Container();[m
[32m+[m
[32m+[m[32m            },[m
[32m+[m[32m            child: Text([m
[32m+[m[32m              "Place Order",[m
[32m+[m[32m              style: TextStyle([m
[32m+[m[32m                color: textColor,[m
[32m+[m[32m              ),[m
[32m+[m[32m            ),[m
[32m+[m[32m            color: primaryColor,[m
[32m+[m[32m            shape: RoundedRectangleBorder([m
[32m+[m[32m              borderRadius: BorderRadius.circular(30),[m
[32m+[m[32m            ),[m
[32m+[m[32m          ),[m
[32m+[m[32m        ),[m
[32m+[m[32m      ),[m
[32m+[m[32m      body: Padding([m
[32m+[m[32m        padding: const EdgeInsets.only(top: 10),[m
[32m+[m[32m        child: ListView.builder([m
[32m+[m[32m          itemCount: 1,[m
[32m+[m[32m          itemBuilder: (context, index) {[m
[32m+[m[32m            return Column([m
[32m+[m[32m              children: [[m
[32m+[m[32m                SingleDeliveryItem([m
[32m+[m[32m                  address:[m
[32m+[m[32m                  "area, ${widget.deliverAddressList.area}, street, ${widget.deliverAddressList.street}, colony ${widget.deliverAddressList.colony}, zipcode  ${widget.deliverAddressList.zipCode}",[m
[32m+[m[32m                  title:[m
[32m+[m[32m                  "${widget.deliverAddressList.firstName} ${widget.deliverAddressList.lastName}",[m
[32m+[m[32m                  number: widget.deliverAddressList.mobileNo,[m
[32m+[m[32m                  addressType: widget.deliverAddressList.addressType ==[m
[32m+[m[32m                      "AddressTypes.Home"[m
[32m+[m[32m                      ? "Home"[m
[32m+[m[32m                      : widget.deliverAddressList.addressType ==[m
[32m+[m[32m                      "AddressTypes.Other"[m
[32m+[m[32m                      ? "Other"[m
[32m+[m[32m                      : "Work",[m
[32m+[m[32m                ),[m
[32m+[m[32m                Divider(),[m
[32m+[m[32m                ExpansionTile([m
[32m+[m[32m                  children: reviewCartProvider.getReviewCartDataList.map((e) {[m
[32m+[m[32m                    return OrderItem([m
[32m+[m[32m                      e: e,[m
[32m+[m[32m                    );[m
[32m+[m[32m                  }).toList(),[m
[32m+[m[32m                  title: Text([m
[32m+[m[32m                      "Order Items ${reviewCartProvider.getReviewCartDataList.length}"),[m
[32m+[m[32m                ),[m
[32m+[m[32m                Divider(),[m
[32m+[m[32m                ListTile([m
[32m+[m[32m                  minVerticalPadding: 5,[m
[32m+[m[32m                  leading: Text([m
[32m+[m[32m                    "Sub Total",[m
[32m+[m[32m                    style: TextStyle([m
[32m+[m[32m                      fontWeight: FontWeight.bold,[m
[32m+[m[32m                    ),[m
[32m+[m[32m                  ),[m
[32m+[m[32m                  trailing: Text([m
[32m+[m[32m                    "\$${totalPrice}",[m
[32m+[m[32m                    style: TextStyle([m
[32m+[m[32m                      fontWeight: FontWeight.bold,[m
[32m+[m[32m                    ),[m
[32m+[m[32m                  ),[m
[32m+[m[32m                ),[m
[32m+[m[32m                ListTile([m
[32m+[m[32m                  minVerticalPadding: 5,[m
[32m+[m[32m                  leading: Text([m
[32m+[m[32m                    "Shipping Charge",[m
[32m+[m[32m                    style: TextStyle(color: Colors.grey[600]),[m
[32m+[m[32m                  ),[m
[32m+[m[32m                  trailing: Text([m
[32m+[m[32m                    "\$3",[m
[32m+[m[32m                    style: TextStyle([m
[32m+[m[32m                      fontWeight: FontWeight.bold,[m
[32m+[m[32m                    ),[m
[32m+[m[32m                  ),[m
[32m+[m[32m                ),[m
[32m+[m[32m                ListTile([m
[32m+[m[32m                  minVerticalPadding: 5,[m
[32m+[m[32m                  leading: Text([m
[32m+[m[32m                    "Compen Discount",[m
[32m+[m[32m                    style: TextStyle(color: Colors.grey[600]),[m
[32m+[m[32m                  ),[m
[32m+[m[32m                  trailing: Text([m
[32m+[m[32m                    "\$10",[m
[32m+[m[32m                    style: TextStyle([m
[32m+[m[32m                      fontWeight: FontWeight.bold,[m
[32m+[m[32m                    ),[m
[32m+[m[32m                  ),[m
[32m+[m[32m                ),[m
[32m+[m[32m                Divider(),[m
[32m+[m[32m                ListTile([m
[32m+[m[32m                  leading: Text("Payment Options"),[m
[32m+[m[32m                ),[m
[32m+[m[32m                RadioListTile([m
[32m+[m[32m                  value: AddressTypes.Home,[m
[32m+[m[32m                  activeColor:Color(0xffd6b738),[m
[32m+[m[32m                  groupValue: myType,[m
[32m+[m[32m                  title: Text("Home"),[m
[32m+[m[32m                  onChanged: (AddressTypes value) {[m
[32m+[m[32m                    setState(() {[m
[32m+[m[32m                      myType = value;[m
[32m+[m[32m                    });[m
[32m+[m[32m                  },[m
[32m+[m[32m                  secondary: Icon([m
[32m+[m[32m                    Icons.work,[m
[32m+[m[32m                    color: primaryColor,[m
[32m+[m[32m                  ),[m
[32m+[m[32m                ),[m
[32m+[m[32m                RadioListTile([m
[32m+[m[32m                  value: AddressTypes.OnlinePayment,[m
[32m+[m[32m                  activeColor:Color(0xffd6b738),[m
[32m+[m[32m                  groupValue: myType,[m
[32m+[m[32m                  title: Text("OnlinePayment"),[m
[32m+[m[32m                  onChanged: (AddressTypes value) {[m
[32m+[m[32m                    setState(() {[m
[32m+[m[32m                      myType = value;[m
[32m+[m[32m                    });[m
[32m+[m[32m                  },[m
[32m+[m[32m                  secondary: Icon([m
[32m+[m[32m                    Icons.devices_other,[m
[32m+[m[32m                    color: primaryColor,[m
[32m+[m[32m                  ),[m
[32m+[m[32m                )[m
[32m+[m[32m              ],[m
[32m+[m[32m            );[m
[32m+[m[32m          },[m
[32m+[m[32m        ),[m
[32m+[m[32m      ),[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/lib/check_out/Paymentsummary/google_pay.dart b/lib/check_out/Paymentsummary/google_pay.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..92d7482[m
[1m--- /dev/null[m
[1m+++ b/lib/check_out/Paymentsummary/google_pay.dart[m
[36m@@ -0,0 +1,36 @@[m
[32m+[m[32mimport 'package:flutter/material.dart';[m
[32m+[m[32mimport 'package:pay/pay.dart';[m
[32m+[m
[32m+[m[32mclass MyGooglePay extends StatefulWidget {[m
[32m+[m[32m  final total;[m
[32m+[m[32m  MyGooglePay({this.total});[m
[32m+[m[32m  @override[m
[32m+[m[32m  _MyGooglePayState createState() => _MyGooglePayState();[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mclass _MyGooglePayState extends State<MyGooglePay> {[m
[32m+[m[32m// In your Widget build() method[m
[32m+[m
[32m+[m[32m// In your Stateless Widget class or State[m
[32m+[m[32m  void onGooglePayResult(paymentResult) {[m
[32m+[m[32m    print(paymentResult);[m
[32m+[m[32m    // Send the resulting Google Pay token to your server or PSP[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  @override[m
[32m+[m[32m  Widget build(BuildContext context) {[m
[32m+[m[32m    return GooglePayButton([m
[32m+[m[32m      paymentConfigurationAsset: 'sample_payment_configuration.json',[m
[32m+[m[32m      paymentItems: [[m
[32m+[m[32m        PaymentItem([m
[32m+[m[32m          label: 'Total',[m
[32m+[m[32m          amount: '${widget.total}',[m
[32m+[m[32m          status: PaymentItemStatus.final_price,[m
[32m+[m[32m        )[m
[32m+[m[32m      ],[m
[32m+[m[32m      style: GooglePayButtonStyle.white,[m
[32m+[m[32m      type: GooglePayButtonType.pay,[m
[32m+[m[32m      onPaymentResult: onGooglePayResult,[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/lib/check_out/Paymentsummary/order_item.dart b/lib/check_out/Paymentsummary/order_item.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..4c02955[m
[1m--- /dev/null[m
[1m+++ b/lib/check_out/Paymentsummary/order_item.dart[m
[36m@@ -0,0 +1,28 @@[m
[32m+[m[32mimport 'package:flutter/material.dart';[m
[32m+[m
[32m+[m[32mimport '../../models/review_cart_model.dart';[m
[32m+[m[32mclass OrderItem extends StatelessWidget {[m
[32m+[m[32m  final ReviewCartModel e;[m
[32m+[m[32m   OrderItem({this.e});[m
[32m+[m
[32m+[m[32m  @override[m
[32m+[m[32m  Widget build(BuildContext context) {[m
[32m+[m[32m    return ListTile([m
[32m+[m[32m      leading: Image.network(e.cartImage,[m
[32m+[m[32m      ),[m
[32m+[m[32m      title: Row([m
[32m+[m[32m        mainAxisAlignment: MainAxisAlignment.spaceBetween,[m
[32m+[m[32m        children: [[m
[32m+[m[32m          Text(e.cartName,style: TextStyle(color: Colors.grey[600][m
[32m+[m[32m          ),[m
[32m+[m[32m          ),[m
[32m+[m[32m          Text(e.cartUnit,style: TextStyle(color: Colors.grey[600][m
[32m+[m[32m          ),[m
[32m+[m[32m          ),[m
[32m+[m[32m          Text('\$${e.cartPrice}'),[m
[32m+[m[32m        ],[m
[32m+[m[32m      ),[m
[32m+[m[32m      subtitle: Text(e.cartQuantity.toString()),[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/lib/check_out/add_delivery address/add_delivery_address.dart b/lib/check_out/add_delivery address/add_delivery_address.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..7ec8016[m
[1m--- /dev/null[m
[1m+++ b/lib/check_out/add_delivery address/add_delivery_address.dart[m	
[36m@@ -0,0 +1,182 @@[m
[32m+[m[32mimport 'package:flutter/material.dart';[m
[32m+[m[32mimport 'package:provider/provider.dart';[m
[32m+[m[32mimport '../../config/colors.dart';[m
[32m+[m[32mimport '../../providers/checkout_provider.dart';[m
[32m+[m[32mimport '../../widgets/customyext_field.dart';[m
[32m+[m[32mimport '../googlemap/google_map.dart';[m
[32m+[m
[32m+[m[32mclass AddDeliveryAddress extends StatefulWidget {[m
[32m+[m[32m  @override[m
[32m+[m[32m  _AddDeliverAddressState createState() => _AddDeliverAddressState();[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32menum AddressTypes {[m
[32m+[m[32m  Home,[m
[32m+[m[32m  Work,[m
[32m+[m[32m  Other,[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mclass _AddDeliverAddressState extends State<AddDeliveryAddress> {[m
[32m+[m[32m  var myType = AddressTypes.Home;[m
[32m+[m[32m  @override[m
[32m+[m[32m  Widget build(BuildContext context) {[m
[32m+[m[32m    CheckoutProvider checkoutProvider = Provider.of(context);[m
[32m+[m[32m    return Scaffold([m
[32m+[m[32m      appBar: AppBar([m
[32m+[m[32m        iconTheme: IconThemeData(color: textColor),[m
[32m+[m[32m        backgroundColor: Color(0xffd6b738),[m
[32m+[m[32m        title: Text([m
[32m+[m[32m          "Add Delivery Address", style: TextStyle(fontSize: 18,color: textColor),[m
[32m+[m[32m        ),[m
[32m+[m[32m      ),[m
[32m+[m[32m      bottomNavigationBar: Container([m
[32m+[m[32m        margin: EdgeInsets.symmetric(vertical: 10, horizontal: 20),[m
[32m+[m[32m        height: 48,[m
[32m+[m[32m        child: checkoutProvider.isloading == false[m
[32m+[m[32m            ? MaterialButton([m
[32m+[m[32m          color: Color(0xffd6b738),[m
[32m+[m[32m          onPressed: () {[m
[32m+[m[32m            checkoutProvider.validator(context, myType);[m
[32m+[m[32m          },[m
[32m+[m[32m          child: Text([m
[32m+[m[32m            "Add Address",[m
[32m+[m[32m            style: TextStyle([m
[32m+[m[32m              color: textColor,[m
[32m+[m[32m            ),[m
[32m+[m[32m          ),[m
[32m+[m[32m          shape: RoundedRectangleBorder([m
[32m+[m[32m            borderRadius: BorderRadius.circular([m
[32m+[m[32m              30,[m
[32m+[m[32m            ),[m
[32m+[m[32m          ),[m
[32m+[m[32m        )[m
[32m+[m[32m            : Center([m
[32m+[m[32m          child: CircularProgressIndicator(),[m
[32m+[m[32m        ),[m
[32m+[m[32m      ),[m
[32m+[m[32m      body: Padding([m
[32m+[m[32m        padding: EdgeInsets.symmetric([m
[32m+[m[32m          horizontal: 20,[m
[32m+[m[32m        ),[m
[32m+[m[32m        child: ListView([m
[32m+[m[32m          children: [[m
[32m+[m[32m            CustomTextField([m
[32m+[m[32m              lableText: "First name",[m
[32m+[m[32m              controller: checkoutProvider.firstname,[m
[32m+[m[32m            ),[m
[32m+[m[32m            CustomTextField([m
[32m+[m[32m              lableText: "Last name",[m
[32m+[m[32m              controller: checkoutProvider.lastname,[m
[32m+[m[32m            ),[m
[32m+[m[32m            CustomTextField([m
[32m+[m[32m              lableText: "Mobile No",[m
[32m+[m[32m              controller: checkoutProvider.mobileNo,[m
[32m+[m[32m            ),[m
[32m+[m[32m            CustomTextField([m
[32m+[m[32m              lableText: "Alternate Mobile No",[m
[32m+[m[32m              controller: checkoutProvider.AlternateMobileNo,[m
[32m+[m[32m            ),[m
[32m+[m[32m            CustomTextField([m
[32m+[m[32m              lableText: "Colony",[m
[32m+[m[32m              controller: checkoutProvider.Colony,[m
[32m+[m[32m            ),[m
[32m+[m[32m            CustomTextField([m
[32m+[m[32m              lableText: "Street",[m
[32m+[m[32m              controller: checkoutProvider.Street,[m
[32m+[m[32m            ),[m
[32m+[m[32m            CustomTextField([m
[32m+[m[32m              lableText: "Landmark",[m
[32m+[m[32m              controller: checkoutProvider.Landmark,[m
[32m+[m[32m            ),[m
[32m+[m[32m            CustomTextField([m
[32m+[m[32m              lableText: "City",[m
[32m+[m[32m              controller: checkoutProvider.City,[m
[32m+[m[32m            ),[m
[32m+[m[32m            CustomTextField([m
[32m+[m[32m              lableText: "Area",[m
[32m+[m[32m              controller: checkoutProvider.Area,[m
[32m+[m[32m            ),[m
[32m+[m[32m            CustomTextField([m
[32m+[m[32m              lableText: "ZipCode",[m
[32m+[m[32m              controller: checkoutProvider.ZipCode,[m
[32m+[m[32m            ),[m
[32m+[m[32m            InkWell([m
[32m+[m[32m              onTap: (){[m
[32m+[m[32m                Navigator.of(context).push([m
[32m+[m[32m                  MaterialPageRoute([m
[32m+[m[32m                    builder: (context) => CustomGoogleMap(),[m
[32m+[m[32m                  ),[m
[32m+[m[32m                );[m
[32m+[m[32m              },[m
[32m+[m[32m              child: Container([m
[32m+[m[32m                height: 47,[m
[32m+[m[32m                width: double.infinity,[m
[32m+[m[32m                child: Column([m
[32m+[m[32m                  mainAxisAlignment: MainAxisAlignment.center,[m
[32m+[m[32m                  crossAxisAlignment: CrossAxisAlignment.start,[m
[32m+[m[32m                  children: [[m
[32m+[m[32m                    checkoutProvider.SetLocation == null? Text("Set Location"):[m
[32m+[m[32m                    Text("Done!",style: TextStyle(fontSize: 18,color: textColor),),[m
[32m+[m[32m                  ],[m
[32m+[m[32m                ),[m
[32m+[m[32m              ),[m
[32m+[m[32m            ),[m
[32m+[m[32m            Divider([m
[32m+[m[32m              color: Colors.black,[m
[32m+[m[32m            ),[m
[32m+[m[32m            ListTile([m
[32m+[m[32m              title: Text("Address Type*"),[m
[32m+[m
[32m+[m
[32m+[m[32m            ),[m
[32m+[m[32m            RadioListTile([m
[32m+[m[32m              value: AddressTypes.Home,[m
[32m+[m[32m              activeColor:Color(0xffd6b738),[m
[32m+[m[32m              groupValue: myType,[m
[32m+[m[32m              title: Text("Home"),[m
[32m+[m[32m              onChanged: (AddressTypes value) {[m
[32m+[m[32m                setState(() {[m
[32m+[m[32m                  myType = value;[m
[32m+[m[32m                });[m
[32m+[m[32m              },[m
[32m+[m[32m              secondary: Icon([m
[32m+[m[32m                Icons.home,[m
[32m+[m[32m                color: primaryColor,[m
[32m+[m[32m              ),[m
[32m+[m[32m            ),[m
[32m+[m[32m            RadioListTile([m
[32m+[m[32m              value: AddressTypes.Work,[m
[32m+[m[32m              groupValue: myType,[m
[32m+[m[32m              activeColor:Color(0xffd6b738),[m
[32m+[m[32m              title: Text("Work"),[m
[32m+[m[32m              onChanged: (AddressTypes value) {[m
[32m+[m[32m                setState(() {[m
[32m+[m[32m                  myType = value;[m
[32m+[m[32m                });[m
[32m+[m[32m              },[m
[32m+[m[32m              secondary: Icon([m
[32m+[m[32m                Icons.work,[m
[32m+[m[32m                color: primaryColor,[m
[32m+[m[32m              ),[m
[32m+[m[32m            ),[m
[32m+[m[32m            RadioListTile([m
[32m+[m[32m              value: AddressTypes.Other,[m
[32m+[m[32m              groupValue: myType,[m
[32m+[m[32m              activeColor:Color(0xffd6b738),[m
[32m+[m[32m              title: Text("Other"),[m
[32m+[m[32m              onChanged: (AddressTypes value) {[m
[32m+[m[32m                setState(() {[m
[32m+[m[32m                  myType = value;[m
[32m+[m[32m                });[m
[32m+[m[32m              },[m
[32m+[m[32m              secondary: Icon([m
[32m+[m[32m                Icons.devices_other,[m
[32m+[m[32m                color: primaryColor,[m
[32m+[m[32m              ),[m
[32m+[m[32m            )[m
[32m+[m[32m          ],[m
[32m+[m[32m        ),[m
[32m+[m[32m      ),[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/lib/check_out/deliverydetails/delivery_details.dart b/lib/check_out/deliverydetails/delivery_details.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..81bbdd2[m
[1m--- /dev/null[m
[1m+++ b/lib/check_out/deliverydetails/delivery_details.dart[m
[36m@@ -0,0 +1,110 @@[m
[32m+[m[32mimport 'package:flutter/material.dart';[m
[32m+[m[32mimport 'package:fooddeliveryapp/check_out/deliverydetails/single%20delivery_item.dart';[m
[32m+[m[32mimport 'package:provider/provider.dart';[m
[32m+[m
[32m+[m[32mimport '../../config/colors.dart';[m
[32m+[m[32mimport '../../models/delivery_address_model.dart';[m
[32m+[m[32mimport '../../providers/checkout_provider.dart';[m
[32m+[m[32mimport '../Paymentsummary/Payment_Summary.dart';[m
[32m+[m[32mimport '../add_delivery address/add_delivery_address.dart';[m
[32m+[m
[32m+[m[32mclass DeliveryDetails extends StatefulWidget {[m
[32m+[m[32m  @override[m
[32m+[m[32m  _DeliveryDetailsState createState() => _DeliveryDetailsState();[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mclass _DeliveryDetailsState extends State<DeliveryDetails> {[m
[32m+[m[32m  DeliveryAddressModel value;[m
[32m+[m[32m  @override[m
[32m+[m[32m  Widget build(BuildContext context) {[m
[32m+[m[32m    CheckoutProvider deliveryAddressProvider = Provider.of(context);[m
[32m+[m[32m    deliveryAddressProvider.getDeliveryAddressData();[m
[32m+[m[32m    return Scaffold([m
[32m+[m[32m      appBar: AppBar([m
[32m+[m[32m        iconTheme: IconThemeData(color: textColor),[m
[32m+[m[32m        title: Text("Delivery Details",style: TextStyle(color: textColor, fontSize: 17),),[m
[32m+[m[32m        backgroundColor:  Color(0xffd6b738),[m
[32m+[m[32m      ),[m
[32m+[m[32m      floatingActionButton: FloatingActionButton([m
[32m+[m[32m        backgroundColor: primaryColor,[m
[32m+[m[32m        child: Icon(Icons.add),[m
[32m+[m[32m        onPressed: () {[m
[32m+[m[32m          Navigator.of(context).push([m
[32m+[m[32m            MaterialPageRoute([m
[32m+[m[32m              builder: (context) => AddDeliveryAddress([m
[32m+[m[32m              ),[m
[32m+[m[32m            ),[m
[32m+[m[32m          );[m
[32m+[m[32m        },[m
[32m+[m[32m      ),[m
[32m+[m[32m      bottomNavigationBar: Container([m
[32m+[m[32m        // width: 160,[m
[32m+[m[32m        height: 48,[m
[32m+[m[32m        margin: EdgeInsets.symmetric(vertical: 10, horizontal: 20),[m
[32m+[m[32m        child: MaterialButton([m
[32m+[m[32m          child: deliveryAddressProvider.getDeliveryAddressList.isEmpty[m
[32m+[m[32m              ? Text("Add new Address")[m
[32m+[m[32m              : Text("Payment Summary"),[m
[32m+[m[32m          onPressed: () {[m
[32m+[m[32m            deliveryAddressProvider.getDeliveryAddressList.isEmpty[m
[32m+[m[32m                ? Navigator.of(context).push([m
[32m+[m[32m              MaterialPageRoute([m
[32m+[m[32m                builder: (context) => AddDeliveryAddress(),[m
[32m+[m[32m              ),[m
[32m+[m[32m            )[m
[32m+[m[32m                : Navigator.of(context).push([m
[32m+[m[32m              MaterialPageRoute([m
[32m+[m[32m                builder: (context) => PaymentSummary([m
[32m+[m[32m                  deliverAddressList: value,[m
[32m+[m[32m                ),[m
[32m+[m[32m              ),[m
[32m+[m[32m            );[m
[32m+[m[32m          },[m
[32m+[m[32m          color: primaryColor,[m
[32m+[m[32m          shape: RoundedRectangleBorder([m
[32m+[m[32m            borderRadius: BorderRadius.circular([m
[32m+[m[32m              30,[m
[32m+[m[32m            ),[m
[32m+[m[32m          ),[m
[32m+[m[32m        ),[m
[32m+[m[32m      ),[m
[32m+[m[32m      body: ListView([m
[32m+[m[32m        children: [[m
[32m+[m[32m          ListTile([m
[32m+[m[32m            title: Text("Deliver To"),[m
[32m+[m[32m          ),[m
[32m+[m[32m          Divider([m
[32m+[m[32m            height: 1,[m
[32m+[m[32m          ),[m
[32m+[m[32m          deliveryAddressProvider.getDeliveryAddressList.isEmpty[m
[32m+[m[32m              ? Center([m
[32m+[m[32m            child: Container([m
[32m+[m[32m              child: Center([m
[32m+[m[32m                child: Text("No Data"),[m
[32m+[m[32m              ),[m
[32m+[m[32m            ),[m
[32m+[m[32m          )[m
[32m+[m[32m              : Column([m
[32m+[m[32m            children: deliveryAddressProvider.getDeliveryAddressList[m
[32m+[m[32m                .map<Widget>((e) {[m
[32m+[m[32m              setState(() {[m
[32m+[m[32m                value  = e;[m
[32m+[m[32m              });[m
[32m+[m[32m              return SingleDeliveryItem([m
[32m+[m[32m                address:[m
[32m+[m[32m                "area, ${e.area}, street, ${e.street}, colony ${e.colony}, zipCode  ${e.zipCode }",[m
[32m+[m[32m                title: "${e.firstName} ${e.lastName}",[m
[32m+[m[32m                number: e.mobileNo,[m
[32m+[m[32m                addressType: e.addressType == "AddressTypes.Home"[m
[32m+[m[32m                    ? "Home"[m
[32m+[m[32m                    : e.addressType == "AddressTypes.Other"[m
[32m+[m[32m                    ? "Other"[m
[32m+[m[32m                    : "Work",[m
[32m+[m[32m              );[m
[32m+[m[32m            }).toList(),[m
[32m+[m[32m          )[m
[32m+[m[32m        ],[m
[32m+[m[32m      ),[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/lib/check_out/deliverydetails/single delivery_item.dart b/lib/check_out/deliverydetails/single delivery_item.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..2116f1e[m
[1m--- /dev/null[m
[1m+++ b/lib/check_out/deliverydetails/single delivery_item.dart[m	
[36m@@ -0,0 +1,54 @@[m
[32m+[m[32mimport 'package:flutter/material.dart';[m
[32m+[m[32mimport 'package:fooddeliveryapp/config/colors.dart';[m
[32m+[m[32mclass SingleDeliveryItem extends StatelessWidget {[m
[32m+[m[32m  final String title;[m
[32m+[m[32m  final String address;[m
[32m+[m[32m  final String number;[m
[32m+[m[32m  final String addressType;[m
[32m+[m
[32m+[m
[32m+[m[32m  const SingleDeliveryItem({this.title,this.address,this.number,this.addressType});[m
[32m+[m
[32m+[m[32m  @override[m
[32m+[m[32m  Widget build(BuildContext context) {[m
[32m+[m[32m    return Column([m
[32m+[m[32m      children: [[m
[32m+[m[32m        ListTile([m
[32m+[m[32m        title: Row([m
[32m+[m[32m          mainAxisAlignment: MainAxisAlignment.spaceBetween,[m
[32m+[m[32m          children: [[m
[32m+[m[32m            Text(title),[m
[32m+[m[32m            Container([m
[32m+[m[32m                width: 60,[m
[32m+[m[32m                padding: EdgeInsets.all(1),[m
[32m+[m[32m                height: 20,[m
[32m+[m[32m                decoration: BoxDecoration([m
[32m+[m[32m                  color: primaryColor,[m
[32m+[m[32m                  borderRadius: BorderRadius.circular(10),[m
[32m+[m[32m                ),[m
[32m+[m[32m              child: Center([m
[32m+[m[32m                child: Text(addressType,[m
[32m+[m[32m                  style: TextStyle(fontSize: 13,color: Colors.white),),[m
[32m+[m[32m              ),[m
[32m+[m[32m            ),[m
[32m+[m[32m          ],[m
[32m+[m[32m        ),[m
[32m+[m[32m          leading: CircleAvatar([m
[32m+[m[32m            radius: 8,[m
[32m+[m[32m            backgroundColor: primaryColor,[m
[32m+[m[32m          ),[m
[32m+[m[32m          subtitle: Column([m
[32m+[m[32m            mainAxisAlignment: MainAxisAlignment.spaceEvenly,[m
[32m+[m[32m            crossAxisAlignment: CrossAxisAlignment.start,[m
[32m+[m[32m            children: [[m
[32m+[m[32m              Text(address),[m
[32m+[m[32m              SizedBox(height: 5),[m
[32m+[m[32m              Text(number),[m
[32m+[m[32m            ],[m
[32m+[m[32m          ),[m
[32m+[m[32m      ),[m
[32m+[m[32m        Divider(height: 35,),[m
[32m+[m[32m    ],[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/lib/check_out/googlemap/google_map.dart b/lib/check_out/googlemap/google_map.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..afa1f25[m
[1m--- /dev/null[m
[1m+++ b/lib/check_out/googlemap/google_map.dart[m
[36m@@ -0,0 +1,77 @@[m
[32m+[m[32mimport 'package:flutter/material.dart';[m
[32m+[m[32mimport 'package:google_maps_flutter/google_maps_flutter.dart';[m
[32m+[m[32mimport 'package:location/location.dart';[m
[32m+[m[32mimport 'package:provider/provider.dart';[m
[32m+[m[32mimport '../../config/colors.dart';[m
[32m+[m[32mimport '../../providers/checkout_provider.dart';[m
[32m+[m
[32m+[m[32mclass CustomGoogleMap extends StatefulWidget {[m
[32m+[m[32m  @override[m
[32m+[m[32m  _CustomGoogleMapState createState() => _CustomGoogleMapState();[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mclass _CustomGoogleMapState extends State<CustomGoogleMap> {[m
[32m+[m[32m  LatLng _initialcameraposition = LatLng(20.5937, 78.9629);[m
[32m+[m[32m  GoogleMapController controller;[m
[32m+[m[32m  Location _location = Location();[m
[32m+[m[32m  void _onMapCreated(GoogleMapController _value) {[m
[32m+[m[32m    controller = _value;[m
[32m+[m[32m    _location.onLocationChanged.listen((event) {[m
[32m+[m[32m      controller.animateCamera([m
[32m+[m[32m        CameraUpdate.newCameraPosition([m
[32m+[m[32m          CameraPosition([m
[32m+[m[32m              target: LatLng(event.latitude, event.longitude), zoom: 15),[m
[32m+[m[32m        ),[m
[32m+[m[32m      );[m
[32m+[m[32m    });[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  @override[m
[32m+[m[32m  Widget build(BuildContext context) {[m
[32m+[m[32m    CheckoutProvider checkoutProvider = Provider.of(context);[m
[32m+[m[32m    return Scaffold([m
[32m+[m[32m      body: SafeArea([m
[32m+[m[32m        child: Container([m
[32m+[m[32m          height: MediaQuery.of(context).size.height,[m
[32m+[m[32m          width: MediaQuery.of(context).size.width,[m
[32m+[m[32m          child: Stack([m
[32m+[m[32m            children: [[m
[32m+[m[32m              GoogleMap([m
[32m+[m[32m                initialCameraPosition: CameraPosition([m
[32m+[m[32m                  target: _initialcameraposition,[m
[32m+[m[32m                ),[m
[32m+[m[32m                mapType: MapType.normal,[m
[32m+[m[32m                onMapCreated: _onMapCreated,[m
[32m+[m[32m                myLocationEnabled: true,[m
[32m+[m[32m              ),[m
[32m+[m[32m              Positioned([m
[32m+[m[32m                bottom: 0,[m
[32m+[m[32m                left: 0,[m
[32m+[m[32m                right: 0,[m
[32m+[m[32m                child: Container([m
[32m+[m[32m                  height: 50,[m
[32m+[m[32m                  width: double.infinity,[m
[32m+[m[32m                  margin:[m
[32m+[m[32m                  EdgeInsets.only(right: 60, left: 10, bottom: 40, top: 40),[m
[32m+[m[32m                  child: MaterialButton([m
[32m+[m[32m                    onPressed: () async {[m
[32m+[m[32m                      await _location.getLocation().then((value) {[m
[32m+[m[32m                        setState(() {[m
[32m+[m[32m                          checkoutProvider.setLocation = value;[m
[32m+[m[32m                        });[m
[32m+[m[32m                      });[m
[32m+[m[32m                      Navigator.of(context).pop();[m
[32m+[m[32m                    },[m
[32m+[m[32m                    color: primaryColor,[m
[32m+[m[32m                    child: Text("Set Location"),[m
[32m+[m[32m                    shape: StadiumBorder(),[m
[32m+[m[32m                  ),[m
[32m+[m[32m                ),[m
[32m+[m[32m              ),[m
[32m+[m[32m            ],[m
[32m+[m[32m          ),[m
[32m+[m[32m        ),[m
[32m+[m[32m      ),[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/lib/config/colors.dart b/lib/config/colors.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..1e55591[m
[1m--- /dev/null[m
[1m+++ b/lib/config/colors.dart[m
[36m@@ -0,0 +1,5 @@[m
[32m+[m[32mimport 'package:flutter/material.dart';[m
[32m+[m
[32m+[m[32mColor primaryColor = Color(0xffd1ad17);[m
[32m+[m[32mColor scaffoldBackgroundColor = Color(0xffcbcbcb);[m
[32m+[m[32mColor textColor = Colors.black87;[m
[1mdiff --git a/lib/main.dart b/lib/main.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..a4028d3[m
[1m--- /dev/null[m
[1m+++ b/lib/main.dart[m
[36m@@ -0,0 +1,61 @@[m
[32m+[m[32mimport 'package:firebase_auth/firebase_auth.dart';[m
[32m+[m[32mimport 'package:firebase_core/firebase_core.dart';[m
[32m+[m[32mimport 'package:flutter/material.dart';[m
[32m+[m[32mimport 'package:fooddeliveryapp/auth/signin.dart';[m
[32m+[m[32mimport 'package:fooddeliveryapp/providers/Reviewcart_provider.dart';[m
[32m+[m[32mimport 'package:fooddeliveryapp/providers/checkout_provider.dart';[m
[32m+[m[32mimport 'package:fooddeliveryapp/providers/product_providers.dart';[m
[32m+[m[32mimport 'package:fooddeliveryapp/providers/user_provider.dart';[m
[32m+[m[32mimport 'package:fooddeliveryapp/providers/wishlist_provider.dart';[m
[32m+[m[32mimport 'package:fooddeliveryapp/screens/home/homes_creen.dart';[m
[32m+[m[32mimport 'package:provider/provider.dart';[m
[32m+[m[32mimport 'config/colors.dart';[m
[32m+[m
[32m+[m[32mvoid main() async{[m
[32m+[m[32m  WidgetsFlutterBinding.ensureInitialized();[m
[32m+[m[32m  await Firebase.initializeApp();[m
[32m+[m[32m  runApp(const MyApp());[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mclass MyApp extends StatelessWidget {[m
[32m+[m[32m  const MyApp({Key key});[m
[32m+[m
[32m+[m[32m  @override[m
[32m+[m[32m  Widget build(BuildContext context) {[m
[32m+[m[32m    return MultiProvider([m
[32m+[m[32m        providers:[[m
[32m+[m[32m      ChangeNotifierProvider<ProductProvider>([m
[32m+[m[32m         create: (context)=>ProductProvider(),[m
[32m+[m[32m      ),[m
[32m+[m[32m      ChangeNotifierProvider<UserProvider>([m
[32m+[m[32m      create: (context)=>UserProvider(),[m
[32m+[m[32m      ),[m
[32m+[m[32m       ChangeNotifierProvider<ReviewCartProvider>([m
[32m+[m[32m       create: (context)=>ReviewCartProvider(),[m
[32m+[m[32m       ),[m
[32m+[m[32m     ChangeNotifierProvider<WishListProvider>([m
[32m+[m[32m     create: (context)=>WishListProvider(),[m
[32m+[m[32m     ),[m
[32m+[m[32m          ChangeNotifierProvider<CheckoutProvider>([m
[32m+[m[32m            create: (context)=>CheckoutProvider(),[m
[32m+[m[32m          ),[m
[32m+[m[32m        ],[m
[32m+[m[32m      child: MaterialApp([m
[32m+[m[32m        theme: ThemeData([m
[32m+[m[32m            primaryColor: primaryColor,[m
[32m+[m[32m            scaffoldBackgroundColor: scaffoldBackgroundColor),[m
[32m+[m[32m        debugShowCheckedModeBanner: false,[m
[32m+[m[32m        home: StreamBuilder([m
[32m+[m[32m          stream: FirebaseAuth.instance.authStateChanges(),[m
[32m+[m[32m             builder: (context, snapShot) {[m
[32m+[m[32m           if (snapShot.hasData) {[m
[32m+[m[32m           return HomeScreen ();[m
[32m+[m[32m            }[m
[32m+[m[32m            return Signin ();[m
[32m+[m[32m          }[m
[32m+[m[32m      ),[m
[32m+[m[32m      )[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m
[1mdiff --git a/lib/methods/methods.dart b/lib/methods/methods.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..a5e9387[m
[1m--- /dev/null[m
[1m+++ b/lib/methods/methods.dart[m
[36m@@ -0,0 +1,17 @@[m
[32m+[m[32mimport 'package:firebase_auth/firebase_auth.dart';[m
[32m+[m[32mimport 'package:flutter/cupertino.dart';[m
[32m+[m[32mimport 'package:flutter/material.dart';[m
[32m+[m
[32m+[m[32mimport '../auth/signin.dart';[m
[32m+[m
[32m+[m[32mFuture logOut(BuildContext context) async {[m
[32m+[m[32m  FirebaseAuth _auth = FirebaseAuth.instance;[m
[32m+[m
[32m+[m[32m  try {[m
[32m+[m[32m    await _auth.signOut().then((value) {[m
[32m+[m[32m      Navigator.push(context, MaterialPageRoute(builder: (_) => Signin()));[m
[32m+[m[32m    });[m
[32m+[m[32m  } catch (e) {[m
[32m+[m[32m    print("error");[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/lib/models/delivery_address_model.dart b/lib/models/delivery_address_model.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..bd14bb8[m
[1m--- /dev/null[m
[1m+++ b/lib/models/delivery_address_model.dart[m
[36m@@ -0,0 +1,27 @@[m
[32m+[m[32mclass DeliveryAddressModel {[m
[32m+[m[32m  String firstName;[m
[32m+[m[32m  String lastName;[m
[32m+[m[32m  String mobileNo;[m
[32m+[m[32m  String alternateMobileNo;[m
[32m+[m[32m  String colony;[m
[32m+[m[32m  String street;[m
[32m+[m[32m  String landMark;[m
[32m+[m[32m  String city;[m
[32m+[m[32m  String area;[m
[32m+[m[32m  String zipCode;[m
[32m+[m[32m  String addressType;[m
[32m+[m
[32m+[m[32m  DeliveryAddressModel({[m
[32m+[m[32m    this.addressType,[m
[32m+[m[32m    this.area,[m
[32m+[m[32m    this.alternateMobileNo,[m
[32m+[m[32m    this.city,[m
[32m+[m[32m    this.firstName,[m
[32m+[m[32m    this.landMark,[m
[32m+[m[32m    this.lastName,[m
[32m+[m[32m    this.mobileNo,[m
[32m+[m[32m    this.zipCode,[m
[32m+[m[32m    this.street,[m
[32m+[m[32m    this.colony,[m
[32m+[m[32m  });[m
[32m+[m[32m}[m
[1mdiff --git a/lib/models/product_model.dart b/lib/models/product_model.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..bb0a087[m
[1m--- /dev/null[m
[1m+++ b/lib/models/product_model.dart[m
[36m@@ -0,0 +1,16 @@[m
[32m+[m[32mclass ProductModel {[m
[32m+[m[32m  String productName;[m
[32m+[m[32m  String productImage;[m
[32m+[m[32m  int productPrice;[m
[32m+[m[32m  String productId;[m
[32m+[m[32m  int productQuantity;[m
[32m+[m[32m  List<dynamic>productUnit;[m
[32m+[m[32m  ProductModel([m
[32m+[m[32m      {[m
[32m+[m[32m      this.productQuantity,[m
[32m+[m[32m      this.productId,[m
[32m+[m[32m      this.productUnit,[m
[32m+[m[32m      this.productImage,[m
[32m+[m[32m      this.productName,[m
[32m+[m[32m      this.productPrice});[m
[32m+[m[32m}[m
[1mdiff --git a/lib/models/review_cart_model.dart b/lib/models/review_cart_model.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..f427ef3[m
[1m--- /dev/null[m
[1m+++ b/lib/models/review_cart_model.dart[m
[36m@@ -0,0 +1,16 @@[m
[32m+[m[32mclass ReviewCartModel {[m
[32m+[m[32m  String cartId;[m
[32m+[m[32m  String cartImage;[m
[32m+[m[32m  String cartName;[m
[32m+[m[32m  int cartPrice;[m
[32m+[m[32m  int cartQuantity;[m
[32m+[m[32m  var cartUnit;[m
[32m+[m[32m  ReviewCartModel({[m
[32m+[m[32m    this.cartId,[m
[32m+[m[32m    this.cartImage,[m
[32m+[m[32m    this.cartName,[m
[32m+[m[32m    this.cartPrice,[m
[32m+[m[32m    this.cartQuantity,[m
[32m+[m[32m    this.cartUnit,[m
[32m+[m[32m  });[m
[32m+[m[32m}[m
[1mdiff --git a/lib/models/user_model.dart b/lib/models/user_model.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..774e3a2[m
[1m--- /dev/null[m
[1m+++ b/lib/models/user_model.dart[m
[36m@@ -0,0 +1,12 @@[m
[32m+[m[32mclass UserModel {[m
[32m+[m[32m  String userName;[m
[32m+[m[32m  String userEmail;[m
[32m+[m[32m  String userImage;[m
[32m+[m[32m  String userUid;[m
[32m+[m[32m  UserModel({[m
[32m+[m[32m    this.userEmail,[m
[32m+[m[32m    this.userImage,[m
[32m+[m[32m    this.userName,[m
[32m+[m[32m    this.userUid,[m
[32m+[m[32m  });[m
[32m+[m[32m}[m
[1mdiff --git a/lib/providers/Reviewcart_provider.dart b/lib/providers/Reviewcart_provider.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..85c3023[m
[1m--- /dev/null[m
[1m+++ b/lib/providers/Reviewcart_provider.dart[m
[36m@@ -0,0 +1,109 @@[m
[32m+[m[32mimport 'package:cloud_firestore/cloud_firestore.dart';[m
[32m+[m[32mimport 'package:firebase_auth/firebase_auth.dart';[m
[32m+[m[32mimport 'package:flutter/cupertino.dart';[m
[32m+[m[32mimport '../models/review_cart_model.dart';[m
[32m+[m
[32m+[m[32mclass ReviewCartProvider with ChangeNotifier {[m
[32m+[m[32m  void addReviewCartData({[m
[32m+[m[32m    String cartId,[m
[32m+[m[32m    String cartName,[m
[32m+[m[32m    String cartImage,[m
[32m+[m[32m    int cartPrice,[m
[32m+[m[32m    int cartQuantity,[m
[32m+[m[32m    var cartUnit,[m
[32m+[m[32m  }) async {[m
[32m+[m[32m    FirebaseFirestore.instance[m
[32m+[m[32m        .collection("ReviewCart")[m
[32m+[m[32m        .doc(FirebaseAuth.instance.currentUser.uid)[m
[32m+[m[32m        .collection("My ReviewCart")[m
[32m+[m[32m        .doc(cartId)[m
[32m+[m[32m        .set([m
[32m+[m[32m      {[m
[32m+[m[32m        "cartId": cartId,[m
[32m+[m[32m        "cartName": cartName,[m
[32m+[m[32m        "cartImage": cartImage,[m
[32m+[m[32m        "cartPrice": cartPrice,[m
[32m+[m[32m        "cartQuantity": cartQuantity,[m
[32m+[m[32m        "cartUnit":cartUnit,[m
[32m+[m[32m        "isAdd":true,[m
[32m+[m[32m      },[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  void updateReviewCartData({[m
[32m+[m[32m    String cartId,[m
[32m+[m[32m    String cartName,[m
[32m+[m[32m    String cartImage,[m
[32m+[m[32m    int cartPrice,[m
[32m+[m[32m    int cartQuantity,[m
[32m+[m[32m  }) async {[m
[32m+[m[32m    FirebaseFirestore.instance[m
[32m+[m[32m        .collection("ReviewCart")[m
[32m+[m[32m        .doc(FirebaseAuth.instance.currentUser.uid)[m
[32m+[m[32m        .collection("My ReviewCart")[m
[32m+[m[32m        .doc(cartId)[m
[32m+[m[32m        .update([m
[32m+[m[32m      {[m
[32m+[m[32m        "cartId": cartId,[m
[32m+[m[32m        "cartName": cartName,[m
[32m+[m[32m        "cartImage": cartImage,[m
[32m+[m[32m        "cartPrice": cartPrice,[m
[32m+[m[32m        "cartQuantity": cartQuantity,[m
[32m+[m[32m        "isAdd":true,[m
[32m+[m[32m      },[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m[32m  List<ReviewCartModel> reviewCartDataList = [];[m
[32m+[m[32m  void getReviewCartData() async {[m
[32m+[m[32m    List<ReviewCartModel> newList = [];[m
[32m+[m
[32m+[m[32m    QuerySnapshot reviewCartValue =[m
[32m+[m[32m    await FirebaseFirestore.instance[m
[32m+[m[32m        .collection("ReviewCart")[m
[32m+[m[32m        .doc(FirebaseAuth.instance.currentUser.uid)[m
[32m+[m[32m        .collection("My ReviewCart")[m
[32m+[m[32m        .get();[m
[32m+[m[32m    reviewCartValue.docs.forEach((element) {[m
[32m+[m[32m      ReviewCartModel reviewCartModel = ReviewCartModel([m
[32m+[m[32m        cartId: element.get("cartId"),[m
[32m+[m[32m        cartImage: element.get("cartImage"),[m
[32m+[m[32m        cartName: element.get("cartName"),[m
[32m+[m[32m        cartPrice: element.get("cartPrice"),[m
[32m+[m[32m        cartQuantity: element.get("cartQuantity"),[m
[32m+[m[32m        cartUnit: element.get("cartUnit"),[m
[32m+[m[32m      );[m
[32m+[m[32m      newList.add(reviewCartModel);[m
[32m+[m[32m    });[m
[32m+[m[32m    reviewCartDataList = newList;[m
[32m+[m[32m    notifyListeners();[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  List<ReviewCartModel> get getReviewCartDataList {[m
[32m+[m[32m    return reviewCartDataList;[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m
[32m+[m[32m//// TotalPrice  ///[m
[32m+[m
[32m+[m
[32m+[m[32m  getTotalPrice(){[m
[32m+[m[32m    double total = 0.0;[m
[32m+[m[32m    reviewCartDataList.forEach((element) {[m
[32m+[m[32m      total += element.cartPrice * element.cartQuantity;[m
[32m+[m
[32m+[m[32m    });[m
[32m+[m[32m    return total;[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m
[32m+[m[32m////////////// ReviewCartDeleteFunction ////////////[m
[32m+[m[32m  reviewCartDataDelete(cartId) {[m
[32m+[m[32m    FirebaseFirestore.instance[m
[32m+[m[32m        .collection("ReviewCart")[m
[32m+[m[32m        .doc(FirebaseAuth.instance.currentUser.uid)[m
[32m+[m[32m        .collection("My ReviewCart")[m
[32m+[m[32m        .doc(cartId)[m
[32m+[m[32m        .delete();[m
[32m+[m[32m    notifyListeners();[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/lib/providers/checkout_provider.dart b/lib/providers/checkout_provider.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..80b1b64[m
[1m--- /dev/null[m
[1m+++ b/lib/providers/checkout_provider.dart[m
[36m@@ -0,0 +1,115 @@[m
[32m+[m[32mimport 'package:cloud_firestore/cloud_firestore.dart';[m
[32m+[m[32mimport 'package:firebase_auth/firebase_auth.dart';[m
[32m+[m[32mimport 'package:flutter/material.dart';[m
[32m+[m[32mimport 'package:fluttertoast/fluttertoast.dart';[m
[32m+[m[32mimport 'package:fooddeliveryapp/models/delivery_address_model.dart';[m
[32m+[m[32mimport 'package:location_platform_interface/location_platform_interface.dart';[m
[32m+[m
[32m+[m[32mclass CheckoutProvider with ChangeNotifier {[m
[32m+[m[32m  bool isloading = false;[m
[32m+[m[32m  TextEditingController firstname = TextEditingController();[m
[32m+[m[32m  TextEditingController lastname = TextEditingController();[m
[32m+[m[32m  TextEditingController mobileNo = TextEditingController();[m
[32m+[m[32m  TextEditingController AlternateMobileNo = TextEditingController();[m
[32m+[m[32m  TextEditingController Colony = TextEditingController();[m
[32m+[m[32m  TextEditingController Street = TextEditingController();[m
[32m+[m[32m  TextEditingController Landmark = TextEditingController();[m
[32m+[m[32m  TextEditingController City = TextEditingController();[m
[32m+[m[32m  TextEditingController Area = TextEditingController();[m
[32m+[m[32m  TextEditingController ZipCode = TextEditingController();[m
[32m+[m[32m  TextEditingController SetLocation = TextEditingController();[m
[32m+[m
[32m+[m[32m  LocationData setLocation;[m
[32m+[m
[32m+[m
[32m+[m[32m  void validator(context, myType) async {[m
[32m+[m[32m    if (firstname.text.isEmpty) {[m
[32m+[m[32m      Fluttertoast.showToast(msg: "Firstname is Empty");[m
[32m+[m[32m    } else if (lastname.text.isEmpty) {[m
[32m+[m[32m      Fluttertoast.showToast(msg: "Lastname is Empty");[m
[32m+[m[32m    } else if (mobileNo.text.isEmpty) {[m
[32m+[m[32m      Fluttertoast.showToast(msg: "MobileNo is Empty");[m
[32m+[m[32m    } else if (AlternateMobileNo.text.isEmpty) {[m
[32m+[m[32m      Fluttertoast.showToast(msg: "AlternateMobileNo is Empty");[m
[32m+[m[32m    } else if (Colony.text.isEmpty) {[m
[32m+[m[32m      Fluttertoast.showToast(msg: "Colony is Empty");[m
[32m+[m[32m    } else if (Street.text.isEmpty) {[m
[32m+[m[32m      Fluttertoast.showToast(msg: "Street is Empty");[m
[32m+[m[32m    } else if (Landmark.text.isEmpty) {[m
[32m+[m[32m      Fluttertoast.showToast(msg: "Landmark is Empty");[m
[32m+[m[32m    } else if (City.text.isEmpty) {[m
[32m+[m[32m      Fluttertoast.showToast(msg: "City is Empty");[m
[32m+[m[32m    } else if (Area.text.isEmpty) {[m
[32m+[m[32m      Fluttertoast.showToast(msg: "Area is Empty");[m
[32m+[m[32m    } else if (ZipCode.text.isEmpty) {[m
[32m+[m[32m      Fluttertoast.showToast(msg: "ZipCode is Empty");[m
[32m+[m[32m    }[m
[32m+[m[32m    else if (setLocation == null) {[m
[32m+[m[32m      Fluttertoast.showToast(msg: "setLocation is Empty");[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    else {[m
[32m+[m[32m      isloading = true;[m
[32m+[m[32m      notifyListeners();[m
[32m+[m[32m    }[m
[32m+[m[32m    await FirebaseFirestore.instance[m
[32m+[m[32m        .collection("AddDeliveryAddress")[m
[32m+[m[32m        .doc(FirebaseAuth.instance.currentUser.uid)[m
[32m+[m[32m        .set({[m
[32m+[m[32m      "firstname": firstname.text,[m
[32m+[m[32m      "lastname": lastname.text,[m
[32m+[m[32m      "MobileNo": mobileNo.text,[m
[32m+[m[32m      "AlternateMobileNo": AlternateMobileNo.text,[m
[32m+[m[32m      "Colony": Colony.text,[m
[32m+[m[32m      "Street": Street.text,[m
[32m+[m[32m      "Landmark": Landmark.text,[m
[32m+[m[32m      "City": City.text,[m
[32m+[m[32m      "Area": Area.text,[m
[32m+[m[32m      "ZipCode": ZipCode.text,[m
[32m+[m[32m      "addressType": myType.toString(),[m
[32m+[m[32m      "latitude": setLocation.latitude,[m
[32m+[m[32m      "longitude": setLocation.longitude[m
[32m+[m[32m    }).then((value) async {[m
[32m+[m[32m      isloading = false;[m
[32m+[m[32m      await Fluttertoast.showToast(msg: "Add your delivery address");[m
[32m+[m[32m      Navigator.of(context).pop();[m
[32m+[m[32m      notifyListeners();[m
[32m+[m[32m    });[m
[32m+[m[32m    notifyListeners();[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  List<DeliveryAddressModel> deliveryaddressList = [];[m
[32m+[m
[32m+[m[32m   getDeliveryAddressData() async {[m
[32m+[m[32m    List<DeliveryAddressModel> newList = [];[m
[32m+[m
[32m+[m[32m    DeliveryAddressModel deliveryAddressModel;[m
[32m+[m[32m    DocumentSnapshot _db = await FirebaseFirestore.instance[m
[32m+[m[32m        .collection("AddDeliveryAddress")[m
[32m+[m[32m        .doc(FirebaseAuth.instance.currentUser.uid).get();[m
[32m+[m[32m    if (_db.exists) {[m
[32m+[m[32m      deliveryAddressModel = DeliveryAddressModel([m
[32m+[m[32m        firstName: _db.get("firstname"),[m
[32m+[m[32m        lastName: _db.get("lastname"),[m
[32m+[m[32m        addressType: _db.get("addressType"),[m
[32m+[m[32m        area: _db.get("Area"),[m
[32m+[m[32m        mobileNo: _db.get("MobileNo"),[m
[32m+[m[32m        alternateMobileNo: _db.get("AlternateMobileNo"),[m
[32m+[m[32m        city: _db.get("City"),[m
[32m+[m[32m        landMark: _db.get("Landmark"),[m
[32m+[m[32m        colony: _db.get("Colony"),[m
[32m+[m[32m        street: _db.get("Street"),[m
[32m+[m[32m        zipCode: _db.get("ZipCode"),[m
[32m+[m[32m      );[m
[32m+[m[32m      newList.add(deliveryAddressModel);[m
[32m+[m[32m     notifyListeners();[m
[32m+[m[32m    }[m
[32m+[m[32m    deliveryaddressList=newList;[m
[32m+[m[32m    notifyListeners();[m
[32m+[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  List<DeliveryAddressModel> get getDeliveryAddressList{[m
[32m+[m[32m     return deliveryaddressList;[m
[32m+[m[32m}[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/lib/providers/product_providers.dart b/lib/providers/product_providers.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..d21ca2a[m
[1m--- /dev/null[m
[1m+++ b/lib/providers/product_providers.dart[m
[36m@@ -0,0 +1,97 @@[m
[32m+[m[32mimport 'package:cloud_firestore/cloud_firestore.dart';[m
[32m+[m[32mimport 'package:flutter/material.dart';[m
[32m+[m[32mimport 'package:fooddeliveryapp/models/product_model.dart';[m
[32m+[m
[32m+[m[32mclass ProductProvider with ChangeNotifier {[m
[32m+[m
[32m+[m[32m  ProductModel productModel;[m
[32m+[m[32m  List<ProductModel>search=[];[m
[32m+[m
[32m+[m[32m  productModels(QueryDocumentSnapshot element){[m
[32m+[m[32m    productModel=ProductModel([m
[32m+[m[32m      productImage: element.get("productImage"),[m
[32m+[m[32m      productName: element.get("productName"),[m
[32m+[m[32m      productPrice: element.get("productPrice"),[m
[32m+[m[32m      productId: element.get("productId"),[m
[32m+[m[32m      productUnit: element.get("productUnit"),[m
[32m+[m[32m    );[m
[32m+[m[32m    search.add(productModel);[m
[32m+[m[32m  }[m
[32m+[m[32m  ///////////////// HerbsProduct ////////////////////////////////////////[m
[32m+[m
[32m+[m[32m  List<ProductModel> herbsProductList = [];[m
[32m+[m
[32m+[m[32m  fetchHerbsProductData() async {[m
[32m+[m[32m    List<ProductModel>newList = [];[m
[32m+[m[32m    QuerySnapshot value = await FirebaseFirestore.instance.collection([m
[32m+[m[32m        "HerbsProduct").get();[m
[32m+[m[32m    value.docs.forEach([m
[32m+[m[32m          (element) {[m
[32m+[m[32m        productModels(element);[m
[32m+[m
[32m+[m[32m        newList.add(productModel);[m
[32m+[m[32m      },[m
[32m+[m[32m    );[m
[32m+[m[32m    herbsProductList = newList;[m
[32m+[m[32m    notifyListeners();[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  List<ProductModel> get getHerbsProductDataList {[m
[32m+[m[32m    return herbsProductList;[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  ///////////////////////// FreshProducts //////////////////////////////////////////////////[m
[32m+[m
[32m+[m
[32m+[m[32m  List<ProductModel> freshProductList = [];[m
[32m+[m
[32m+[m
[32m+[m[32m  fetchFreshProductData() async  {[m
[32m+[m[32m    List<ProductModel>newList = [];[m
[32m+[m[32m    QuerySnapshot value = await FirebaseFirestore.instance.collection([m
[32m+[m[32m        "FreshProducts").get();[m
[32m+[m[32m    value.docs.forEach([m
[32m+[m[32m          (element) {[m
[32m+[m[32m        productModels(element);[m
[32m+[m[32m        newList.add(productModel);[m
[32m+[m[32m      },[m
[32m+[m[32m    );[m
[32m+[m[32m    freshProductList = newList;[m
[32m+[m[32m    notifyListeners();[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  List<ProductModel> get getFreshProductDataList {[m
[32m+[m[32m    return freshProductList;[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m///////////////////////// RootProducts //////////////////////////////////////////////////[m
[32m+[m
[32m+[m[32m  List<ProductModel> rootProductList = [];[m
[32m+[m
[32m+[m
[32m+[m[32m  fetchRootProductData() async {[m
[32m+[m[32m    List<ProductModel>newList = [];[m
[32m+[m[32m    QuerySnapshot value = await FirebaseFirestore.instance.collection([m
[32m+[m[32m        "RootProducts").get();[m
[32m+[m[32m    value.docs.forEach([m
[32m+[m[32m          (element) {[m
[32m+[m[32m            productModels(element);[m
[32m+[m[32m            newList.add(productModel);[m
[32m+[m[32m          },[m
[32m+[m[32m            );[m
[32m+[m[32m               rootProductList = newList;[m
[32m+[m[32m               notifyListeners();[m
[32m+[m
[32m+[m[32m        }[m
[32m+[m
[32m+[m[32m      List<ProductModel> get getRootProductDataList {[m
[32m+[m[32m      return rootProductList;[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m///////////////// Search Return ////////////////////////////////////////[m
[32m+[m
[32m+[m[32m  List<ProductModel> get getAllProductSearch{[m
[32m+[m[32m    return search;[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/lib/providers/user_provider.dart b/lib/providers/user_provider.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..84c2b08[m
[1m--- /dev/null[m
[1m+++ b/lib/providers/user_provider.dart[m
[36m@@ -0,0 +1,49 @@[m
[32m+[m[32mimport 'package:cloud_firestore/cloud_firestore.dart';[m
[32m+[m[32mimport 'package:firebase_auth/firebase_auth.dart';[m
[32m+[m[32mimport 'package:flutter/cupertino.dart';[m
[32m+[m[32mimport '../models/user_model.dart';[m
[32m+[m
[32m+[m[32mclass UserProvider with ChangeNotifier {[m
[32m+[m[32m  void addUserData({[m
[32m+[m[32m    User currentUser,[m
[32m+[m[32m    String userName,[m
[32m+[m[32m    String userImage,[m
[32m+[m[32m    String userEmail,[m
[32m+[m[32m  }) async {[m
[32m+[m[32m    await FirebaseFirestore.instance[m
[32m+[m[32m        .collection("usersData")[m
[32m+[m[32m        .doc(currentUser.uid)[m
[32m+[m[32m        .set([m
[32m+[m[32m      {[m
[32m+[m[32m        "userName": userName,[m
[32m+[m[32m        "userEmail": userEmail,[m
[32m+[m[32m        "userImage": userImage,[m
[32m+[m[32m        "userUid": currentUser.uid,[m
[32m+[m[32m      },[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  UserModel currentData;[m
[32m+[m
[32m+[m[32m  void getUserData() async {[m
[32m+[m[32m    UserModel userModel;[m
[32m+[m[32m    var value = await FirebaseFirestore.instance[m
[32m+[m[32m        .collection("usersData")[m
[32m+[m[32m        .doc(FirebaseAuth.instance.currentUser.uid)[m
[32m+[m[32m        .get();[m
[32m+[m[32m    if (value.exists) {[m
[32m+[m[32m      userModel = UserModel([m
[32m+[m[32m        userEmail: value.get("userEmail"),[m
[32m+[m[32m        userImage: value.get("userImage"),[m
[32m+[m[32m        userName: value.get("userName"),[m
[32m+[m[32m        userUid: value.get("userUid"),[m
[32m+[m[32m      );[m
[32m+[m[32m      currentData = userModel;[m
[32m+[m[32m      notifyListeners();[m
[32m+[m[32m    }[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  UserModel get currentUserData {[m
[32m+[m[32m    return currentData;[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/lib/providers/wishlist_provider.dart b/lib/providers/wishlist_provider.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..3c59da8[m
[1m--- /dev/null[m
[1m+++ b/lib/providers/wishlist_provider.dart[m
[36m@@ -0,0 +1,67 @@[m
[32m+[m[32mimport 'package:cloud_firestore/cloud_firestore.dart';[m
[32m+[m[32mimport 'package:firebase_auth/firebase_auth.dart';[m
[32m+[m[32mimport 'package:flutter/cupertino.dart';[m
[32m+[m
[32m+[m[32mimport '../models/product_model.dart';[m
[32m+[m
[32m+[m[32mclass WishListProvider with ChangeNotifier {[m
[32m+[m[32m  addWishListData({[m
[32m+[m[32m    String wishListId,[m
[32m+[m[32m    String wishListName,[m
[32m+[m[32m    var wishListPrice,[m
[32m+[m[32m    String wishListImage,[m
[32m+[m[32m    int wishListQuantity,[m
[32m+[m[32m  }) {[m
[32m+[m[32m    FirebaseFirestore.instance[m
[32m+[m[32m        .collection("WishList")[m
[32m+[m[32m        .doc(FirebaseAuth.instance.currentUser.uid)[m
[32m+[m[32m        .collection("YourWishList")[m
[32m+[m[32m        .doc(wishListId)[m
[32m+[m[32m        .set({[m
[32m+[m[32m      "wishListId": wishListId,[m
[32m+[m[32m      "wishListName": wishListName,[m
[32m+[m[32m      "wishListImage": wishListImage,[m
[32m+[m[32m      "wishListPrice": wishListPrice,[m
[32m+[m[32m      "wishListQuantity": wishListQuantity,[m
[32m+[m[32m      "wishList": true,[m
[32m+[m[32m    });[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m///// Get WishList Data ///////[m
[32m+[m[32m  List<ProductModel> wishList = [];[m
[32m+[m
[32m+[m[32m  getWishListData() async {[m
[32m+[m[32m    List<ProductModel> newList = [];[m
[32m+[m[32m    QuerySnapshot value = await FirebaseFirestore.instance[m
[32m+[m[32m        .collection("WishList")[m
[32m+[m[32m        .doc(FirebaseAuth.instance.currentUser.uid)[m
[32m+[m[32m        .collection("YourWishList")[m
[32m+[m[32m        .get();[m
[32m+[m[32m    value.docs.forEach([m
[32m+[m[32m          (element) {[m
[32m+[m[32m        ProductModel productModel = ProductModel([m
[32m+[m[32m          productId: element.get("wishListId"),[m
[32m+[m[32m          productImage: element.get("wishListImage"),[m
[32m+[m[32m          productName: element.get("wishListName"),[m
[32m+[m[32m          productPrice: element.get("wishListPrice"),[m
[32m+[m[32m          productQuantity: element.get("wishListQuantity"),[m
[32m+[m[32m        );[m
[32m+[m[32m        newList.add(productModel);[m
[32m+[m[32m      },[m
[32m+[m[32m    );[m
[32m+[m[32m    wishList = newList;[m
[32m+[m[32m    notifyListeners();[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  List<ProductModel> get getWishList {[m
[32m+[m[32m    return wishList;[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m////////// Delete WishList /////[m
[32m+[m[32m  deleteWishList(wishListId){[m
[32m+[m[32m    FirebaseFirestore.instance[m
[32m+[m[32m        .collection("WishList")[m
[32m+[m[32m        .doc(FirebaseAuth.instance.currentUser.uid)[m
[32m+[m[32m        .collection("YourWishList").doc(wishListId).delete();[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/lib/screens/home/drawer side.dart b/lib/screens/home/drawer side.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..6566eb3[m
[1m--- /dev/null[m
[1m+++ b/lib/screens/home/drawer side.dart[m	
[36m@@ -0,0 +1,166 @@[m
[32m+[m[32mimport 'package:flutter/material.dart';[m
[32m+[m[32mimport 'package:fooddeliveryapp/providers/user_provider.dart';[m
[32m+[m[32mimport 'package:fooddeliveryapp/screens/wishlist/wish_list.dart';[m
[32m+[m[32mimport '../../config/colors.dart';[m
[32m+[m[32mimport '../myprofile/my_profile.dart';[m
[32m+[m[32mimport '../review cart/review_cart.dart';[m
[32m+[m[32mimport 'homes_creen.dart';[m
[32m+[m[32mclass DrawerSide extends StatefulWidget {[m
[32m+[m[32m  UserProvider userProvider;[m
[32m+[m[32m  DrawerSide({this.userProvider});[m
[32m+[m
[32m+[m[32m  @override[m
[32m+[m[32m  _DrawerSideState createState() => _DrawerSideState();[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mclass _DrawerSideState extends State<DrawerSide> {[m
[32m+[m[32m  Widget listTile({String title, IconData iconData, Function onTap}) {[m
[32m+[m[32m    return Container([m
[32m+[m[32m      height: 50,[m
[32m+[m[32m      child: ListTile([m
[32m+[m[32m        onTap: onTap,[m
[32m+[m[32m        leading: Icon([m
[32m+[m[32m          iconData,[m
[32m+[m[32m          size: 32,[m
[32m+[m[32m        ),[m
[32m+[m[32m        title: Text([m
[32m+[m[32m          title,[m
[32m+[m[32m          style: TextStyle(color: textColor),[m
[32m+[m[32m        ),[m
[32m+[m[32m      ),[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m[32m  @override[m
[32m+[m[32m  Widget build(BuildContext context) {[m
[32m+[m[32m    var userData=widget.userProvider.currentUserData;[m
[32m+[m[32m    return Drawer([m
[32m+[m[32m      child: Container([m
[32m+[m[32m        color: primaryColor,[m
[32m+[m[32m        child: ListView([m
[32m+[m[32m          children: [[m
[32m+[m[32m            DrawerHeader([m
[32m+[m[32m              child: SingleChildScrollView([m
[32m+[m[32m                scrollDirection: Axis.horizontal,[m
[32m+[m[32m                child: Row([m
[32m+[m[32m                  children: [[m
[32m+[m[32m                    CircleAvatar([m
[32m+[m[32m                      radius: 43,[m
[32m+[m[32m                      backgroundColor: Colors.white54,[m
[32m+[m[32m                      child: CircleAvatar([m
[32m+[m[32m                        backgroundColor: Colors.yellow,[m
[32m+[m[32m                        backgroundImage: NetworkImage([m
[32m+[m[32m                          userData.userImage??[m
[32m+[m[32m                              "https://s3.envato.com/files/328957910/vegi_thumb.png",[m
[32m+[m[32m                        ),[m
[32m+[m[32m                        radius: 40,[m
[32m+[m[32m                      ),[m
[32m+[m[32m                    ),[m
[32m+[m[32m                    SizedBox([m
[32m+[m[32m                      width: 20,[m
[32m+[m[32m                    ),[m
[32m+[m[32m                    Column([m
[32m+[m[32m                      mainAxisAlignment: MainAxisAlignment.center,[m
[32m+[m[32m                      crossAxisAlignment: CrossAxisAlignment.start,[m
[32m+[m[32m                      children: [[m
[32m+[m[32m                        Text(userData.userName),[m
[32m+[m[32m                        Text(userData.userEmail,overflow: TextOverflow.ellipsis,),[m
[32m+[m[32m                      ],[m
[32m+[m[32m                    )[m
[32m+[m[32m                  ],[m
[32m+[m[32m                ),[m
[32m+[m[32m              ),[m
[32m+[m[32m            ),[m
[32m+[m[32m            listTile([m
[32m+[m[32m              iconData: Icons.home_outlined,[m
[32m+[m[32m              title: "Home",[m
[32m+[m[32m              onTap: () {[m
[32m+[m[32m                Navigator.of(context).push([m
[32m+[m[32m                  MaterialPageRoute([m
[32m+[m[32m                    builder: (context) => HomeScreen(),[m
[32m+[m[32m                  ),[m
[32m+[m[32m                );[m
[32m+[m[32m              },[m
[32m+[m[32m            ),[m
[32m+[m[32m            listTile([m
[32m+[m[32m              iconData: Icons.shop_outlined,[m
[32m+[m[32m              title: "Review Cart",[m
[32m+[m[32m              onTap: () {[m
[32m+[m[32m                Navigator.of(context).push(MaterialPageRoute(builder: (context)=>ReviewCart(),),);[m
[32m+[m[32m              },[m
[32m+[m[32m            ),[m
[32m+[m[32m            listTile([m
[32m+[m[32m              iconData: Icons.person_outlined,[m
[32m+[m[32m              title: "My Profile",[m
[32m+[m[32m              onTap: () {[m
[32m+[m[32m                Navigator.of(context).push(MaterialPageRoute(builder: (context)=>MyProfile(userProvider:widget.userProvider)));[m
[32m+[m[32m              },[m
[32m+[m[32m            ),[m
[32m+[m[32m            listTile([m
[32m+[m[32m                iconData: Icons.notifications_outlined, title: "Notification"),[m
[32m+[m[32m            listTile(iconData: Icons.star_outline, title: "Rating & Review"),[m
[32m+[m[32m            listTile([m
[32m+[m[32m                iconData: Icons.favorite_outline,[m
[32m+[m[32m                title: "Wishlist",[m
[32m+[m[32m                onTap: () {[m
[32m+[m[32m                  Navigator.of(context).push(MaterialPageRoute(builder:(context)=> WishList()));[m
[32m+[m[32m                }),[m
[32m+[m
[32m+[m[32m            listTile(iconData: Icons.copy_outlined, title: "Raise a Complaint"),[m
[32m+[m[32m            listTile(iconData: Icons.format_quote_outlined, title: "FAQs"),[m
[32m+[m[32m            Container([m
[32m+[m[32m              height: 350,[m
[32m+[m[32m              padding: EdgeInsets.symmetric(horizontal: 20),[m
[32m+[m[32m              child: Column([m
[32m+[m[32m                crossAxisAlignment: CrossAxisAlignment.start,[m
[32m+[m[32m                children: [[m
[32m+[m[32m                  Text("Contact Support"),[m
[32m+[m[32m                  SizedBox([m
[32m+[m[32m                    height: 10,[m
[32m+[m[32m                  ),[m
[32m+[m[32m                  Row([m
[32m+[m[32m                    children: [[m
[32m+[m[32m                      Text("Call us:"),[m
[32m+[m[32m                      SizedBox([m
[32m+[m[32m                        width: 10,[m
[32m+[m[32m                      ),[m
[32m+[m[32m                      Text("+923304582501"),[m
[32m+[m[32m                    ],[m
[32m+[m[32m                  ),[m
[32m+[m[32m                  SizedBox([m
[32m+[m[32m                    height: 5,[m
[32m+[m[32m                  ),[m
[32m+[m[32m                  SingleChildScrollView([m
[32m+[m[32m                    scrollDirection: Axis.horizontal,[m
[32m+[m[32m                    child: Row([m
[32m+[m[32m                      children: [[m
[32m+[m[32m                        Text("Mail us:"),[m
[32m+[m[32m                        SizedBox([m
[32m+[m[32m                          width: 10,[m
[32m+[m[32m                        ),[m
[32m+[m[32m                        Text([m
[32m+[m[32m                          "muhammad.haad96@gmail.com",[m
[32m+[m[32m                          overflow: TextOverflow.ellipsis,[m
[32m+[m[32m                        ),[m
[32m+[m[32m                      ],[m
[32m+[m[32m                    ),[m
[32m+[m[32m                  ),[m
[32m+[m[32m                ],[m
[32m+[m[32m              ),[m
[32m+[m[32m            )[m
[32m+[m[32m          ],[m
[32m+[m[32m        ),[m
[32m+[m[32m      ),[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[1mdiff --git a/lib/screens/home/homes_creen.dart b/lib/screens/home/homes_creen.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..86d96e5[m
[1m--- /dev/null[m
[1m+++ b/lib/screens/home/homes_creen.dart[m
[36m@@ -0,0 +1,369 @@[m
[32m+[m[32mimport 'package:flutter/material.dart';[m
[32m+[m[32mimport 'package:fooddeliveryapp/screens/home/single%20product.dart';[m
[32m+[m[32mimport 'package:provider/provider.dart';[m
[32m+[m[32mimport '../../config/colors.dart';[m
[32m+[m[32mimport '../../providers/product_providers.dart';[m
[32m+[m[32mimport '../../providers/user_provider.dart';[m
[32m+[m[32mimport '../product details/product_overview.dart';[m
[32m+[m[32mimport '../review cart/review_cart.dart';[m
[32m+[m[32mimport '../seaarch/search_bar.dart';[m
[32m+[m[32mimport 'drawer side.dart';[m
[32m+[m
[32m+[m
[32m+[m[32mclass HomeScreen extends StatefulWidget {[m
[32m+[m[32m  @override[m
[32m+[m[32m  _HomeScreenState createState() => _HomeScreenState();[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mclass _HomeScreenState extends State<HomeScreen> {[m
[32m+[m[32m  ProductProvider productProvider;[m
[32m+[m
[32m+[m[32m  Widget _buildHerbsProduct(context) {[m
[32m+[m[32m    return Column(crossAxisAlignment: CrossAxisAlignment.start, children: [[m
[32m+[m[32m      Padding([m
[32m+[m[32m        padding: const EdgeInsets.symmetric(vertical: 20),[m
[32m+[m[32m        child: Row([m
[32m+[m[32m          mainAxisAlignment: MainAxisAlignment.spaceBetween,[m
[32m+[m[32m          children: [[m
[32m+[m[32m            Text('Herbs Seasonings'),[m
[32m+[m[32m            GestureDetector([m
[32m+[m[32m              onTap: (){[m
[32m+[m[32m                Navigator.of(context).push(MaterialPageRoute(builder: (context)=>Search([m
[32m+[m[32m                  search: productProvider.getHerbsProductDataList,[m
[32m+[m[32m                ),),);[m
[32m+[m[32m              },[m
[32m+[m[32m              child: Text([m
[32m+[m[32m                'view all',[m
[32m+[m[32m                style: TextStyle(color: Colors.grey),[m
[32m+[m[32m              ),[m
[32m+[m[32m            ),[m
[32m+[m[32m          ],[m
[32m+[m[32m        ),[m
[32m+[m[32m      ),[m
[32m+[m
[32m+[m[32m      SingleChildScrollView([m
[32m+[m[32m        scrollDirection: Axis.horizontal,[m
[32m+[m[32m        child: Row([m
[32m+[m[32m          children: productProvider.getHerbsProductDataList[m
[32m+[m[32m              .map((herbsProductData){[m
[32m+[m[32m            return SingleProduct([m
[32m+[m[32m              onTap: () {[m
[32m+[m[32m                Navigator.of(context).push(MaterialPageRoute([m
[32m+[m[32m                    builder: (context) => Productoverview([m
[32m+[m[32m                      productId: herbsProductData.productId,[m
[32m+[m[32m                      productPrice: herbsProductData.productPrice,[m
[32m+[m[32m                      productName: herbsProductData.productName,[m
[32m+[m[32m                      productImage:herbsProductData.productImage,[m
[32m+[m[32m                    )));[m
[32m+[m[32m              },[m
[32m+[m[32m              productId: herbsProductData.productId,[m
[32m+[m[32m              productPrice: herbsProductData.productPrice,[m
[32m+[m[32m              productImage:herbsProductData.productImage,[m
[32m+[m[32m              productName: herbsProductData.productName,[m
[32m+[m[32m              productUnit: herbsProductData,[m
[32m+[m[32m            );[m
[32m+[m[32m          }[m
[32m+[m[32m          ).toList(),[m
[32m+[m[32m          //children: [],[m
[32m+[m[32m        ),[m
[32m+[m[32m      ),[m
[32m+[m[32m    ],[m
[32m+[m[32m    );[m
[32m+[m[32m  // Row([m
[32m+[m[32m      //   children: [[m
[32m+[m[32m      //     Container([m
[32m+[m[32m      //       height: 230,[m
[32m+[m[32m      //       width: 160,[m
[32m+[m[32m      //       decoration: BoxDecoration([m
[32m+[m[32m      //           color: Color(0xffd9dad9),[m
[32m+[m[32m      //           borderRadius: BorderRadius.circular(10)[m
[32m+[m[32m      //       ),[m
[32m+[m[32m      //       child: Column([m
[32m+[m[32m      //         crossAxisAlignment: CrossAxisAlignment.start,[m
[32m+[m[32m      //         children: [[m
[32m+[m[32m      //           Expanded([m
[32m+[m[32m      //             flex: 2,[m
[32m+[m[32m      //             child: Image.network('https://assets.stickpng.com/images/5b4eed0cc051e602a568ce0c.png'),[m
[32m+[m[32m      //           ),[m
[32m+[m[32m      //           Expanded([m
[32m+[m[32m      //               child: Padding([m
[32m+[m[32m      //                 padding: EdgeInsets.symmetric(horizontal:10 ,vertical:5 ),[m
[32m+[m[32m      //                 child: Column([m
[32m+[m[32m      //                   crossAxisAlignment: CrossAxisAlignment.start,[m
[32m+[m[32m      //                   children: [[m
[32m+[m[32m      //                     Text("Fresh Basil",style: TextStyle(color: Colors.black,fontWeight: FontWeight.bold),[m
[32m+[m[32m      //                     ),[m
[32m+[m[32m      //                     Text('40\$/50Gram',style: TextStyle(color: Colors.grey),)[m
[32m+[m[32m      //                   ],[m
[32m+[m[32m      //                 ),[m
[32m+[m[32m      //               )[m
[32m+[m[32m      //           )[m
[32m+[m[32m      //         ],[m
[32m+[m[32m      //       ),[m
[32m+[m[32m      //     )[m
[32m+[m[32m      //   ],[m
[32m+[m[32m      // )[m
[32m+[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  Widget _buildFreshProduct(context) {[m
[32m+[m[32m    return Column([m
[32m+[m[32m      crossAxisAlignment: CrossAxisAlignment.start,[m
[32m+[m[32m      children: [[m
[32m+[m[32m        Padding([m
[32m+[m[32m          padding: const EdgeInsets.symmetric(vertical: 20),[m
[32m+[m[32m          child: Row([m
[32m+[m[32m            mainAxisAlignment: MainAxisAlignment.spaceBetween,[m
[32m+[m[32m            children: [[m
[32m+[m[32m              Text('Fresh Fruits'),[m
[32m+[m[32m              GestureDetector([m
[32m+[m[32m                onTap: (){[m
[32m+[m[32m                  Navigator.of(context).push(MaterialPageRoute(builder: (context)=>Search([m
[32m+[m[32m                    search: productProvider.getFreshProductDataList,[m
[32m+[m[32m                  ),),);[m
[32m+[m[32m                },[m
[32m+[m[32m                child: Text([m
[32m+[m[32m                  'view all',[m
[32m+[m[32m                  style: TextStyle(color: Colors.grey),[m
[32m+[m[32m                ),[m
[32m+[m[32m              ),[m
[32m+[m[32m            ],[m
[32m+[m[32m          ),[m
[32m+[m[32m        ),[m
[32m+[m[32m        SingleChildScrollView([m
[32m+[m[32m          scrollDirection: Axis.horizontal,[m
[32m+[m[32m          child: Row([m
[32m+[m[32m              children: productProvider.getFreshProductDataList[m
[32m+[m[32m                  .map((freshProductData) {[m
[32m+[m[32m                return SingleProduct([m
[32m+[m[32m                  onTap: () {[m
[32m+[m[32m                    Navigator.of(context).push(MaterialPageRoute([m
[32m+[m[32m                        builder: (context) => Productoverview([m
[32m+[m[32m                          productId: freshProductData.productId,[m
[32m+[m[32m                          productPrice: freshProductData.productPrice,[m
[32m+[m[32m                          productName: freshProductData.productName,[m
[32m+[m[32m                          productImage:freshProductData.productImage,[m
[32m+[m[32m                        )));[m
[32m+[m[32m                  },[m
[32m+[m[32m                  productId: freshProductData.productId,[m
[32m+[m[32m                  productPrice: freshProductData.productPrice,[m
[32m+[m[32m                  productImage:freshProductData.productImage,[m
[32m+[m[32m                  productName: freshProductData.productName,[m
[32m+[m[32m                  productUnit: freshProductData,[m
[32m+[m[32m                );[m
[32m+[m[32m              },[m
[32m+[m[32m              ).toList()[m
[32m+[m[32m          ),[m
[32m+[m[32m        ),[m
[32m+[m[32m      ],[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m[32m  //[m
[32m+[m[32m  Widget _buildRootProduct() {[m
[32m+[m[32m    return Column([m
[32m+[m[32m      crossAxisAlignment: CrossAxisAlignment.start,[m
[32m+[m[32m      children: [[m
[32m+[m[32m        Padding([m
[32m+[m[32m          padding: const EdgeInsets.symmetric(vertical: 20),[m
[32m+[m[32m          child: Row([m
[32m+[m[32m            mainAxisAlignment: MainAxisAlignment.spaceBetween,[m
[32m+[m[32m            children: [[m
[32m+[m[32m              Text('Root Vegetable'),[m
[32m+[m[32m              GestureDetector([m
[32m+[m[32m                onTap: (){[m
[32m+[m[32m                  Navigator.of(context).push([m
[32m+[m[32m                    MaterialPageRoute([m
[32m+[m[32m                      builder: (context) => Search([m
[32m+[m[32m                        search: productProvider.getRootProductDataList,[m
[32m+[m[32m                      ),[m
[32m+[m[32m                    ),[m
[32m+[m[32m                  );[m
[32m+[m[32m                },[m
[32m+[m[32m                child: Text([m
[32m+[m[32m                  'view all',[m
[32m+[m[32m                  style: TextStyle(color: Colors.grey),[m
[32m+[m[32m                ),[m
[32m+[m[32m              ),[m
[32m+[m[32m            ],[m
[32m+[m[32m          ),[m
[32m+[m[32m        ),[m
[32m+[m[32m        SingleChildScrollView([m
[32m+[m[32m          scrollDirection: Axis.horizontal,[m
[32m+[m[32m          child: Row([m
[32m+[m[32m              children: productProvider.getRootProductDataList[m
[32m+[m[32m                  .map((rootProductData) {[m
[32m+[m[32m                return SingleProduct([m
[32m+[m[32m                  onTap: () {[m
[32m+[m[32m                    Navigator.of(context).push(MaterialPageRoute([m
[32m+[m[32m                        builder: (context) => Productoverview([m
[32m+[m[32m                          productId: rootProductData.productId,[m
[32m+[m[32m                          productPrice: rootProductData.productPrice,[m
[32m+[m[32m                          productName: rootProductData.productName,[m
[32m+[m[32m                          productImage: rootProductData.productImage,[m
[32m+[m[32m                        )));[m
[32m+[m[32m                  },[m
[32m+[m[32m                  productId: rootProductData.productId,[m
[32m+[m[32m                  productPrice: rootProductData.productPrice,[m
[32m+[m[32m                  productImage:rootProductData.productImage,[m
[32m+[m[32m                  productName: rootProductData.productName,[m
[32m+[m[32m                  productUnit: rootProductData,[m
[32m+[m[32m                );[m
[32m+[m[32m              },[m
[32m+[m[32m              ).toList()[m
[32m+[m[32m          ),[m
[32m+[m[32m        ),[m
[32m+[m[32m      ],[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m[32m  //[m
[32m+[m[32m  @override[m
[32m+[m[32m  void initState() {[m
[32m+[m[32m    ProductProvider initproductProvider = Provider.of(context, listen: false);[m
[32m+[m[32m    initproductProvider.fetchHerbsProductData();[m
[32m+[m[32m    initproductProvider.fetchFreshProductData();[m
[32m+[m[32m    initproductProvider.fetchRootProductData();[m
[32m+[m[32m    super.initState();[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m   @override[m
[32m+[m[32m   Widget build(BuildContext context) {[m
[32m+[m[32m    productProvider = Provider.of(context);[m
[32m+[m[32m   UserProvider userProvider = Provider.of(context);[m
[32m+[m[32m   userProvider.getUserData();[m
[32m+[m[32m    return Scaffold([m
[32m+[m[32m      drawer: DrawerSide(userProvider: userProvider,),[m
[32m+[m[32m      appBar: AppBar([m
[32m+[m[32m        iconTheme: IconThemeData(color: textColor),[m
[32m+[m[32m        title: Text([m
[32m+[m[32m          'Home',[m
[32m+[m[32m          style: TextStyle(color: textColor, fontSize: 17),[m
[32m+[m[32m        ),[m
[32m+[m[32m        backgroundColor: Color(0xffd6b738),[m
[32m+[m[32m        actions: [[m
[32m+[m[32m          CircleAvatar([m
[32m+[m[32m            radius: 15,[m
[32m+[m[32m            backgroundColor: Color(0xffd6d382),[m
[32m+[m[32m            child: IconButton([m
[32m+[m[32m              onPressed: () {[m
[32m+[m[32m                Navigator.of(context).push([m
[32m+[m[32m                  MaterialPageRoute([m
[32m+[m[32m                    builder: (context) => Search([m
[32m+[m[32m                       search: productProvider.getAllProductSearch[m
[32m+[m[32m                    ),[m
[32m+[m[32m                  ),[m
[32m+[m[32m                );[m
[32m+[m[32m              },[m
[32m+[m[32m              icon: Icon([m
[32m+[m[32m                Icons.search,[m
[32m+[m[32m                size: 17,[m
[32m+[m[32m                color: textColor,[m
[32m+[m[32m              ),[m
[32m+[m[32m            ),[m
[32m+[m[32m          ),[m
[32m+[m[32m          Padding([m
[32m+[m[32m            padding: const EdgeInsets.symmetric(horizontal: 5),[m
[32m+[m[32m            child: GestureDetector([m
[32m+[m[32m              onTap: (){[m
[32m+[m[32m                Navigator.of(context).push(MaterialPageRoute(builder: (context)=>ReviewCart()));[m
[32m+[m[32m              },[m
[32m+[m[32m              child: CircleAvatar([m
[32m+[m[32m                backgroundColor: Color(0xffd6d382),[m
[32m+[m[32m                radius: 15,[m
[32m+[m[32m                child: Icon([m
[32m+[m[32m                  Icons.shop,[m
[32m+[m[32m                  size: 17,[m
[32m+[m[32m                  color: textColor,[m
[32m+[m[32m                ),[m
[32m+[m[32m              ),[m
[32m+[m[32m            ),[m
[32m+[m[32m          ),[m
[32m+[m[32m        ],[m
[32m+[m[32m      ),[m
[32m+[m[32m      body: Padding([m
[32m+[m[32m        padding: const EdgeInsets.symmetric(vertical: 10, horizontal: 10),[m
[32m+[m[32m        child: ListView([m
[32m+[m[32m          children: [[m
[32m+[m[32m            Container([m
[32m+[m[32m              height: 150,[m
[32m+[m[32m              decoration: BoxDecoration([m
[32m+[m[32m                image: DecorationImage([m
[32m+[m[32m                  fit: BoxFit.cover,[m
[32m+[m[32m                  image: NetworkImage([m
[32m+[m[32m                      'https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQi0Xg-k622Sbztlrb-L1o1CAla3zCbVc2lUw&usqp=CAU'),[m
[32m+[m[32m                ),[m
[32m+[m[32m                color: Colors.red,[m
[32m+[m[32m                borderRadius: BorderRadius.circular(10),[m
[32m+[m[32m              ),[m
[32m+[m[32m              child: Row([m
[32m+[m[32m                children: [[m
[32m+[m[32m                  Expanded([m
[32m+[m[32m                    flex: 2,[m
[32m+[m[32m                    child: Container([m
[32m+[m[32m                      child: Column([m
[32m+[m[32m                        children: [[m
[32m+[m[32m                          Padding([m
[32m+[m[32m                            padding:[m
[32m+[m[32m                            const EdgeInsets.only(right: 130, bottom: 10),[m
[32m+[m[32m                            child: Container([m
[32m+[m[32m                              height: 50,[m
[32m+[m[32m                              width: 100,[m
[32m+[m[32m                              decoration: BoxDecoration([m
[32m+[m[32m                                color: Color(0xffd1ad17),[m
[32m+[m[32m                                borderRadius: BorderRadius.only([m
[32m+[m[32m                                  bottomRight: Radius.circular(50),[m
[32m+[m[32m                                  bottomLeft: Radius.circular(50),[m
[32m+[m[32m                                ),[m
[32m+[m[32m                              ),[m
[32m+[m[32m                              child: Center([m
[32m+[m[32m                                child: Text([m
[32m+[m[32m                                  'Veggie',[m
[32m+[m[32m                                  style: TextStyle([m
[32m+[m[32m                                    fontSize: 20,[m
[32m+[m[32m                                    color: Colors.white,[m
[32m+[m[32m                                    shadows: [[m
[32m+[m[32m                                      BoxShadow([m
[32m+[m[32m                                          color: Colors.green,[m
[32m+[m[32m                                          blurRadius: 10,[m
[32m+[m[32m                                          offset: Offset(3, 3))[m
[32m+[m[32m                                    ],[m
[32m+[m[32m                                  ),[m
[32m+[m[32m                                ),[m
[32m+[m[32m                              ),[m
[32m+[m[32m                            ),[m
[32m+[m[32m                          ),[m
[32m+[m[32m                          Text([m
[32m+[m[32m                            '30% Off',[m
[32m+[m[32m                            style: TextStyle([m
[32m+[m[32m                                fontSize: 40,[m
[32m+[m[32m                                color: Colors.green[100],[m
[32m+[m[32m                                fontWeight: FontWeight.bold),[m
[32m+[m[32m                          ),[m
[32m+[m[32m                          Padding([m
[32m+[m[32m                            padding: const EdgeInsets.only(left: 20),[m
[32m+[m[32m                            child: Text([m
[32m+[m[32m                              'On all vegetables products',[m
[32m+[m[32m                              style: TextStyle([m
[32m+[m[32m                                color: Colors.white,[m
[32m+[m[32m                              ),[m
[32m+[m[32m                            ),[m
[32m+[m[32m                          ),[m
[32m+[m[32m                        ],[m
[32m+[m[32m                      ),[m
[32m+[m[32m                    ),[m
[32m+[m[32m                  ),[m
[32m+[m[32m                  Expanded([m
[32m+[m[32m                    child: Container(),[m
[32m+[m[32m                  ),[m
[32m+[m[32m                ],[m
[32m+[m[32m              ),[m
[32m+[m[32m            ),[m
[32m+[m[32m            _buildHerbsProduct(context),[m
[32m+[m[32m            _buildFreshProduct(context),[m
[32m+[m[32m             _buildRootProduct(),[m
[32m+[m[32m            _buildHerbsProduct(context),[m
[32m+[m[32m          ],[m
[32m+[m[32m        ),[m
[32m+[m[32m      ),[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/lib/screens/home/single product.dart b/lib/screens/home/single product.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..364ce36[m
[1m--- /dev/null[m
[1m+++ b/lib/screens/home/single product.dart[m	
[36m@@ -0,0 +1,157 @@[m
[32m+[m[32mimport 'package:flutter/material.dart';[m
[32m+[m[32mimport '../../config/colors.dart';[m
[32m+[m[32mimport '../../models/product_model.dart';[m
[32m+[m[32mimport '../../widgets/count.dart';[m
[32m+[m[32mimport '../../widgets/product_unit.dart';[m
[32m+[m
[32m+[m[32mclass SingleProduct extends StatefulWidget {[m
[32m+[m[32m  final String productImage;[m
[32m+[m[32m  final String productName;[m
[32m+[m[32m  final int productPrice;[m
[32m+[m[32m  final Function onTap;[m
[32m+[m[32m  final String productId;[m
[32m+[m[32m  final ProductModel productUnit;[m
[32m+[m[32m  SingleProduct([m
[32m+[m[32m      {this.productId,[m
[32m+[m[32m        this.productImage,[m
[32m+[m[32m        this.productName,[m
[32m+[m[32m        this.productUnit,[m
[32m+[m[32m        this.onTap,[m
[32m+[m[32m        this.productPrice});[m
[32m+[m
[32m+[m[32m  @override[m
[32m+[m[32m  _SingleProductState createState() => _SingleProductState();[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mclass _SingleProductState extends State<SingleProduct> {[m
[32m+[m[32m  var unitData;[m
[32m+[m[32m  var firstValue;[m
[32m+[m[32m  @override[m
[32m+[m[32m  Widget build(BuildContext context) {[m
[32m+[m[32m    widget.productUnit.productUnit.firstWhere((element) {[m
[32m+[m[32m      setState(() {[m
[32m+[m[32m        firstValue = element;[m
[32m+[m[32m      });[m
[32m+[m[32m      return true;[m
[32m+[m[32m    });[m
[32m+[m[32m    return SingleChildScrollView([m
[32m+[m[32m      scrollDirection: Axis.horizontal,[m
[32m+[m[32m      child: Row([m
[32m+[m[32m        children: [[m
[32m+[m[32m          Container([m
[32m+[m[32m            margin: EdgeInsets.only(right: 10),[m
[32m+[m[32m            height: 230,[m
[32m+[m[32m            width: 165,[m
[32m+[m[32m            decoration: BoxDecoration([m
[32m+[m[32m              color: Color(0xffd9dad9),[m
[32m+[m[32m              borderRadius: BorderRadius.circular(10),[m
[32m+[m[32m            ),[m
[32m+[m[32m            child: Column([m
[32m+[m[32m              crossAxisAlignment: CrossAxisAlignment.start,[m
[32m+[m[32m              children: [[m
[32m+[m[32m                GestureDetector([m
[32m+[m[32m                  onTap: widget.onTap,[m
[32m+[m[32m                  child: Container([m
[32m+[m[32m                    height: 150,[m
[32m+[m[32m                    padding: EdgeInsets.all(5),[m
[32m+[m[32m                    width: double.infinity,[m
[32m+[m[32m                    child: Image.network([m
[32m+[m[32m                      widget.productImage,[m
[32m+[m[32m                    ),[m
[32m+[m[32m                  ),[m
[32m+[m[32m                ),[m
[32m+[m[32m                Expanded([m
[32m+[m[32m                  flex: 2,[m
[32m+[m[32m                  child: Padding([m
[32m+[m[32m                    padding:[m
[32m+[m[32m                    const EdgeInsets.symmetric(horizontal: 10, vertical: 5),[m
[32m+[m[32m                    child: Column([m
[32m+[m[32m                      crossAxisAlignment: CrossAxisAlignment.start,[m
[32m+[m[32m                      children: [[m
[32m+[m[32m                        Text([m
[32m+[m[32m                          widget.productName,[m
[32m+[m[32m                          style: TextStyle([m
[32m+[m[32m                            color: textColor,[m
[32m+[m[32m                            fontWeight: FontWeight.bold,[m
[32m+[m[32m                          ),[m
[32m+[m[32m                        ),[m
[32m+[m[32m                        Text([m
[32m+[m[32m                          '${widget.productPrice}\$/${unitData == null?firstValue:unitData}',[m
[32m+[m[32m                          style: TextStyle([m
[32m+[m[32m                            color: Colors.grey,[m
[32m+[m[32m                          ),[m
[32m+[m[32m                        ),[m
[32m+[m[32m                        SizedBox([m
[32m+[m[32m                          height: 5,[m
[32m+[m[32m                        ),[m
[32m+[m[32m                        Row([m
[32m+[m[32m                          children: [[m
[32m+[m[32m                            Expanded([m
[32m+[m[32m                              child: ProductUnit([m
[32m+[m[32m                                onTap: () {[m
[32m+[m[32m                                  showModalBottomSheet([m
[32m+[m[32m                                      context: context,[m
[32m+[m[32m                                      builder: (context) {[m
[32m+[m[32m                                        return Column([m
[32m+[m[32m                                          mainAxisSize: MainAxisSize.min,[m
[32m+[m[32m                                          crossAxisAlignment:[m
[32m+[m[32m                                          CrossAxisAlignment.start,[m
[32m+[m[32m                                          children: widget[m
[32m+[m[32m                                              .productUnit.productUnit[m
[32m+[m[32m                                              .map<Widget>((data) {[m
[32m+[m[32m                                            return Column([m
[32m+[m[32m                                              children: [[m
[32m+[m[32m                                                Padding([m
[32m+[m[32m                                                  padding: const EdgeInsets[m
[32m+[m[32m                                                      .symmetric([m
[32m+[m[32m                                                      vertical: 10,[m
[32m+[m[32m                                                      horizontal: 10),[m
[32m+[m[32m                                                  child: InkWell([m
[32m+[m[32m                                                    onTap: () async {[m
[32m+[m[32m                                                      setState(() {[m
[32m+[m[32m                                                        unitData = data;[m
[32m+[m[32m                                                      });[m
[32m+[m[32m                                                      Navigator.of(context)[m
[32m+[m[32m                                                          .pop();[m
[32m+[m[32m                                                    },[m
[32m+[m[32m                                                    child: Text([m
[32m+[m[32m                                                      data,[m
[32m+[m[32m                                                      style: TextStyle([m
[32m+[m[32m                                                          color: primaryColor,[m
[32m+[m[32m                                                          fontSize: 18),[m
[32m+[m[32m                                                    ),[m
[32m+[m[32m                                                  ),[m
[32m+[m[32m                                                ),[m
[32m+[m[32m                                              ],[m
[32m+[m[32m                                            );[m
[32m+[m[32m                                          }).toList(),[m
[32m+[m[32m                                        );[m
[32m+[m[32m                                      });[m
[32m+[m[32m                                },[m
[32m+[m[32m                                title: unitData == null?firstValue:unitData,[m
[32m+[m[32m                              ),[m
[32m+[m[32m                            ),[m
[32m+[m[32m                            SizedBox([m
[32m+[m[32m                              width: 5,[m
[32m+[m[32m                            ),[m
[32m+[m[32m                            Count([m
[32m+[m[32m                              productId: widget.productId,[m
[32m+[m[32m                              productImage: widget.productImage,[m
[32m+[m[32m                              productName: widget.productName,[m
[32m+[m[32m                              productPrice: widget.productPrice,[m
[32m+[m[32m                              productUnit: unitData == null?firstValue:unitData,[m
[32m+[m[32m                            ),[m
[32m+[m[32m                          ],[m
[32m+[m[32m                        ),[m
[32m+[m[32m                      ],[m
[32m+[m[32m                    ),[m
[32m+[m[32m                  ),[m
[32m+[m[32m                ),[m
[32m+[m[32m              ],[m
[32m+[m[32m            ),[m
[32m+[m[32m          ),[m
[32m+[m[32m        ],[m
[32m+[m[32m      ),[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/lib/screens/myprofile/my_profile.dart b/lib/screens/myprofile/my_profile.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..bc421c5[m
[1m--- /dev/null[m
[1m+++ b/lib/screens/myprofile/my_profile.dart[m
[36m@@ -0,0 +1,169 @@[m
[32m+[m[32mimport 'package:firebase_auth/firebase_auth.dart';[m
[32m+[m[32mimport 'package:flutter/material.dart';[m
[32m+[m[32mimport 'package:fooddeliveryapp/check_out/deliverydetails/delivery_details.dart';[m
[32m+[m[32mimport 'package:fooddeliveryapp/config/colors.dart';[m
[32m+[m[32mimport 'package:fooddeliveryapp/providers/user_provider.dart';[m
[32m+[m[32mimport 'package:fooddeliveryapp/screens/review%20cart/review_cart.dart';[m
[32m+[m[32mimport '../../methods/methods.dart';[m
[32m+[m[32mimport '../home/drawer side.dart';[m
[32m+[m
[32m+[m[32mclass MyProfile extends StatefulWidget {[m
[32m+[m[32m  UserProvider userProvider;[m
[32m+[m[32m  MyProfile({this.userProvider});[m
[32m+[m
[32m+[m[32m  @override[m
[32m+[m[32m  State<MyProfile> createState() => _MyProfileState();[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mclass _MyProfileState extends State<MyProfile> {[m
[32m+[m[32m  Widget listTile({IconData icon,String title }){[m
[32m+[m[32m    return Column([m
[32m+[m[32m      children: [[m
[32m+[m[32m        Divider([m
[32m+[m[32m          height: 1,[m
[32m+[m[32m        ),[m
[32m+[m[32m        ListTile([m
[32m+[m[32m          leading:Icon(icon),[m
[32m+[m[32m          title:Text(title),[m
[32m+[m[32m          trailing: Icon(Icons.arrow_forward_ios),[m
[32m+[m
[32m+[m[32m        )[m
[32m+[m[32m      ],[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  @override[m
[32m+[m[32m  Widget build(BuildContext context) {[m
[32m+[m[32m    var userData=widget.userProvider.currentUserData;[m
[32m+[m[32m    return Scaffold([m
[32m+[m[32m      backgroundColor: primaryColor,[m
[32m+[m[32m      appBar: AppBar([m
[32m+[m[32m        iconTheme: IconThemeData(color: textColor),[m
[32m+[m[32m        backgroundColor: primaryColor,[m
[32m+[m[32m        elevation: 0.0,[m
[32m+[m[32m        title: Text("My Profile",style: TextStyle(fontSize: 18,color: textColor),),[m
[32m+[m[32m      ),[m
[32m+[m[32m      drawer: DrawerSide([m
[32m+[m[32m        userProvider: widget.userProvider,[m
[32m+[m[32m      ),[m
[32m+[m[32m      body: Stack([m
[32m+[m[32m        children: [[m
[32m+[m[32m          Column([m
[32m+[m[32m            children: [[m
[32m+[m[32m              Container([m
[32m+[m[32m                height: 100,[m
[32m+[m[32m                color: primaryColor,[m
[32m+[m[32m              ),[m
[32m+[m[32m              Container([m
[32m+[m[32m                height: 548,[m
[32m+[m[32m                width: double.infinity,[m
[32m+[m[32m                padding: EdgeInsets.symmetric(horizontal: 15,vertical: 10),[m
[32m+[m[32m                decoration: BoxDecoration([m
[32m+[m[32m                  color: scaffoldBackgroundColor,[m
[32m+[m[32m                  borderRadius: BorderRadius.only([m
[32m+[m[32m                      topLeft: Radius.circular(30),[m
[32m+[m[32m                      topRight: Radius.circular(30)),[m
[32m+[m[32m                ),[m
[32m+[m[32m                child: ListView([m
[32m+[m[32m                  children: [[m
[32m+[m[32m                    Row([m
[32m+[m[32m                      mainAxisAlignment: MainAxisAlignment.end,[m
[32m+[m[32m                      children: [[m
[32m+[m[32m                        Container([m
[32m+[m[32m                          width: 250,[m
[32m+[m[32m                          height: 80,[m
[32m+[m[32m                          padding: EdgeInsets.only(left: 20),[m
[32m+[m[32m                          child: SingleChildScrollView([m
[32m+[m[32m                            scrollDirection: Axis.horizontal,[m
[32m+[m[32m                            child: Row([m
[32m+[m[32m                              mainAxisAlignment: MainAxisAlignment.spaceAround,[m
[32m+[m[32m                              children: [[m
[32m+[m[32m                                Column([m
[32m+[m[32m                                  mainAxisAlignment: MainAxisAlignment.center,[m
[32m+[m[32m                                  crossAxisAlignment: CrossAxisAlignment.start,[m
[32m+[m[32m                                  children: [[m
[32m+[m[32m                                    Text(userData.userName,[m
[32m+[m[32m                                      style: TextStyle([m
[32m+[m[32m                                        fontSize: 14,fontWeight: FontWeight.bold,[m
[32m+[m[32m                                        color: textColor,[m
[32m+[m[32m                                      ),[m
[32m+[m[32m                                    ),[m
[32m+[m[32m                                    SizedBox(height: 10,),[m
[32m+[m[32m                                    Text(userData.userEmail)[m
[32m+[m[32m                                  ],[m
[32m+[m[32m                                ),[m
[32m+[m[32m                                CircleAvatar([m
[32m+[m[32m                                  radius: 15,[m
[32m+[m[32m                                  backgroundColor: primaryColor,[m
[32m+[m[32m                                  child: CircleAvatar([m
[32m+[m[32m                                    radius: 12,[m
[32m+[m[32m                                    child: Icon(Icons.edit,[m
[32m+[m[32m                                      color: primaryColor,[m
[32m+[m[32m                                    ),[m
[32m+[m[32m                                  ),[m
[32m+[m[32m                                )[m
[32m+[m[32m                              ],[m
[32m+[m[32m                            ),[m
[32m+[m[32m                          ),[m
[32m+[m[32m                        ),[m
[32m+[m[32m                      ],[m
[32m+[m[32m                    ),[m
[32m+[m[32m                    GestureDetector([m
[32m+[m[32m                      onTap: (){[m
[32m+[m[32m                        Navigator.of(context).push(MaterialPageRoute(builder:(context)=> ReviewCart()));[m
[32m+[m[32m                      },[m
[32m+[m[32m                      child: listTile(icon: Icons.shop_outlined,[m
[32m+[m[32m                        title: "My Orders",[m
[32m+[m[32m                      ),[m
[32m+[m[32m                    ),[m
[32m+[m[32m                    GestureDetector([m
[32m+[m[32m                      onTap: (){[m
[32m+[m[32m                        Navigator.of(context).push(MaterialPageRoute(builder:(context)=> DeliveryDetails()));[m
[32m+[m[32m                      },[m
[32m+[m[32m                      child: listTile([m
[32m+[m[32m                        icon: Icons.location_on_outlined,[m
[32m+[m[32m                        title: "My Delivery Address",[m
[32m+[m[32m                      ),[m
[32m+[m[32m                    ),[m
[32m+[m[32m                    listTile(icon: Icons.person_outlined,[m
[32m+[m[32m                      title: "Refer a Friends",[m
[32m+[m[32m                    ),[m
[32m+[m[32m                    listTile(icon: Icons.file_copy_outlined,[m
[32m+[m[32m                      title: "Terms and Conditions",[m
[32m+[m[32m                    ),[m
[32m+[m[32m                    listTile(icon: Icons.policy_outlined,[m
[32m+[m[32m                      title: "Privacy Policy",[m
[32m+[m[32m                    ),[m
[32m+[m[32m                    listTile(icon: Icons.add_chart_outlined,[m
[32m+[m[32m                      title: "About",[m
[32m+[m[32m                    ),[m
[32m+[m[32m                       GestureDetector([m
[32m+[m[32m                         onTap:  () => logOut(context),[m
[32m+[m[32m                         child: listTile(icon: Icons.exit_to_app_outlined,[m
[32m+[m[32m                              title: "Log Out",[m
[32m+[m[32m                    ),[m
[32m+[m[32m                       ),[m
[32m+[m[32m                  ],[m
[32m+[m[32m                ),[m
[32m+[m[32m              ),[m
[32m+[m[32m            ],[m
[32m+[m[32m          ),[m
[32m+[m[32m          Padding([m
[32m+[m[32m            padding: const EdgeInsets.only(top: 40,left: 30),[m
[32m+[m[32m            child: CircleAvatar([m
[32m+[m[32m              radius: 50,[m
[32m+[m[32m              backgroundColor: primaryColor,[m
[32m+[m[32m              child: CircleAvatar([m
[32m+[m[32m                backgroundImage: NetworkImage(userData.userImage??[m
[32m+[m[32m                    "https://s3.envato.com/files/328957910/vegi_thumb.png"),[m
[32m+[m[32m                radius: 45,[m
[32m+[m[32m                backgroundColor: scaffoldBackgroundColor,[m
[32m+[m[32m              ),[m
[32m+[m[32m            ),[m
[32m+[m[32m          )[m
[32m+[m[32m        ],[m
[32m+[m[32m      ),[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m
[1mdiff --git a/lib/screens/product details/product_overview.dart b/lib/screens/product details/product_overview.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..62a903b[m
[1m--- /dev/null[m
[1m+++ b/lib/screens/product details/product_overview.dart[m	
[36m@@ -0,0 +1,238 @@[m
[32m+[m[32mimport 'package:cloud_firestore/cloud_firestore.dart';[m
[32m+[m[32mimport 'package:firebase_auth/firebase_auth.dart';[m
[32m+[m[32mimport 'package:flutter/cupertino.dart';[m
[32m+[m[32mimport 'package:flutter/material.dart';[m
[32m+[m[32mimport 'package:fooddeliveryapp/config/colors.dart';[m
[32m+[m[32mimport 'package:provider/provider.dart';[m
[32m+[m
[32m+[m[32mimport '../../providers/wishlist_provider.dart';[m
[32m+[m[32mimport '../../widgets/count.dart';[m
[32m+[m[32mimport '../review cart/review_cart.dart';[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32menum SigninCharacter{fill,outline}[m
[32m+[m
[32m+[m[32mclass Productoverview extends StatefulWidget {[m
[32m+[m[32m  final String productName;[m
[32m+[m[32m  final String productImage;[m
[32m+[m[32m  final int productPrice;[m
[32m+[m[32m  final String productId;[m
[32m+[m[32m   Productoverview({this.productName,this.productImage,this.productPrice,this.productId});[m
[32m+[m
[32m+[m[32m  @override[m
[32m+[m[32m  State<Productoverview> createState() => _ProductoverviewState();[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mclass _ProductoverviewState extends State<Productoverview> {[m
[32m+[m
[32m+[m[32m  SigninCharacter _character = SigninCharacter.fill;[m
[32m+[m
[32m+[m[32m  Widget BottomNavigationBar({[m
[32m+[m[32m    Color iconColor,[m
[32m+[m[32m    Color backgroundColor,[m
[32m+[m[32m    Color color,[m
[32m+[m[32m    String title,[m
[32m+[m[32m    IconData iconData,[m
[32m+[m[32m    Function onTap,[m
[32m+[m[32m  }) {[m
[32m+[m[32m    return Expanded([m
[32m+[m[32m      child: GestureDetector([m
[32m+[m[32m        onTap: onTap,[m
[32m+[m[32m        child: Container([m
[32m+[m[32m          padding: EdgeInsets.all(20),[m
[32m+[m[32m          color: backgroundColor,[m
[32m+[m[32m          child: Row([m
[32m+[m[32m            mainAxisAlignment: MainAxisAlignment.center,[m
[32m+[m[32m            children: [[m
[32m+[m[32m              Icon([m
[32m+[m[32m                iconData,[m
[32m+[m[32m                size: 20,[m
[32m+[m[32m                color: iconColor,[m
[32m+[m[32m              ),[m
[32m+[m[32m              SizedBox(width: 5,),[m
[32m+[m[32m              Text([m
[32m+[m[32m                title,[m
[32m+[m[32m                style: TextStyle(color: color),[m
[32m+[m[32m              ),[m
[32m+[m[32m            ],[m
[32m+[m[32m          ),[m
[32m+[m[32m        ),[m
[32m+[m[32m      ),[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  bool wishListBool = false;[m
[32m+[m
[32m+[m[32m  getWishListBool() {[m
[32m+[m[32m    FirebaseFirestore[m
[32m+[m[32m        .instance.collection("WishList")[m
[32m+[m[32m        .doc(FirebaseAuth.instance.currentUser.uid)[m
[32m+[m[32m        .collection("YourWishList").doc(widget.productId)[m
[32m+[m[32m        .get().then((value) =>[m
[32m+[m[32m    {[m
[32m+[m[32m      if(this.mounted){[m
[32m+[m[32m        if(value.exists){[m
[32m+[m[32m          setState(() {[m
[32m+[m[32m            wishListBool = value.get("wishList");[m
[32m+[m[32m          },[m
[32m+[m[32m          )[m
[32m+[m[32m        }[m
[32m+[m[32m      }[m
[32m+[m[32m    });[m
[32m+[m[32m}[m
[32m+[m[32m  @override[m
[32m+[m[32m  Widget build(BuildContext context) {[m
[32m+[m[32m    WishListProvider wishListProvider = Provider.of(context);[m
[32m+[m[32m    getWishListBool();[m
[32m+[m[32m    return Scaffold([m
[32m+[m[32m      bottomNavigationBar: Row([m
[32m+[m[32m        children: [[m
[32m+[m[32m          BottomNavigationBar([m
[32m+[m[32m            backgroundColor: textColor,[m
[32m+[m[32m            color: Colors.white70,[m
[32m+[m[32m            iconColor: Colors.grey,[m
[32m+[m[32m            title: "Add to WishList",[m
[32m+[m[32m            iconData: wishListBool==false?Icons.favorite_outline:Icons.favorite,[m
[32m+[m[32m            onTap: (){[m
[32m+[m[32m              setState((){[m
[32m+[m[32m                wishListBool = !wishListBool;[m
[32m+[m[32m              });[m
[32m+[m[32m              if(wishListBool==true){[m
[32m+[m[32m                wishListProvider.addWishListData([m
[32m+[m[32m                  wishListId: widget.productId,[m
[32m+[m[32m                  wishListImage: widget.productImage,[m
[32m+[m[32m                  wishListName: widget.productName,[m
[32m+[m[32m                  wishListPrice: widget.productPrice,[m
[32m+[m[32m                  wishListQuantity: 2[m
[32m+[m[32m                );[m
[32m+[m[32m              }[m
[32m+[m[32m              else{[m
[32m+[m[32m                wishListProvider.deleteWishList(widget.productId);[m
[32m+[m[32m              }[m
[32m+[m[32m            },[m
[32m+[m[32m          ),[m
[32m+[m
[32m+[m[32m          BottomNavigationBar([m
[32m+[m[32m            backgroundColor: primaryColor,[m
[32m+[m[32m            color: textColor,[m
[32m+[m[32m            iconColor: Colors.white70,[m
[32m+[m[32m            title: "Go To Cart",[m
[32m+[m[32m            iconData: Icons.shop_outlined,[m
[32m+[m[32m            onTap: (){[m
[32m+[m[32m              Navigator.of(context).push(MaterialPageRoute(builder: (context)=>ReviewCart()));[m
[32m+[m[32m            },[m
[32m+[m[32m          ),[m
[32m+[m[32m        ],[m
[32m+[m[32m      ),[m
[32m+[m[32m      appBar: AppBar([m
[32m+[m[32m        backgroundColor: Color(0xffd6b738),[m
[32m+[m[32m        iconTheme: IconThemeData(color: textColor),[m
[32m+[m[32m        title: Text([m
[32m+[m[32m          "Product Overview",style: TextStyle(color: textColor),[m
[32m+[m[32m        ),[m
[32m+[m[32m      ),[m
[32m+[m[32m      body: Column([m
[32m+[m[32m        children: [[m
[32m+[m[32m          Expanded([m
[32m+[m[32m            flex: 2,[m
[32m+[m[32m              child: Container([m
[32m+[m[32m                width: double.infinity,[m
[32m+[m[32m                child: Column([m
[32m+[m[32m                  children: [[m
[32m+[m[32m                    ListTile([m
[32m+[m[32m                      title: Text(widget.productName??""),[m
[32m+[m[32m                      subtitle: Text("\$50"),[m
[32m+[m[32m                    ),[m
[32m+[m[32m                    Container([m
[32m+[m[32m                      height: 250,[m
[32m+[m[32m                      padding: EdgeInsets.all(40),[m
[32m+[m[32m                      child: Image.network(widget.productImage??""),[m
[32m+[m[32m                    ),[m
[32m+[m[32m                    Container([m
[32m+[m[32m                      padding: EdgeInsets.symmetric(horizontal: 20),[m
[32m+[m[32m                      width: double.infinity,[m
[32m+[m[32m                      child: Text("Available Options",[m
[32m+[m[32m                        textAlign: TextAlign.start,[m
[32m+[m[32m                        style: TextStyle(color: textColor,fontWeight: FontWeight.w600 ),)[m
[32m+[m[32m                    ),[m
[32m+[m[32m                    Padding(padding: EdgeInsets.symmetric(horizontal: 10[m
[32m+[m[32m                     ),[m
[32m+[m[32m                      child: Row([m
[32m+[m[32m                        mainAxisAlignment: MainAxisAlignment.spaceBetween,[m
[32m+[m[32m                        children: [[m
[32m+[m[32m                           Row([m
[32m+[m[32m                             children: [[m
[32m+[m[32m                               CircleAvatar([m
[32m+[m[32m                                 radius: 3,[m
[32m+[m[32m                                 backgroundColor: Colors.green[700],[m
[32m+[m[32m                               ),[m
[32m+[m[32m                               Radio([m
[32m+[m[32m                                 value: SigninCharacter.fill,[m
[32m+[m[32m                                 groupValue: _character,[m
[32m+[m[32m                                 activeColor: Colors.green[700],[m
[32m+[m[32m                                 onChanged: (value) {[m
[32m+[m[32m                                   setState(() {[m
[32m+[m[32m                                     _character=value;[m
[32m+[m[32m                                   });[m
[32m+[m[32m                                 },[m
[32m+[m[32m                               ),[m
[32m+[m[32m                             ],[m
[32m+[m[32m                           ),[m
[32m+[m[32m                          Text("\$${widget.productPrice}"),[m
[32m+[m[32m                          Count([m
[32m+[m[32m                            productId: widget.productId,[m
[32m+[m[32m                            productImage: widget.productImage,[m
[32m+[m[32m                            productName: widget.productName,[m
[32m+[m[32m                            productPrice: widget.productPrice,[m
[32m+[m[32m                            productUnit: "500 Gram",[m
[32m+[m[32m                          ),[m
[32m+[m[32m                         // Container([m
[32m+[m[32m                           // padding: EdgeInsets.symmetric(horizontal: 30,vertical: 10[m
[32m+[m[32m                           // ),[m
[32m+[m[32m                            //decoration: BoxDecoration([m
[32m+[m[32m                              //border: Border.all(color: Colors.grey),[m
[32m+[m[32m                              //borderRadius: BorderRadius.circular(30),[m
[32m+[m[32m                            //),[m
[32m+[m[32m                            //child: Row([m
[32m+[m[32m                              //mainAxisAlignment: MainAxisAlignment.center,[m
[32m+[m[32m                              //children: [[m
[32m+[m[32m                               // Icon(Icons.add,size: 15,color: primaryColor,[m
[32m+[m[32m                               // ),[m
[32m+[m[32m                               // Text("ADD",style: TextStyle(color: primaryColor),)[m
[32m+[m[32m                             // ],[m
[32m+[m[32m                           // ),[m
[32m+[m[32m                          //),[m
[32m+[m[32m                        ],[m
[32m+[m[32m                      ),[m
[32m+[m[32m                    ),[m
[32m+[m[32m                  ],[m
[32m+[m[32m                ),[m
[32m+[m[32m              ),[m
[32m+[m[32m             ),[m
[32m+[m[32m          Expanded([m
[32m+[m[32m            child: Container([m
[32m+[m[32m              padding: EdgeInsets.all(20),[m
[32m+[m[32m              width: double.infinity,[m
[32m+[m[32m              child: SingleChildScrollView([m
[32m+[m[32m                child: Column([m
[32m+[m[32m                  crossAxisAlignment: CrossAxisAlignment.start,[m
[32m+[m[32m                  children: [[m
[32m+[m[32m                    Text("About This Product",style: TextStyle(fontSize: 18,fontWeight: FontWeight.w600),[m
[32m+[m[32m                    ),[m
[32m+[m[32m                    SizedBox(height: 20,),[m
[32m+[m[32m                    Text("In marketing, a product is an object or system, or service made available for consumer use as of the consumer demand it is anything that can be offered to a market to satisfy the desire or need of a customer.",[m
[32m+[m[32m                      style: TextStyle(fontSize: 18,[m
[32m+[m[32m                          color: textColor,[m
[32m+[m[32m                      ),[m
[32m+[m[32m                    ),[m
[32m+[m[32m                  ],[m
[32m+[m[32m                ),[m
[32m+[m[32m              ),[m
[32m+[m[32m          ),[m
[32m+[m[32m          ),[m
[32m+[m[32m                ],[m
[32m+[m[32m            ),[m
[32m+[m[32m                );[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/lib/screens/review cart/review_cart.dart b/lib/screens/review cart/review_cart.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..6316447[m
[1m--- /dev/null[m
[1m+++ b/lib/screens/review cart/review_cart.dart[m	
[36m@@ -0,0 +1,113 @@[m
[32m+[m[32mimport 'package:flutter/material.dart';[m
[32m+[m[32mimport 'package:fluttertoast/fluttertoast.dart';[m
[32m+[m[32mimport 'package:fooddeliveryapp/config/colors.dart';[m
[32m+[m[32mimport 'package:fooddeliveryapp/models/review_cart_model.dart';[m
[32m+[m[32mimport 'package:fooddeliveryapp/providers/Reviewcart_provider.dart';[m
[32m+[m[32mimport 'package:provider/provider.dart';[m
[32m+[m
[32m+[m[32mimport '../../check_out/deliverydetails/delivery_details.dart';[m
[32m+[m[32mimport '../../widgets/single_items.dart';[m
[32m+[m[32mclass ReviewCart extends StatelessWidget {[m
[32m+[m[32m  ReviewCartProvider reviewCartProvider;[m
[32m+[m
[32m+[m[32m  showAlertDialog(BuildContext context,ReviewCartModel delete) {[m
[32m+[m[32m    // set up the buttons[m
[32m+[m[32m    Widget cancelButton = TextButton([m
[32m+[m[32m      child: Text("No"),[m
[32m+[m[32m      onPressed:  () {[m
[32m+[m[32m        Navigator.of(context).pop();[m
[32m+[m[32m      },[m
[32m+[m[32m    );[m
[32m+[m[32m    Widget continueButton = TextButton([m
[32m+[m[32m      child: Text("Yes"),[m
[32m+[m[32m      onPressed:  () {[m
[32m+[m[32m        reviewCartProvider.reviewCartDataDelete(delete.cartId);[m
[32m+[m[32m        Navigator.of(context).pop();[m
[32m+[m[32m      },[m
[32m+[m[32m    );[m
[32m+[m
[32m+[m[32m    // set up the AlertDialog[m
[32m+[m[32m    AlertDialog alert = AlertDialog([m
[32m+[m[32m      title: Text("Cart Product"),[m
[32m+[m[32m      content: Text("Are you sure you want to delete CartProduct?"),[m
[32m+[m[32m      actions: [[m
[32m+[m[32m        cancelButton,[m
[32m+[m[32m        continueButton,[m
[32m+[m[32m      ],[m
[32m+[m[32m    );[m
[32m+[m
[32m+[m[32m    // show the dialog[m
[32m+[m[32m    showDialog([m
[32m+[m[32m      context: context,[m
[32m+[m[32m      builder: (BuildContext context) {[m
[32m+[m[32m        return alert;[m
[32m+[m[32m      },[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m
[32m+[m[32m  @override[m
[32m+[m[32m  Widget build(BuildContext context) {[m
[32m+[m[32m    reviewCartProvider = Provider.of<ReviewCartProvider>(context);[m
[32m+[m[32m    reviewCartProvider.getReviewCartData();[m
[32m+[m[32m    return Scaffold([m
[32m+[m[32m      bottomNavigationBar: ListTile([m
[32m+[m[32m        title: Text("Total Amount"),[m
[32m+[m[32m        subtitle: Text("\$ ${reviewCartProvider.getTotalPrice()}"[m
[32m+[m[32m          ,style: TextStyle(color: Colors.green[900]),),[m
[32m+[m[32m        trailing: Container([m
[32m+[m[32m          width:160,[m
[32m+[m[32m          child: MaterialButton([m
[32m+[m[32m            child: Text("Submit"),[m
[32m+[m[32m            color: primaryColor,[m
[32m+[m[32m            shape: RoundedRectangleBorder([m
[32m+[m[32m              borderRadius: BorderRadius.circular(30)[m
[32m+[m[32m            ),[m
[32m+[m[32m            onPressed: (){[m
[32m+[m[32m              if(reviewCartProvider.getReviewCartDataList.isEmpty){[m
[32m+[m[32m                return Fluttertoast.showToast(msg: "No Cart Data Found");[m
[32m+[m[32m              }[m
[32m+[m[32m              Navigator.push(context, MaterialPageRoute(builder: (context)=>DeliveryDetails(),),);[m
[32m+[m[32m            },[m
[32m+[m[32m          ),[m
[32m+[m[32m        ),[m
[32m+[m[32m      ),[m
[32m+[m[32m      appBar: AppBar([m
[32m+[m[32m        iconTheme: IconThemeData(color: textColor),[m
[32m+[m[32m        backgroundColor: primaryColor,[m
[32m+[m[32m        title: Text([m
[32m+[m[32m          "Review Cart",[m
[32m+[m[32m          style: TextStyle(fontSize: 18,color: textColor),[m
[32m+[m[32m        ),[m
[32m+[m[32m      ),[m
[32m+[m[32m      body: reviewCartProvider.getReviewCartDataList.isEmpty?Center([m
[32m+[m[32m        child: Text("NO DATA"),[m
[32m+[m[32m      ):ListView.builder([m
[32m+[m[32m        itemCount: reviewCartProvider.getReviewCartDataList.length,[m
[32m+[m[32m        itemBuilder: (context,index){[m
[32m+[m[32m          ReviewCartModel data= reviewCartProvider.getReviewCartDataList[index];[m
[32m+[m[32m          return Column([m
[32m+[m[32m            children: [[m
[32m+[m[32m              SizedBox([m
[32m+[m[32m                height: 10,[m
[32m+[m[32m              ),[m
[32m+[m[32m              SingleItem([m
[32m+[m[32m                isBool: true,[m
[32m+[m[32m                wishList: false ,[m
[32m+[m[32m                productImage: data.cartImage,[m
[32m+[m[32m                productName: data.cartName,[m
[32m+[m[32m                productPrice: data.cartPrice,[m
[32m+[m[32m                productId: data.cartId,[m
[32m+[m[32m                productQuantity: data.cartQuantity,[m
[32m+[m[32m                productUnit: data.cartUnit,[m
[32m+[m[32m                onDelete: (){[m
[32m+[m[32m                  showAlertDialog(context,data);[m
[32m+[m[32m                },[m
[32m+[m[32m              ),[m
[32m+[m[32m            ],[m
[32m+[m[32m          );[m
[32m+[m[32m        },[m
[32m+[m[32m      ),[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/lib/screens/seaarch/search_bar.dart b/lib/screens/seaarch/search_bar.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..3005102[m
[1m--- /dev/null[m
[1m+++ b/lib/screens/seaarch/search_bar.dart[m
[36m@@ -0,0 +1,94 @@[m
[32m+[m[32mimport 'package:flutter/material.dart';[m
[32m+[m[32mimport '../../config/colors.dart';[m
[32m+[m[32mimport '../../models/product_model.dart';[m
[32m+[m[32mimport '../../widgets/single_items.dart';[m
[32m+[m
[32m+[m[32menum SigninCharacter { lowToHigh, highToLow, alphabetically }[m
[32m+[m
[32m+[m[32mclass Search extends StatefulWidget {[m
[32m+[m[32m  final List<ProductModel> search;[m
[32m+[m[32m  Search({this.search});[m
[32m+[m[32m  @override[m
[32m+[m[32m  _SearchState createState() => _SearchState();[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mclass _SearchState extends State<Search> {[m
[32m+[m
[32m+[m[32m  String query="";[m
[32m+[m[32m  SigninCharacter _character = SigninCharacter.alphabetically;[m
[32m+[m
[32m+[m[32m  searchItem(String query){[m
[32m+[m[32m    List<ProductModel>searchFood=widget.search.where((element){[m
[32m+[m[32m      return element.productName.toLowerCase().contains(query);[m
[32m+[m
[32m+[m[32m    }).toList();[m
[32m+[m[32m    return searchFood;[m
[32m+[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  @override[m
[32m+[m[32m  Widget build(BuildContext context) {[m
[32m+[m[32m    List<ProductModel>_searchItem =searchItem(query);[m
[32m+[m[32m    return Scaffold([m
[32m+[m[32m        appBar: AppBar([m
[32m+[m[32m          iconTheme: IconThemeData(color: textColor),[m
[32m+[m[32m          backgroundColor: Color(0xffd6b738),[m
[32m+[m[32m          title: Text([m
[32m+[m[32m            "Search",[m
[32m+[m[32m            style: TextStyle(color: textColor, fontSize: 17),[m
[32m+[m[32m          ),[m
[32m+[m[32m          actions: [[m
[32m+[m[32m            Padding([m
[32m+[m[32m              padding: EdgeInsets.all(8.0),[m
[32m+[m[32m              child: Icon(Icons.menu_rounded[m
[32m+[m[32m              ),[m
[32m+[m[32m            ),[m
[32m+[m[32m          ],[m
[32m+[m[32m        ),[m
[32m+[m[32m        body: ListView([m
[32m+[m[32m          children: [[m
[32m+[m[32m            ListTile([m
[32m+[m[32m              title: Text("Items"),[m
[32m+[m[32m            ),[m
[32m+[m[32m            Container([m
[32m+[m[32m              height: 52,[m
[32m+[m[32m              margin: EdgeInsets.symmetric([m
[32m+[m[32m                horizontal: 20,[m
[32m+[m[32m              ),[m
[32m+[m[32m              child: TextField([m
[32m+[m[32m                onChanged: (value){[m
[32m+[m[32m                  setState((){[m
[32m+[m[32m                    query=value;[m
[32m+[m[32m                  });[m
[32m+[m[32m                },[m
[32m+[m[32m                decoration: InputDecoration([m
[32m+[m[32m                  border: OutlineInputBorder([m
[32m+[m[32m                      borderRadius: BorderRadius.circular(30),[m
[32m+[m[32m                      borderSide: BorderSide.none),[m
[32m+[m[32m                  fillColor: Color(0xffc2c2c2),[m
[32m+[m[32m                  filled: true,[m
[32m+[m[32m                  hintText: "Search for items in the store",[m
[32m+[m[32m                  suffixIcon: Icon([m
[32m+[m[32m                    Icons.search,[m
[32m+[m[32m                    color: textColor,[m
[32m+[m[32m                  ),[m
[32m+[m[32m                ),[m
[32m+[m[32m                cursorColor: Colors.black45,[m
[32m+[m[32m              ),[m
[32m+[m[32m            ),[m
[32m+[m[32m            SizedBox(height: 10),[m
[32m+[m[32m            Column([m
[32m+[m[32m              children: _searchItem.map((data) {[m
[32m+[m[32m                return  SingleItem([m
[32m+[m[32m                  isBool: false,[m
[32m+[m[32m                  productImage: data.productImage,[m
[32m+[m[32m                  productName: data.productName,[m
[32m+[m[32m                  productPrice: data.productPrice,[m
[32m+[m[32m                );[m
[32m+[m[32m              }[m
[32m+[m[32m              ).toList(),[m
[32m+[m[32m            ),[m
[32m+[m[32m          ],),[m
[32m+[m[32m        );[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/lib/screens/wishlist/wish_list.dart b/lib/screens/wishlist/wish_list.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..5655fd4[m
[1m--- /dev/null[m
[1m+++ b/lib/screens/wishlist/wish_list.dart[m
[36m@@ -0,0 +1,91 @@[m
[32m+[m[32mimport 'package:flutter/material.dart';[m
[32m+[m[32mimport 'package:fooddeliveryapp/config/colors.dart';[m
[32m+[m[32mimport 'package:fooddeliveryapp/models/product_model.dart';[m
[32m+[m[32mimport 'package:fooddeliveryapp/providers/wishlist_provider.dart';[m
[32m+[m[32mimport 'package:provider/provider.dart';[m
[32m+[m
[32m+[m[32mimport '../../widgets/single_items.dart';[m
[32m+[m[32mclass WishList extends StatefulWidget {[m
[32m+[m
[32m+[m[32m  @override[m
[32m+[m[32m  State<WishList> createState() => _WishListState();[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mclass _WishListState extends State<WishList> {[m
[32m+[m[32m  WishListProvider wishListProvider;[m
[32m+[m[32m  showAlertDialog(BuildContext context, ProductModel delete) {[m
[32m+[m[32m    // set up the buttons[m
[32m+[m[32m    Widget cancelButton = TextButton([m
[32m+[m[32m      child: Text("No"),[m
[32m+[m[32m      onPressed: () {[m
[32m+[m[32m        Navigator.of(context).pop();[m
[32m+[m[32m      },[m
[32m+[m[32m    );[m
[32m+[m[32m    Widget continueButton = TextButton([m
[32m+[m[32m      child: Text("Yes"),[m
[32m+[m[32m      onPressed: () {[m
[32m+[m[32m        wishListProvider.deleteWishList(delete.productId);[m
[32m+[m[32m        Navigator.of(context).pop();[m
[32m+[m[32m      },[m
[32m+[m[32m    );[m
[32m+[m
[32m+[m[32m    // set up the AlertDialog[m
[32m+[m[32m    AlertDialog alert = AlertDialog([m
[32m+[m[32m      title: Text("WishList Product"),[m
[32m+[m[32m      content: Text("Are you sure you want to delete the wishlist product?"),[m
[32m+[m[32m      actions: [[m
[32m+[m[32m        cancelButton,[m
[32m+[m[32m        continueButton,[m
[32m+[m[32m      ],[m
[32m+[m[32m    );[m
[32m+[m
[32m+[m[32m    // show the dialog[m
[32m+[m[32m    showDialog([m
[32m+[m[32m      context: context,[m
[32m+[m[32m      builder: (BuildContext context) {[m
[32m+[m[32m        return alert;[m
[32m+[m[32m      },[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m[32m  @override[m
[32m+[m[32m  Widget build(BuildContext context) {[m
[32m+[m[32m    print(wishListProvider);[m
[32m+[m[32m    wishListProvider=Provider.of(context);[m
[32m+[m[32m    wishListProvider.getWishListData();[m
[32m+[m[32m    return Scaffold([m
[32m+[m[32m      appBar: AppBar([m
[32m+[m[32m        iconTheme: IconThemeData(color: textColor),[m
[32m+[m[32m        backgroundColor: primaryColor,[m
[32m+[m[32m        title: Text([m
[32m+[m[32m          "WishList",[m
[32m+[m[32m          style: TextStyle(fontSize: 18,color: textColor),[m
[32m+[m[32m        ),[m
[32m+[m[32m      ),[m
[32m+[m[32m      body: ListView.builder([m
[32m+[m[32m        itemCount: wishListProvider.getWishList.length,[m
[32m+[m[32m        itemBuilder: (context,index){[m
[32m+[m[32m          ProductModel data=[m
[32m+[m[32m              wishListProvider.getWishList[index];[m
[32m+[m[32m          return Column([m
[32m+[m[32m            children: [[m
[32m+[m[32m              SizedBox([m
[32m+[m[32m                height: 10,[m
[32m+[m[32m              ),[m
[32m+[m[32m              SingleItem([m
[32m+[m[32m                isBool: true,[m
[32m+[m[32m                productImage: data.productImage,[m
[32m+[m[32m                productName: data.productName,[m
[32m+[m[32m                productPrice: data.productPrice,[m
[32m+[m[32m                productId: data.productId,[m
[32m+[m[32m                productQuantity: data.productQuantity,[m
[32m+[m[32m                onDelete: (){[m
[32m+[m[32m                  showAlertDialog(context, data);[m
[32m+[m[32m                },[m
[32m+[m[32m              ),[m
[32m+[m[32m            ],[m
[32m+[m[32m          );[m
[32m+[m[32m        },[m
[32m+[m[32m      ),[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/lib/widgets/count.dart b/lib/widgets/count.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..0f08ab2[m
[1m--- /dev/null[m
[1m+++ b/lib/widgets/count.dart[m
[36m@@ -0,0 +1,147 @@[m
[32m+[m[32mimport 'package:cloud_firestore/cloud_firestore.dart';[m
[32m+[m[32mimport 'package:firebase_auth/firebase_auth.dart';[m
[32m+[m[32mimport 'package:flutter/material.dart';[m
[32m+[m[32mimport 'package:provider/provider.dart';[m
[32m+[m
[32m+[m[32mimport '../config/colors.dart';[m
[32m+[m[32mimport '../providers/Reviewcart_provider.dart';[m
[32m+[m
[32m+[m[32mclass Count extends StatefulWidget {[m
[32m+[m[32m  String productName;[m
[32m+[m[32m  String productImage;[m
[32m+[m[32m  String productId;[m
[32m+[m[32m  int productPrice;[m
[32m+[m[32m  var productUnit;[m
[32m+[m
[32m+[m[32m  Count({[m
[32m+[m[32m    this.productName,[m
[32m+[m[32m    this.productUnit,[m
[32m+[m[32m    this.productId,[m
[32m+[m[32m    this.productImage,[m
[32m+[m[32m    this.productPrice,[m
[32m+[m[32m  });[m
[32m+[m[32m  @override[m
[32m+[m[32m  _CountState createState() => _CountState();[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mclass _CountState extends State<Count> {[m
[32m+[m[32m  int count = 1;[m
[32m+[m[32m  bool isTrue = false;[m
[32m+[m
[32m+[m[32m  getAddAndQuantity() {[m
[32m+[m[32m    FirebaseFirestore.instance[m
[32m+[m[32m        .collection("ReviewCart")[m
[32m+[m[32m        .doc(FirebaseAuth.instance.currentUser.uid)[m
[32m+[m[32m        .collection("YourReviewCart")[m
[32m+[m[32m        .doc(widget.productId)[m
[32m+[m[32m        .get()[m
[32m+[m[32m        .then([m
[32m+[m[32m          (value) => {[m
[32m+[m[32m        if (this.mounted)[m
[32m+[m[32m          {[m
[32m+[m[32m            if (value.exists)[m
[32m+[m[32m              {[m
[32m+[m[32m                setState(() {[m
[32m+[m[32m                  count = value.get("cartQuantity");[m
[32m+[m[32m                  isTrue = value.get("isAdd");[m
[32m+[m[32m                })[m
[32m+[m[32m              }[m
[32m+[m[32m          }[m
[32m+[m[32m      },[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  @override[m
[32m+[m[32m  Widget build(BuildContext context) {[m
[32m+[m[32m    getAddAndQuantity();[m
[32m+[m
[32m+[m[32m    ReviewCartProvider reviewCartProvider = Provider.of(context);[m
[32m+[m[32m    return Container([m
[32m+[m[32m      height: 25,[m
[32m+[m[32m      width: 50,[m
[32m+[m[32m      decoration: BoxDecoration([m
[32m+[m[32m        border: Border.all(color: Colors.grey),[m
[32m+[m[32m        borderRadius: BorderRadius.circular(8),[m
[32m+[m[32m      ),[m
[32m+[m[32m      child: isTrue == true[m
[32m+[m[32m          ? Row([m
[32m+[m[32m        mainAxisAlignment: MainAxisAlignment.center,[m
[32m+[m[32m        children: [[m
[32m+[m[32m          InkWell([m
[32m+[m[32m            onTap: () {[m
[32m+[m[32m              if (count == 1) {[m
[32m+[m[32m                setState(() {[m
[32m+[m[32m                  isTrue = false;[m
[32m+[m[32m                });[m
[32m+[m[32m                reviewCartProvider.reviewCartDataDelete(widget.productId);[m
[32m+[m[32m              } else if (count > 1) {[m
[32m+[m[32m                setState(() {[m
[32m+[m[32m                  count--;[m
[32m+[m[32m                });[m
[32m+[m[32m                reviewCartProvider.updateReviewCartData([m
[32m+[m[32m                  cartId: widget.productId,[m
[32m+[m[32m                  cartImage: widget.productImage,[m
[32m+[m[32m                  cartName: widget.productName,[m
[32m+[m[32m                  cartPrice: widget.productPrice,[m
[32m+[m[32m                  cartQuantity: count,[m
[32m+[m[32m                );[m
[32m+[m[32m              }[m
[32m+[m[32m            },[m
[32m+[m[32m            child: Icon([m
[32m+[m[32m              Icons.remove,[m
[32m+[m[32m              size: 15,[m
[32m+[m[32m              color: Color(0xffd0b84c),[m
[32m+[m[32m            ),[m
[32m+[m[32m          ),[m
[32m+[m[32m          Text([m
[32m+[m[32m            "$count",[m
[32m+[m[32m            style: TextStyle([m
[32m+[m[32m              color: Color(0xffd0b84c),[m
[32m+[m[32m              fontWeight: FontWeight.bold,[m
[32m+[m[32m            ),[m
[32m+[m[32m          ),[m
[32m+[m[32m          InkWell([m
[32m+[m[32m            onTap: () {[m
[32m+[m[32m              setState(() {[m
[32m+[m[32m                count++;[m
[32m+[m[32m              });[m
[32m+[m[32m              reviewCartProvider.updateReviewCartData([m
[32m+[m[32m                cartId: widget.productId,[m
[32m+[m[32m                cartImage: widget.productImage,[m
[32m+[m[32m                cartName: widget.productName,[m
[32m+[m[32m                cartPrice: widget.productPrice,[m
[32m+[m[32m                cartQuantity: count,[m
[32m+[m[32m              );[m
[32m+[m[32m            },[m
[32m+[m[32m            child: Icon([m
[32m+[m[32m              Icons.add,[m
[32m+[m[32m              size: 15,[m
[32m+[m[32m              color: Color(0xffd0b84c),[m
[32m+[m[32m            ),[m
[32m+[m[32m          ),[m
[32m+[m[32m        ],[m
[32m+[m[32m      )[m
[32m+[m[32m          : Center([m
[32m+[m[32m        child: InkWell([m
[32m+[m[32m          onTap: () {[m
[32m+[m[32m            setState(() {[m
[32m+[m[32m              isTrue = true;[m
[32m+[m[32m            });[m
[32m+[m[32m            reviewCartProvider.addReviewCartData([m
[32m+[m[32m              cartId: widget.productId,[m
[32m+[m[32m              cartImage: widget.productImage,[m
[32m+[m[32m              cartName: widget.productName,[m
[32m+[m[32m              cartPrice: widget.productPrice,[m
[32m+[m[32m              cartQuantity: count,[m
[32m+[m[32m              cartUnit: widget.productUnit,[m
[32m+[m[32m            );[m
[32m+[m[32m          },[m
[32m+[m[32m          child: Text([m
[32m+[m[32m            "ADD",[m
[32m+[m[32m            style: TextStyle(color: primaryColor),[m
[32m+[m[32m          ),[m
[32m+[m[32m        ),[m
[32m+[m[32m      ),[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/lib/widgets/customyext_field.dart b/lib/widgets/customyext_field.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..857a421[m
[1m--- /dev/null[m
[1m+++ b/lib/widgets/customyext_field.dart[m
[36m@@ -0,0 +1,22 @@[m
[32m+[m
[32m+[m
[32m+[m[32mimport 'package:flutter/material.dart';[m
[32m+[m[32mclass CustomTextField extends StatelessWidget {[m
[32m+[m[32m  final TextEditingController controller;[m
[32m+[m[32m  final lableText;[m
[32m+[m[32m  final color;[m
[32m+[m[32m  final TextInputType keyboardType;[m
[32m+[m[32m    CustomTextField({this.controller,this.keyboardType,this.lableText,this.color});[m
[32m+[m
[32m+[m[32m  @override[m
[32m+[m[32m  Widget build(BuildContext context) {[m
[32m+[m[32m     return TextField([m
[32m+[m[32m       cursorColor: Color(0xffd6b738),[m
[32m+[m[32m       keyboardType: keyboardType,[m
[32m+[m[32m       controller: controller,[m
[32m+[m[32m       decoration: InputDecoration([m
[32m+[m[32m         labelText: lableText,[m
[32m+[m[32m    ),[m
[32m+[m[32m       );[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/lib/widgets/product_unit.dart b/lib/widgets/product_unit.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..7a60578[m
[1m--- /dev/null[m
[1m+++ b/lib/widgets/product_unit.dart[m
[36m@@ -0,0 +1,40 @@[m
[32m+[m[32mimport 'package:flutter/material.dart';[m
[32m+[m[32mclass ProductUnit extends StatelessWidget {[m
[32m+[m[32m  final Function onTap;[m
[32m+[m[32m  final String title;[m
[32m+[m
[32m+[m[32m  ProductUnit({this.onTap, this.title,});[m
[32m+[m
[32m+[m[32m  @override[m
[32m+[m[32m  Widget build(BuildContext context) {[m
[32m+[m[32m    return InkWell([m
[32m+[m[32m      onTap: onTap,[m
[32m+[m[32m      child: Container([m
[32m+[m[32m        padding: EdgeInsets.only(left: 5),[m
[32m+[m[32m        height: 30,[m
[32m+[m[32m        decoration: BoxDecoration([m
[32m+[m[32m          color: Colors.grey,[m
[32m+[m[32m          border: Border.all([m
[32m+[m[32m            color: Colors.grey,[m
[32m+[m[32m          ),[m
[32m+[m[32m          borderRadius: BorderRadius.circular(8),[m
[32m+[m[32m        ),[m
[32m+[m[32m        child: Row([m
[32m+[m[32m          children: [[m
[32m+[m[32m            Expanded([m
[32m+[m[32m                child: Text([m
[32m+[m[32m                  '$title',[m
[32m+[m[32m                  style: TextStyle(fontSize: 10),[m
[32m+[m[32m                )),[m
[32m+[m[32m            Center([m
[32m+[m[32m                child: Icon([m
[32m+[m[32m                  Icons.arrow_drop_down,[m
[32m+[m[32m                  size: 20,[m
[32m+[m[32m                  color: Colors.yellow,[m
[32m+[m[32m                )),[m
[32m+[m[32m          ],[m
[32m+[m[32m        ),[m
[32m+[m[32m      ),[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/lib/widgets/single_items.dart b/lib/widgets/single_items.dart[m
[1mnew file mode 100644[m
[1mindex 0000000..02a8b17[m
[1m--- /dev/null[m
[1m+++ b/lib/widgets/single_items.dart[m
[36m@@ -0,0 +1,278 @@[m
[32m+[m[32mimport 'package:flutter/material.dart';[m
[32m+[m[32mimport 'package:fluttertoast/fluttertoast.dart';[m
[32m+[m[32mimport 'package:provider/provider.dart';[m
[32m+[m[32mimport '../config/colors.dart';[m
[32m+[m[32mimport '../providers/Reviewcart_provider.dart';[m
[32m+[m[32mimport 'count.dart';[m
[32m+[m
[32m+[m[32mclass SingleItem extends StatefulWidget {[m
[32m+[m[32m  bool isBool = false;[m
[32m+[m[32m  String productImage;[m
[32m+[m[32m  String productName;[m
[32m+[m[32m  bool wishList = false;[m
[32m+[m[32m  int productPrice;[m
[32m+[m[32m  String productId;[m
[32m+[m[32m  int productQuantity;[m
[32m+[m[32m  Function onDelete;[m
[32m+[m[32m  var productUnit;[m
[32m+[m[32m  SingleItem([m
[32m+[m[32m      {this.productQuantity,[m
[32m+[m[32m      this.productId,[m
[32m+[m[32m      this.productUnit,[m
[32m+[m[32m      this.onDelete,[m
[32m+[m[32m      this.isBool,[m
[32m+[m[32m      this.productImage,[m
[32m+[m[32m      this.productName,[m
[32m+[m[32m      this.productPrice,[m
[32m+[m[32m      this.wishList});[m
[32m+[m
[32m+[m[32m  @override[m
[32m+[m[32m  _SingleItemState createState() => _SingleItemState();[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mclass _SingleItemState extends State<SingleItem> {[m
[32m+[m[32m  ReviewCartProvider reviewCartProvider;[m
[32m+[m
[32m+[m[32m  int count;[m
[32m+[m[32m  getCount() {[m
[32m+[m[32m    setState(() {[m
[32m+[m[32m      count = widget.productQuantity;[m
[32m+[m[32m    });[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  @override[m
[32m+[m[32m  Widget build(BuildContext context) {[m
[32m+[m[32m    getCount();[m
[32m+[m[32m    reviewCartProvider = Provider.of<ReviewCartProvider>(context);[m
[32m+[m[32m    reviewCartProvider.getReviewCartData();[m
[32m+[m[32m    return Column([m
[32m+[m[32m      children: [[m
[32m+[m[32m        Padding([m
[32m+[m[32m          padding: const EdgeInsets.symmetric(horizontal: 10, vertical: 3),[m
[32m+[m[32m          child: Row([m
[32m+[m[32m            children: [[m
[32m+[m[32m              Expanded([m
[32m+[m[32m                child: Container([m
[32m+[m[32m                  height: 90,[m
[32m+[m[32m                  child: Center([m
[32m+[m[32m                    child: Image.network([m
[32m+[m[32m                      widget.productImage,[m
[32m+[m[32m                    ),[m
[32m+[m[32m                  ),[m
[32m+[m[32m                ),[m
[32m+[m[32m              ),[m
[32m+[m[32m              Expanded([m
[32m+[m[32m                child: Container([m
[32m+[m[32m                  height: 90,[m
[32m+[m[32m                  child: Column([m
[32m+[m[32m                    mainAxisAlignment: widget.isBool == false[m
[32m+[m[32m                        ? MainAxisAlignment.spaceAround[m
[32m+[m[32m                        : MainAxisAlignment.spaceEvenly,[m
[32m+[m[32m                    crossAxisAlignment: CrossAxisAlignment.start,[m
[32m+[m[32m                    children: [[m
[32m+[m[32m                      Column([m
[32m+[m[32m                        crossAxisAlignment: CrossAxisAlignment.start,[m
[32m+[m[32m                        children: [[m
[32m+[m[32m                          Text([m
[32m+[m[32m                            widget.productName ?? "",[m
[32m+[m[32m                            style: TextStyle([m
[32m+[m[32m                                color: textColor,[m
[32m+[m[32m                                fontWeight: FontWeight.bold,[m
[32m+[m[32m                                fontSize: 16),[m
[32m+[m[32m                          ),[m
[32m+[m[32m                          Text([m
[32m+[m[32m                            "${widget.productPrice}\$",[m
[32m+[m[32m                            style: TextStyle([m
[32m+[m[32m                                color: textColor, fontWeight: FontWeight.bold),[m
[32m+[m[32m                          ),[m
[32m+[m[32m                        ],[m
[32m+[m[32m                      ),[m
[32m+[m[32m                      widget.isBool == false[m
[32m+[m[32m                          ? GestureDetector([m
[32m+[m[32m                              onTap: () {[m
[32m+[m[32m                                showModalBottomSheet([m
[32m+[m[32m                                    context: context,[m
[32m+[m[32m                                    builder: (context) {[m
[32m+[m[32m                                      return Column([m
[32m+[m[32m                                        mainAxisSize: MainAxisSize.min,[m
[32m+[m[32m                                        children: <Widget>[[m
[32m+[m[32m                                          ListTile([m
[32m+[m[32m                                            title: new Text('50 Gram'),[m
[32m+[m[32m                                            onTap: () {[m
[32m+[m[32m                                              Navigator.pop(context);[m
[32m+[m[32m                                            },[m
[32m+[m[32m                                          ),[m
[32m+[m[32m                                          ListTile([m
[32m+[m[32m                                            title: new Text('500 Gram'),[m
[32m+[m[32m                                            onTap: () {[m
[32m+[m[32m                                              Navigator.pop(context);[m
[32m+[m[32m                                            },[m
[32m+[m[32m                                          ),[m
[32m+[m[32m                                          ListTile([m
[32m+[m[32m                                            title: new Text('1 Kg'),[m
[32m+[m[32m                                            onTap: () {[m
[32m+[m[32m                                              Navigator.pop(context);[m
[32m+[m[32m                                            },[m
[32m+[m[32m                                          ),[m
[32m+[m[32m                                        ],[m
[32m+[m[32m                                      );[m
[32m+[m[32m                                    });[m
[32m+[m[32m                              },[m
[32m+[m[32m                              child: Container([m
[32m+[m[32m                                margin: EdgeInsets.only(right: 15),[m
[32m+[m[32m                                padding: EdgeInsets.symmetric(horizontal: 10),[m
[32m+[m[32m                                height: 35,[m
[32m+[m[32m                                decoration: BoxDecoration([m
[32m+[m[32m                                  border: Border.all(color: Colors.grey),[m
[32m+[m[32m                                  borderRadius: BorderRadius.circular(30),[m
[32m+[m[32m                                ),[m
[32m+[m[32m                                child: Row([m
[32m+[m[32m                                  children: [[m
[32m+[m[32m                                    Expanded([m
[32m+[m[32m                                      child: Text([m
[32m+[m[32m                                        "50 Gram",[m
[32m+[m[32m                                        style: TextStyle([m
[32m+[m[32m                                          color: Colors.grey,[m
[32m+[m[32m                                          fontSize: 14,[m
[32m+[m[32m                                        ),[m
[32m+[m[32m                                      ),[m
[32m+[m[32m                                    ),[m
[32m+[m[32m                                    Center([m
[32m+[m[32m                                      child: Icon([m
[32m+[m[32m                                        Icons.arrow_drop_down,[m
[32m+[m[32m                                        size: 20,[m
[32m+[m[32m                                        color: primaryColor,[m
[32m+[m[32m                                      ),[m
[32m+[m[32m                                    )[m
[32m+[m[32m                                  ],[m
[32m+[m[32m                                ),[m
[32m+[m[32m                              ),[m
[32m+[m[32m                            )[m
[32m+[m[32m                          : Text(widget.productUnit ?? "")[m
[32m+[m[32m                    ],[m
[32m+[m[32m                  ),[m
[32m+[m[32m                ),[m
[32m+[m[32m              ),[m
[32m+[m[32m              Expanded([m
[32m+[m[32m                child: Container([m
[32m+[m[32m                  height: 90,[m
[32m+[m[32m                  padding: widget.isBool == false[m
[32m+[m[32m                      ? EdgeInsets.symmetric(horizontal: 15, vertical: 32)[m
[32m+[m[32m                      : EdgeInsets.only(left: 15, right: 15),[m
[32m+[m[32m                  child: widget.isBool == false[m
[32m+[m[32m                      ? Count([m
[32m+[m[32m                          productId: widget.productId,[m
[32m+[m[32m                          productImage: widget.productImage,[m
[32m+[m[32m                          productName: widget.productName,[m
[32m+[m[32m                          productPrice: widget.productPrice,[m
[32m+[m[32m                        )[m
[32m+[m[32m                      : Padding([m
[32m+[m[32m                          padding: const EdgeInsets.only(top: 8),[m
[32m+[m[32m                          child: Column([m
[32m+[m[32m                            children: [[m
[32m+[m[32m                              InkWell([m
[32m+[m[32m                                onTap: widget.onDelete,[m
[32m+[m[32m                                child: Icon([m
[32m+[m[32m                                  Icons.delete,[m
[32m+[m[32m                                  size: 30,[m
[32m+[m[32m                                  color: Colors.black54,[m
[32m+[m[32m                                ),[m
[32m+[m[32m                              ),[m
[32m+[m[32m                              SizedBox([m
[32m+[m[32m                                height: 5,[m
[32m+[m[32m                              ),[m
[32m+[m[32m                              widget.wishList == false[m
[32m+[m[32m                                  ? Container([m
[32m+[m[32m                                      height: 25,[m
[32m+[m[32m                                      width: 70,[m
[32m+[m[32m                                      decoration: BoxDecoration([m
[32m+[m[32m                                        border: Border.all(color: Colors.grey),[m
[32m+[m[32m                                        borderRadius: BorderRadius.circular(30),[m
[32m+[m[32m                                      ),[m
[32m+[m[32m                                      child: Center([m
[32m+[m[32m                                        child: Row([m
[32m+[m[32m                                          mainAxisAlignment:[m
[32m+[m[32m                                              MainAxisAlignment.center,[m
[32m+[m[32m                                          children: [[m
[32m+[m[32m                                            InkWell([m
[32m+[m[32m                                              onTap: () {[m
[32m+[m[32m                                                if (count == 1) {[m
[32m+[m[32m                                                  Fluttertoast.showToast([m
[32m+[m[32m                                                    msg:[m
[32m+[m[32m                                                        "You reach minimum limit",[m
[32m+[m[32m                                                  );[m
[32m+[m[32m                                                } else {[m
[32m+[m[32m                                                  setState(() {[m
[32m+[m[32m                                                    count--;[m
[32m+[m[32m                                                  });[m
[32m+[m[32m                                                  reviewCartProvider.updateReviewCartData([m
[32m+[m[32m                                                    cartImage:[m
[32m+[m[32m                                                        widget.productImage,[m
[32m+[m[32m                                                    cartId: widget.productId,[m
[32m+[m[32m                                                    cartName:[m
[32m+[m[32m                                                        widget.productName,[m
[32m+[m[32m                                                    cartPrice:[m
[32m+[m[32m                                                        widget.productPrice,[m
[32m+[m[32m                                                    cartQuantity: count,[m
[32m+[m[32m                                                  );[m
[32m+[m[32m                                                }[m
[32m+[m[32m                                              },[m
[32m+[m[32m                                              child: Icon([m
[32m+[m[32m                                                Icons.remove,[m
[32m+[m[32m                                                color: primaryColor,[m
[32m+[m[32m                                                size: 20,[m
[32m+[m[32m                                              ),[m
[32m+[m[32m                                            ),[m
[32m+[m[32m                                            Text([m
[32m+[m[32m                                              "$count",[m
[32m+[m[32m                                              style: TextStyle([m
[32m+[m[32m                                                color: primaryColor,[m
[32m+[m[32m                                              ),[m
[32m+[m[32m                                            ),[m
[32m+[m[32m                                            InkWell([m
[32m+[m[32m                                              onTap: () {[m
[32m+[m[32m                                                if (count < 10) {[m
[32m+[m[32m                                                  setState(() {[m
[32m+[m[32m                                                    count++;[m
[32m+[m[32m                                                  });[m
[32m+[m[32m                                                  reviewCartProvider.updateReviewCartData([m
[32m+[m[32m                                                    cartImage:[m
[32m+[m[32m                                                        widget.productImage,[m
[32m+[m[32m                                                    cartId: widget.productId,[m
[32m+[m[32m                                                    cartName:[m
[32m+[m[32m                                                        widget.productName,[m
[32m+[m[32m                                                    cartPrice:[m
[32m+[m[32m                                                        widget.productPrice,[m
[32m+[m[32m                                                    cartQuantity: count,[m
[32m+[m[32m                                                  );[m
[32m+[m[32m                                                }[m
[32m+[m[32m                                              },[m
[32m+[m[32m                                              child: Icon([m
[32m+[m[32m                                                Icons.add,[m
[32m+[m[32m                                                color: primaryColor,[m
[32m+[m[32m                                                size: 20,[m
[32m+[m[32m                                              ),[m
[32m+[m[32m                                            ),[m
[32m+[m[32m                                          ],[m
[32m+[m[32m                                        ),[m
[32m+[m[32m                                      ),[m
[32m+[m[32m                                    )[m
[32m+[m[32m                                  : Container(),[m
[32m+[m[32m                            ],[m
[32m+[m[32m                          ),[m
[32m+[m[32m                        ),[m
[32m+[m[32m                ),[m
[32m+[m[32m              ),[m
[32m+[m[32m            ],[m
[32m+[m[32m          ),[m
[32m+[m[32m        ),[m
[32m+[m[32m        widget.isBool == false[m
[32m+[m[32m            ? Container()[m
[32m+[m[32m            : Divider([m
[32m+[m[32m                height: 1,[m
[32m+[m[32m                color: Colors.black45,[m
[32m+[m[32m              )[m
[32m+[m[32m      ],[m
[32m+[m[32m    );[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/linux/.gitignore b/linux/.gitignore[m
[1mnew file mode 100644[m
[1mindex 0000000..d3896c9[m
[1m--- /dev/null[m
[1m+++ b/linux/.gitignore[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32mflutter/ephemeral[m
[1mdiff --git a/linux/CMakeLists.txt b/linux/CMakeLists.txt[m
[1mnew file mode 100644[m
[1mindex 0000000..03e6ad4[m
[1m--- /dev/null[m
[1m+++ b/linux/CMakeLists.txt[m
[36m@@ -0,0 +1,138 @@[m
[32m+[m[32m# Project-level configuration.[m
[32m+[m[32mcmake_minimum_required(VERSION 3.10)[m
[32m+[m[32mproject(runner LANGUAGES CXX)[m
[32m+[m
[32m+[m[32m# The name of the executable created for the application. Change this to change[m
[32m+[m[32m# the on-disk name of your application.[m
[32m+[m[32mset(BINARY_NAME "fooddeliveryapp")[m
[32m+[m[32m# The unique GTK application identifier for this application. See:[m
[32m+[m[32m# https://wiki.gnome.org/HowDoI/ChooseApplicationID[m
[32m+[m[32mset(APPLICATION_ID "com.example.fooddeliveryapp")[m
[32m+[m
[32m+[m[32m# Explicitly opt in to modern CMake behaviors to avoid warnings with recent[m
[32m+[m[32m# versions of CMake.[m
[32m+[m[32mcmake_policy(SET CMP0063 NEW)[m
[32m+[m
[32m+[m[32m# Load bundled libraries from the lib/ directory relative to the binary.[m
[32m+[m[32mset(CMAKE_INSTALL_RPATH "$ORIGIN/lib")[m
[32m+[m
[32m+[m[32m# Root filesystem for cross-building.[m
[32m+[m[32mif(FLUTTER_TARGET_PLATFORM_SYSROOT)[m
[32m+[m[32m  set(CMAKE_SYSROOT ${FLUTTER_TARGET_PLATFORM_SYSROOT})[m
[32m+[m[32m  set(CMAKE_FIND_ROOT_PATH ${CMAKE_SYSROOT})[m
[32m+[m[32m  set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)[m
[32m+[m[32m  set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)[m
[32m+[m[32m  set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)[m
[32m+[m[32m  set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)[m
[32m+[m[32mendif()[m
[32m+[m
[32m+[m[32m# Define build configuration options.[m
[32m+[m[32mif(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)[m
[32m+[m[32m  set(CMAKE_BUILD_TYPE "Debug" CACHE[m
[32m+[m[32m    STRING "Flutter build mode" FORCE)[m
[32m+[m[32m  set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS[m
[32m+[m[32m    "Debug" "Profile" "Release")[m
[32m+[m[32mendif()[m
[32m+[m
[32m+[m[32m# Compilation settings that should be applied to most targets.[m
[32m+[m[32m#[m
[32m+[m[32m# Be cautious about adding new options here, as plugins use this function by[m
[32m+[m[32m# default. In most cases, you should add new options to specific targets instead[m
[32m+[m[32m# of modifying this function.[m
[32m+[m[32mfunction(APPLY_STANDARD_SETTINGS TARGET)[m
[32m+[m[32m  target_compile_features(${TARGET} PUBLIC cxx_std_14)[m
[32m+[m[32m  target_compile_options(${TARGET} PRIVATE -Wall -Werror)[m
[32m+[m[32m  target_compile_options(${TARGET} PRIVATE "$<$<NOT:$<CONFIG:Debug>>:-O3>")[m
[32m+[m[32m  target_compile_definitions(${TARGET} PRIVATE "$<$<NOT:$<CONFIG:Debug>>:NDEBUG>")[m
[32m+[m[32mendfunction()[m
[32m+[m
[32m+[m[32m# Flutter library and tool build rules.[m
[32m+[m[32mset(FLUTTER_MANAGED_DIR "${CMAKE_CURRENT_SOURCE_DIR}/flutter")[m
[32m+[m[32madd_subdirectory(${FLUTTER_MANAGED_DIR})[m
[32m+[m
[32m+[m[32m# System-level dependencies.[m
[32m+[m[32mfind_package(PkgConfig REQUIRED)[m
[32m+[m[32mpkg_check_modules(GTK REQUIRED IMPORTED_TARGET gtk+-3.0)[m
[32m+[m
[32m+[m[32madd_definitions(-DAPPLICATION_ID="${APPLICATION_ID}")[m
[32m+[m
[32m+[m[32m# Define the application target. To change its name, change BINARY_NAME above,[m
[32m+[m[32m# not the value here, or `flutter run` will no longer work.[m
[32m+[m[32m#[m
[32m+[m[32m# Any new source files that you add to the application should be added here.[m
[32m+[m[32madd_executable(${BINARY_NAME}[m
[32m+[m[32m  "main.cc"[m
[32m+[m[32m  "my_application.cc"[m
[32m+[m[32m  "${FLUTTER_MANAGED_DIR}/generated_plugin_registrant.cc"[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32m# Apply the standard set of build settings. This can be removed for applications[m
[32m+[m[32m# that need different build settings.[m
[32m+[m[32mapply_standard_settings(${BINARY_NAME})[m
[32m+[m
[32m+[m[32m# Add dependency libraries. Add any application-specific dependencies here.[m
[32m+[m[32mtarget_link_libraries(${BINARY_NAME} PRIVATE flutter)[m
[32m+[m[32mtarget_link_libraries(${BINARY_NAME} PRIVATE PkgConfig::GTK)[m
[32m+[m
[32m+[m[32m# Run the Flutter tool portions of the build. This must not be removed.[m
[32m+[m[32madd_dependencies(${BINARY_NAME} flutter_assemble)[m
[32m+[m
[32m+[m[32m# Only the install-generated bundle's copy of the executable will launch[m
[32m+[m[32m# correctly, since the resources must in the right relative locations. To avoid[m
[32m+[m[32m# people trying to run the unbundled copy, put it in a subdirectory instead of[m
[32m+[m[32m# the default top-level location.[m
[32m+[m[32mset_target_properties(${BINARY_NAME}[m
[32m+[m[32m  PROPERTIES[m
[32m+[m[32m  RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/intermediates_do_not_run"[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32m# Generated plugin build rules, which manage building the plugins and adding[m
[32m+[m[32m# them to the application.[m
[32m+[m[32minclude(flutter/generated_plugins.cmake)[m
[32m+[m
[32m+[m
[32m+[m[32m# === Installation ===[m
[32m+[m[32m# By default, "installing" just makes a relocatable bundle in the build[m
[32m+[m[32m# directory.[m
[32m+[m[32mset(BUILD_BUNDLE_DIR "${PROJECT_BINARY_DIR}/bundle")[m
[32m+[m[32mif(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)[m
[32m+[m[32m  set(CMAKE_INSTALL_PREFIX "${BUILD_BUNDLE_DIR}" CACHE PATH "..." FORCE)[m
[32m+[m[32mendif()[m
[32m+[m
[32m+[m[32m# Start with a clean build bundle directory every time.[m
[32m+[m[32minstall(CODE "[m
[32m+[m[32m  file(REMOVE_RECURSE \"${BUILD_BUNDLE_DIR}/\")[m
[32m+[m[32m  " COMPONENT Runtime)[m
[32m+[m
[32m+[m[32mset(INSTALL_BUNDLE_DATA_DIR "${CMAKE_INSTALL_PREFIX}/data")[m
[32m+[m[32mset(INSTALL_BUNDLE_LIB_DIR "${CMAKE_INSTALL_PREFIX}/lib")[m
[32m+[m
[32m+[m[32minstall(TARGETS ${BINARY_NAME} RUNTIME DESTINATION "${CMAKE_INSTALL_PREFIX}"[m
[32m+[m[32m  COMPONENT Runtime)[m
[32m+[m
[32m+[m[32minstall(FILES "${FLUTTER_ICU_DATA_FILE}" DESTINATION "${INSTALL_BUNDLE_DATA_DIR}"[m
[32m+[m[32m  COMPONENT Runtime)[m
[32m+[m
[32m+[m[32minstall(FILES "${FLUTTER_LIBRARY}" DESTINATION "${INSTALL_BUNDLE_LIB_DIR}"[m
[32m+[m[32m  COMPONENT Runtime)[m
[32m+[m
[32m+[m[32mforeach(bundled_library ${PLUGIN_BUNDLED_LIBRARIES})[m
[32m+[m[32m  install(FILES "${bundled_library}"[m
[32m+[m[32m    DESTINATION "${INSTALL_BUNDLE_LIB_DIR}"[m
[32m+[m[32m    COMPONENT Runtime)[m
[32m+[m[32mendforeach(bundled_library)[m
[32m+[m
[32m+[m[32m# Fully re-copy the assets directory on each build to avoid having stale files[m
[32m+[m[32m# from a previous install.[m
[32m+[m[32mset(FLUTTER_ASSET_DIR_NAME "flutter_assets")[m
[32m+[m[32minstall(CODE "[m
[32m+[m[32m  file(REMOVE_RECURSE \"${INSTALL_BUNDLE_DATA_DIR}/${FLUTTER_ASSET_DIR_NAME}\")[m
[32m+[m[32m  " COMPONENT Runtime)[m
[32m+[m[32minstall(DIRECTORY "${PROJECT_BUILD_DIR}/${FLUTTER_ASSET_DIR_NAME}"[m
[32m+[m[32m  DESTINATION "${INSTALL_BUNDLE_DATA_DIR}" COMPONENT Runtime)[m
[32m+[m
[32m+[m[32m# Install the AOT library on non-Debug builds only.[m
[32m+[m[32mif(NOT CMAKE_BUILD_TYPE MATCHES "Debug")[m
[32m+[m[32m  install(FILES "${AOT_LIBRARY}" DESTINATION "${INSTALL_BUNDLE_LIB_DIR}"[m
[32m+[m[32m    COMPONENT Runtime)[m
[32m+[m[32mendif()[m
[1mdiff --git a/linux/flutter/CMakeLists.txt b/linux/flutter/CMakeLists.txt[m
[1mnew file mode 100644[m
[1mindex 0000000..d5bd016[m
[1m--- /dev/null[m
[1m+++ b/linux/flutter/CMakeLists.txt[m
[36m@@ -0,0 +1,88 @@[m
[32m+[m[32m# This file controls Flutter-level build steps. It should not be edited.[m
[32m+[m[32mcmake_minimum_required(VERSION 3.10)[m
[32m+[m
[32m+[m[32mset(EPHEMERAL_DIR "${CMAKE_CURRENT_SOURCE_DIR}/ephemeral")[m
[32m+[m
[32m+[m[32m# Configuration provided via flutter tool.[m
[32m+[m[32minclude(${EPHEMERAL_DIR}/generated_config.cmake)[m
[32m+[m
[32m+[m[32m# TODO: Move the rest of this into files in ephemeral. See[m
[32m+[m[32m# https://github.com/flutter/flutter/issues/57146.[m
[32m+[m
[32m+[m[32m# Serves the same purpose as list(TRANSFORM ... PREPEND ...),[m
[32m+[m[32m# which isn't available in 3.10.[m
[32m+[m[32mfunction(list_prepend LIST_NAME PREFIX)[m
[32m+[m[32m    set(NEW_LIST "")[m
[32m+[m[32m    foreach(element ${${LIST_NAME}})[m
[32m+[m[32m        list(APPEND NEW_LIST "${PREFIX}${element}")[m
[32m+[m[32m    endforeach(element)[m
[32m+[m[32m    set(${LIST_NAME} "${NEW_LIST}" PARENT_SCOPE)[m
[32m+[m[32mendfunction()[m
[32m+[m
[32m+[m[32m# === Flutter Library ===[m
[32m+[m[32m# System-level dependencies.[m
[32m+[m[32mfind_package(PkgConfig REQUIRED)[m
[32m+[m[32mpkg_check_modules(GTK REQUIRED IMPORTED_TARGET gtk+-3.0)[m
[32m+[m[32mpkg_check_modules(GLIB REQUIRED IMPORTED_TARGET glib-2.0)[m
[32m+[m[32mpkg_check_modules(GIO REQUIRED IMPORTED_TARGET gio-2.0)[m
[32m+[m
[32m+[m[32mset(FLUTTER_LIBRARY "${EPHEMERAL_DIR}/libflutter_linux_gtk.so")[m
[32m+[m
[32m+[m[32m# Published to parent scope for install step.[m
[32m+[m[32mset(FLUTTER_LIBRARY ${FLUTTER_LIBRARY} PARENT_SCOPE)[m
[32m+[m[32mset(FLUTTER_ICU_DATA_FILE "${EPHEMERAL_DIR}/icudtl.dat" PARENT_SCOPE)[m
[32m+[m[32mset(PROJECT_BUILD_DIR "${PROJECT_DIR}/build/" PARENT_SCOPE)[m
[32m+[m[32mset(AOT_LIBRARY "${PROJECT_DIR}/build/lib/libapp.so" PARENT_SCOPE)[m
[32m+[m
[32m+[m[32mlist(APPEND FLUTTER_LIBRARY_HEADERS[m
[32m+[m[32m  "fl_basic_message_channel.h"[m
[32m+[m[32m  "fl_binary_codec.h"[m
[32m+[m[32m  "fl_binary_messenger.h"[m
[32m+[m[32m  "fl_dart_project.h"[m
[32m+[m[32m  "fl_engine.h"[m
[32m+[m[32m  "fl_json_message_codec.h"[m
[32m+[m[32m  "fl_json_method_codec.h"[m
[32m+[m[32m  "fl_message_codec.h"[m
[32m+[m[32m  "fl_method_call.h"[m
[32m+[m[32m  "fl_method_channel.h"[m
[32m+[m[32m  "fl_method_codec.h"[m
[32m+[m[32m  "fl_method_response.h"[m
[32m+[m[32m  "fl_plugin_registrar.h"[m
[32m+[m[32m  "fl_plugin_registry.h"[m
[32m+[m[32m  "fl_standard_message_codec.h"[m
[32m+[m[32m  "fl_standard_method_codec.h"[m
[32m+[m[32m  "fl_string_codec.h"[m
[32m+[m[32m  "fl_value.h"[m
[32m+[m[32m  "fl_view.h"[m
[32m+[m[32m  "flutter_linux.h"[m
[32m+[m[32m)[m
[32m+[m[32mlist_prepend(FLUTTER_LIBRARY_HEADERS "${EPHEMERAL_DIR}/flutter_linux/")[m
[32m+[m[32madd_library(flutter INTERFACE)[m
[32m+[m[32mtarget_include_directories(flutter INTERFACE[m
[32m+[m[32m  "${EPHEMERAL_DIR}"[m
[32m+[m[32m)[m
[32m+[m[32mtarget_link_libraries(flutter INTERFACE "${FLUTTER_LIBRARY}")[m
[32m+[m[32mtarget_link_libraries(flutter INTERFACE[m
[32m+[m[32m  PkgConfig::GTK[m
[32m+[m[32m  PkgConfig::GLIB[m
[32m+[m[32m  PkgConfig::GIO[m
[32m+[m[32m)[m
[32m+[m[32madd_dependencies(flutter flutter_assemble)[m
[32m+[m
[32m+[m[32m# === Flutter tool backend ===[m
[32m+[m[32m# _phony_ is a non-existent file to force this command to run every time,[m
[32m+[m[32m# since currently there's no way to get a full input/output list from the[m
[32m+[m[32m# flutter tool.[m
[32m+[m[32madd_custom_command([m
[32m+[m[32m  OUTPUT ${FLUTTER_LIBRARY} ${FLUTTER_LIBRARY_HEADERS}[m
[32m+[m[32m    ${CMAKE_CURRENT_BINARY_DIR}/_phony_[m
[32m+[m[32m  COMMAND ${CMAKE_COMMAND} -E env[m
[32m+[m[32m    ${FLUTTER_TOOL_ENVIRONMENT}[m
[32m+[m[32m    "${FLUTTER_ROOT}/packages/flutter_tools/bin/tool_backend.sh"[m
[32m+[m[32m      ${FLUTTER_TARGET_PLATFORM} ${CMAKE_BUILD_TYPE}[m
[32m+[m[32m  VERBATIM[m
[32m+[m[32m)[m
[32m+[m[32madd_custom_target(flutter_assemble DEPENDS[m
[32m+[m[32m  "${FLUTTER_LIBRARY}"[m
[32m+[m[32m  ${FLUTTER_LIBRARY_HEADERS}[m
[32m+[m[32m)[m
[1mdiff --git a/linux/flutter/generated_plugin_registrant.cc b/linux/flutter/generated_plugin_registrant.cc[m
[1mnew file mode 100644[m
[1mindex 0000000..e71a16d[m
[1m--- /dev/null[m
[1m+++ b/linux/flutter/generated_plugin_registrant.cc[m
[36m@@ -0,0 +1,11 @@[m
[32m+[m[32m//[m
[32m+[m[32m//  Generated file. Do not edit.[m
[32m+[m[32m//[m
[32m+[m
[32m+[m[32m// clang-format off[m
[32m+[m
[32m+[m[32m#include "generated_plugin_registrant.h"[m
[32m+[m
[32m+[m
[32m+[m[32mvoid fl_register_plugins(FlPluginRegistry* registry) {[m
[32m+[m[32m}[m
[1mdiff --git a/linux/flutter/generated_plugin_registrant.h b/linux/flutter/generated_plugin_registrant.h[m
[1mnew file mode 100644[m
[1mindex 0000000..e0f0a47[m
[1m--- /dev/null[m
[1m+++ b/linux/flutter/generated_plugin_registrant.h[m
[36m@@ -0,0 +1,15 @@[m
[32m+[m[32m//[m
[32m+[m[32m//  Generated file. Do not edit.[m
[32m+[m[32m//[m
[32m+[m
[32m+[m[32m// clang-format off[m
[32m+[m
[32m+[m[32m#ifndef GENERATED_PLUGIN_REGISTRANT_[m
[32m+[m[32m#define GENERATED_PLUGIN_REGISTRANT_[m
[32m+[m
[32m+[m[32m#include <flutter_linux/flutter_linux.h>[m
[32m+[m
[32m+[m[32m// Registers Flutter plugins.[m
[32m+[m[32mvoid fl_register_plugins(FlPluginRegistry* registry);[m
[32m+[m
[32m+[m[32m#endif  // GENERATED_PLUGIN_REGISTRANT_[m
[1mdiff --git a/linux/flutter/generated_plugins.cmake b/linux/flutter/generated_plugins.cmake[m
[1mnew file mode 100644[m
[1mindex 0000000..2e1de87[m
[1m--- /dev/null[m
[1m+++ b/linux/flutter/generated_plugins.cmake[m
[36m@@ -0,0 +1,23 @@[m
[32m+[m[32m#[m
[32m+[m[32m# Generated file, do not edit.[m
[32m+[m[32m#[m
[32m+[m
[32m+[m[32mlist(APPEND FLUTTER_PLUGIN_LIST[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32mlist(APPEND FLUTTER_FFI_PLUGIN_LIST[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32mset(PLUGIN_BUNDLED_LIBRARIES)[m
[32m+[m
[32m+[m[32mforeach(plugin ${FLUTTER_PLUGIN_LIST})[m
[32m+[m[32m  add_subdirectory(flutter/ephemeral/.plugin_symlinks/${plugin}/linux plugins/${plugin})[m
[32m+[m[32m  target_link_libraries(${BINARY_NAME} PRIVATE ${plugin}_plugin)[m
[32m+[m[32m  list(APPEND PLUGIN_BUNDLED_LIBRARIES $<TARGET_FILE:${plugin}_plugin>)[m
[32m+[m[32m  list(APPEND PLUGIN_BUNDLED_LIBRARIES ${${plugin}_bundled_libraries})[m
[32m+[m[32mendforeach(plugin)[m
[32m+[m
[32m+[m[32mforeach(ffi_plugin ${FLUTTER_FFI_PLUGIN_LIST})[m
[32m+[m[32m  add_subdirectory(flutter/ephemeral/.plugin_symlinks/${ffi_plugin}/linux plugins/${ffi_plugin})[m
[32m+[m[32m  list(APPEND PLUGIN_BUNDLED_LIBRARIES ${${ffi_plugin}_bundled_libraries})[m
[32m+[m[32mendforeach(ffi_plugin)[m
[1mdiff --git a/linux/main.cc b/linux/main.cc[m
[1mnew file mode 100644[m
[1mindex 0000000..e7c5c54[m
[1m--- /dev/null[m
[1m+++ b/linux/main.cc[m
[36m@@ -0,0 +1,6 @@[m
[32m+[m[32m#include "my_application.h"[m
[32m+[m
[32m+[m[32mint main(int argc, char** argv) {[m
[32m+[m[32m  g_autoptr(MyApplication) app = my_application_new();[m
[32m+[m[32m  return g_application_run(G_APPLICATION(app), argc, argv);[m
[32m+[m[32m}[m
[1mdiff --git a/linux/my_application.cc b/linux/my_application.cc[m
[1mnew file mode 100644[m
[1mindex 0000000..85b6be2[m
[1m--- /dev/null[m
[1m+++ b/linux/my_application.cc[m
[36m@@ -0,0 +1,104 @@[m
[32m+[m[32m#include "my_application.h"[m
[32m+[m
[32m+[m[32m#include <flutter_linux/flutter_linux.h>[m
[32m+[m[32m#ifdef GDK_WINDOWING_X11[m
[32m+[m[32m#include <gdk/gdkx.h>[m
[32m+[m[32m#endif[m
[32m+[m
[32m+[m[32m#include "flutter/generated_plugin_registrant.h"[m
[32m+[m
[32m+[m[32mstruct _MyApplication {[m
[32m+[m[32m  GtkApplication parent_instance;[m
[32m+[m[32m  char** dart_entrypoint_arguments;[m
[32m+[m[32m};[m
[32m+[m
[32m+[m[32mG_DEFINE_TYPE(MyApplication, my_application, GTK_TYPE_APPLICATION)[m
[32m+[m
[32m+[m[32m// Implements GApplication::activate.[m
[32m+[m[32mstatic void my_application_activate(GApplication* application) {[m
[32m+[m[32m  MyApplication* self = MY_APPLICATION(application);[m
[32m+[m[32m  GtkWindow* window =[m
[32m+[m[32m      GTK_WINDOW(gtk_application_window_new(GTK_APPLICATION(application)));[m
[32m+[m
[32m+[m[32m  // Use a header bar when running in GNOME as this is the common style used[m
[32m+[m[32m  // by applications and is the setup most users will be using (e.g. Ubuntu[m
[32m+[m[32m  // desktop).[m
[32m+[m[32m  // If running on X and not using GNOME then just use a traditional title bar[m
[32m+[m[32m  // in case the window manager does more exotic layout, e.g. tiling.[m
[32m+[m[32m  // If running on Wayland assume the header bar will work (may need changing[m
[32m+[m[32m  // if future cases occur).[m
[32m+[m[32m  gboolean use_header_bar = TRUE;[m
[32m+[m[32m#ifdef GDK_WINDOWING_X11[m
[32m+[m[32m  GdkScreen* screen = gtk_window_get_screen(window);[m
[32m+[m[32m  if (GDK_IS_X11_SCREEN(screen)) {[m
[32m+[m[32m    const gchar* wm_name = gdk_x11_screen_get_window_manager_name(screen);[m
[32m+[m[32m    if (g_strcmp0(wm_name, "GNOME Shell") != 0) {[m
[32m+[m[32m      use_header_bar = FALSE;[m
[32m+[m[32m    }[m
[32m+[m[32m  }[m
[32m+[m[32m#endif[m
[32m+[m[32m  if (use_header_bar) {[m
[32m+[m[32m    GtkHeaderBar* header_bar = GTK_HEADER_BAR(gtk_header_bar_new());[m
[32m+[m[32m    gtk_widget_show(GTK_WIDGET(header_bar));[m
[32m+[m[32m    gtk_header_bar_set_title(header_bar, "fooddeliveryapp");[m
[32m+[m[32m    gtk_header_bar_set_show_close_button(header_bar, TRUE);[m
[32m+[m[32m    gtk_window_set_titlebar(window, GTK_WIDGET(header_bar));[m
[32m+[m[32m  } else {[m
[32m+[m[32m    gtk_window_set_title(window, "fooddeliveryapp");[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  gtk_window_set_default_size(window, 1280, 720);[m
[32m+[m[32m  gtk_widget_show(GTK_WIDGET(window));[m
[32m+[m
[32m+[m[32m  g_autoptr(FlDartProject) project = fl_dart_project_new();[m
[32m+[m[32m  fl_dart_project_set_dart_entrypoint_arguments(project, self->dart_entrypoint_arguments);[m
[32m+[m
[32m+[m[32m  FlView* view = fl_view_new(project);[m
[32m+[m[32m  gtk_widget_show(GTK_WIDGET(view));[m
[32m+[m[32m  gtk_container_add(GTK_CONTAINER(window), GTK_WIDGET(view));[m
[32m+[m
[32m+[m[32m  fl_register_plugins(FL_PLUGIN_REGISTRY(view));[m
[32m+[m
[32m+[m[32m  gtk_widget_grab_focus(GTK_WIDGET(view));[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m// Implements GApplication::local_command_line.[m
[32m+[m[32mstatic gboolean my_application_local_command_line(GApplication* application, gchar*** arguments, int* exit_status) {[m
[32m+[m[32m  MyApplication* self = MY_APPLICATION(application);[m
[32m+[m[32m  // Strip out the first argument as it is the binary name.[m
[32m+[m[32m  self->dart_entrypoint_arguments = g_strdupv(*arguments + 1);[m
[32m+[m
[32m+[m[32m  g_autoptr(GError) error = nullptr;[m
[32m+[m[32m  if (!g_application_register(application, nullptr, &error)) {[m
[32m+[m[32m     g_warning("Failed to register: %s", error->message);[m
[32m+[m[32m     *exit_status = 1;[m
[32m+[m[32m     return TRUE;[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  g_application_activate(application);[m
[32m+[m[32m  *exit_status = 0;[m
[32m+[m
[32m+[m[32m  return TRUE;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m// Implements GObject::dispose.[m
[32m+[m[32mstatic void my_application_dispose(GObject* object) {[m
[32m+[m[32m  MyApplication* self = MY_APPLICATION(object);[m
[32m+[m[32m  g_clear_pointer(&self->dart_entrypoint_arguments, g_strfreev);[m
[32m+[m[32m  G_OBJECT_CLASS(my_application_parent_class)->dispose(object);[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mstatic void my_application_class_init(MyApplicationClass* klass) {[m
[32m+[m[32m  G_APPLICATION_CLASS(klass)->activate = my_application_activate;[m
[32m+[m[32m  G_APPLICATION_CLASS(klass)->local_command_line = my_application_local_command_line;[m
[32m+[m[32m  G_OBJECT_CLASS(klass)->dispose = my_application_dispose;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mstatic void my_application_init(MyApplication* self) {}[m
[32m+[m
[32m+[m[32mMyApplication* my_application_new() {[m
[32m+[m[32m  return MY_APPLICATION(g_object_new(my_application_get_type(),[m
[32m+[m[32m                                     "application-id", APPLICATION_ID,[m
[32m+[m[32m                                     "flags", G_APPLICATION_NON_UNIQUE,[m
[32m+[m[32m                                     nullptr));[m
[32m+[m[32m}[m
[1mdiff --git a/linux/my_application.h b/linux/my_application.h[m
[1mnew file mode 100644[m
[1mindex 0000000..72271d5[m
[1m--- /dev/null[m
[1m+++ b/linux/my_application.h[m
[36m@@ -0,0 +1,18 @@[m
[32m+[m[32m#ifndef FLUTTER_MY_APPLICATION_H_[m
[32m+[m[32m#define FLUTTER_MY_APPLICATION_H_[m
[32m+[m
[32m+[m[32m#include <gtk/gtk.h>[m
[32m+[m
[32m+[m[32mG_DECLARE_FINAL_TYPE(MyApplication, my_application, MY, APPLICATION,[m
[32m+[m[32m                     GtkApplication)[m
[32m+[m
[32m+[m[32m/**[m
[32m+[m[32m * my_application_new:[m
[32m+[m[32m *[m
[32m+[m[32m * Creates a new Flutter-based application.[m
[32m+[m[32m *[m
[32m+[m[32m * Returns: a new #MyApplication.[m
[32m+[m[32m */[m
[32m+[m[32mMyApplication* my_application_new();[m
[32m+[m
[32m+[m[32m#endif  // FLUTTER_MY_APPLICATION_H_[m
[1mdiff --git a/macos/.gitignore b/macos/.gitignore[m
[1mnew file mode 100644[m
[1mindex 0000000..746adbb[m
[1m--- /dev/null[m
[1m+++ b/macos/.gitignore[m
[36m@@ -0,0 +1,7 @@[m
[32m+[m[32m# Flutter-related[m
[32m+[m[32m**/Flutter/ephemeral/[m
[32m+[m[32m**/Pods/[m
[32m+[m
[32m+[m[32m# Xcode-related[m
[32m+[m[32m**/dgph[m
[32m+[m[32m**/xcuserdata/[m
[1mdiff --git a/macos/Flutter/Flutter-Debug.xcconfig b/macos/Flutter/Flutter-Debug.xcconfig[m
[1mnew file mode 100644[m
[1mindex 0000000..c2efd0b[m
[1m--- /dev/null[m
[1m+++ b/macos/Flutter/Flutter-Debug.xcconfig[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32m#include "ephemeral/Flutter-Generated.xcconfig"[m
[1mdiff --git a/macos/Flutter/Flutter-Release.xcconfig b/macos/Flutter/Flutter-Release.xcconfig[m
[1mnew file mode 100644[m
[1mindex 0000000..c2efd0b[m
[1m--- /dev/null[m
[1m+++ b/macos/Flutter/Flutter-Release.xcconfig[m
[36m@@ -0,0 +1 @@[m
[32m+[m[32m#include "ephemeral/Flutter-Generated.xcconfig"[m
[1mdiff --git a/macos/Flutter/GeneratedPluginRegistrant.swift b/macos/Flutter/GeneratedPluginRegistrant.swift[m
[1mnew file mode 100644[m
[1mindex 0000000..6d055f4[m
[1m--- /dev/null[m
[1m+++ b/macos/Flutter/GeneratedPluginRegistrant.swift[m
[36m@@ -0,0 +1,18 @@[m
[32m+[m[32m//[m
[32m+[m[32m//  Generated file. Do not edit.[m
[32m+[m[32m//[m
[32m+[m
[32m+[m[32mimport FlutterMacOS[m
[32m+[m[32mimport Foundation[m
[32m+[m
[32m+[m[32mimport cloud_firestore[m
[32m+[m[32mimport firebase_auth[m
[32m+[m[32mimport firebase_core[m
[32m+[m[32mimport location[m
[32m+[m
[32m+[m[32mfunc RegisterGeneratedPlugins(registry: FlutterPluginRegistry) {[m
[32m+[m[32m  FLTFirebaseFirestorePlugin.register(with: registry.registrar(forPlugin: "FLTFirebaseFirestorePlugin"))[m
[32m+[m[32m  FLTFirebaseAuthPlugin.register(with: registry.registrar(forPlugin: "FLTFirebaseAuthPlugin"))[m
[32m+[m[32m  FLTFirebaseCorePlugin.register(with: registry.registrar(forPlugin: "FLTFirebaseCorePlugin"))[m
[32m+[m[32m  LocationPlugin.register(with: registry.registrar(forPlugin: "LocationPlugin"))[m
[32m+[m[32m}[m
[1mdiff --git a/macos/Runner.xcodeproj/project.pbxproj b/macos/Runner.xcodeproj/project.pbxproj[m
[1mnew file mode 100644[m
[1mindex 0000000..0ad3929[m
[1m--- /dev/null[m
[1m+++ b/macos/Runner.xcodeproj/project.pbxproj[m
[36m@@ -0,0 +1,572 @@[m
[32m+[m[32m// !$*UTF8*$![m
[32m+[m[32m{[m
[32m+[m	[32marchiveVersion = 1;[m
[32m+[m	[32mclasses = {[m
[32m+[m	[32m};[m
[32m+[m	[32mobjectVersion = 51;[m
[32m+[m	[32mobjects = {[m
[32m+[m
[32m+[m[32m/* Begin PBXAggregateTarget section */[m
[32m+[m		[32m33CC111A2044C6BA0003C045 /* Flutter Assemble */ = {[m
[32m+[m			[32misa = PBXAggregateTarget;[m
[32m+[m			[32mbuildConfigurationList = 33CC111B2044C6BA0003C045 /* Build configuration list for PBXAggregateTarget "Flutter Assemble" */;[m
[32m+[m			[32mbuildPhases = ([m
[32m+[m				[32m33CC111E2044C6BF0003C045 /* ShellScript */,[m
[32m+[m			[32m);[m
[32m+[m			[32mdependencies = ([m
[32m+[m			[32m);[m
[32m+[m			[32mname = "Flutter Assemble";[m
[32m+[m			[32mproductName = FLX;[m
[32m+[m		[32m};[m
[32m+[m[32m/* End PBXAggregateTarget section */[m
[32m+[m
[32m+[m[32m/* Begin PBXBuildFile section */[m
[32m+[m		[32m335BBD1B22A9A15E00E9071D /* GeneratedPluginRegistrant.swift in Sources */ = {isa = PBXBuildFile; fileRef = 335BBD1A22A9A15E00E9071D /* GeneratedPluginRegistrant.swift */; };[m
[32m+[m		[32m33CC10F12044A3C60003C045 /* AppDelegate.swift in Sources */ = {isa = PBXBuildFile; fileRef = 33CC10F02044A3C60003C045 /* AppDelegate.swift */; };[m
[32m+[m		[32m33CC10F32044A3C60003C045 /* Assets.xcassets in Resources */ = {isa = PBXBuildFile; fileRef = 33CC10F22044A3C60003C045 /* Assets.xcassets */; };[m
[32m+[m		[32m33CC10F62044A3C60003C045 /* MainMenu.xib in Resources */ = {isa = PBXBuildFile; fileRef = 33CC10F42044A3C60003C045 /* MainMenu.xib */; };[m
[32m+[m		[32m33CC11132044BFA00003C045 /* MainFlutterWindow.swift in Sources */ = {isa = PBXBuildFile; fileRef = 33CC11122044BFA00003C045 /* MainFlutterWindow.swift */; };[m
[32m+[m[32m/* End PBXBuildFile section */[m
[32m+[m
[32m+[m[32m/* Begin PBXContainerItemProxy section */[m
[32m+[m		[32m33CC111F2044C79F0003C045 /* PBXContainerItemProxy */ = {[m
[32m+[m			[32misa = PBXContainerItemProxy;[m
[32m+[m			[32mcontainerPortal = 33CC10E52044A3C60003C045 /* Project object */;[m
[32m+[m			[32mproxyType = 1;[m
[32m+[m			[32mremoteGlobalIDString = 33CC111A2044C6BA0003C045;[m
[32m+[m			[32mremoteInfo = FLX;[m
[32m+[m		[32m};[m
[32m+[m[32m/* End PBXContainerItemProxy section */[m
[32m+[m
[32m+[m[32m/* Begin PBXCopyFilesBuildPhase section */[m
[32m+[m		[32m33CC110E2044A8840003C045 /* Bundle Framework */ = {[m
[32m+[m			[32misa = PBXCopyFilesBuildPhase;[m
[32m+[m			[32mbuildActionMask = 2147483647;[m
[32m+[m			[32mdstPath = "";[m
[32m+[m			[32mdstSubfolderSpec = 10;[m
[32m+[m			[32mfiles = ([m
[32m+[m			[32m);[m
[32m+[m			[32mname = "Bundle Framework";[m
[32m+[m			[32mrunOnlyForDeploymentPostprocessing = 0;[m
[32m+[m		[32m};[m
[32m+[m[32m/* End PBXCopyFilesBuildPhase section */[m
[32m+[m
[32m+[m[32m/* Begin PBXFileReference section */[m
[32m+[m		[32m333000ED22D3DE5D00554162 /* Warnings.xcconfig */ = {isa = PBXFileReference; lastKnownFileType = text.xcconfig; path = Warnings.xcconfig; sourceTree = "<group>"; };[m
[32m+[m		[32m335BBD1A22A9A15E00E9071D /* GeneratedPluginRegistrant.swift */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.swift; path = GeneratedPluginRegistrant.swift; sourceTree = "<group>"; };[m
[32m+[m		[32m33CC10ED2044A3C60003C045 /* fooddeliveryapp.app */ = {isa = PBXFileReference; explicitFileType = wrapper.application; includeInIndex = 0; path = "fooddeliveryapp.app"; sourceTree = BUILT_PRODUCTS_DIR; };[m
[32m+[m		[32m33CC10F02044A3C60003C045 /* AppDelegate.swift */ = {isa = PBXFileReference; lastKnownFileType = sourcecode.swift; path = AppDelegate.swift; sourceTree = "<group>"; };[m
[32m+[m		[32m33CC10F22044A3C60003C045 /* Assets.xcassets */ = {isa = PBXFileReference; lastKnownFileType = folder.assetcatalog; name = Assets.xcassets; path = Runner/Assets.xcassets; sourceTree = "<group>"; };[m
[32m+[m		[32m33CC10F52044A3C60003C045 /* Base */ = {isa = PBXFileReference; lastKnownFileType = file.xib; name = Base; path = Base.lproj/MainMenu.xib; sourceTree = "<group>"; };[m
[32m+[m		[32m33CC10F72044A3C60003C045 /* Info.plist */ = {isa = PBXFileReference; lastKnownFileType = text.plist.xml; name = Info.plist; path = Runner/Info.plist; sourceTree = "<group>"; };[m
[32m+[m		[32m33CC11122044BFA00003C045 /* MainFlutterWindow.swift */ = {isa = PBXFileReference; lastKnownFileType = sourcecode.swift; path = MainFlutterWindow.swift; sourceTree = "<group>"; };[m
[32m+[m		[32m33CEB47222A05771004F2AC0 /* Flutter-Debug.xcconfig */ = {isa = PBXFileReference; lastKnownFileType = text.xcconfig; path = "Flutter-Debug.xcconfig"; sourceTree = "<group>"; };[m
[32m+[m		[32m33CEB47422A05771004F2AC0 /* Flutter-Release.xcconfig */ = {isa = PBXFileReference; lastKnownFileType = text.xcconfig; path = "Flutter-Release.xcconfig"; sourceTree = "<group>"; };[m
[32m+[m		[32m33CEB47722A0578A004F2AC0 /* Flutter-Generated.xcconfig */ = {isa = PBXFileReference; lastKnownFileType = text.xcconfig; name = "Flutter-Generated.xcconfig"; path = "ephemeral/Flutter-Generated.xcconfig"; sourceTree = "<group>"; };[m
[32m+[m		[32m33E51913231747F40026EE4D /* DebugProfile.entitlements */ = {isa = PBXFileReference; lastKnownFileType = text.plist.entitlements; path = DebugProfile.entitlements; sourceTree = "<group>"; };[m
[32m+[m		[32m33E51914231749380026EE4D /* Release.entitlements */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.plist.entitlements; path = Release.entitlements; sourceTree = "<group>"; };[m
[32m+[m		[32m33E5194F232828860026EE4D /* AppInfo.xcconfig */ = {isa = PBXFileReference; lastKnownFileType = text.xcconfig; path = AppInfo.xcconfig; sourceTree = "<group>"; };[m
[32m+[m		[32m7AFA3C8E1D35360C0083082E /* Release.xcconfig */ = {isa = PBXFileReference; lastKnownFileType = text.xcconfig; path = Release.xcconfig; sourceTree = "<group>"; };[m
[32m+[m		[32m9740EEB21CF90195004384FC /* Debug.xcconfig */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.xcconfig; path = Debug.xcconfig; sourceTree = "<group>"; };[m
[32m+[m[32m/* End PBXFileReference section */[m
[32m+[m
[32m+[m[32m/* Begin PBXFrameworksBuildPhase section */[m
[32m+[m		[32m33CC10EA2044A3C60003C045 /* Frameworks */ = {[m
[32m+[m			[32misa = PBXFrameworksBuildPhase;[m
[32m+[m			[32mbuildActionMask = 2147483647;[m
[32m+[m			[32mfiles = ([m
[32m+[m			[32m);[m
[32m+[m			[32mrunOnlyForDeploymentPostprocessing = 0;[m
[32m+[m		[32m};[m
[32m+[m[32m/* End PBXFrameworksBuildPhase section */[m
[32m+[m
[32m+[m[32m/* Begin PBXGroup section */[m
[32m+[m		[32m33BA886A226E78AF003329D5 /* Configs */ = {[m
[32m+[m			[32misa = PBXGroup;[m
[32m+[m			[32mchildren = ([m
[32m+[m				[32m33E5194F232828860026EE4D /* AppInfo.xcconfig */,[m
[32m+[m				[32m9740EEB21CF90195004384FC /* Debug.xcconfig */,[m
[32m+[m				[32m7AFA3C8E1D35360C0083082E /* Release.xcconfig */,[m
[32m+[m				[32m333000ED22D3DE5D00554162 /* Warnings.xcconfig */,[m
[32m+[m			[32m);[m
[32m+[m			[32mpath = Configs;[m
[32m+[m			[32msourceTree = "<group>";[m
[32m+[m		[32m};[m
[32m+[m		[32m33CC10E42044A3C60003C045 = {[m
[32m+[m			[32misa = PBXGroup;[m
[32m+[m			[32mchildren = ([m
[32m+[m				[32m33FAB671232836740065AC1E /* Runner */,[m
[32m+[m				[32m33CEB47122A05771004F2AC0 /* Flutter */,[m
[32m+[m				[32m33CC10EE2044A3C60003C045 /* Products */,[m
[32m+[m				[32mD73912EC22F37F3D000D13A0 /* Frameworks */,[m
[32m+[m			[32m);[m
[32m+[m			[32msourceTree = "<group>";[m
[32m+[m		[32m};[m
[32m+[m		[32m33CC10EE2044A3C60003C045 /* Products */ = {[m
[32m+[m			[32misa = PBXGroup;[m
[32m+[m			[32mchildren = ([m
[32m+[m				[32m33CC10ED2044A3C60003C045 /* fooddeliveryapp.app */,[m
[32m+[m			[32m);[m
[32m+[m			[32mname = Products;[m
[32m+[m			[32msourceTree = "<group>";[m
[32m+[m		[32m};[m
[32m+[m		[32m33CC11242044D66E0003C045 /* Resources */ = {[m
[32m+[m			[32misa = PBXGroup;[m
[32m+[m			[32mchildren = ([m
[32m+[m				[32m33CC10F22044A3C60003C045 /* Assets.xcassets */,[m
[32m+[m				[32m33CC10F42044A3C60003C045 /* MainMenu.xib */,[m
[32m+[m				[32m33CC10F72044A3C60003C045 /* Info.plist */,[m
[32m+[m			[32m);[m
[32m+[m			[32mname = Resources;[m
[32m+[m			[32mpath = ..;[m
[32m+[m			[32msourceTree = "<group>";[m
[32m+[m		[32m};[m
[32m+[m		[32m33CEB47122A05771004F2AC0 /* Flutter */ = {[m
[32m+[m			[32misa = PBXGroup;[m
[32m+[m			[32mchildren = ([m
[32m+[m				[32m335BBD1A22A9A15E00E9071D /* GeneratedPluginRegistrant.swift */,[m
[32m+[m				[32m33CEB47222A05771004F2AC0 /* Flutter-Debug.xcconfig */,[m
[32m+[m				[32m33CEB47422A05771004F2AC0 /* Flutter-Release.xcconfig */,[m
[32m+[m				[32m33CEB47722A0578A004F2AC0 /* Flutter-Generated.xcconfig */,[m
[32m+[m			[32m);[m
[32m+[m			[32mpath = Flutter;[m
[32m+[m			[32msourceTree = "<group>";[m
[32m+[m		[32m};[m
[32m+[m		[32m33FAB671232836740065AC1E /* Runner */ = {[m
[32m+[m			[32misa = PBXGroup;[m
[32m+[m			[32mchildren = ([m
[32m+[m				[32m33CC10F02044A3C60003C045 /* AppDelegate.swift */,[m
[32m+[m				[32m33CC11122044BFA00003C045 /* MainFlutterWindow.swift */,[m
[32m+[m				[32m33E51913231747F40026EE4D /* DebugProfile.entitlements */,[m
[32m+[m				[32m33E51914231749380026EE4D /* Release.entitlements */,[m
[32m+[m				[32m33CC11242044D66E0003C045 /* Resources */,[m
[32m+[m				[32m33BA886A226E78AF003329D5 /* Configs */,[m
[32m+[m			[32m);[m
[32m+[m			[32mpath = Runner;[m
[32m+[m			[32msourceTree = "<group>";[m
[32m+[m		[32m};[m
[32m+[m		[32mD73912EC22F37F3D000D13A0 /* Frameworks */ = {[m
[32m+[m			[32misa = PBXGroup;[m
[32m+[m			[32mchildren = ([m
[32m+[m			[32m);[m
[32m+[m			[32mname = Frameworks;[m
[32m+[m			[32msourceTree = "<group>";[m
[32m+[m		[32m};[m
[32m+[m[32m/* End PBXGroup section */[m
[32m+[m
[32m+[m[32m/* Begin PBXNativeTarget section */[m
[32m+[m		[32m33CC10EC2044A3C60003C045 /* Runner */ = {[m
[32m+[m			[32misa = PBXNativeTarget;[m
[32m+[m			[32mbuildConfigurationList = 33CC10FB2044A3C60003C045 /* Build configuration list for PBXNativeTarget "Runner" */;[m
[32m+[m			[32mbuildPhases = ([m
[32m+[m				[32m33CC10E92044A3C60003C045 /* Sources */,[m
[32m+[m				[32m33CC10EA2044A3C60003C045 /* Frameworks */,[m
[32m+[m				[32m33CC10EB2044A3C60003C045 /* Resources */,[m
[32m+[m				[32m33CC110E2044A8840003C045 /* Bundle Framework */,[m
[32m+[m				[32m3399D490228B24CF009A79C7 /* ShellScript */,[m
[32m+[m			[32m);[m
[32m+[m			[32mbuildRules = ([m
[32m+[m			[32m);[m
[32m+[m			[32mdependencies = ([m
[32m+[m				[32m33CC11202044C79F0003C045 /* PBXTargetDependency */,[m
[32m+[m			[32m);[m
[32m+[m			[32mname = Runner;[m
[32m+[m			[32mproductName = Runner;[m
[32m+[m			[32mproductReference = 33CC10ED2044A3C60003C045 /* fooddeliveryapp.app */;[m
[32m+[m			[32mproductType = "com.apple.product-type.application";[m
[32m+[m		[32m};[m
[32m+[m[32m/* End PBXNativeTarget section */[m
[32m+[m
[32m+[m[32m/* Begin PBXProject section */[m
[32m+[m		[32m33CC10E52044A3C60003C045 /* Project object */ = {[m
[32m+[m			[32misa = PBXProject;[m
[32m+[m			[32mattributes = {[m
[32m+[m				[32mLastSwiftUpdateCheck = 0920;[m
[32m+[m				[32mLastUpgradeCheck = 1300;[m
[32m+[m				[32mORGANIZATIONNAME = "";[m
[32m+[m				[32mTargetAttributes = {[m
[32m+[m					[32m33CC10EC2044A3C60003C045 = {[m
[32m+[m						[32mCreatedOnToolsVersion = 9.2;[m
[32m+[m						[32mLastSwiftMigration = 1100;[m
[32m+[m						[32mProvisioningStyle = Automatic;[m
[32m+[m						[32mSystemCapabilities = {[m
[32m+[m							[32mcom.apple.Sandbox = {[m
[32m+[m								[32menabled = 1;[m
[32m+[m							[32m};[m
[32m+[m						[32m};[m
[32m+[m					[32m};[m
[32m+[m					[32m33CC111A2044C6BA0003C045 = {[m
[32m+[m						[32mCreatedOnToolsVersion = 9.2;[m
[32m+[m						[32mProvisioningStyle = Manual;[m
[32m+[m					[32m};[m
[32m+[m				[32m};[m
[32m+[m			[32m};[m
[32m+[m			[32mbuildConfigurationList = 33CC10E82044A3C60003C045 /* Build configuration list for PBXProject "Runner" */;[m
[32m+[m			[32mcompatibilityVersion = "Xcode 9.3";[m
[32m+[m			[32mdevelopmentRegion = en;[m
[32m+[m			[32mhasScannedForEncodings = 0;[m
[32m+[m			[32mknownRegions = ([m
[32m+[m				[32men,[m
[32m+[m				[32mBase,[m
[32m+[m			[32m);[m
[32m+[m			[32mmainGroup = 33CC10E42044A3C60003C045;[m
[32m+[m			[32mproductRefGroup = 33CC10EE2044A3C60003C045 /* Products */;[m
[32m+[m			[32mprojectDirPath = "";[m
[32m+[m			[32mprojectRoot = "";[m
[32m+[m			[32mtargets = ([m
[32m+[m				[32m33CC10EC2044A3C60003C045 /* Runner */,[m
[32m+[m				[32m33CC111A2044C6BA0003C045 /* Flutter Assemble */,[m
[32m+[m			[32m);[m
[32m+[m		[32m};[m
[32m+[m[32m/* End PBXProject section */[m
[32m+[m
[32m+[m[32m/* Begin PBXResourcesBuildPhase section */[m
[32m+[m		[32m33CC10EB2044A3C60003C045 /* Resources */ = {[m
[32m+[m			[32misa = PBXResourcesBuildPhase;[m
[32m+[m			[32mbuildActionMask = 2147483647;[m
[32m+[m			[32mfiles = ([m
[32m+[m				[32m33CC10F32044A3C60003C045 /* Assets.xcassets in Resources */,[m
[32m+[m				[32m33CC10F62044A3C60003C045 /* MainMenu.xib in Resources */,[m
[32m+[m			[32m);[m
[32m+[m			[32mrunOnlyForDeploymentPostprocessing = 0;[m
[32m+[m		[32m};[m
[32m+[m[32m/* End PBXResourcesBuildPhase section */[m
[32m+[m
[32m+[m[32m/* Begin PBXShellScriptBuildPhase section */[m
[32m+[m		[32m3399D490228B24CF009A79C7 /* ShellScript */ = {[m
[32m+[m			[32misa = PBXShellScriptBuildPhase;[m
[32m+[m			[32mbuildActionMask = 2147483647;[m
[32m+[m			[32mfiles = ([m
[32m+[m			[32m);[m
[32m+[m			[32minputFileListPaths = ([m
[32m+[m			[32m);[m
[32m+[m			[32minputPaths = ([m
[32m+[m			[32m);[m
[32m+[m			[32moutputFileListPaths = ([m
[32m+[m			[32m);[m
[32m+[m			[32moutputPaths = ([m
[32m+[m			[32m);[m
[32m+[m			[32mrunOnlyForDeploymentPostprocessing = 0;[m
[32m+[m			[32mshellPath = /bin/sh;[m
[32m+[m			[32mshellScript = "echo \"$PRODUCT_NAME.app\" > \"$PROJECT_DIR\"/Flutter/ephemeral/.app_filename && \"$FLUTTER_ROOT\"/packages/flutter_tools/bin/macos_assemble.sh embed\n";[m
[32m+[m		[32m};[m
[32m+[m		[32m33CC111E2044C6BF0003C045 /* ShellScript */ = {[m
[32m+[m			[32misa = PBXShellScriptBuildPhase;[m
[32m+[m			[32mbuildActionMask = 2147483647;[m
[32m+[m			[32mfiles = ([m
[32m+[m			[32m);[m
[32m+[m			[32minputFileListPaths = ([m
[32m+[m				[32mFlutter/ephemeral/FlutterInputs.xcfilelist,[m
[32m+[m			[32m);[m
[32m+[m			[32minputPaths = ([m
[32m+[m				[32mFlutter/ephemeral/tripwire,[m
[32m+[m			[32m);[m
[32m+[m			[32moutputFileListPaths = ([m
[32m+[m				[32mFlutter/ephemeral/FlutterOutputs.xcfilelist,[m
[32m+[m			[32m);[m
[32m+[m			[32moutputPaths = ([m
[32m+[m			[32m);[m
[32m+[m			[32mrunOnlyForDeploymentPostprocessing = 0;[m
[32m+[m			[32mshellPath = /bin/sh;[m
[32m+[m			[32mshellScript = "\"$FLUTTER_ROOT\"/packages/flutter_tools/bin/macos_assemble.sh && touch Flutter/ephemeral/tripwire";[m
[32m+[m		[32m};[m
[32m+[m[32m/* End PBXShellScriptBuildPhase section */[m
[32m+[m
[32m+[m[32m/* Begin PBXSourcesBuildPhase section */[m
[32m+[m		[32m33CC10E92044A3C60003C045 /* Sources */ = {[m
[32m+[m			[32misa = PBXSourcesBuildPhase;[m
[32m+[m			[32mbuildActionMask = 2147483647;[m
[32m+[m			[32mfiles = ([m
[32m+[m				[32m33CC11132044BFA00003C045 /* MainFlutterWindow.swift in Sources */,[m
[32m+[m				[32m33CC10F12044A3C60003C045 /* AppDelegate.swift in Sources */,[m
[32m+[m				[32m335BBD1B22A9A15E00E9071D /* GeneratedPluginRegistrant.swift in Sources */,[m
[32m+[m			[32m);[m
[32m+[m			[32mrunOnlyForDeploymentPostprocessing = 0;[m
[32m+[m		[32m};[m
[32m+[m[32m/* End PBXSourcesBuildPhase section */[m
[32m+[m
[32m+[m[32m/* Begin PBXTargetDependency section */[m
[32m+[m		[32m33CC11202044C79F0003C045 /* PBXTargetDependency */ = {[m
[32m+[m			[32misa = PBXTargetDependency;[m
[32m+[m			[32mtarget = 33CC111A2044C6BA0003C045 /* Flutter Assemble */;[m
[32m+[m			[32mtargetProxy = 33CC111F2044C79F0003C045 /* PBXContainerItemProxy */;[m
[32m+[m		[32m};[m
[32m+[m[32m/* End PBXTargetDependency section */[m
[32m+[m
[32m+[m[32m/* Begin PBXVariantGroup section */[m
[32m+[m		[32m33CC10F42044A3C60003C045 /* MainMenu.xib */ = {[m
[32m+[m			[32misa = PBXVariantGroup;[m
[32m+[m			[32mchildren = ([m
[32m+[m				[32m33CC10F52044A3C60003C045 /* Base */,[m
[32m+[m			[32m);[m
[32m+[m			[32mname = MainMenu.xib;[m
[32m+[m			[32mpath = Runner;[m
[32m+[m			[32msourceTree = "<group>";[m
[32m+[m		[32m};[m
[32m+[m[32m/* End PBXVariantGroup section */[m
[32m+[m
[32m+[m[32m/* Begin XCBuildConfiguration section */[m
[32m+[m		[32m338D0CE9231458BD00FA5F75 /* Profile */ = {[m
[32m+[m			[32misa = XCBuildConfiguration;[m
[32m+[m			[32mbaseConfigurationReference = 7AFA3C8E1D35360C0083082E /* Release.xcconfig */;[m
[32m+[m			[32mbuildSettings = {[m
[32m+[m				[32mALWAYS_SEARCH_USER_PATHS = NO;[m
[32m+[m				[32mCLANG_ANALYZER_NONNULL = YES;[m
[32m+[m				[32mCLANG_ANALYZER_NUMBER_OBJECT_CONVERSION = YES_AGGRESSIVE;[m
[32m+[m				[32mCLANG_CXX_LANGUAGE_STANDARD = "gnu++14";[m
[32m+[m				[32mCLANG_CXX_LIBRARY = "libc++";[m
[32m+[m				[32mCLANG_ENABLE_MODULES = YES;[m
[32m+[m				[32mCLANG_ENABLE_OBJC_ARC = YES;[m
[32m+[m				[32mCLANG_WARN_BLOCK_CAPTURE_AUTORELEASING = YES;[m
[32m+[m				[32mCLANG_WARN_BOOL_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_CONSTANT_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_DEPRECATED_OBJC_IMPLEMENTATIONS = YES;[m
[32m+[m				[32mCLANG_WARN_DIRECT_OBJC_ISA_USAGE = YES_ERROR;[m
[32m+[m				[32mCLANG_WARN_DOCUMENTATION_COMMENTS = YES;[m
[32m+[m				[32mCLANG_WARN_EMPTY_BODY = YES;[m
[32m+[m				[32mCLANG_WARN_ENUM_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_INFINITE_RECURSION = YES;[m
[32m+[m				[32mCLANG_WARN_INT_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_NON_LITERAL_NULL_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_OBJC_LITERAL_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_OBJC_ROOT_CLASS = YES_ERROR;[m
[32m+[m				[32mCLANG_WARN_RANGE_LOOP_ANALYSIS = YES;[m
[32m+[m				[32mCLANG_WARN_SUSPICIOUS_MOVE = YES;[m
[32m+[m				[32mCODE_SIGN_IDENTITY = "-";[m
[32m+[m				[32mCOPY_PHASE_STRIP = NO;[m
[32m+[m				[32mDEBUG_INFORMATION_FORMAT = "dwarf-with-dsym";[m
[32m+[m				[32mENABLE_NS_ASSERTIONS = NO;[m
[32m+[m				[32mENABLE_STRICT_OBJC_MSGSEND = YES;[m
[32m+[m				[32mGCC_C_LANGUAGE_STANDARD = gnu11;[m
[32m+[m				[32mGCC_NO_COMMON_BLOCKS = YES;[m
[32m+[m				[32mGCC_WARN_64_TO_32_BIT_CONVERSION = YES;[m
[32m+[m				[32mGCC_WARN_ABOUT_RETURN_TYPE = YES_ERROR;[m
[32m+[m				[32mGCC_WARN_UNINITIALIZED_AUTOS = YES_AGGRESSIVE;[m
[32m+[m				[32mGCC_WARN_UNUSED_FUNCTION = YES;[m
[32m+[m				[32mGCC_WARN_UNUSED_VARIABLE = YES;[m
[32m+[m				[32mMACOSX_DEPLOYMENT_TARGET = 10.11;[m
[32m+[m				[32mMTL_ENABLE_DEBUG_INFO = NO;[m
[32m+[m				[32mSDKROOT = macosx;[m
[32m+[m				[32mSWIFT_COMPILATION_MODE = wholemodule;[m
[32m+[m				[32mSWIFT_OPTIMIZATION_LEVEL = "-O";[m
[32m+[m			[32m};[m
[32m+[m			[32mname = Profile;[m
[32m+[m		[32m};[m
[32m+[m		[32m338D0CEA231458BD00FA5F75 /* Profile */ = {[m
[32m+[m			[32misa = XCBuildConfiguration;[m
[32m+[m			[32mbaseConfigurationReference = 33E5194F232828860026EE4D /* AppInfo.xcconfig */;[m
[32m+[m			[32mbuildSettings = {[m
[32m+[m				[32mASSETCATALOG_COMPILER_APPICON_NAME = AppIcon;[m
[32m+[m				[32mCLANG_ENABLE_MODULES = YES;[m
[32m+[m				[32mCODE_SIGN_ENTITLEMENTS = Runner/DebugProfile.entitlements;[m
[32m+[m				[32mCODE_SIGN_STYLE = Automatic;[m
[32m+[m				[32mCOMBINE_HIDPI_IMAGES = YES;[m
[32m+[m				[32mINFOPLIST_FILE = Runner/Info.plist;[m
[32m+[m				[32mLD_RUNPATH_SEARCH_PATHS = ([m
[32m+[m					[32m"$(inherited)",[m
[32m+[m					[32m"@executable_path/../Frameworks",[m
[32m+[m				[32m);[m
[32m+[m				[32mPROVISIONING_PROFILE_SPECIFIER = "";[m
[32m+[m				[32mSWIFT_VERSION = 5.0;[m
[32m+[m			[32m};[m
[32m+[m			[32mname = Profile;[m
[32m+[m		[32m};[m
[32m+[m		[32m338D0CEB231458BD00FA5F75 /* Profile */ = {[m
[32m+[m			[32misa = XCBuildConfiguration;[m
[32m+[m			[32mbuildSettings = {[m
[32m+[m				[32mCODE_SIGN_STYLE = Manual;[m
[32m+[m				[32mPRODUCT_NAME = "$(TARGET_NAME)";[m
[32m+[m			[32m};[m
[32m+[m			[32mname = Profile;[m
[32m+[m		[32m};[m
[32m+[m		[32m33CC10F92044A3C60003C045 /* Debug */ = {[m
[32m+[m			[32misa = XCBuildConfiguration;[m
[32m+[m			[32mbaseConfigurationReference = 9740EEB21CF90195004384FC /* Debug.xcconfig */;[m
[32m+[m			[32mbuildSettings = {[m
[32m+[m				[32mALWAYS_SEARCH_USER_PATHS = NO;[m
[32m+[m				[32mCLANG_ANALYZER_NONNULL = YES;[m
[32m+[m				[32mCLANG_ANALYZER_NUMBER_OBJECT_CONVERSION = YES_AGGRESSIVE;[m
[32m+[m				[32mCLANG_CXX_LANGUAGE_STANDARD = "gnu++14";[m
[32m+[m				[32mCLANG_CXX_LIBRARY = "libc++";[m
[32m+[m				[32mCLANG_ENABLE_MODULES = YES;[m
[32m+[m				[32mCLANG_ENABLE_OBJC_ARC = YES;[m
[32m+[m				[32mCLANG_WARN_BLOCK_CAPTURE_AUTORELEASING = YES;[m
[32m+[m				[32mCLANG_WARN_BOOL_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_CONSTANT_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_DEPRECATED_OBJC_IMPLEMENTATIONS = YES;[m
[32m+[m				[32mCLANG_WARN_DIRECT_OBJC_ISA_USAGE = YES_ERROR;[m
[32m+[m				[32mCLANG_WARN_DOCUMENTATION_COMMENTS = YES;[m
[32m+[m				[32mCLANG_WARN_EMPTY_BODY = YES;[m
[32m+[m				[32mCLANG_WARN_ENUM_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_INFINITE_RECURSION = YES;[m
[32m+[m				[32mCLANG_WARN_INT_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_NON_LITERAL_NULL_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_OBJC_LITERAL_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_OBJC_ROOT_CLASS = YES_ERROR;[m
[32m+[m				[32mCLANG_WARN_RANGE_LOOP_ANALYSIS = YES;[m
[32m+[m				[32mCLANG_WARN_SUSPICIOUS_MOVE = YES;[m
[32m+[m				[32mCODE_SIGN_IDENTITY = "-";[m
[32m+[m				[32mCOPY_PHASE_STRIP = NO;[m
[32m+[m				[32mDEBUG_INFORMATION_FORMAT = dwarf;[m
[32m+[m				[32mENABLE_STRICT_OBJC_MSGSEND = YES;[m
[32m+[m				[32mENABLE_TESTABILITY = YES;[m
[32m+[m				[32mGCC_C_LANGUAGE_STANDARD = gnu11;[m
[32m+[m				[32mGCC_DYNAMIC_NO_PIC = NO;[m
[32m+[m				[32mGCC_NO_COMMON_BLOCKS = YES;[m
[32m+[m				[32mGCC_OPTIMIZATION_LEVEL = 0;[m
[32m+[m				[32mGCC_PREPROCESSOR_DEFINITIONS = ([m
[32m+[m					[32m"DEBUG=1",[m
[32m+[m					[32m"$(inherited)",[m
[32m+[m				[32m);[m
[32m+[m				[32mGCC_WARN_64_TO_32_BIT_CONVERSION = YES;[m
[32m+[m				[32mGCC_WARN_ABOUT_RETURN_TYPE = YES_ERROR;[m
[32m+[m				[32mGCC_WARN_UNINITIALIZED_AUTOS = YES_AGGRESSIVE;[m
[32m+[m				[32mGCC_WARN_UNUSED_FUNCTION = YES;[m
[32m+[m				[32mGCC_WARN_UNUSED_VARIABLE = YES;[m
[32m+[m				[32mMACOSX_DEPLOYMENT_TARGET = 10.11;[m
[32m+[m				[32mMTL_ENABLE_DEBUG_INFO = YES;[m
[32m+[m				[32mONLY_ACTIVE_ARCH = YES;[m
[32m+[m				[32mSDKROOT = macosx;[m
[32m+[m				[32mSWIFT_ACTIVE_COMPILATION_CONDITIONS = DEBUG;[m
[32m+[m				[32mSWIFT_OPTIMIZATION_LEVEL = "-Onone";[m
[32m+[m			[32m};[m
[32m+[m			[32mname = Debug;[m
[32m+[m		[32m};[m
[32m+[m		[32m33CC10FA2044A3C60003C045 /* Release */ = {[m
[32m+[m			[32misa = XCBuildConfiguration;[m
[32m+[m			[32mbaseConfigurationReference = 7AFA3C8E1D35360C0083082E /* Release.xcconfig */;[m
[32m+[m			[32mbuildSettings = {[m
[32m+[m				[32mALWAYS_SEARCH_USER_PATHS = NO;[m
[32m+[m				[32mCLANG_ANALYZER_NONNULL = YES;[m
[32m+[m				[32mCLANG_ANALYZER_NUMBER_OBJECT_CONVERSION = YES_AGGRESSIVE;[m
[32m+[m				[32mCLANG_CXX_LANGUAGE_STANDARD = "gnu++14";[m
[32m+[m				[32mCLANG_CXX_LIBRARY = "libc++";[m
[32m+[m				[32mCLANG_ENABLE_MODULES = YES;[m
[32m+[m				[32mCLANG_ENABLE_OBJC_ARC = YES;[m
[32m+[m				[32mCLANG_WARN_BLOCK_CAPTURE_AUTORELEASING = YES;[m
[32m+[m				[32mCLANG_WARN_BOOL_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_CONSTANT_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_DEPRECATED_OBJC_IMPLEMENTATIONS = YES;[m
[32m+[m				[32mCLANG_WARN_DIRECT_OBJC_ISA_USAGE = YES_ERROR;[m
[32m+[m				[32mCLANG_WARN_DOCUMENTATION_COMMENTS = YES;[m
[32m+[m				[32mCLANG_WARN_EMPTY_BODY = YES;[m
[32m+[m				[32mCLANG_WARN_ENUM_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_INFINITE_RECURSION = YES;[m
[32m+[m				[32mCLANG_WARN_INT_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_NON_LITERAL_NULL_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_OBJC_LITERAL_CONVERSION = YES;[m
[32m+[m				[32mCLANG_WARN_OBJC_ROOT_CLASS = YES_ERROR;[m
[32m+[m				[32mCLANG_WARN_RANGE_LOOP_ANALYSIS = YES;[m
[32m+[m				[32mCLANG_WARN_SUSPICIOUS_MOVE = YES;[m
[32m+[m				[32mCODE_SIGN_IDENTITY = "-";[m
[32m+[m				[32mCOPY_PHASE_STRIP = NO;[m
[32m+[m				[32mDEBUG_INFORMATION_FORMAT = "dwarf-with-dsym";[m
[32m+[m				[32mENABLE_NS_ASSERTIONS = NO;[m
[32m+[m				[32mENABLE_STRICT_OBJC_MSGSEND = YES;[m
[32m+[m				[32mGCC_C_LANGUAGE_STANDARD = gnu11;[m
[32m+[m				[32mGCC_NO_COMMON_BLOCKS = YES;[m
[32m+[m				[32mGCC_WARN_64_TO_32_BIT_CONVERSION = YES;[m
[32m+[m				[32mGCC_WARN_ABOUT_RETURN_TYPE = YES_ERROR;[m
[32m+[m				[32mGCC_WARN_UNINITIALIZED_AUTOS = YES_AGGRESSIVE;[m
[32m+[m				[32mGCC_WARN_UNUSED_FUNCTION = YES;[m
[32m+[m				[32mGCC_WARN_UNUSED_VARIABLE = YES;[m
[32m+[m				[32mMACOSX_DEPLOYMENT_TARGET = 10.11;[m
[32m+[m				[32mMTL_ENABLE_DEBUG_INFO = NO;[m
[32m+[m				[32mSDKROOT = macosx;[m
[32m+[m				[32mSWIFT_COMPILATION_MODE = wholemodule;[m
[32m+[m				[32mSWIFT_OPTIMIZATION_LEVEL = "-O";[m
[32m+[m			[32m};[m
[32m+[m			[32mname = Release;[m
[32m+[m		[32m};[m
[32m+[m		[32m33CC10FC2044A3C60003C045 /* Debug */ = {[m
[32m+[m			[32misa = XCBuildConfiguration;[m
[32m+[m			[32mbaseConfigurationReference = 33E5194F232828860026EE4D /* AppInfo.xcconfig */;[m
[32m+[m			[32mbuildSettings = {[m
[32m+[m				[32mASSETCATALOG_COMPILER_APPICON_NAME = AppIcon;[m
[32m+[m				[32mCLANG_ENABLE_MODULES = YES;[m
[32m+[m				[32mCODE_SIGN_ENTITLEMENTS = Runner/DebugProfile.entitlements;[m
[32m+[m				[32mCODE_SIGN_STYLE = Automatic;[m
[32m+[m				[32mCOMBINE_HIDPI_IMAGES = YES;[m
[32m+[m				[32mINFOPLIST_FILE = Runner/Info.plist;[m
[32m+[m				[32mLD_RUNPATH_SEARCH_PATHS = ([m
[32m+[m					[32m"$(inherited)",[m
[32m+[m					[32m"@executable_path/../Frameworks",[m
[32m+[m				[32m);[m
[32m+[m				[32mPROVISIONING_PROFILE_SPECIFIER = "";[m
[32m+[m				[32mSWIFT_OPTIMIZATION_LEVEL = "-Onone";[m
[32m+[m				[32mSWIFT_VERSION = 5.0;[m
[32m+[m			[32m};[m
[32m+[m			[32mname = Debug;[m
[32m+[m		[32m};[m
[32m+[m		[32m33CC10FD2044A3C60003C045 /* Release */ = {[m
[32m+[m			[32misa = XCBuildConfiguration;[m
[32m+[m			[32mbaseConfigurationReference = 33E5194F232828860026EE4D /* AppInfo.xcconfig */;[m
[32m+[m			[32mbuildSettings = {[m
[32m+[m				[32mASSETCATALOG_COMPILER_APPICON_NAME = AppIcon;[m
[32m+[m				[32mCLANG_ENABLE_MODULES = YES;[m
[32m+[m				[32mCODE_SIGN_ENTITLEMENTS = Runner/Release.entitlements;[m
[32m+[m				[32mCODE_SIGN_STYLE = Automatic;[m
[32m+[m				[32mCOMBINE_HIDPI_IMAGES = YES;[m
[32m+[m				[32mINFOPLIST_FILE = Runner/Info.plist;[m
[32m+[m				[32mLD_RUNPATH_SEARCH_PATHS = ([m
[32m+[m					[32m"$(inherited)",[m
[32m+[m					[32m"@executable_path/../Frameworks",[m
[32m+[m				[32m);[m
[32m+[m				[32mPROVISIONING_PROFILE_SPECIFIER = "";[m
[32m+[m				[32mSWIFT_VERSION = 5.0;[m
[32m+[m			[32m};[m
[32m+[m			[32mname = Release;[m
[32m+[m		[32m};[m
[32m+[m		[32m33CC111C2044C6BA0003C045 /* Debug */ = {[m
[32m+[m			[32misa = XCBuildConfiguration;[m
[32m+[m			[32mbuildSettings = {[m
[32m+[m				[32mCODE_SIGN_STYLE = Manual;[m
[32m+[m				[32mPRODUCT_NAME = "$(TARGET_NAME)";[m
[32m+[m			[32m};[m
[32m+[m			[32mname = Debug;[m
[32m+[m		[32m};[m
[32m+[m		[32m33CC111D2044C6BA0003C045 /* Release */ = {[m
[32m+[m			[32misa = XCBuildConfiguration;[m
[32m+[m			[32mbuildSettings = {[m
[32m+[m				[32mCODE_SIGN_STYLE = Automatic;[m
[32m+[m				[32mPRODUCT_NAME = "$(TARGET_NAME)";[m
[32m+[m			[32m};[m
[32m+[m			[32mname = Release;[m
[32m+[m		[32m};[m
[32m+[m[32m/* End XCBuildConfiguration section */[m
[32m+[m
[32m+[m[32m/* Begin XCConfigurationList section */[m
[32m+[m		[32m33CC10E82044A3C60003C045 /* Build configuration list for PBXProject "Runner" */ = {[m
[32m+[m			[32misa = XCConfigurationList;[m
[32m+[m			[32mbuildConfigurations = ([m
[32m+[m				[32m33CC10F92044A3C60003C045 /* Debug */,[m
[32m+[m				[32m33CC10FA2044A3C60003C045 /* Release */,[m
[32m+[m				[32m338D0CE9231458BD00FA5F75 /* Profile */,[m
[32m+[m			[32m);[m
[32m+[m			[32mdefaultConfigurationIsVisible = 0;[m
[32m+[m			[32mdefaultConfigurationName = Release;[m
[32m+[m		[32m};[m
[32m+[m		[32m33CC10FB2044A3C60003C045 /* Build configuration list for PBXNativeTarget "Runner" */ = {[m
[32m+[m			[32misa = XCConfigurationList;[m
[32m+[m			[32mbuildConfigurations = ([m
[32m+[m				[32m33CC10FC2044A3C60003C045 /* Debug */,[m
[32m+[m				[32m33CC10FD2044A3C60003C045 /* Release */,[m
[32m+[m				[32m338D0CEA231458BD00FA5F75 /* Profile */,[m
[32m+[m			[32m);[m
[32m+[m			[32mdefaultConfigurationIsVisible = 0;[m
[32m+[m			[32mdefaultConfigurationName = Release;[m
[32m+[m		[32m};[m
[32m+[m		[32m33CC111B2044C6BA0003C045 /* Build configuration list for PBXAggregateTarget "Flutter Assemble" */ = {[m
[32m+[m			[32misa = XCConfigurationList;[m
[32m+[m			[32mbuildConfigurations = ([m
[32m+[m				[32m33CC111C2044C6BA0003C045 /* Debug */,[m
[32m+[m				[32m33CC111D2044C6BA0003C045 /* Release */,[m
[32m+[m				[32m338D0CEB231458BD00FA5F75 /* Profile */,[m
[32m+[m			[32m);[m
[32m+[m			[32mdefaultConfigurationIsVisible = 0;[m
[32m+[m			[32mdefaultConfigurationName = Release;[m
[32m+[m		[32m};[m
[32m+[m[32m/* End XCConfigurationList section */[m
[32m+[m	[32m};[m
[32m+[m	[32mrootObject = 33CC10E52044A3C60003C045 /* Project object */;[m
[32m+[m[32m}[m
[1mdiff --git a/macos/Runner.xcodeproj/project.xcworkspace/xcshareddata/IDEWorkspaceChecks.plist b/macos/Runner.xcodeproj/project.xcworkspace/xcshareddata/IDEWorkspaceChecks.plist[m
[1mnew file mode 100644[m
[1mindex 0000000..18d9810[m
[1m--- /dev/null[m
[1m+++ b/macos/Runner.xcodeproj/project.xcworkspace/xcshareddata/IDEWorkspaceChecks.plist[m
[36m@@ -0,0 +1,8 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">[m
[32m+[m[32m<plist version="1.0">[m
[32m+[m[32m<dict>[m
[32m+[m	[32m<key>IDEDidComputeMac32BitWarning</key>[m
[32m+[m	[32m<true/>[m
[32m+[m[32m</dict>[m
[32m+[m[32m</plist>[m
[1mdiff --git a/macos/Runner.xcodeproj/xcshareddata/xcschemes/Runner.xcscheme b/macos/Runner.xcodeproj/xcshareddata/xcschemes/Runner.xcscheme[m
[1mnew file mode 100644[m
[1mindex 0000000..bfba7bf[m
[1m--- /dev/null[m
[1m+++ b/macos/Runner.xcodeproj/xcshareddata/xcschemes/Runner.xcscheme[m
[36m@@ -0,0 +1,87 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<Scheme[m
[32m+[m[32m   LastUpgradeVersion = "1300"[m
[32m+[m[32m   version = "1.3">[m
[32m+[m[32m   <BuildAction[m
[32m+[m[32m      parallelizeBuildables = "YES"[m
[32m+[m[32m      buildImplicitDependencies = "YES">[m
[32m+[m[32m      <BuildActionEntries>[m
[32m+[m[32m         <BuildActionEntry[m
[32m+[m[32m            buildForTesting = "YES"[m
[32m+[m[32m            buildForRunning = "YES"[m
[32m+[m[32m            buildForProfiling = "YES"[m
[32m+[m[32m            buildForArchiving = "YES"[m
[32m+[m[32m            buildForAnalyzing = "YES">[m
[32m+[m[32m            <BuildableReference[m
[32m+[m[32m               BuildableIdentifier = "primary"[m
[32m+[m[32m               BlueprintIdentifier = "33CC10EC2044A3C60003C045"[m
[32m+[m[32m               BuildableName = "fooddeliveryapp.app"[m
[32m+[m[32m               BlueprintName = "Runner"[m
[32m+[m[32m               ReferencedContainer = "container:Runner.xcodeproj">[m
[32m+[m[32m            </BuildableReference>[m
[32m+[m[32m         </BuildActionEntry>[m
[32m+[m[32m      </BuildActionEntries>[m
[32m+[m[32m   </BuildAction>[m
[32m+[m[32m   <TestAction[m
[32m+[m[32m      buildConfiguration = "Debug"[m
[32m+[m[32m      selectedDebuggerIdentifier = "Xcode.DebuggerFoundation.Debugger.LLDB"[m
[32m+[m[32m      selectedLauncherIdentifier = "Xcode.DebuggerFoundation.Launcher.LLDB"[m
[32m+[m[32m      shouldUseLaunchSchemeArgsEnv = "YES">[m
[32m+[m[32m      <MacroExpansion>[m
[32m+[m[32m         <BuildableReference[m
[32m+[m[32m            BuildableIdentifier = "primary"[m
[32m+[m[32m            BlueprintIdentifier = "33CC10EC2044A3C60003C045"[m
[32m+[m[32m            BuildableName = "fooddeliveryapp.app"[m
[32m+[m[32m            BlueprintName = "Runner"[m
[32m+[m[32m            ReferencedContainer = "container:Runner.xcodeproj">[m
[32m+[m[32m         </BuildableReference>[m
[32m+[m[32m      </MacroExpansion>[m
[32m+[m[32m      <Testables>[m
[32m+[m[32m      </Testables>[m
[32m+[m[32m   </TestAction>[m
[32m+[m[32m   <LaunchAction[m
[32m+[m[32m      buildConfiguration = "Debug"[m
[32m+[m[32m      selectedDebuggerIdentifier = "Xcode.DebuggerFoundation.Debugger.LLDB"[m
[32m+[m[32m      selectedLauncherIdentifier = "Xcode.DebuggerFoundation.Launcher.LLDB"[m
[32m+[m[32m      launchStyle = "0"[m
[32m+[m[32m      useCustomWorkingDirectory = "NO"[m
[32m+[m[32m      ignoresPersistentStateOnLaunch = "NO"[m
[32m+[m[32m      debugDocumentVersioning = "YES"[m
[32m+[m[32m      debugServiceExtension = "internal"[m
[32m+[m[32m      allowLocationSimulation = "YES">[m
[32m+[m[32m      <BuildableProductRunnable[m
[32m+[m[32m         runnableDebuggingMode = "0">[m
[32m+[m[32m         <BuildableReference[m
[32m+[m[32m            BuildableIdentifier = "primary"[m
[32m+[m[32m            BlueprintIdentifier = "33CC10EC2044A3C60003C045"[m
[32m+[m[32m            BuildableName = "fooddeliveryapp.app"[m
[32m+[m[32m            BlueprintName = "Runner"[m
[32m+[m[32m            ReferencedContainer = "container:Runner.xcodeproj">[m
[32m+[m[32m         </BuildableReference>[m
[32m+[m[32m      </BuildableProductRunnable>[m
[32m+[m[32m   </LaunchAction>[m
[32m+[m[32m   <ProfileAction[m
[32m+[m[32m      buildConfiguration = "Profile"[m
[32m+[m[32m      shouldUseLaunchSchemeArgsEnv = "YES"[m
[32m+[m[32m      savedToolIdentifier = ""[m
[32m+[m[32m      useCustomWorkingDirectory = "NO"[m
[32m+[m[32m      debugDocumentVersioning = "YES">[m
[32m+[m[32m      <BuildableProductRunnable[m
[32m+[m[32m         runnableDebuggingMode = "0">[m
[32m+[m[32m         <BuildableReference[m
[32m+[m[32m            BuildableIdentifier = "primary"[m
[32m+[m[32m            BlueprintIdentifier = "33CC10EC2044A3C60003C045"[m
[32m+[m[32m            BuildableName = "fooddeliveryapp.app"[m
[32m+[m[32m            BlueprintName = "Runner"[m
[32m+[m[32m            ReferencedContainer = "container:Runner.xcodeproj">[m
[32m+[m[32m         </BuildableReference>[m
[32m+[m[32m      </BuildableProductRunnable>[m
[32m+[m[32m   </ProfileAction>[m
[32m+[m[32m   <AnalyzeAction[m
[32m+[m[32m      buildConfiguration = "Debug">[m
[32m+[m[32m   </AnalyzeAction>[m
[32m+[m[32m   <ArchiveAction[m
[32m+[m[32m      buildConfiguration = "Release"[m
[32m+[m[32m      revealArchiveInOrganizer = "YES">[m
[32m+[m[32m   </ArchiveAction>[m
[32m+[m[32m</Scheme>[m
[1mdiff --git a/macos/Runner.xcworkspace/contents.xcworkspacedata b/macos/Runner.xcworkspace/contents.xcworkspacedata[m
[1mnew file mode 100644[m
[1mindex 0000000..1d526a1[m
[1m--- /dev/null[m
[1m+++ b/macos/Runner.xcworkspace/contents.xcworkspacedata[m
[36m@@ -0,0 +1,7 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<Workspace[m
[32m+[m[32m   version = "1.0">[m
[32m+[m[32m   <FileRef[m
[32m+[m[32m      location = "group:Runner.xcodeproj">[m
[32m+[m[32m   </FileRef>[m
[32m+[m[32m</Workspace>[m
[1mdiff --git a/macos/Runner.xcworkspace/xcshareddata/IDEWorkspaceChecks.plist b/macos/Runner.xcworkspace/xcshareddata/IDEWorkspaceChecks.plist[m
[1mnew file mode 100644[m
[1mindex 0000000..18d9810[m
[1m--- /dev/null[m
[1m+++ b/macos/Runner.xcworkspace/xcshareddata/IDEWorkspaceChecks.plist[m
[36m@@ -0,0 +1,8 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">[m
[32m+[m[32m<plist version="1.0">[m
[32m+[m[32m<dict>[m
[32m+[m	[32m<key>IDEDidComputeMac32BitWarning</key>[m
[32m+[m	[32m<true/>[m
[32m+[m[32m</dict>[m
[32m+[m[32m</plist>[m
[1mdiff --git a/macos/Runner/AppDelegate.swift b/macos/Runner/AppDelegate.swift[m
[1mnew file mode 100644[m
[1mindex 0000000..d53ef64[m
[1m--- /dev/null[m
[1m+++ b/macos/Runner/AppDelegate.swift[m
[36m@@ -0,0 +1,9 @@[m
[32m+[m[32mimport Cocoa[m
[32m+[m[32mimport FlutterMacOS[m
[32m+[m
[32m+[m[32m@NSApplicationMain[m
[32m+[m[32mclass AppDelegate: FlutterAppDelegate {[m
[32m+[m[32m  override func applicationShouldTerminateAfterLastWindowClosed(_ sender: NSApplication) -> Bool {[m
[32m+[m[32m    return true[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/macos/Runner/Assets.xcassets/AppIcon.appiconset/Contents.json b/macos/Runner/Assets.xcassets/AppIcon.appiconset/Contents.json[m
[1mnew file mode 100644[m
[1mindex 0000000..a2ec33f[m
[1m--- /dev/null[m
[1m+++ b/macos/Runner/Assets.xcassets/AppIcon.appiconset/Contents.json[m
[36m@@ -0,0 +1,68 @@[m
[32m+[m[32m{[m
[32m+[m[32m  "images" : [[m
[32m+[m[32m    {[m
[32m+[m[32m      "size" : "16x16",[m
[32m+[m[32m      "idiom" : "mac",[m
[32m+[m[32m      "filename" : "app_icon_16.png",[m
[32m+[m[32m      "scale" : "1x"[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "size" : "16x16",[m
[32m+[m[32m      "idiom" : "mac",[m
[32m+[m[32m      "filename" : "app_icon_32.png",[m
[32m+[m[32m      "scale" : "2x"[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "size" : "32x32",[m
[32m+[m[32m      "idiom" : "mac",[m
[32m+[m[32m      "filename" : "app_icon_32.png",[m
[32m+[m[32m      "scale" : "1x"[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "size" : "32x32",[m
[32m+[m[32m      "idiom" : "mac",[m
[32m+[m[32m      "filename" : "app_icon_64.png",[m
[32m+[m[32m      "scale" : "2x"[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "size" : "128x128",[m
[32m+[m[32m      "idiom" : "mac",[m
[32m+[m[32m      "filename" : "app_icon_128.png",[m
[32m+[m[32m      "scale" : "1x"[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "size" : "128x128",[m
[32m+[m[32m      "idiom" : "mac",[m
[32m+[m[32m      "filename" : "app_icon_256.png",[m
[32m+[m[32m      "scale" : "2x"[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "size" : "256x256",[m
[32m+[m[32m      "idiom" : "mac",[m
[32m+[m[32m      "filename" : "app_icon_256.png",[m
[32m+[m[32m      "scale" : "1x"[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "size" : "256x256",[m
[32m+[m[32m      "idiom" : "mac",[m
[32m+[m[32m      "filename" : "app_icon_512.png",[m
[32m+[m[32m      "scale" : "2x"[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "size" : "512x512",[m
[32m+[m[32m      "idiom" : "mac",[m
[32m+[m[32m      "filename" : "app_icon_512.png",[m
[32m+[m[32m      "scale" : "1x"[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "size" : "512x512",[m
[32m+[m[32m      "idiom" : "mac",[m
[32m+[m[32m      "filename" : "app_icon_1024.png",[m
[32m+[m[32m      "scale" : "2x"[m
[32m+[m[32m    }[m
[32m+[m[32m  ],[m
[32m+[m[32m  "info" : {[m
[32m+[m[32m    "version" : 1,[m
[32m+[m[32m    "author" : "xcode"[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/macos/Runner/Assets.xcassets/AppIcon.appiconset/app_icon_1024.png b/macos/Runner/Assets.xcassets/AppIcon.appiconset/app_icon_1024.png[m
[1mnew file mode 100644[m
[1mindex 0000000..3c4935a[m
Binary files /dev/null and b/macos/Runner/Assets.xcassets/AppIcon.appiconset/app_icon_1024.png differ
[1mdiff --git a/macos/Runner/Assets.xcassets/AppIcon.appiconset/app_icon_128.png b/macos/Runner/Assets.xcassets/AppIcon.appiconset/app_icon_128.png[m
[1mnew file mode 100644[m
[1mindex 0000000..ed4cc16[m
Binary files /dev/null and b/macos/Runner/Assets.xcassets/AppIcon.appiconset/app_icon_128.png differ
[1mdiff --git a/macos/Runner/Assets.xcassets/AppIcon.appiconset/app_icon_16.png b/macos/Runner/Assets.xcassets/AppIcon.appiconset/app_icon_16.png[m
[1mnew file mode 100644[m
[1mindex 0000000..483be61[m
Binary files /dev/null and b/macos/Runner/Assets.xcassets/AppIcon.appiconset/app_icon_16.png differ
[1mdiff --git a/macos/Runner/Assets.xcassets/AppIcon.appiconset/app_icon_256.png b/macos/Runner/Assets.xcassets/AppIcon.appiconset/app_icon_256.png[m
[1mnew file mode 100644[m
[1mindex 0000000..bcbf36d[m
Binary files /dev/null and b/macos/Runner/Assets.xcassets/AppIcon.appiconset/app_icon_256.png differ
[1mdiff --git a/macos/Runner/Assets.xcassets/AppIcon.appiconset/app_icon_32.png b/macos/Runner/Assets.xcassets/AppIcon.appiconset/app_icon_32.png[m
[1mnew file mode 100644[m
[1mindex 0000000..9c0a652[m
Binary files /dev/null and b/macos/Runner/Assets.xcassets/AppIcon.appiconset/app_icon_32.png differ
[1mdiff --git a/macos/Runner/Assets.xcassets/AppIcon.appiconset/app_icon_512.png b/macos/Runner/Assets.xcassets/AppIcon.appiconset/app_icon_512.png[m
[1mnew file mode 100644[m
[1mindex 0000000..e71a726[m
Binary files /dev/null and b/macos/Runner/Assets.xcassets/AppIcon.appiconset/app_icon_512.png differ
[1mdiff --git a/macos/Runner/Assets.xcassets/AppIcon.appiconset/app_icon_64.png b/macos/Runner/Assets.xcassets/AppIcon.appiconset/app_icon_64.png[m
[1mnew file mode 100644[m
[1mindex 0000000..8a31fe2[m
Binary files /dev/null and b/macos/Runner/Assets.xcassets/AppIcon.appiconset/app_icon_64.png differ
[1mdiff --git a/macos/Runner/Base.lproj/MainMenu.xib b/macos/Runner/Base.lproj/MainMenu.xib[m
[1mnew file mode 100644[m
[1mindex 0000000..80e867a[m
[1m--- /dev/null[m
[1m+++ b/macos/Runner/Base.lproj/MainMenu.xib[m
[36m@@ -0,0 +1,343 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<document type="com.apple.InterfaceBuilder3.Cocoa.XIB" version="3.0" toolsVersion="14490.70" targetRuntime="MacOSX.Cocoa" propertyAccessControl="none" useAutolayout="YES" customObjectInstantitationMethod="direct">[m
[32m+[m[32m    <dependencies>[m
[32m+[m[32m        <deployment identifier="macosx"/>[m
[32m+[m[32m        <plugIn identifier="com.apple.InterfaceBuilder.CocoaPlugin" version="14490.70"/>[m
[32m+[m[32m        <capability name="documents saved in the Xcode 8 format" minToolsVersion="8.0"/>[m
[32m+[m[32m    </dependencies>[m
[32m+[m[32m    <objects>[m
[32m+[m[32m        <customObject id="-2" userLabel="File's Owner" customClass="NSApplication">[m
[32m+[m[32m            <connections>[m
[32m+[m[32m                <outlet property="delegate" destination="Voe-Tx-rLC" id="GzC-gU-4Uq"/>[m
[32m+[m[32m            </connections>[m
[32m+[m[32m        </customObject>[m
[32m+[m[32m        <customObject id="-1" userLabel="First Responder" customClass="FirstResponder"/>[m
[32m+[m[32m        <customObject id="-3" userLabel="Application" customClass="NSObject"/>[m
[32m+[m[32m        <customObject id="Voe-Tx-rLC" customClass="AppDelegate" customModule="Runner" customModuleProvider="target">[m
[32m+[m[32m            <connections>[m
[32m+[m[32m                <outlet property="applicationMenu" destination="uQy-DD-JDr" id="XBo-yE-nKs"/>[m
[32m+[m[32m                <outlet property="mainFlutterWindow" destination="QvC-M9-y7g" id="gIp-Ho-8D9"/>[m
[32m+[m[32m            </connections>[m
[32m+[m[32m        </customObject>[m
[32m+[m[32m        <customObject id="YLy-65-1bz" customClass="NSFontManager"/>[m
[32m+[m[32m        <menu title="Main Menu" systemMenu="main" id="AYu-sK-qS6">[m
[32m+[m[32m            <items>[m
[32m+[m[32m                <menuItem title="APP_NAME" id="1Xt-HY-uBw">[m
[32m+[m[32m                    <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                    <menu key="submenu" title="APP_NAME" systemMenu="apple" id="uQy-DD-JDr">[m
[32m+[m[32m                        <items>[m
[32m+[m[32m                            <menuItem title="About APP_NAME" id="5kV-Vb-QxS">[m
[32m+[m[32m                                <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                                <connections>[m
[32m+[m[32m                                    <action selector="orderFrontStandardAboutPanel:" target="-1" id="Exp-CZ-Vem"/>[m
[32m+[m[32m                                </connections>[m
[32m+[m[32m                            </menuItem>[m
[32m+[m[32m                            <menuItem isSeparatorItem="YES" id="VOq-y0-SEH"/>[m
[32m+[m[32m                            <menuItem title="Preferences…" keyEquivalent="," id="BOF-NM-1cW"/>[m
[32m+[m[32m                            <menuItem isSeparatorItem="YES" id="wFC-TO-SCJ"/>[m
[32m+[m[32m                            <menuItem title="Services" id="NMo-om-nkz">[m
[32m+[m[32m                                <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                                <menu key="submenu" title="Services" systemMenu="services" id="hz9-B4-Xy5"/>[m
[32m+[m[32m                            </menuItem>[m
[32m+[m[32m                            <menuItem isSeparatorItem="YES" id="4je-JR-u6R"/>[m
[32m+[m[32m                            <menuItem title="Hide APP_NAME" keyEquivalent="h" id="Olw-nP-bQN">[m
[32m+[m[32m                                <connections>[m
[32m+[m[32m                                    <action selector="hide:" target="-1" id="PnN-Uc-m68"/>[m
[32m+[m[32m                                </connections>[m
[32m+[m[32m                            </menuItem>[m
[32m+[m[32m                            <menuItem title="Hide Others" keyEquivalent="h" id="Vdr-fp-XzO">[m
[32m+[m[32m                                <modifierMask key="keyEquivalentModifierMask" option="YES" command="YES"/>[m
[32m+[m[32m                                <connections>[m
[32m+[m[32m                                    <action selector="hideOtherApplications:" target="-1" id="VT4-aY-XCT"/>[m
[32m+[m[32m                                </connections>[m
[32m+[m[32m                            </menuItem>[m
[32m+[m[32m                            <menuItem title="Show All" id="Kd2-mp-pUS">[m
[32m+[m[32m                                <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                                <connections>[m
[32m+[m[32m                                    <action selector="unhideAllApplications:" target="-1" id="Dhg-Le-xox"/>[m
[32m+[m[32m                                </connections>[m
[32m+[m[32m                            </menuItem>[m
[32m+[m[32m                            <menuItem isSeparatorItem="YES" id="kCx-OE-vgT"/>[m
[32m+[m[32m                            <menuItem title="Quit APP_NAME" keyEquivalent="q" id="4sb-4s-VLi">[m
[32m+[m[32m                                <connections>[m
[32m+[m[32m                                    <action selector="terminate:" target="-1" id="Te7-pn-YzF"/>[m
[32m+[m[32m                                </connections>[m
[32m+[m[32m                            </menuItem>[m
[32m+[m[32m                        </items>[m
[32m+[m[32m                    </menu>[m
[32m+[m[32m                </menuItem>[m
[32m+[m[32m                <menuItem title="Edit" id="5QF-Oa-p0T">[m
[32m+[m[32m                    <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                    <menu key="submenu" title="Edit" id="W48-6f-4Dl">[m
[32m+[m[32m                        <items>[m
[32m+[m[32m                            <menuItem title="Undo" keyEquivalent="z" id="dRJ-4n-Yzg">[m
[32m+[m[32m                                <connections>[m
[32m+[m[32m                                    <action selector="undo:" target="-1" id="M6e-cu-g7V"/>[m
[32m+[m[32m                                </connections>[m
[32m+[m[32m                            </menuItem>[m
[32m+[m[32m                            <menuItem title="Redo" keyEquivalent="Z" id="6dh-zS-Vam">[m
[32m+[m[32m                                <connections>[m
[32m+[m[32m                                    <action selector="redo:" target="-1" id="oIA-Rs-6OD"/>[m
[32m+[m[32m                                </connections>[m
[32m+[m[32m                            </menuItem>[m
[32m+[m[32m                            <menuItem isSeparatorItem="YES" id="WRV-NI-Exz"/>[m
[32m+[m[32m                            <menuItem title="Cut" keyEquivalent="x" id="uRl-iY-unG">[m
[32m+[m[32m                                <connections>[m
[32m+[m[32m                                    <action selector="cut:" target="-1" id="YJe-68-I9s"/>[m
[32m+[m[32m                                </connections>[m
[32m+[m[32m                            </menuItem>[m
[32m+[m[32m                            <menuItem title="Copy" keyEquivalent="c" id="x3v-GG-iWU">[m
[32m+[m[32m                                <connections>[m
[32m+[m[32m                                    <action selector="copy:" target="-1" id="G1f-GL-Joy"/>[m
[32m+[m[32m                                </connections>[m
[32m+[m[32m                            </menuItem>[m
[32m+[m[32m                            <menuItem title="Paste" keyEquivalent="v" id="gVA-U4-sdL">[m
[32m+[m[32m                                <connections>[m
[32m+[m[32m                                    <action selector="paste:" target="-1" id="UvS-8e-Qdg"/>[m
[32m+[m[32m                                </connections>[m
[32m+[m[32m                            </menuItem>[m
[32m+[m[32m                            <menuItem title="Paste and Match Style" keyEquivalent="V" id="WeT-3V-zwk">[m
[32m+[m[32m                                <modifierMask key="keyEquivalentModifierMask" option="YES" command="YES"/>[m
[32m+[m[32m                                <connections>[m
[32m+[m[32m                                    <action selector="pasteAsPlainText:" target="-1" id="cEh-KX-wJQ"/>[m
[32m+[m[32m                                </connections>[m
[32m+[m[32m                            </menuItem>[m
[32m+[m[32m                            <menuItem title="Delete" id="pa3-QI-u2k">[m
[32m+[m[32m                                <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                                <connections>[m
[32m+[m[32m                                    <action selector="delete:" target="-1" id="0Mk-Ml-PaM"/>[m
[32m+[m[32m                                </connections>[m
[32m+[m[32m                            </menuItem>[m
[32m+[m[32m                            <menuItem title="Select All" keyEquivalent="a" id="Ruw-6m-B2m">[m
[32m+[m[32m                                <connections>[m
[32m+[m[32m                                    <action selector="selectAll:" target="-1" id="VNm-Mi-diN"/>[m
[32m+[m[32m                                </connections>[m
[32m+[m[32m                            </menuItem>[m
[32m+[m[32m                            <menuItem isSeparatorItem="YES" id="uyl-h8-XO2"/>[m
[32m+[m[32m                            <menuItem title="Find" id="4EN-yA-p0u">[m
[32m+[m[32m                                <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                                <menu key="submenu" title="Find" id="1b7-l0-nxx">[m
[32m+[m[32m                                    <items>[m
[32m+[m[32m                                        <menuItem title="Find…" tag="1" keyEquivalent="f" id="Xz5-n4-O0W">[m
[32m+[m[32m                                            <connections>[m
[32m+[m[32m                                                <action selector="performFindPanelAction:" target="-1" id="cD7-Qs-BN4"/>[m
[32m+[m[32m                                            </connections>[m
[32m+[m[32m                                        </menuItem>[m
[32m+[m[32m                                        <menuItem title="Find and Replace…" tag="12" keyEquivalent="f" id="YEy-JH-Tfz">[m
[32m+[m[32m                                            <modifierMask key="keyEquivalentModifierMask" option="YES" command="YES"/>[m
[32m+[m[32m                                            <connections>[m
[32m+[m[32m                                                <action selector="performFindPanelAction:" target="-1" id="WD3-Gg-5AJ"/>[m
[32m+[m[32m                                            </connections>[m
[32m+[m[32m                                        </menuItem>[m
[32m+[m[32m                                        <menuItem title="Find Next" tag="2" keyEquivalent="g" id="q09-fT-Sye">[m
[32m+[m[32m                                            <connections>[m
[32m+[m[32m                                                <action selector="performFindPanelAction:" target="-1" id="NDo-RZ-v9R"/>[m
[32m+[m[32m                                            </connections>[m
[32m+[m[32m                                        </menuItem>[m
[32m+[m[32m                                        <menuItem title="Find Previous" tag="3" keyEquivalent="G" id="OwM-mh-QMV">[m
[32m+[m[32m                                            <connections>[m
[32m+[m[32m                                                <action selector="performFindPanelAction:" target="-1" id="HOh-sY-3ay"/>[m
[32m+[m[32m                                            </connections>[m
[32m+[m[32m                                        </menuItem>[m
[32m+[m[32m                                        <menuItem title="Use Selection for Find" tag="7" keyEquivalent="e" id="buJ-ug-pKt">[m
[32m+[m[32m                                            <connections>[m
[32m+[m[32m                                                <action selector="performFindPanelAction:" target="-1" id="U76-nv-p5D"/>[m
[32m+[m[32m                                            </connections>[m
[32m+[m[32m                                        </menuItem>[m
[32m+[m[32m                                        <menuItem title="Jump to Selection" keyEquivalent="j" id="S0p-oC-mLd">[m
[32m+[m[32m                                            <connections>[m
[32m+[m[32m                                                <action selector="centerSelectionInVisibleArea:" target="-1" id="IOG-6D-g5B"/>[m
[32m+[m[32m                                            </connections>[m
[32m+[m[32m                                        </menuItem>[m
[32m+[m[32m                                    </items>[m
[32m+[m[32m                                </menu>[m
[32m+[m[32m                            </menuItem>[m
[32m+[m[32m                            <menuItem title="Spelling and Grammar" id="Dv1-io-Yv7">[m
[32m+[m[32m                                <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                                <menu key="submenu" title="Spelling" id="3IN-sU-3Bg">[m
[32m+[m[32m                                    <items>[m
[32m+[m[32m                                        <menuItem title="Show Spelling and Grammar" keyEquivalent=":" id="HFo-cy-zxI">[m
[32m+[m[32m                                            <connections>[m
[32m+[m[32m                                                <action selector="showGuessPanel:" target="-1" id="vFj-Ks-hy3"/>[m
[32m+[m[32m                                            </connections>[m
[32m+[m[32m                                        </menuItem>[m
[32m+[m[32m                                        <menuItem title="Check Document Now" keyEquivalent=";" id="hz2-CU-CR7">[m
[32m+[m[32m                                            <connections>[m
[32m+[m[32m                                                <action selector="checkSpelling:" target="-1" id="fz7-VC-reM"/>[m
[32m+[m[32m                                            </connections>[m
[32m+[m[32m                                        </menuItem>[m
[32m+[m[32m                                        <menuItem isSeparatorItem="YES" id="bNw-od-mp5"/>[m
[32m+[m[32m                                        <menuItem title="Check Spelling While Typing" id="rbD-Rh-wIN">[m
[32m+[m[32m                                            <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                                            <connections>[m
[32m+[m[32m                                                <action selector="toggleContinuousSpellChecking:" target="-1" id="7w6-Qz-0kB"/>[m
[32m+[m[32m                                            </connections>[m
[32m+[m[32m                                        </menuItem>[m
[32m+[m[32m                                        <menuItem title="Check Grammar With Spelling" id="mK6-2p-4JG">[m
[32m+[m[32m                                            <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                                            <connections>[m
[32m+[m[32m                                                <action selector="toggleGrammarChecking:" target="-1" id="muD-Qn-j4w"/>[m
[32m+[m[32m                                            </connections>[m
[32m+[m[32m                                        </menuItem>[m
[32m+[m[32m                                        <menuItem title="Correct Spelling Automatically" id="78Y-hA-62v">[m
[32m+[m[32m                                            <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                                            <connections>[m
[32m+[m[32m                                                <action selector="toggleAutomaticSpellingCorrection:" target="-1" id="2lM-Qi-WAP"/>[m
[32m+[m[32m                                            </connections>[m
[32m+[m[32m                                        </menuItem>[m
[32m+[m[32m                                    </items>[m
[32m+[m[32m                                </menu>[m
[32m+[m[32m                            </menuItem>[m
[32m+[m[32m                            <menuItem title="Substitutions" id="9ic-FL-obx">[m
[32m+[m[32m                                <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                                <menu key="submenu" title="Substitutions" id="FeM-D8-WVr">[m
[32m+[m[32m                                    <items>[m
[32m+[m[32m                                        <menuItem title="Show Substitutions" id="z6F-FW-3nz">[m
[32m+[m[32m                                            <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                                            <connections>[m
[32m+[m[32m                                                <action selector="orderFrontSubstitutionsPanel:" target="-1" id="oku-mr-iSq"/>[m
[32m+[m[32m                                            </connections>[m
[32m+[m[32m                                        </menuItem>[m
[32m+[m[32m                                        <menuItem isSeparatorItem="YES" id="gPx-C9-uUO"/>[m
[32m+[m[32m                                        <menuItem title="Smart Copy/Paste" id="9yt-4B-nSM">[m
[32m+[m[32m                                            <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                                            <connections>[m
[32m+[m[32m                                                <action selector="toggleSmartInsertDelete:" target="-1" id="3IJ-Se-DZD"/>[m
[32m+[m[32m                                            </connections>[m
[32m+[m[32m                                        </menuItem>[m
[32m+[m[32m                                        <menuItem title="Smart Quotes" id="hQb-2v-fYv">[m
[32m+[m[32m                                            <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                                            <connections>[m
[32m+[m[32m                                                <action selector="toggleAutomaticQuoteSubstitution:" target="-1" id="ptq-xd-QOA"/>[m
[32m+[m[32m                                            </connections>[m
[32m+[m[32m                                        </menuItem>[m
[32m+[m[32m                                        <menuItem title="Smart Dashes" id="rgM-f4-ycn">[m
[32m+[m[32m                                            <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                                            <connections>[m
[32m+[m[32m                                                <action selector="toggleAutomaticDashSubstitution:" target="-1" id="oCt-pO-9gS"/>[m
[32m+[m[32m                                            </connections>[m
[32m+[m[32m                                        </menuItem>[m
[32m+[m[32m                                        <menuItem title="Smart Links" id="cwL-P1-jid">[m
[32m+[m[32m                                            <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                                            <connections>[m
[32m+[m[32m                                                <action selector="toggleAutomaticLinkDetection:" target="-1" id="Gip-E3-Fov"/>[m
[32m+[m[32m                                            </connections>[m
[32m+[m[32m                                        </menuItem>[m
[32m+[m[32m                                        <menuItem title="Data Detectors" id="tRr-pd-1PS">[m
[32m+[m[32m                                            <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                                            <connections>[m
[32m+[m[32m                                                <action selector="toggleAutomaticDataDetection:" target="-1" id="R1I-Nq-Kbl"/>[m
[32m+[m[32m                                            </connections>[m
[32m+[m[32m                                        </menuItem>[m
[32m+[m[32m                                        <menuItem title="Text Replacement" id="HFQ-gK-NFA">[m
[32m+[m[32m                                            <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                                            <connections>[m
[32m+[m[32m                                                <action selector="toggleAutomaticTextReplacement:" target="-1" id="DvP-Fe-Py6"/>[m
[32m+[m[32m                                            </connections>[m
[32m+[m[32m                                        </menuItem>[m
[32m+[m[32m                                    </items>[m
[32m+[m[32m                                </menu>[m
[32m+[m[32m                            </menuItem>[m
[32m+[m[32m                            <menuItem title="Transformations" id="2oI-Rn-ZJC">[m
[32m+[m[32m                                <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                                <menu key="submenu" title="Transformations" id="c8a-y6-VQd">[m
[32m+[m[32m                                    <items>[m
[32m+[m[32m                                        <menuItem title="Make Upper Case" id="vmV-6d-7jI">[m
[32m+[m[32m                                            <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                                            <connections>[m
[32m+[m[32m                                                <action selector="uppercaseWord:" target="-1" id="sPh-Tk-edu"/>[m
[32m+[m[32m                                            </connections>[m
[32m+[m[32m                                        </menuItem>[m
[32m+[m[32m                                        <menuItem title="Make Lower Case" id="d9M-CD-aMd">[m
[32m+[m[32m                                            <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                                            <connections>[m
[32m+[m[32m                                                <action selector="lowercaseWord:" target="-1" id="iUZ-b5-hil"/>[m
[32m+[m[32m                                            </connections>[m
[32m+[m[32m                                        </menuItem>[m
[32m+[m[32m                                        <menuItem title="Capitalize" id="UEZ-Bs-lqG">[m
[32m+[m[32m                                            <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                                            <connections>[m
[32m+[m[32m                                                <action selector="capitalizeWord:" target="-1" id="26H-TL-nsh"/>[m
[32m+[m[32m                                            </connections>[m
[32m+[m[32m                                        </menuItem>[m
[32m+[m[32m                                    </items>[m
[32m+[m[32m                                </menu>[m
[32m+[m[32m                            </menuItem>[m
[32m+[m[32m                            <menuItem title="Speech" id="xrE-MZ-jX0">[m
[32m+[m[32m                                <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                                <menu key="submenu" title="Speech" id="3rS-ZA-NoH">[m
[32m+[m[32m                                    <items>[m
[32m+[m[32m                                        <menuItem title="Start Speaking" id="Ynk-f8-cLZ">[m
[32m+[m[32m                                            <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                                            <connections>[m
[32m+[m[32m                                                <action selector="startSpeaking:" target="-1" id="654-Ng-kyl"/>[m
[32m+[m[32m                                            </connections>[m
[32m+[m[32m                                        </menuItem>[m
[32m+[m[32m                                        <menuItem title="Stop Speaking" id="Oyz-dy-DGm">[m
[32m+[m[32m                                            <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                                            <connections>[m
[32m+[m[32m                                                <action selector="stopSpeaking:" target="-1" id="dX8-6p-jy9"/>[m
[32m+[m[32m                                            </connections>[m
[32m+[m[32m                                        </menuItem>[m
[32m+[m[32m                                    </items>[m
[32m+[m[32m                                </menu>[m
[32m+[m[32m                            </menuItem>[m
[32m+[m[32m                        </items>[m
[32m+[m[32m                    </menu>[m
[32m+[m[32m                </menuItem>[m
[32m+[m[32m                <menuItem title="View" id="H8h-7b-M4v">[m
[32m+[m[32m                    <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                    <menu key="submenu" title="View" id="HyV-fh-RgO">[m
[32m+[m[32m                        <items>[m
[32m+[m[32m                            <menuItem title="Enter Full Screen" keyEquivalent="f" id="4J7-dP-txa">[m
[32m+[m[32m                                <modifierMask key="keyEquivalentModifierMask" control="YES" command="YES"/>[m
[32m+[m[32m                                <connections>[m
[32m+[m[32m                                    <action selector="toggleFullScreen:" target="-1" id="dU3-MA-1Rq"/>[m
[32m+[m[32m                                </connections>[m
[32m+[m[32m                            </menuItem>[m
[32m+[m[32m                        </items>[m
[32m+[m[32m                    </menu>[m
[32m+[m[32m                </menuItem>[m
[32m+[m[32m                <menuItem title="Window" id="aUF-d1-5bR">[m
[32m+[m[32m                    <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                    <menu key="submenu" title="Window" systemMenu="window" id="Td7-aD-5lo">[m
[32m+[m[32m                        <items>[m
[32m+[m[32m                            <menuItem title="Minimize" keyEquivalent="m" id="OY7-WF-poV">[m
[32m+[m[32m                                <connections>[m
[32m+[m[32m                                    <action selector="performMiniaturize:" target="-1" id="VwT-WD-YPe"/>[m
[32m+[m[32m                                </connections>[m
[32m+[m[32m                            </menuItem>[m
[32m+[m[32m                            <menuItem title="Zoom" id="R4o-n2-Eq4">[m
[32m+[m[32m                                <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                                <connections>[m
[32m+[m[32m                                    <action selector="performZoom:" target="-1" id="DIl-cC-cCs"/>[m
[32m+[m[32m                                </connections>[m
[32m+[m[32m                            </menuItem>[m
[32m+[m[32m                            <menuItem isSeparatorItem="YES" id="eu3-7i-yIM"/>[m
[32m+[m[32m                            <menuItem title="Bring All to Front" id="LE2-aR-0XJ">[m
[32m+[m[32m                                <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                                <connections>[m
[32m+[m[32m                                    <action selector="arrangeInFront:" target="-1" id="DRN-fu-gQh"/>[m
[32m+[m[32m                                </connections>[m
[32m+[m[32m                            </menuItem>[m
[32m+[m[32m                        </items>[m
[32m+[m[32m                    </menu>[m
[32m+[m[32m                </menuItem>[m
[32m+[m[32m                <menuItem title="Help" id="EPT-qC-fAb">[m
[32m+[m[32m                    <modifierMask key="keyEquivalentModifierMask"/>[m
[32m+[m[32m                    <menu key="submenu" title="Help" systemMenu="help" id="rJ0-wn-3NY"/>[m
[32m+[m[32m                </menuItem>[m
[32m+[m[32m            </items>[m
[32m+[m[32m            <point key="canvasLocation" x="142" y="-258"/>[m
[32m+[m[32m        </menu>[m
[32m+[m[32m        <window title="APP_NAME" allowsToolTipsWhenApplicationIsInactive="NO" autorecalculatesKeyViewLoop="NO" releasedWhenClosed="NO" animationBehavior="default" id="QvC-M9-y7g" customClass="MainFlutterWindow" customModule="Runner" customModuleProvider="target">[m
[32m+[m[32m            <windowStyleMask key="styleMask" titled="YES" closable="YES" miniaturizable="YES" resizable="YES"/>[m
[32m+[m[32m            <rect key="contentRect" x="335" y="390" width="800" height="600"/>[m
[32m+[m[32m            <rect key="screenRect" x="0.0" y="0.0" width="2560" height="1577"/>[m
[32m+[m[32m            <view key="contentView" wantsLayer="YES" id="EiT-Mj-1SZ">[m
[32m+[m[32m                <rect key="frame" x="0.0" y="0.0" width="800" height="600"/>[m
[32m+[m[32m                <autoresizingMask key="autoresizingMask"/>[m
[32m+[m[32m            </view>[m
[32m+[m[32m        </window>[m
[32m+[m[32m    </objects>[m
[32m+[m[32m</document>[m
[1mdiff --git a/macos/Runner/Configs/AppInfo.xcconfig b/macos/Runner/Configs/AppInfo.xcconfig[m
[1mnew file mode 100644[m
[1mindex 0000000..6359436[m
[1m--- /dev/null[m
[1m+++ b/macos/Runner/Configs/AppInfo.xcconfig[m
[36m@@ -0,0 +1,14 @@[m
[32m+[m[32m// Application-level settings for the Runner target.[m
[32m+[m[32m//[m
[32m+[m[32m// This may be replaced with something auto-generated from metadata (e.g., pubspec.yaml) in the[m
[32m+[m[32m// future. If not, the values below would default to using the project name when this becomes a[m
[32m+[m[32m// 'flutter create' template.[m
[32m+[m
[32m+[m[32m// The application's name. By default this is also the title of the Flutter window.[m
[32m+[m[32mPRODUCT_NAME = fooddeliveryapp[m
[32m+[m
[32m+[m[32m// The application's bundle identifier[m
[32m+[m[32mPRODUCT_BUNDLE_IDENTIFIER = com.example.fooddeliveryapp[m
[32m+[m
[32m+[m[32m// The copyright displayed in application information[m
[32m+[m[32mPRODUCT_COPYRIGHT = Copyright © 2022 com.example. All rights reserved.[m
[1mdiff --git a/macos/Runner/Configs/Debug.xcconfig b/macos/Runner/Configs/Debug.xcconfig[m
[1mnew file mode 100644[m
[1mindex 0000000..36b0fd9[m
[1m--- /dev/null[m
[1m+++ b/macos/Runner/Configs/Debug.xcconfig[m
[36m@@ -0,0 +1,2 @@[m
[32m+[m[32m#include "../../Flutter/Flutter-Debug.xcconfig"[m
[32m+[m[32m#include "Warnings.xcconfig"[m
[1mdiff --git a/macos/Runner/Configs/Release.xcconfig b/macos/Runner/Configs/Release.xcconfig[m
[1mnew file mode 100644[m
[1mindex 0000000..dff4f49[m
[1m--- /dev/null[m
[1m+++ b/macos/Runner/Configs/Release.xcconfig[m
[36m@@ -0,0 +1,2 @@[m
[32m+[m[32m#include "../../Flutter/Flutter-Release.xcconfig"[m
[32m+[m[32m#include "Warnings.xcconfig"[m
[1mdiff --git a/macos/Runner/Configs/Warnings.xcconfig b/macos/Runner/Configs/Warnings.xcconfig[m
[1mnew file mode 100644[m
[1mindex 0000000..42bcbf4[m
[1m--- /dev/null[m
[1m+++ b/macos/Runner/Configs/Warnings.xcconfig[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32mWARNING_CFLAGS = -Wall -Wconditional-uninitialized -Wnullable-to-nonnull-conversion -Wmissing-method-return-type -Woverlength-strings[m
[32m+[m[32mGCC_WARN_UNDECLARED_SELECTOR = YES[m
[32m+[m[32mCLANG_UNDEFINED_BEHAVIOR_SANITIZER_NULLABILITY = YES[m
[32m+[m[32mCLANG_WARN_UNGUARDED_AVAILABILITY = YES_AGGRESSIVE[m
[32m+[m[32mCLANG_WARN__DUPLICATE_METHOD_MATCH = YES[m
[32m+[m[32mCLANG_WARN_PRAGMA_PACK = YES[m
[32m+[m[32mCLANG_WARN_STRICT_PROTOTYPES = YES[m
[32m+[m[32mCLANG_WARN_COMMA = YES[m
[32m+[m[32mGCC_WARN_STRICT_SELECTOR_MATCH = YES[m
[32m+[m[32mCLANG_WARN_OBJC_REPEATED_USE_OF_WEAK = YES[m
[32m+[m[32mCLANG_WARN_OBJC_IMPLICIT_RETAIN_SELF = YES[m
[32m+[m[32mGCC_WARN_SHADOW = YES[m
[32m+[m[32mCLANG_WARN_UNREACHABLE_CODE = YES[m
[1mdiff --git a/macos/Runner/DebugProfile.entitlements b/macos/Runner/DebugProfile.entitlements[m
[1mnew file mode 100644[m
[1mindex 0000000..dddb8a3[m
[1m--- /dev/null[m
[1m+++ b/macos/Runner/DebugProfile.entitlements[m
[36m@@ -0,0 +1,12 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">[m
[32m+[m[32m<plist version="1.0">[m
[32m+[m[32m<dict>[m
[32m+[m	[32m<key>com.apple.security.app-sandbox</key>[m
[32m+[m	[32m<true/>[m
[32m+[m	[32m<key>com.apple.security.cs.allow-jit</key>[m
[32m+[m	[32m<true/>[m
[32m+[m	[32m<key>com.apple.security.network.server</key>[m
[32m+[m	[32m<true/>[m
[32m+[m[32m</dict>[m
[32m+[m[32m</plist>[m
[1mdiff --git a/macos/Runner/Info.plist b/macos/Runner/Info.plist[m
[1mnew file mode 100644[m
[1mindex 0000000..4789daa[m
[1m--- /dev/null[m
[1m+++ b/macos/Runner/Info.plist[m
[36m@@ -0,0 +1,32 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">[m
[32m+[m[32m<plist version="1.0">[m
[32m+[m[32m<dict>[m
[32m+[m	[32m<key>CFBundleDevelopmentRegion</key>[m
[32m+[m	[32m<string>$(DEVELOPMENT_LANGUAGE)</string>[m
[32m+[m	[32m<key>CFBundleExecutable</key>[m
[32m+[m	[32m<string>$(EXECUTABLE_NAME)</string>[m
[32m+[m	[32m<key>CFBundleIconFile</key>[m
[32m+[m	[32m<string></string>[m
[32m+[m	[32m<key>CFBundleIdentifier</key>[m
[32m+[m	[32m<string>$(PRODUCT_BUNDLE_IDENTIFIER)</string>[m
[32m+[m	[32m<key>CFBundleInfoDictionaryVersion</key>[m
[32m+[m	[32m<string>6.0</string>[m
[32m+[m	[32m<key>CFBundleName</key>[m
[32m+[m	[32m<string>$(PRODUCT_NAME)</string>[m
[32m+[m	[32m<key>CFBundlePackageType</key>[m
[32m+[m	[32m<string>APPL</string>[m
[32m+[m	[32m<key>CFBundleShortVersionString</key>[m
[32m+[m	[32m<string>$(FLUTTER_BUILD_NAME)</string>[m
[32m+[m	[32m<key>CFBundleVersion</key>[m
[32m+[m	[32m<string>$(FLUTTER_BUILD_NUMBER)</string>[m
[32m+[m	[32m<key>LSMinimumSystemVersion</key>[m
[32m+[m	[32m<string>$(MACOSX_DEPLOYMENT_TARGET)</string>[m
[32m+[m	[32m<key>NSHumanReadableCopyright</key>[m
[32m+[m	[32m<string>$(PRODUCT_COPYRIGHT)</string>[m
[32m+[m	[32m<key>NSMainNibFile</key>[m
[32m+[m	[32m<string>MainMenu</string>[m
[32m+[m	[32m<key>NSPrincipalClass</key>[m
[32m+[m	[32m<string>NSApplication</string>[m
[32m+[m[32m</dict>[m
[32m+[m[32m</plist>[m
[1mdiff --git a/macos/Runner/MainFlutterWindow.swift b/macos/Runner/MainFlutterWindow.swift[m
[1mnew file mode 100644[m
[1mindex 0000000..2722837[m
[1m--- /dev/null[m
[1m+++ b/macos/Runner/MainFlutterWindow.swift[m
[36m@@ -0,0 +1,15 @@[m
[32m+[m[32mimport Cocoa[m
[32m+[m[32mimport FlutterMacOS[m
[32m+[m
[32m+[m[32mclass MainFlutterWindow: NSWindow {[m
[32m+[m[32m  override func awakeFromNib() {[m
[32m+[m[32m    let flutterViewController = FlutterViewController.init()[m
[32m+[m[32m    let windowFrame = self.frame[m
[32m+[m[32m    self.contentViewController = flutterViewController[m
[32m+[m[32m    self.setFrame(windowFrame, display: true)[m
[32m+[m
[32m+[m[32m    RegisterGeneratedPlugins(registry: flutterViewController)[m
[32m+[m
[32m+[m[32m    super.awakeFromNib()[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/macos/Runner/Release.entitlements b/macos/Runner/Release.entitlements[m
[1mnew file mode 100644[m
[1mindex 0000000..852fa1a[m
[1m--- /dev/null[m
[1m+++ b/macos/Runner/Release.entitlements[m
[36m@@ -0,0 +1,8 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">[m
[32m+[m[32m<plist version="1.0">[m
[32m+[m[32m<dict>[m
[32m+[m	[32m<key>com.apple.security.app-sandbox</key>[m
[32m+[m	[32m<true/>[m
[32m+[m[32m</dict>[m
[32m+[m[32m</plist>[m
[1mdiff --git a/pubspec.lock b/pubspec.lock[m
[1mnew file mode 100644[m
[1mindex 0000000..9737548[m
[1m--- /dev/null[m
[1m+++ b/pubspec.lock[m
[36m@@ -0,0 +1,507 @@[m
[32m+[m[32m# Generated by pub[m
[32m+[m[32m# See https://dart.dev/tools/pub/glossary#lockfile[m
[32m+[m[32mpackages:[m
[32m+[m[32m  archive:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: archive[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "3.3.1"[m
[32m+[m[32m  args:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: args[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "2.3.1"[m
[32m+[m[32m  async:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: async[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "2.8.2"[m
[32m+[m[32m  boolean_selector:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: boolean_selector[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "2.1.0"[m
[32m+[m[32m  characters:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: characters[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "1.2.0"[m
[32m+[m[32m  charcode:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: charcode[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "1.3.1"[m
[32m+[m[32m  clock:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: clock[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "1.1.0"[m
[32m+[m[32m  cloud_firestore:[m
[32m+[m[32m    dependency: "direct main"[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: cloud_firestore[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "3.4.5"[m
[32m+[m[32m  cloud_firestore_platform_interface:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: cloud_firestore_platform_interface[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "5.7.2"[m
[32m+[m[32m  cloud_firestore_web:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: cloud_firestore_web[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "2.8.5"[m
[32m+[m[32m  collection:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: collection[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "1.16.0"[m
[32m+[m[32m  crypto:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: crypto[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "3.0.2"[m
[32m+[m[32m  cupertino_icons:[m
[32m+[m[32m    dependency: "direct main"[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: cupertino_icons[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "0.1.3"[m
[32m+[m[32m  fake_async:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: fake_async[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "1.3.0"[m
[32m+[m[32m  firebase_auth:[m
[32m+[m[32m    dependency: "direct main"[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: firebase_auth[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "3.6.4"[m
[32m+[m[32m  firebase_auth_platform_interface:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: firebase_auth_platform_interface[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "6.5.4"[m
[32m+[m[32m  firebase_auth_web:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: firebase_auth_web[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "4.2.4"[m
[32m+[m[32m  firebase_core:[m
[32m+[m[32m    dependency: "direct main"[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: firebase_core[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "1.21.0"[m
[32m+[m[32m  firebase_core_platform_interface:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: firebase_core_platform_interface[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "4.5.0"[m
[32m+[m[32m  firebase_core_web:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: firebase_core_web[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "1.7.1"[m
[32m+[m[32m  flutter:[m
[32m+[m[32m    dependency: "direct main"[m
[32m+[m[32m    description: flutter[m
[32m+[m[32m    source: sdk[m
[32m+[m[32m    version: "0.0.0"[m
[32m+[m[32m  flutter_launcher_icons:[m
[32m+[m[32m    dependency: "direct dev"[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: flutter_launcher_icons[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "0.9.3"[m
[32m+[m[32m  flutter_localizations:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description: flutter[m
[32m+[m[32m    source: sdk[m
[32m+[m[32m    version: "0.0.0"[m
[32m+[m[32m  flutter_plugin_android_lifecycle:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: flutter_plugin_android_lifecycle[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "2.0.7"[m
[32m+[m[32m  flutter_signin_button:[m
[32m+[m[32m    dependency: "direct main"[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: flutter_signin_button[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "2.0.0"[m
[32m+[m[32m  flutter_svg:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: flutter_svg[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "1.1.4"[m
[32m+[m[32m  flutter_test:[m
[32m+[m[32m    dependency: "direct dev"[m
[32m+[m[32m    description: flutter[m
[32m+[m[32m    source: sdk[m
[32m+[m[32m    version: "0.0.0"[m
[32m+[m[32m  flutter_web_plugins:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description: flutter[m
[32m+[m[32m    source: sdk[m
[32m+[m[32m    version: "0.0.0"[m
[32m+[m[32m  fluttertoast:[m
[32m+[m[32m    dependency: "direct main"[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: fluttertoast[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "8.0.9"[m
[32m+[m[32m  font_awesome_flutter:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: font_awesome_flutter[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "9.2.0"[m
[32m+[m[32m  google_maps_flutter:[m
[32m+[m[32m    dependency: "direct main"[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: google_maps_flutter[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "2.1.12"[m
[32m+[m[32m  google_maps_flutter_android:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: google_maps_flutter_android[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "2.1.10"[m
[32m+[m[32m  google_maps_flutter_ios:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: google_maps_flutter_ios[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "2.1.11"[m
[32m+[m[32m  google_maps_flutter_platform_interface:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: google_maps_flutter_platform_interface[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "2.2.2"[m
[32m+[m[32m  google_sign_in:[m
[32m+[m[32m    dependency: "direct main"[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: google_sign_in[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "5.4.1"[m
[32m+[m[32m  google_sign_in_android:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: google_sign_in_android[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "6.0.1"[m
[32m+[m[32m  google_sign_in_ios:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: google_sign_in_ios[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "5.4.0"[m
[32m+[m[32m  google_sign_in_platform_interface:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: google_sign_in_platform_interface[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "2.2.0"[m
[32m+[m[32m  google_sign_in_web:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: google_sign_in_web[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "0.10.2"[m
[32m+[m[32m  http_parser:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: http_parser[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "4.0.1"[m
[32m+[m[32m  image:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: image[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "3.2.0"[m
[32m+[m[32m  intl:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: intl[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "0.17.0"[m
[32m+[m[32m  js:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: js[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "0.6.4"[m
[32m+[m[32m  location:[m
[32m+[m[32m    dependency: "direct main"[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: location[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "4.4.0"[m
[32m+[m[32m  location_platform_interface:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: location_platform_interface[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "2.3.0"[m
[32m+[m[32m  location_web:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: location_web[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "3.1.1"[m
[32m+[m[32m  matcher:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: matcher[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "0.12.11"[m
[32m+[m[32m  material_color_utilities:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: material_color_utilities[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "0.1.4"[m
[32m+[m[32m  meta:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: meta[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "1.7.0"[m
[32m+[m[32m  nested:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: nested[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "1.0.0"[m
[32m+[m[32m  path:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: path[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "1.8.1"[m
[32m+[m[32m  path_drawing:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: path_drawing[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "1.0.1"[m
[32m+[m[32m  path_parsing:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: path_parsing[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "1.0.1"[m
[32m+[m[32m  pay:[m
[32m+[m[32m    dependency: "direct main"[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: pay[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "1.0.10"[m
[32m+[m[32m  pay_android:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: pay_android[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "1.0.7"[m
[32m+[m[32m  pay_ios:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: pay_ios[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "1.0.7"[m
[32m+[m[32m  pay_platform_interface:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: pay_platform_interface[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "1.0.2"[m
[32m+[m[32m  petitparser:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: petitparser[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "5.0.0"[m
[32m+[m[32m  plugin_platform_interface:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: plugin_platform_interface[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "2.1.2"[m
[32m+[m[32m  provider:[m
[32m+[m[32m    dependency: "direct main"[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: provider[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "6.0.3"[m
[32m+[m[32m  quiver:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: quiver[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "3.1.0"[m
[32m+[m[32m  sky_engine:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description: flutter[m
[32m+[m[32m    source: sdk[m
[32m+[m[32m    version: "0.0.99"[m
[32m+[m[32m  source_span:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: source_span[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "1.8.2"[m
[32m+[m[32m  stack_trace:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: stack_trace[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "1.10.0"[m
[32m+[m[32m  stream_channel:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: stream_channel[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "2.1.0"[m
[32m+[m[32m  stream_transform:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: stream_transform[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "2.0.0"[m
[32m+[m[32m  string_scanner:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: string_scanner[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "1.1.0"[m
[32m+[m[32m  term_glyph:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: term_glyph[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "1.2.0"[m
[32m+[m[32m  test_api:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: test_api[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "0.4.9"[m
[32m+[m[32m  typed_data:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: typed_data[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "1.3.1"[m
[32m+[m[32m  vector_math:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: vector_math[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "2.1.2"[m
[32m+[m[32m  xml:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: xml[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "6.1.0"[m
[32m+[m[32m  yaml:[m
[32m+[m[32m    dependency: transitive[m
[32m+[m[32m    description:[m
[32m+[m[32m      name: yaml[m
[32m+[m[32m      url: "https://pub.dartlang.org"[m
[32m+[m[32m    source: hosted[m
[32m+[m[32m    version: "3.1.1"[m
[32m+[m[32msdks:[m
[32m+[m[32m  dart: ">=2.17.0 <3.0.0"[m
[32m+[m[32m  flutter: ">=2.11.0-0.1.pre"[m
[1mdiff --git a/pubspec.yaml b/pubspec.yaml[m
[1mnew file mode 100644[m
[1mindex 0000000..e2c75cc[m
[1m--- /dev/null[m
[1m+++ b/pubspec.yaml[m
[36m@@ -0,0 +1,94 @@[m
[32m+[m[32mname: fooddeliveryapp[m
[32m+[m[32mdescription: A new Flutter application.[m
[32m+[m
[32m+[m[32m# The following line prevents the package from being accidentally published to[m
[32m+[m[32m# pub.dev using `pub publish`. This is preferred for private packages.[m
[32m+[m[32mpublish_to: 'none' # Remove this line if you wish to publish to pub.dev[m
[32m+[m
[32m+[m[32m# The following defines the version and build number for your application.[m
[32m+[m[32m# A version number is three numbers separated by dots, like 1.2.43[m
[32m+[m[32m# followed by an optional build number separated by a +.[m
[32m+[m[32m# Both the version and the builder number may be overridden in flutter[m
[32m+[m[32m# build by specifying --build-name and --build-number, respectively.[m
[32m+[m[32m# In Android, build-name is used as versionName while build-number used as versionCode.[m
[32m+[m[32m# Read more about Android versioning at https://developer.android.com/studio/publish/versioning[m
[32m+[m[32m# In iOS, build-name is used as CFBundleShortVersionString while build-number used as CFBundleVersion.[m
[32m+[m[32m# Read more about iOS versioning at[m
[32m+[m[32m# https://developer.apple.com/library/archive/documentation/General/Reference/InfoPlistKeyReference/Articles/CoreFoundationKeys.html[m
[32m+[m[32mversion: 1.0.0+1[m
[32m+[m
[32m+[m[32menvironment:[m
[32m+[m[32m  sdk: ">=2.7.0 <3.0.0"[m
[32m+[m
[32m+[m[32mdependencies:[m
[32m+[m[32m  flutter:[m
[32m+[m[32m    sdk: flutter[m
[32m+[m
[32m+[m
[32m+[m[32m  # The following adds the Cupertino Icons font to your application.[m
[32m+[m[32m  # Use with the CupertinoIcons class for iOS style icons.[m
[32m+[m[32m  cupertino_icons: ^0.1.3[m
[32m+[m[32m  flutter_signin_button: ^2.0.0[m
[32m+[m[32m  google_sign_in: ^5.3.1[m
[32m+[m[32m  firebase_auth: ^3.3.18[m
[32m+[m[32m  firebase_core: ^1.17.0[m
[32m+[m[32m  cloud_firestore: ^3.1.18[m
[32m+[m[32m  provider: ^6.0.3[m
[32m+[m[32m  fluttertoast: ^8.0.9[m
[32m+[m[32m  location: ^4.4.0[m
[32m+[m[32m  google_maps_flutter: ^2.1.8[m
[32m+[m[32m  pay: ^1.0.10[m
[32m+[m
[32m+[m
[32m+[m[32mdev_dependencies:[m
[32m+[m[32m  flutter_launcher_icons: "^0.9.2"[m
[32m+[m[32m  flutter_test:[m
[32m+[m[32m    sdk: flutter[m
[32m+[m
[32m+[m[32mflutter_icons:[m
[32m+[m[32m  android: true[m
[32m+[m[32m  ios: true[m
[32m+[m[32m  image_path: "images/order.png"[m
[32m+[m
[32m+[m[32m# For information on the generic Dart part of this file, see the[m
[32m+[m[32m# following page: https://dart.dev/tools/pub/pubspec[m
[32m+[m
[32m+[m[32m# The following section is specific to Flutter.[m
[32m+[m[32mflutter:[m
[32m+[m
[32m+[m[32m  # The following line ensures that the Material Icons font is[m
[32m+[m[32m  # included with your application, so that you can use the icons in[m
[32m+[m[32m  # the material Icons class.[m
[32m+[m[32m  uses-material-design: true[m
[32m+[m
[32m+[m[32m  # To add assets to your application, add an assets section, like this:[m
[32m+[m[32m  assets:[m
[32m+[m[32m    - images/[m
[32m+[m[32m  #   - images/a_dot_burr.jpeg[m
[32m+[m[32m  #   - images/a_dot_ham.jpeg[m
[32m+[m
[32m+[m[32m  # An image asset can refer to one or more resolution-specific "variants", see[m
[32m+[m[32m  # https://flutter.dev/assets-and-images/#resolution-aware.[m
[32m+[m
[32m+[m[32m  # For details regarding adding assets from package dependencies, see[m
[32m+[m[32m  # https://flutter.dev/assets-and-images/#from-packages[m
[32m+[m
[32m+[m[32m  # To add custom fonts to your application, add a fonts section here,[m
[32m+[m[32m  # in this "flutter" section. Each entry in this list should have a[m
[32m+[m[32m  # "family" key with the font family name, and a "fonts" key with a[m
[32m+[m[32m  # list giving the asset and other descriptors for the font. For[m
[32m+[m[32m  # example:[m
[32m+[m[32m  # fonts:[m
[32m+[m[32m  #   - family: Schyler[m
[32m+[m[32m  #     fonts:[m
[32m+[m[32m  #       - asset: fonts/Schyler-Regular.ttf[m
[32m+[m[32m  #       - asset: fonts/Schyler-Italic.ttf[m
[32m+[m[32m  #         style: italic[m
[32m+[m[32m  #   - family: Trajan Pro[m
[32m+[m[32m  #     fonts:[m
[32m+[m[32m  #       - asset: fonts/TrajanPro.ttf[m
[32m+[m[32m  #       - asset: fonts/TrajanPro_Bold.ttf[m
[32m+[m[32m  #         weight: 700[m
[32m+[m[32m  #[m
[32m+[m[32m  # For details regarding fonts from package dependencies,[m
[32m+[m[32m  # see https://flutter.dev/custom-fonts/#from-packages[m
[1mdiff --git a/web/favicon.png b/web/favicon.png[m
[1mnew file mode 100644[m
[1mindex 0000000..8aaa46a[m
Binary files /dev/null and b/web/favicon.png differ
[1mdiff --git a/web/icons/Icon-192.png b/web/icons/Icon-192.png[m
[1mnew file mode 100644[m
[1mindex 0000000..b749bfe[m
Binary files /dev/null and b/web/icons/Icon-192.png differ
[1mdiff --git a/web/icons/Icon-512.png b/web/icons/Icon-512.png[m
[1mnew file mode 100644[m
[1mindex 0000000..88cfd48[m
Binary files /dev/null and b/web/icons/Icon-512.png differ
[1mdiff --git a/web/icons/Icon-maskable-192.png b/web/icons/Icon-maskable-192.png[m
[1mnew file mode 100644[m
[1mindex 0000000..eb9b4d7[m
Binary files /dev/null and b/web/icons/Icon-maskable-192.png differ
[1mdiff --git a/web/icons/Icon-maskable-512.png b/web/icons/Icon-maskable-512.png[m
[1mnew file mode 100644[m
[1mindex 0000000..d69c566[m
Binary files /dev/null and b/web/icons/Icon-maskable-512.png differ
[1mdiff --git a/web/index.html b/web/index.html[m
[1mnew file mode 100644[m
[1mindex 0000000..29437ea[m
[1m--- /dev/null[m
[1m+++ b/web/index.html[m
[36m@@ -0,0 +1,58 @@[m
[32m+[m[32m<!DOCTYPE html>[m
[32m+[m[32m<html>[m
[32m+[m[32m<head>[m
[32m+[m[32m  <!--[m
[32m+[m[32m    If you are serving your web app in a path other than the root, change the[m
[32m+[m[32m    href value below to reflect the base path you are serving from.[m
[32m+[m
[32m+[m[32m    The path provided below has to start and end with a slash "/" in order for[m
[32m+[m[32m    it to work correctly.[m
[32m+[m
[32m+[m[32m    For more details:[m
[32m+[m[32m    * https://developer.mozilla.org/en-US/docs/Web/HTML/Element/base[m
[32m+[m
[32m+[m[32m    This is a placeholder for base href that will be replaced by the value of[m
[32m+[m[32m    the `--base-href` argument provided to `flutter build`.[m
[32m+[m[32m  -->[m
[32m+[m[32m  <base href="$FLUTTER_BASE_HREF">[m
[32m+[m
[32m+[m[32m  <meta charset="UTF-8">[m
[32m+[m[32m  <meta content="IE=Edge" http-equiv="X-UA-Compatible">[m
[32m+[m[32m  <meta name="description" content="A new Flutter project.">[m
[32m+[m
[32m+[m[32m  <!-- iOS meta tags & icons -->[m
[32m+[m[32m  <meta name="apple-mobile-web-app-capable" content="yes">[m
[32m+[m[32m  <meta name="apple-mobile-web-app-status-bar-style" content="black">[m
[32m+[m[32m  <meta name="apple-mobile-web-app-title" content="fooddeliveryapp">[m
[32m+[m[32m  <link rel="apple-touch-icon" href="icons/Icon-192.png">[m
[32m+[m
[32m+[m[32m  <!-- Favicon -->[m
[32m+[m[32m  <link rel="icon" type="image/png" href="favicon.png"/>[m
[32m+[m
[32m+[m[32m  <title>fooddeliveryapp</title>[m
[32m+[m[32m  <link rel="manifest" href="manifest.json">[m
[32m+[m
[32m+[m[32m  <script>[m
[32m+[m[32m    // The value below is injected by flutter build, do not touch.[m
[32m+[m[32m    var serviceWorkerVersion = null;[m
[32m+[m[32m  </script>[m
[32m+[m[32m  <!-- This script adds the flutter initialization JS code -->[m
[32m+[m[32m  <script src="flutter.js" defer></script>[m
[32m+[m[32m</head>[m
[32m+[m[32m<body>[m
[32m+[m[32m  <script>[m
[32m+[m[32m    window.addEventListener('load', function(ev) {[m
[32m+[m[32m      // Download main.dart.js[m
[32m+[m[32m      _flutter.loader.loadEntrypoint({[m
[32m+[m[32m        serviceWorker: {[m
[32m+[m[32m          serviceWorkerVersion: serviceWorkerVersion,[m
[32m+[m[32m        }[m
[32m+[m[32m      }).then(function(engineInitializer) {[m
[32m+[m[32m        return engineInitializer.initializeEngine();[m
[32m+[m[32m      }).then(function(appRunner) {[m
[32m+[m[32m        return appRunner.runApp();[m
[32m+[m[32m      });[m
[32m+[m[32m    });[m
[32m+[m[32m  </script>[m
[32m+[m[32m</body>[m
[32m+[m[32m</html>[m
[1mdiff --git a/web/manifest.json b/web/manifest.json[m
[1mnew file mode 100644[m
[1mindex 0000000..bb59da5[m
[1m--- /dev/null[m
[1m+++ b/web/manifest.json[m
[36m@@ -0,0 +1,35 @@[m
[32m+[m[32m{[m
[32m+[m[32m    "name": "fooddeliveryapp",[m
[32m+[m[32m    "short_name": "fooddeliveryapp",[m
[32m+[m[32m    "start_url": ".",[m
[32m+[m[32m    "display": "standalone",[m
[32m+[m[32m    "background_color": "#0175C2",[m
[32m+[m[32m    "theme_color": "#0175C2",[m
[32m+[m[32m    "description": "A new Flutter project.",[m
[32m+[m[32m    "orientation": "portrait-primary",[m
[32m+[m[32m    "prefer_related_applications": false,[m
[32m+[m[32m    "icons": [[m
[32m+[m[32m        {[m
[32m+[m[32m            "src": "icons/Icon-192.png",[m
[32m+[m[32m            "sizes": "192x192",[m
[32m+[m[32m            "type": "image/png"[m
[32m+[m[32m        },[m
[32m+[m[32m        {[m
[32m+[m[32m            "src": "icons/Icon-512.png",[m
[32m+[m[32m            "sizes": "512x512",[m
[32m+[m[32m            "type": "image/png"[m
[32m+[m[32m        },[m
[32m+[m[32m        {[m
[32m+[m[32m            "src": "icons/Icon-maskable-192.png",[m
[32m+[m[32m            "sizes": "192x192",[m
[32m+[m[32m            "type": "image/png",[m
[32m+[m[32m            "purpose": "maskable"[m
[32m+[m[32m        },[m
[32m+[m[32m        {[m
[32m+[m[32m            "src": "icons/Icon-maskable-512.png",[m
[32m+[m[32m            "sizes": "512x512",[m
[32m+[m[32m            "type": "image/png",[m
[32m+[m[32m            "purpose": "maskable"[m
[32m+[m[32m        }[m
[32m+[m[32m    ][m
[32m+[m[32m}[m
[1mdiff --git a/windows/.gitignore b/windows/.gitignore[m
[1mnew file mode 100644[m
[1mindex 0000000..d492d0d[m
[1m--- /dev/null[m
[1m+++ b/windows/.gitignore[m
[36m@@ -0,0 +1,17 @@[m
[32m+[m[32mflutter/ephemeral/[m
[32m+[m
[32m+[m[32m# Visual Studio user-specific files.[m
[32m+[m[32m*.suo[m
[32m+[m[32m*.user[m
[32m+[m[32m*.userosscache[m
[32m+[m[32m*.sln.docstates[m
[32m+[m
[32m+[m[32m# Visual Studio build-related files.[m
[32m+[m[32mx64/[m
[32m+[m[32mx86/[m
[32m+[m
[32m+[m[32m# Visual Studio cache files[m
[32m+[m[32m# files ending in .cache can be ignored[m
[32m+[m[32m*.[Cc]ache[m
[32m+[m[32m# but keep track of directories ending in .cache[m
[32m+[m[32m!*.[Cc]ache/[m
[1mdiff --git a/windows/CMakeLists.txt b/windows/CMakeLists.txt[m
[1mnew file mode 100644[m
[1mindex 0000000..3884197[m
[1m--- /dev/null[m
[1m+++ b/windows/CMakeLists.txt[m
[36m@@ -0,0 +1,101 @@[m
[32m+[m[32m# Project-level configuration.[m
[32m+[m[32mcmake_minimum_required(VERSION 3.14)[m
[32m+[m[32mproject(fooddeliveryapp LANGUAGES CXX)[m
[32m+[m
[32m+[m[32m# The name of the executable created for the application. Change this to change[m
[32m+[m[32m# the on-disk name of your application.[m
[32m+[m[32mset(BINARY_NAME "fooddeliveryapp")[m
[32m+[m
[32m+[m[32m# Explicitly opt in to modern CMake behaviors to avoid warnings with recent[m
[32m+[m[32m# versions of CMake.[m
[32m+[m[32mcmake_policy(SET CMP0063 NEW)[m
[32m+[m
[32m+[m[32m# Define build configuration option.[m
[32m+[m[32mget_property(IS_MULTICONFIG GLOBAL PROPERTY GENERATOR_IS_MULTI_CONFIG)[m
[32m+[m[32mif(IS_MULTICONFIG)[m
[32m+[m[32m  set(CMAKE_CONFIGURATION_TYPES "Debug;Profile;Release"[m
[32m+[m[32m    CACHE STRING "" FORCE)[m
[32m+[m[32melse()[m
[32m+[m[32m  if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)[m
[32m+[m[32m    set(CMAKE_BUILD_TYPE "Debug" CACHE[m
[32m+[m[32m      STRING "Flutter build mode" FORCE)[m
[32m+[m[32m    set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS[m
[32m+[m[32m      "Debug" "Profile" "Release")[m
[32m+[m[32m  endif()[m
[32m+[m[32mendif()[m
[32m+[m[32m# Define settings for the Profile build mode.[m
[32m+[m[32mset(CMAKE_EXE_LINKER_FLAGS_PROFILE "${CMAKE_EXE_LINKER_FLAGS_RELEASE}")[m
[32m+[m[32mset(CMAKE_SHARED_LINKER_FLAGS_PROFILE "${CMAKE_SHARED_LINKER_FLAGS_RELEASE}")[m
[32m+[m[32mset(CMAKE_C_FLAGS_PROFILE "${CMAKE_C_FLAGS_RELEASE}")[m
[32m+[m[32mset(CMAKE_CXX_FLAGS_PROFILE "${CMAKE_CXX_FLAGS_RELEASE}")[m
[32m+[m
[32m+[m[32m# Use Unicode for all projects.[m
[32m+[m[32madd_definitions(-DUNICODE -D_UNICODE)[m
[32m+[m
[32m+[m[32m# Compilation settings that should be applied to most targets.[m
[32m+[m[32m#[m
[32m+[m[32m# Be cautious about adding new options here, as plugins use this function by[m
[32m+[m[32m# default. In most cases, you should add new options to specific targets instead[m
[32m+[m[32m# of modifying this function.[m
[32m+[m[32mfunction(APPLY_STANDARD_SETTINGS TARGET)[m
[32m+[m[32m  target_compile_features(${TARGET} PUBLIC cxx_std_17)[m
[32m+[m[32m  target_compile_options(${TARGET} PRIVATE /W4 /WX /wd"4100")[m
[32m+[m[32m  target_compile_options(${TARGET} PRIVATE /EHsc)[m
[32m+[m[32m  target_compile_definitions(${TARGET} PRIVATE "_HAS_EXCEPTIONS=0")[m
[32m+[m[32m  target_compile_definitions(${TARGET} PRIVATE "$<$<CONFIG:Debug>:_DEBUG>")[m
[32m+[m[32mendfunction()[m
[32m+[m
[32m+[m[32m# Flutter library and tool build rules.[m
[32m+[m[32mset(FLUTTER_MANAGED_DIR "${CMAKE_CURRENT_SOURCE_DIR}/flutter")[m
[32m+[m[32madd_subdirectory(${FLUTTER_MANAGED_DIR})[m
[32m+[m
[32m+[m[32m# Application build; see runner/CMakeLists.txt.[m
[32m+[m[32madd_subdirectory("runner")[m
[32m+[m
[32m+[m[32m# Generated plugin build rules, which manage building the plugins and adding[m
[32m+[m[32m# them to the application.[m
[32m+[m[32minclude(flutter/generated_plugins.cmake)[m
[32m+[m
[32m+[m
[32m+[m[32m# === Installation ===[m
[32m+[m[32m# Support files are copied into place next to the executable, so that it can[m
[32m+[m[32m# run in place. This is done instead of making a separate bundle (as on Linux)[m
[32m+[m[32m# so that building and running from within Visual Studio will work.[m
[32m+[m[32mset(BUILD_BUNDLE_DIR "$<TARGET_FILE_DIR:${BINARY_NAME}>")[m
[32m+[m[32m# Make the "install" step default, as it's required to run.[m
[32m+[m[32mset(CMAKE_VS_INCLUDE_INSTALL_TO_DEFAULT_BUILD 1)[m
[32m+[m[32mif(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)[m
[32m+[m[32m  set(CMAKE_INSTALL_PREFIX "${BUILD_BUNDLE_DIR}" CACHE PATH "..." FORCE)[m
[32m+[m[32mendif()[m
[32m+[m
[32m+[m[32mset(INSTALL_BUNDLE_DATA_DIR "${CMAKE_INSTALL_PREFIX}/data")[m
[32m+[m[32mset(INSTALL_BUNDLE_LIB_DIR "${CMAKE_INSTALL_PREFIX}")[m
[32m+[m
[32m+[m[32minstall(TARGETS ${BINARY_NAME} RUNTIME DESTINATION "${CMAKE_INSTALL_PREFIX}"[m
[32m+[m[32m  COMPONENT Runtime)[m
[32m+[m
[32m+[m[32minstall(FILES "${FLUTTER_ICU_DATA_FILE}" DESTINATION "${INSTALL_BUNDLE_DATA_DIR}"[m
[32m+[m[32m  COMPONENT Runtime)[m
[32m+[m
[32m+[m[32minstall(FILES "${FLUTTER_LIBRARY}" DESTINATION "${INSTALL_BUNDLE_LIB_DIR}"[m
[32m+[m[32m  COMPONENT Runtime)[m
[32m+[m
[32m+[m[32mif(PLUGIN_BUNDLED_LIBRARIES)[m
[32m+[m[32m  install(FILES "${PLUGIN_BUNDLED_LIBRARIES}"[m
[32m+[m[32m    DESTINATION "${INSTALL_BUNDLE_LIB_DIR}"[m
[32m+[m[32m    COMPONENT Runtime)[m
[32m+[m[32mendif()[m
[32m+[m
[32m+[m[32m# Fully re-copy the assets directory on each build to avoid having stale files[m
[32m+[m[32m# from a previous install.[m
[32m+[m[32mset(FLUTTER_ASSET_DIR_NAME "flutter_assets")[m
[32m+[m[32minstall(CODE "[m
[32m+[m[32m  file(REMOVE_RECURSE \"${INSTALL_BUNDLE_DATA_DIR}/${FLUTTER_ASSET_DIR_NAME}\")[m
[32m+[m[32m  " COMPONENT Runtime)[m
[32m+[m[32minstall(DIRECTORY "${PROJECT_BUILD_DIR}/${FLUTTER_ASSET_DIR_NAME}"[m
[32m+[m[32m  DESTINATION "${INSTALL_BUNDLE_DATA_DIR}" COMPONENT Runtime)[m
[32m+[m
[32m+[m[32m# Install the AOT library on non-Debug builds only.[m
[32m+[m[32minstall(FILES "${AOT_LIBRARY}" DESTINATION "${INSTALL_BUNDLE_DATA_DIR}"[m
[32m+[m[32m  CONFIGURATIONS Profile;Release[m
[32m+[m[32m  COMPONENT Runtime)[m
[1mdiff --git a/windows/flutter/CMakeLists.txt b/windows/flutter/CMakeLists.txt[m
[1mnew file mode 100644[m
[1mindex 0000000..930d207[m
[1m--- /dev/null[m
[1m+++ b/windows/flutter/CMakeLists.txt[m
[36m@@ -0,0 +1,104 @@[m
[32m+[m[32m# This file controls Flutter-level build steps. It should not be edited.[m
[32m+[m[32mcmake_minimum_required(VERSION 3.14)[m
[32m+[m
[32m+[m[32mset(EPHEMERAL_DIR "${CMAKE_CURRENT_SOURCE_DIR}/ephemeral")[m
[32m+[m
[32m+[m[32m# Configuration provided via flutter tool.[m
[32m+[m[32minclude(${EPHEMERAL_DIR}/generated_config.cmake)[m
[32m+[m
[32m+[m[32m# TODO: Move the rest of this into files in ephemeral. See[m
[32m+[m[32m# https://github.com/flutter/flutter/issues/57146.[m
[32m+[m[32mset(WRAPPER_ROOT "${EPHEMERAL_DIR}/cpp_client_wrapper")[m
[32m+[m
[32m+[m[32m# === Flutter Library ===[m
[32m+[m[32mset(FLUTTER_LIBRARY "${EPHEMERAL_DIR}/flutter_windows.dll")[m
[32m+[m
[32m+[m[32m# Published to parent scope for install step.[m
[32m+[m[32mset(FLUTTER_LIBRARY ${FLUTTER_LIBRARY} PARENT_SCOPE)[m
[32m+[m[32mset(FLUTTER_ICU_DATA_FILE "${EPHEMERAL_DIR}/icudtl.dat" PARENT_SCOPE)[m
[32m+[m[32mset(PROJECT_BUILD_DIR "${PROJECT_DIR}/build/" PARENT_SCOPE)[m
[32m+[m[32mset(AOT_LIBRARY "${PROJECT_DIR}/build/windows/app.so" PARENT_SCOPE)[m
[32m+[m
[32m+[m[32mlist(APPEND FLUTTER_LIBRARY_HEADERS[m
[32m+[m[32m  "flutter_export.h"[m
[32m+[m[32m  "flutter_windows.h"[m
[32m+[m[32m  "flutter_messenger.h"[m
[32m+[m[32m  "flutter_plugin_registrar.h"[m
[32m+[m[32m  "flutter_texture_registrar.h"[m
[32m+[m[32m)[m
[32m+[m[32mlist(TRANSFORM FLUTTER_LIBRARY_HEADERS PREPEND "${EPHEMERAL_DIR}/")[m
[32m+[m[32madd_library(flutter INTERFACE)[m
[32m+[m[32mtarget_include_directories(flutter INTERFACE[m
[32m+[m[32m  "${EPHEMERAL_DIR}"[m
[32m+[m[32m)[m
[32m+[m[32mtarget_link_libraries(flutter INTERFACE "${FLUTTER_LIBRARY}.lib")[m
[32m+[m[32madd_dependencies(flutter flutter_assemble)[m
[32m+[m
[32m+[m[32m# === Wrapper ===[m
[32m+[m[32mlist(APPEND CPP_WRAPPER_SOURCES_CORE[m
[32m+[m[32m  "core_implementations.cc"[m
[32m+[m[32m  "standard_codec.cc"[m
[32m+[m[32m)[m
[32m+[m[32mlist(TRANSFORM CPP_WRAPPER_SOURCES_CORE PREPEND "${WRAPPER_ROOT}/")[m
[32m+[m[32mlist(APPEND CPP_WRAPPER_SOURCES_PLUGIN[m
[32m+[m[32m  "plugin_registrar.cc"[m
[32m+[m[32m)[m
[32m+[m[32mlist(TRANSFORM CPP_WRAPPER_SOURCES_PLUGIN PREPEND "${WRAPPER_ROOT}/")[m
[32m+[m[32mlist(APPEND CPP_WRAPPER_SOURCES_APP[m
[32m+[m[32m  "flutter_engine.cc"[m
[32m+[m[32m  "flutter_view_controller.cc"[m
[32m+[m[32m)[m
[32m+[m[32mlist(TRANSFORM CPP_WRAPPER_SOURCES_APP PREPEND "${WRAPPER_ROOT}/")[m
[32m+[m
[32m+[m[32m# Wrapper sources needed for a plugin.[m
[32m+[m[32madd_library(flutter_wrapper_plugin STATIC[m
[32m+[m[32m  ${CPP_WRAPPER_SOURCES_CORE}[m
[32m+[m[32m  ${CPP_WRAPPER_SOURCES_PLUGIN}[m
[32m+[m[32m)[m
[32m+[m[32mapply_standard_settings(flutter_wrapper_plugin)[m
[32m+[m[32mset_target_properties(flutter_wrapper_plugin PROPERTIES[m
[32m+[m[32m  POSITION_INDEPENDENT_CODE ON)[m
[32m+[m[32mset_target_properties(flutter_wrapper_plugin PROPERTIES[m
[32m+[m[32m  CXX_VISIBILITY_PRESET hidden)[m
[32m+[m[32mtarget_link_libraries(flutter_wrapper_plugin PUBLIC flutter)[m
[32m+[m[32mtarget_include_directories(flutter_wrapper_plugin PUBLIC[m
[32m+[m[32m  "${WRAPPER_ROOT}/include"[m
[32m+[m[32m)[m
[32m+[m[32madd_dependencies(flutter_wrapper_plugin flutter_assemble)[m
[32m+[m
[32m+[m[32m# Wrapper sources needed for the runner.[m
[32m+[m[32madd_library(flutter_wrapper_app STATIC[m
[32m+[m[32m  ${CPP_WRAPPER_SOURCES_CORE}[m
[32m+[m[32m  ${CPP_WRAPPER_SOURCES_APP}[m
[32m+[m[32m)[m
[32m+[m[32mapply_standard_settings(flutter_wrapper_app)[m
[32m+[m[32mtarget_link_libraries(flutter_wrapper_app PUBLIC flutter)[m
[32m+[m[32mtarget_include_directories(flutter_wrapper_app PUBLIC[m
[32m+[m[32m  "${WRAPPER_ROOT}/include"[m
[32m+[m[32m)[m
[32m+[m[32madd_dependencies(flutter_wrapper_app flutter_assemble)[m
[32m+[m
[32m+[m[32m# === Flutter tool backend ===[m
[32m+[m[32m# _phony_ is a non-existent file to force this command to run every time,[m
[32m+[m[32m# since currently there's no way to get a full input/output list from the[m
[32m+[m[32m# flutter tool.[m
[32m+[m[32mset(PHONY_OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/_phony_")[m
[32m+[m[32mset_source_files_properties("${PHONY_OUTPUT}" PROPERTIES SYMBOLIC TRUE)[m
[32m+[m[32madd_custom_command([m
[32m+[m[32m  OUTPUT ${FLUTTER_LIBRARY} ${FLUTTER_LIBRARY_HEADERS}[m
[32m+[m[32m    ${CPP_WRAPPER_SOURCES_CORE} ${CPP_WRAPPER_SOURCES_PLUGIN}[m
[32m+[m[32m    ${CPP_WRAPPER_SOURCES_APP}[m
[32m+[m[32m    ${PHONY_OUTPUT}[m
[32m+[m[32m  COMMAND ${CMAKE_COMMAND} -E env[m
[32m+[m[32m    ${FLUTTER_TOOL_ENVIRONMENT}[m
[32m+[m[32m    "${FLUTTER_ROOT}/packages/flutter_tools/bin/tool_backend.bat"[m
[32m+[m[32m      windows-x64 $<CONFIG>[m
[32m+[m[32m  VERBATIM[m
[32m+[m[32m)[m
[32m+[m[32madd_custom_target(flutter_assemble DEPENDS[m
[32m+[m[32m  "${FLUTTER_LIBRARY}"[m
[32m+[m[32m  ${FLUTTER_LIBRARY_HEADERS}[m
[32m+[m[32m  ${CPP_WRAPPER_SOURCES_CORE}[m
[32m+[m[32m  ${CPP_WRAPPER_SOURCES_PLUGIN}[m
[32m+[m[32m  ${CPP_WRAPPER_SOURCES_APP}[m
[32m+[m[32m)[m
[1mdiff --git a/windows/flutter/generated_plugin_registrant.cc b/windows/flutter/generated_plugin_registrant.cc[m
[1mnew file mode 100644[m
[1mindex 0000000..8b6d468[m
[1m--- /dev/null[m
[1m+++ b/windows/flutter/generated_plugin_registrant.cc[m
[36m@@ -0,0 +1,11 @@[m
[32m+[m[32m//[m
[32m+[m[32m//  Generated file. Do not edit.[m
[32m+[m[32m//[m
[32m+[m
[32m+[m[32m// clang-format off[m
[32m+[m
[32m+[m[32m#include "generated_plugin_registrant.h"[m
[32m+[m
[32m+[m
[32m+[m[32mvoid RegisterPlugins(flutter::PluginRegistry* registry) {[m
[32m+[m[32m}[m
[1mdiff --git a/windows/flutter/generated_plugin_registrant.h b/windows/flutter/generated_plugin_registrant.h[m
[1mnew file mode 100644[m
[1mindex 0000000..dc139d8[m
[1m--- /dev/null[m
[1m+++ b/windows/flutter/generated_plugin_registrant.h[m
[36m@@ -0,0 +1,15 @@[m
[32m+[m[32m//[m
[32m+[m[32m//  Generated file. Do not edit.[m
[32m+[m[32m//[m
[32m+[m
[32m+[m[32m// clang-format off[m
[32m+[m
[32m+[m[32m#ifndef GENERATED_PLUGIN_REGISTRANT_[m
[32m+[m[32m#define GENERATED_PLUGIN_REGISTRANT_[m
[32m+[m
[32m+[m[32m#include <flutter/plugin_registry.h>[m
[32m+[m
[32m+[m[32m// Registers Flutter plugins.[m
[32m+[m[32mvoid RegisterPlugins(flutter::PluginRegistry* registry);[m
[32m+[m
[32m+[m[32m#endif  // GENERATED_PLUGIN_REGISTRANT_[m
[1mdiff --git a/windows/flutter/generated_plugins.cmake b/windows/flutter/generated_plugins.cmake[m
[1mnew file mode 100644[m
[1mindex 0000000..b93c4c3[m
[1m--- /dev/null[m
[1m+++ b/windows/flutter/generated_plugins.cmake[m
[36m@@ -0,0 +1,23 @@[m
[32m+[m[32m#[m
[32m+[m[32m# Generated file, do not edit.[m
[32m+[m[32m#[m
[32m+[m
[32m+[m[32mlist(APPEND FLUTTER_PLUGIN_LIST[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32mlist(APPEND FLUTTER_FFI_PLUGIN_LIST[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32mset(PLUGIN_BUNDLED_LIBRARIES)[m
[32m+[m
[32m+[m[32mforeach(plugin ${FLUTTER_PLUGIN_LIST})[m
[32m+[m[32m  add_subdirectory(flutter/ephemeral/.plugin_symlinks/${plugin}/windows plugins/${plugin})[m
[32m+[m[32m  target_link_libraries(${BINARY_NAME} PRIVATE ${plugin}_plugin)[m
[32m+[m[32m  list(APPEND PLUGIN_BUNDLED_LIBRARIES $<TARGET_FILE:${plugin}_plugin>)[m
[32m+[m[32m  list(APPEND PLUGIN_BUNDLED_LIBRARIES ${${plugin}_bundled_libraries})[m
[32m+[m[32mendforeach(plugin)[m
[32m+[m
[32m+[m[32mforeach(ffi_plugin ${FLUTTER_FFI_PLUGIN_LIST})[m
[32m+[m[32m  add_subdirectory(flutter/ephemeral/.plugin_symlinks/${ffi_plugin}/windows plugins/${ffi_plugin})[m
[32m+[m[32m  list(APPEND PLUGIN_BUNDLED_LIBRARIES ${${ffi_plugin}_bundled_libraries})[m
[32m+[m[32mendforeach(ffi_plugin)[m
[1mdiff --git a/windows/runner/CMakeLists.txt b/windows/runner/CMakeLists.txt[m
[1mnew file mode 100644[m
[1mindex 0000000..b9e550f[m
[1m--- /dev/null[m
[1m+++ b/windows/runner/CMakeLists.txt[m
[36m@@ -0,0 +1,32 @@[m
[32m+[m[32mcmake_minimum_required(VERSION 3.14)[m
[32m+[m[32mproject(runner LANGUAGES CXX)[m
[32m+[m
[32m+[m[32m# Define the application target. To change its name, change BINARY_NAME in the[m
[32m+[m[32m# top-level CMakeLists.txt, not the value here, or `flutter run` will no longer[m
[32m+[m[32m# work.[m
[32m+[m[32m#[m
[32m+[m[32m# Any new source files that you add to the application should be added here.[m
[32m+[m[32madd_executable(${BINARY_NAME} WIN32[m
[32m+[m[32m  "flutter_window.cpp"[m
[32m+[m[32m  "main.cpp"[m
[32m+[m[32m  "utils.cpp"[m
[32m+[m[32m  "win32_window.cpp"[m
[32m+[m[32m  "${FLUTTER_MANAGED_DIR}/generated_plugin_registrant.cc"[m
[32m+[m[32m  "Runner.rc"[m
[32m+[m[32m  "runner.exe.manifest"[m
[32m+[m[32m)[m
[32m+[m
[32m+[m[32m# Apply the standard set of build settings. This can be removed for applications[m
[32m+[m[32m# that need different build settings.[m
[32m+[m[32mapply_standard_settings(${BINARY_NAME})[m
[32m+[m
[32m+[m[32m# Disable Windows macros that collide with C++ standard library functions.[m
[32m+[m[32mtarget_compile_definitions(${BINARY_NAME} PRIVATE "NOMINMAX")[m
[32m+[m
[32m+[m[32m# Add dependency libraries and include directories. Add any application-specific[m
[32m+[m[32m# dependencies here.[m
[32m+[m[32mtarget_link_libraries(${BINARY_NAME} PRIVATE flutter flutter_wrapper_app)[m
[32m+[m[32mtarget_include_directories(${BINARY_NAME} PRIVATE "${CMAKE_SOURCE_DIR}")[m
[32m+[m
[32m+[m[32m# Run the Flutter tool portions of the build. This must not be removed.[m
[32m+[m[32madd_dependencies(${BINARY_NAME} flutter_assemble)[m
[1mdiff --git a/windows/runner/Runner.rc b/windows/runner/Runner.rc[m
[1mnew file mode 100644[m
[1mindex 0000000..ade92ec[m
[1m--- /dev/null[m
[1m+++ b/windows/runner/Runner.rc[m
[36m@@ -0,0 +1,121 @@[m
[32m+[m[32m// Microsoft Visual C++ generated resource script.[m
[32m+[m[32m//[m
[32m+[m[32m#pragma code_page(65001)[m
[32m+[m[32m#include "resource.h"[m
[32m+[m
[32m+[m[32m#define APSTUDIO_READONLY_SYMBOLS[m
[32m+[m[32m/////////////////////////////////////////////////////////////////////////////[m
[32m+[m[32m//[m
[32m+[m[32m// Generated from the TEXTINCLUDE 2 resource.[m
[32m+[m[32m//[m
[32m+[m[32m#include "winres.h"[m
[32m+[m
[32m+[m[32m/////////////////////////////////////////////////////////////////////////////[m
[32m+[m[32m#undef APSTUDIO_READONLY_SYMBOLS[m
[32m+[m
[32m+[m[32m/////////////////////////////////////////////////////////////////////////////[m
[32m+[m[32m// English (United States) resources[m
[32m+[m
[32m+[m[32m#if !defined(AFX_RESOURCE_DLL) || defined(AFX_TARG_ENU)[m
[32m+[m[32mLANGUAGE LANG_ENGLISH, SUBLANG_ENGLISH_US[m
[32m+[m
[32m+[m[32m#ifdef APSTUDIO_INVOKED[m
[32m+[m[32m/////////////////////////////////////////////////////////////////////////////[m
[32m+[m[32m//[m
[32m+[m[32m// TEXTINCLUDE[m
[32m+[m[32m//[m
[32m+[m
[32m+[m[32m1 TEXTINCLUDE[m
[32m+[m[32mBEGIN[m
[32m+[m[32m    "resource.h\0"[m
[32m+[m[32mEND[m
[32m+[m
[32m+[m[32m2 TEXTINCLUDE[m
[32m+[m[32mBEGIN[m
[32m+[m[32m    "#include ""winres.h""\r\n"[m
[32m+[m[32m    "\0"[m
[32m+[m[32mEND[m
[32m+[m
[32m+[m[32m3 TEXTINCLUDE[m
[32m+[m[32mBEGIN[m
[32m+[m[32m    "\r\n"[m
[32m+[m[32m    "\0"[m
[32m+[m[32mEND[m
[32m+[m
[32m+[m[32m#endif    // APSTUDIO_INVOKED[m
[32m+[m
[32m+[m
[32m+[m[32m/////////////////////////////////////////////////////////////////////////////[m
[32m+[m[32m//[m
[32m+[m[32m// Icon[m
[32m+[m[32m//[m
[32m+[m
[32m+[m[32m// Icon with lowest ID value placed first to ensure application icon[m
[32m+[m[32m// remains consistent on all systems.[m
[32m+[m[32mIDI_APP_ICON            ICON                    "resources\\app_icon.ico"[m
[32m+[m
[32m+[m
[32m+[m[32m/////////////////////////////////////////////////////////////////////////////[m
[32m+[m[32m//[m
[32m+[m[32m// Version[m
[32m+[m[32m//[m
[32m+[m
[32m+[m[32m#ifdef FLUTTER_BUILD_NUMBER[m
[32m+[m[32m#define VERSION_AS_NUMBER FLUTTER_BUILD_NUMBER[m
[32m+[m[32m#else[m
[32m+[m[32m#define VERSION_AS_NUMBER 1,0,0[m
[32m+[m[32m#endif[m
[32m+[m
[32m+[m[32m#ifdef FLUTTER_BUILD_NAME[m
[32m+[m[32m#define VERSION_AS_STRING #FLUTTER_BUILD_NAME[m
[32m+[m[32m#else[m
[32m+[m[32m#define VERSION_AS_STRING "1.0.0"[m
[32m+[m[32m#endif[m
[32m+[m
[32m+[m[32mVS_VERSION_INFO VERSIONINFO[m
[32m+[m[32m FILEVERSION VERSION_AS_NUMBER[m
[32m+[m[32m PRODUCTVERSION VERSION_AS_NUMBER[m
[32m+[m[32m FILEFLAGSMASK VS_FFI_FILEFLAGSMASK[m
[32m+[m[32m#ifdef _DEBUG[m
[32m+[m[32m FILEFLAGS VS_FF_DEBUG[m
[32m+[m[32m#else[m
[32m+[m[32m FILEFLAGS 0x0L[m
[32m+[m[32m#endif[m
[32m+[m[32m FILEOS VOS__WINDOWS32[m
[32m+[m[32m FILETYPE VFT_APP[m
[32m+[m[32m FILESUBTYPE 0x0L[m
[32m+[m[32mBEGIN[m
[32m+[m[32m    BLOCK "StringFileInfo"[m
[32m+[m[32m    BEGIN[m
[32m+[m[32m        BLOCK "040904e4"[m
[32m+[m[32m        BEGIN[m
[32m+[m[32m            VALUE "CompanyName", "com.example" "\0"[m
[32m+[m[32m            VALUE "FileDescription", "fooddeliveryapp" "\0"[m
[32m+[m[32m            VALUE "FileVersion", VERSION_AS_STRING "\0"[m
[32m+[m[32m            VALUE "InternalName", "fooddeliveryapp" "\0"[m
[32m+[m[32m            VALUE "LegalCopyright", "Copyright (C) 2022 com.example. All rights reserved." "\0"[m
[32m+[m[32m            VALUE "OriginalFilename", "fooddeliveryapp.exe" "\0"[m
[32m+[m[32m            VALUE "ProductName", "fooddeliveryapp" "\0"[m
[32m+[m[32m            VALUE "ProductVersion", VERSION_AS_STRING "\0"[m
[32m+[m[32m        END[m
[32m+[m[32m    END[m
[32m+[m[32m    BLOCK "VarFileInfo"[m
[32m+[m[32m    BEGIN[m
[32m+[m[32m        VALUE "Translation", 0x409, 1252[m
[32m+[m[32m    END[m
[32m+[m[32mEND[m
[32m+[m
[32m+[m[32m#endif    // English (United States) resources[m
[32m+[m[32m/////////////////////////////////////////////////////////////////////////////[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32m#ifndef APSTUDIO_INVOKED[m
[32m+[m[32m/////////////////////////////////////////////////////////////////////////////[m
[32m+[m[32m//[m
[32m+[m[32m// Generated from the TEXTINCLUDE 3 resource.[m
[32m+[m[32m//[m
[32m+[m
[32m+[m
[32m+[m[32m/////////////////////////////////////////////////////////////////////////////[m
[32m+[m[32m#endif    // not APSTUDIO_INVOKED[m
[1mdiff --git a/windows/runner/flutter_window.cpp b/windows/runner/flutter_window.cpp[m
[1mnew file mode 100644[m
[1mindex 0000000..b43b909[m
[1m--- /dev/null[m
[1m+++ b/windows/runner/flutter_window.cpp[m
[36m@@ -0,0 +1,61 @@[m
[32m+[m[32m#include "flutter_window.h"[m
[32m+[m
[32m+[m[32m#include <optional>[m
[32m+[m
[32m+[m[32m#include "flutter/generated_plugin_registrant.h"[m
[32m+[m
[32m+[m[32mFlutterWindow::FlutterWindow(const flutter::DartProject& project)[m
[32m+[m[32m    : project_(project) {}[m
[32m+[m
[32m+[m[32mFlutterWindow::~FlutterWindow() {}[m
[32m+[m
[32m+[m[32mbool FlutterWindow::OnCreate() {[m
[32m+[m[32m  if (!Win32Window::OnCreate()) {[m
[32m+[m[32m    return false;[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  RECT frame = GetClientArea();[m
[32m+[m
[32m+[m[32m  // The size here must match the window dimensions to avoid unnecessary surface[m
[32m+[m[32m  // creation / destruction in the startup path.[m
[32m+[m[32m  flutter_controller_ = std::make_unique<flutter::FlutterViewController>([m
[32m+[m[32m      frame.right - frame.left, frame.bottom - frame.top, project_);[m
[32m+[m[32m  // Ensure that basic setup of the controller was successful.[m
[32m+[m[32m  if (!flutter_controller_->engine() || !flutter_controller_->view()) {[m
[32m+[m[32m    return false;[m
[32m+[m[32m  }[m
[32m+[m[32m  RegisterPlugins(flutter_controller_->engine());[m
[32m+[m[32m  SetChildContent(flutter_controller_->view()->GetNativeWindow());[m
[32m+[m[32m  return true;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mvoid FlutterWindow::OnDestroy() {[m
[32m+[m[32m  if (flutter_controller_) {[m
[32m+[m[32m    flutter_controller_ = nullptr;[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  Win32Window::OnDestroy();[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mLRESULT[m
[32m+[m[32mFlutterWindow::MessageHandler(HWND hwnd, UINT const message,[m
[32m+[m[32m                              WPARAM const wparam,[m
[32m+[m[32m                              LPARAM const lparam) noexcept {[m
[32m+[m[32m  // Give Flutter, including plugins, an opportunity to handle window messages.[m
[32m+[m[32m  if (flutter_controller_) {[m
[32m+[m[32m    std::optional<LRESULT> result =[m
[32m+[m[32m        flutter_controller_->HandleTopLevelWindowProc(hwnd, message, wparam,[m
[32m+[m[32m                                                      lparam);[m
[32m+[m[32m    if (result) {[m
[32m+[m[32m      return *result;[m
[32m+[m[32m    }[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  switch (message) {[m
[32m+[m[32m    case WM_FONTCHANGE:[m
[32m+[m[32m      flutter_controller_->engine()->ReloadSystemFonts();[m
[32m+[m[32m      break;[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  return Win32Window::MessageHandler(hwnd, message, wparam, lparam);[m
[32m+[m[32m}[m
[1mdiff --git a/windows/runner/flutter_window.h b/windows/runner/flutter_window.h[m
[1mnew file mode 100644[m
[1mindex 0000000..6da0652[m
[1m--- /dev/null[m
[1m+++ b/windows/runner/flutter_window.h[m
[36m@@ -0,0 +1,33 @@[m
[32m+[m[32m#ifndef RUNNER_FLUTTER_WINDOW_H_[m
[32m+[m[32m#define RUNNER_FLUTTER_WINDOW_H_[m
[32m+[m
[32m+[m[32m#include <flutter/dart_project.h>[m
[32m+[m[32m#include <flutter/flutter_view_controller.h>[m
[32m+[m
[32m+[m[32m#include <memory>[m
[32m+[m
[32m+[m[32m#include "win32_window.h"[m
[32m+[m
[32m+[m[32m// A window that does nothing but host a Flutter view.[m
[32m+[m[32mclass FlutterWindow : public Win32Window {[m
[32m+[m[32m public:[m
[32m+[m[32m  // Creates a new FlutterWindow hosting a Flutter view running |project|.[m
[32m+[m[32m  explicit FlutterWindow(const flutter::DartProject& project);[m
[32m+[m[32m  virtual ~FlutterWindow();[m
[32m+[m
[32m+[m[32m protected:[m
[32m+[m[32m  // Win32Window:[m
[32m+[m[32m  bool OnCreate() override;[m
[32m+[m[32m  void OnDestroy() override;[m
[32m+[m[32m  LRESULT MessageHandler(HWND window, UINT const message, WPARAM const wparam,[m
[32m+[m[32m                         LPARAM const lparam) noexcept override;[m
[32m+[m
[32m+[m[32m private:[m
[32m+[m[32m  // The project to run.[m
[32m+[m[32m  flutter::DartProject project_;[m
[32m+[m
[32m+[m[32m  // The Flutter instance hosted by this window.[m
[32m+[m[32m  std::unique_ptr<flutter::FlutterViewController> flutter_controller_;[m
[32m+[m[32m};[m
[32m+[m
[32m+[m[32m#endif  // RUNNER_FLUTTER_WINDOW_H_[m
[1mdiff --git a/windows/runner/main.cpp b/windows/runner/main.cpp[m
[1mnew file mode 100644[m
[1mindex 0000000..7fd0d92[m
[1m--- /dev/null[m
[1m+++ b/windows/runner/main.cpp[m
[36m@@ -0,0 +1,43 @@[m
[32m+[m[32m#include <flutter/dart_project.h>[m
[32m+[m[32m#include <flutter/flutter_view_controller.h>[m
[32m+[m[32m#include <windows.h>[m
[32m+[m
[32m+[m[32m#include "flutter_window.h"[m
[32m+[m[32m#include "utils.h"[m
[32m+[m
[32m+[m[32mint APIENTRY wWinMain(_In_ HINSTANCE instance, _In_opt_ HINSTANCE prev,[m
[32m+[m[32m                      _In_ wchar_t *command_line, _In_ int show_command) {[m
[32m+[m[32m  // Attach to console when present (e.g., 'flutter run') or create a[m
[32m+[m[32m  // new console when running with a debugger.[m
[32m+[m[32m  if (!::AttachConsole(ATTACH_PARENT_PROCESS) && ::IsDebuggerPresent()) {[m
[32m+[m[32m    CreateAndAttachConsole();[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  // Initialize COM, so that it is available for use in the library and/or[m
[32m+[m[32m  // plugins.[m
[32m+[m[32m  ::CoInitializeEx(nullptr, COINIT_APARTMENTTHREADED);[m
[32m+[m
[32m+[m[32m  flutter::DartProject project(L"data");[m
[32m+[m
[32m+[m[32m  std::vector<std::string> command_line_arguments =[m
[32m+[m[32m      GetCommandLineArguments();[m
[32m+[m
[32m+[m[32m  project.set_dart_entrypoint_arguments(std::move(command_line_arguments));[m
[32m+[m
[32m+[m[32m  FlutterWindow window(project);[m
[32m+[m[32m  Win32Window::Point origin(10, 10);[m
[32m+[m[32m  Win32Window::Size size(1280, 720);[m
[32m+[m[32m  if (!window.CreateAndShow(L"fooddeliveryapp", origin, size)) {[m
[32m+[m[32m    return EXIT_FAILURE;[m
[32m+[m[32m  }[m
[32m+[m[32m  window.SetQuitOnClose(true);[m
[32m+[m
[32m+[m[32m  ::MSG msg;[m
[32m+[m[32m  while (::GetMessage(&msg, nullptr, 0, 0)) {[m
[32m+[m[32m    ::TranslateMessage(&msg);[m
[32m+[m[32m    ::DispatchMessage(&msg);[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  ::CoUninitialize();[m
[32m+[m[32m  return EXIT_SUCCESS;[m
[32m+[m[32m}[m
[1mdiff --git a/windows/runner/resource.h b/windows/runner/resource.h[m
[1mnew file mode 100644[m
[1mindex 0000000..66a65d1[m
[1m--- /dev/null[m
[1m+++ b/windows/runner/resource.h[m
[36m@@ -0,0 +1,16 @@[m
[32m+[m[32m//{{NO_DEPENDENCIES}}[m
[32m+[m[32m// Microsoft Visual C++ generated include file.[m
[32m+[m[32m// Used by Runner.rc[m
[32m+[m[32m//[m
[32m+[m[32m#define IDI_APP_ICON                    101[m
[32m+[m
[32m+[m[32m// Next default values for new objects[m
[32m+[m[32m//[m
[32m+[m[32m#ifdef APSTUDIO_INVOKED[m
[32m+[m[32m#ifndef APSTUDIO_READONLY_SYMBOLS[m
[32m+[m[32m#define _APS_NEXT_RESOURCE_VALUE        102[m
[32m+[m[32m#define _APS_NEXT_COMMAND_VALUE         40001[m
[32m+[m[32m#define _APS_NEXT_CONTROL_VALUE         1001[m
[32m+[m[32m#define _APS_NEXT_SYMED_VALUE           101[m
[32m+[m[32m#endif[m
[32m+[m[32m#endif[m
[1mdiff --git a/windows/runner/resources/app_icon.ico b/windows/runner/resources/app_icon.ico[m
[1mnew file mode 100644[m
[1mindex 0000000..c04e20c[m
Binary files /dev/null and b/windows/runner/resources/app_icon.ico differ
[1mdiff --git a/windows/runner/runner.exe.manifest b/windows/runner/runner.exe.manifest[m
[1mnew file mode 100644[m
[1mindex 0000000..c977c4a[m
[1m--- /dev/null[m
[1m+++ b/windows/runner/runner.exe.manifest[m
[36m@@ -0,0 +1,20 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8" standalone="yes"?>[m
[32m+[m[32m<assembly xmlns="urn:schemas-microsoft-com:asm.v1" manifestVersion="1.0">[m
[32m+[m[32m  <application xmlns="urn:schemas-microsoft-com:asm.v3">[m
[32m+[m[32m    <windowsSettings>[m
[32m+[m[32m      <dpiAwareness xmlns="http://schemas.microsoft.com/SMI/2016/WindowsSettings">PerMonitorV2</dpiAwareness>[m
[32m+[m[32m    </windowsSettings>[m
[32m+[m[32m  </application>[m
[32m+[m[32m  <compatibility xmlns="urn:schemas-microsoft-com:compatibility.v1">[m
[32m+[m[32m    <application>[m
[32m+[m[32m      <!-- Windows 10 -->[m
[32m+[m[32m      <supportedOS Id="{8e0f7a12-bfb3-4fe8-b9a5-48fd50a15a9a}"/>[m
[32m+[m[32m      <!-- Windows 8.1 -->[m
[32m+[m[32m      <supportedOS Id="{1f676c76-80e1-4239-95bb-83d0f6d0da78}"/>[m
[32m+[m[32m      <!-- Windows 8 -->[m
[32m+[m[32m      <supportedOS Id="{4a2f28e3-53b9-4441-ba9c-d69d4a4a6e38}"/>[m
[32m+[m[32m      <!-- Windows 7 -->[m
[32m+[m[32m      <supportedOS Id="{35138b9a-5d96-4fbd-8e2d-a2440225f93a}"/>[m
[32m+[m[32m    </application>[m
[32m+[m[32m  </compatibility>[m
[32m+[m[32m</assembly>[m
[1mdiff --git a/windows/runner/utils.cpp b/windows/runner/utils.cpp[m
[1mnew file mode 100644[m
[1mindex 0000000..f5bf9fa[m
[1m--- /dev/null[m
[1m+++ b/windows/runner/utils.cpp[m
[36m@@ -0,0 +1,64 @@[m
[32m+[m[32m#include "utils.h"[m
[32m+[m
[32m+[m[32m#include <flutter_windows.h>[m
[32m+[m[32m#include <io.h>[m
[32m+[m[32m#include <stdio.h>[m
[32m+[m[32m#include <windows.h>[m
[32m+[m
[32m+[m[32m#include <iostream>[m
[32m+[m
[32m+[m[32mvoid CreateAndAttachConsole() {[m
[32m+[m[32m  if (::AllocConsole()) {[m
[32m+[m[32m    FILE *unused;[m
[32m+[m[32m    if (freopen_s(&unused, "CONOUT$", "w", stdout)) {[m
[32m+[m[32m      _dup2(_fileno(stdout), 1);[m
[32m+[m[32m    }[m
[32m+[m[32m    if (freopen_s(&unused, "CONOUT$", "w", stderr)) {[m
[32m+[m[32m      _dup2(_fileno(stdout), 2);[m
[32m+[m[32m    }[m
[32m+[m[32m    std::ios::sync_with_stdio();[m
[32m+[m[32m    FlutterDesktopResyncOutputStreams();[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mstd::vector<std::string> GetCommandLineArguments() {[m
[32m+[m[32m  // Convert the UTF-16 command line arguments to UTF-8 for the Engine to use.[m
[32m+[m[32m  int argc;[m
[32m+[m[32m  wchar_t** argv = ::CommandLineToArgvW(::GetCommandLineW(), &argc);[m
[32m+[m[32m  if (argv == nullptr) {[m
[32m+[m[32m    return std::vector<std::string>();[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  std::vector<std::string> command_line_arguments;[m
[32m+[m
[32m+[m[32m  // Skip the first argument as it's the binary name.[m
[32m+[m[32m  for (int i = 1; i < argc; i++) {[m
[32m+[m[32m    command_line_arguments.push_back(Utf8FromUtf16(argv[i]));[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  ::LocalFree(argv);[m
[32m+[m
[32m+[m[32m  return command_line_arguments;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mstd::string Utf8FromUtf16(const wchar_t* utf16_string) {[m
[32m+[m[32m  if (utf16_string == nullptr) {[m
[32m+[m[32m    return std::string();[m
[32m+[m[32m  }[m
[32m+[m[32m  int target_length = ::WideCharToMultiByte([m
[32m+[m[32m      CP_UTF8, WC_ERR_INVALID_CHARS, utf16_string,[m
[32m+[m[32m      -1, nullptr, 0, nullptr, nullptr);[m
[32m+[m[32m  std::string utf8_string;[m
[32m+[m[32m  if (target_length == 0 || target_length > utf8_string.max_size()) {[m
[32m+[m[32m    return utf8_string;[m
[32m+[m[32m  }[m
[32m+[m[32m  utf8_string.resize(target_length);[m
[32m+[m[32m  int converted_length = ::WideCharToMultiByte([m
[32m+[m[32m      CP_UTF8, WC_ERR_INVALID_CHARS, utf16_string,[m
[32m+[m[32m      -1, utf8_string.data(),[m
[32m+[m[32m      target_length, nullptr, nullptr);[m
[32m+[m[32m  if (converted_length == 0) {[m
[32m+[m[32m    return std::string();[m
[32m+[m[32m  }[m
[32m+[m[32m  return utf8_string;[m
[32m+[m[32m}[m
[1mdiff --git a/windows/runner/utils.h b/windows/runner/utils.h[m
[1mnew file mode 100644[m
[1mindex 0000000..3879d54[m
[1m--- /dev/null[m
[1m+++ b/windows/runner/utils.h[m
[36m@@ -0,0 +1,19 @@[m
[32m+[m[32m#ifndef RUNNER_UTILS_H_[m
[32m+[m[32m#define RUNNER_UTILS_H_[m
[32m+[m
[32m+[m[32m#include <string>[m
[32m+[m[32m#include <vector>[m
[32m+[m
[32m+[m[32m// Creates a console for the process, and redirects stdout and stderr to[m
[32m+[m[32m// it for both the runner and the Flutter library.[m
[32m+[m[32mvoid CreateAndAttachConsole();[m
[32m+[m
[32m+[m[32m// Takes a null-terminated wchar_t* encoded in UTF-16 and returns a std::string[m
[32m+[m[32m// encoded in UTF-8. Returns an empty std::string on failure.[m
[32m+[m[32mstd::string Utf8FromUtf16(const wchar_t* utf16_string);[m
[32m+[m
[32m+[m[32m// Gets the command line arguments passed in as a std::vector<std::string>,[m
[32m+[m[32m// encoded in UTF-8. Returns an empty std::vector<std::string> on failure.[m
[32m+[m[32mstd::vector<std::string> GetCommandLineArguments();[m
[32m+[m
[32m+[m[32m#endif  // RUNNER_UTILS_H_[m
[1mdiff --git a/windows/runner/win32_window.cpp b/windows/runner/win32_window.cpp[m
[1mnew file mode 100644[m
[1mindex 0000000..c10f08d[m
[1m--- /dev/null[m
[1m+++ b/windows/runner/win32_window.cpp[m
[36m@@ -0,0 +1,245 @@[m
[32m+[m[32m#include "win32_window.h"[m
[32m+[m
[32m+[m[32m#include <flutter_windows.h>[m
[32m+[m
[32m+[m[32m#include "resource.h"[m
[32m+[m
[32m+[m[32mnamespace {[m
[32m+[m
[32m+[m[32mconstexpr const wchar_t kWindowClassName[] = L"FLUTTER_RUNNER_WIN32_WINDOW";[m
[32m+[m
[32m+[m[32m// The number of Win32Window objects that currently exist.[m
[32m+[m[32mstatic int g_active_window_count = 0;[m
[32m+[m
[32m+[m[32musing EnableNonClientDpiScaling = BOOL __stdcall(HWND hwnd);[m
[32m+[m
[32m+[m[32m// Scale helper to convert logical scaler values to physical using passed in[m
[32m+[m[32m// scale factor[m
[32m+[m[32mint Scale(int source, double scale_factor) {[m
[32m+[m[32m  return static_cast<int>(source * scale_factor);[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m// Dynamically loads the |EnableNonClientDpiScaling| from the User32 module.[m
[32m+[m[32m// This API is only needed for PerMonitor V1 awareness mode.[m
[32m+[m[32mvoid EnableFullDpiSupportIfAvailable(HWND hwnd) {[m
[32m+[m[32m  HMODULE user32_module = LoadLibraryA("User32.dll");[m
[32m+[m[32m  if (!user32_module) {[m
[32m+[m[32m    return;[m
[32m+[m[32m  }[m
[32m+[m[32m  auto enable_non_client_dpi_scaling =[m
[32m+[m[32m      reinterpret_cast<EnableNonClientDpiScaling*>([m
[32m+[m[32m          GetProcAddress(user32_module, "EnableNonClientDpiScaling"));[m
[32m+[m[32m  if (enable_non_client_dpi_scaling != nullptr) {[m
[32m+[m[32m    enable_non_client_dpi_scaling(hwnd);[m
[32m+[m[32m    FreeLibrary(user32_module);[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m}  // namespace[m
[32m+[m
[32m+[m[32m// Manages the Win32Window's window class registration.[m
[32m+[m[32mclass WindowClassRegistrar {[m
[32m+[m[32m public:[m
[32m+[m[32m  ~WindowClassRegistrar() = default;[m
[32m+[m
[32m+[m[32m  // Returns the singleton registar instance.[m
[32m+[m[32m  static WindowClassRegistrar* GetInstance() {[m
[32m+[m[32m    if (!instance_) {[m
[32m+[m[32m      instance_ = new WindowClassRegistrar();[m
[32m+[m[32m    }[m
[32m+[m[32m    return instance_;[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  // Returns the name of the window class, registering the class if it hasn't[m
[32m+[m[32m  // previously been registered.[m
[32m+[m[32m  const wchar_t* GetWindowClass();[m
[32m+[m
[32m+[m[32m  // Unregisters the window class. Should only be called if there are no[m
[32m+[m[32m  // instances of the window.[m
[32m+[m[32m  void UnregisterWindowClass();[m
[32m+[m
[32m+[m[32m private:[m
[32m+[m[32m  WindowClassRegistrar() = default;[m
[32m+[m
[32m+[m[32m  static WindowClassRegistrar* instance_;[m
[32m+[m
[32m+[m[32m  bool class_registered_ = false;[m
[32m+[m[32m};[m
[32m+[m
[32m+[m[32mWindowClassRegistrar* WindowClassRegistrar::instance_ = nullptr;[m
[32m+[m
[32m+[m[32mconst wchar_t* WindowClassRegistrar::GetWindowClass() {[m
[32m+[m[32m  if (!class_registered_) {[m
[32m+[m[32m    WNDCLASS window_class{};[m
[32m+[m[32m    window_class.hCursor = LoadCursor(nullptr, IDC_ARROW);[m
[32m+[m[32m    window_class.lpszClassName = kWindowClassName;[m
[32m+[m[32m    window_class.style = CS_HREDRAW | CS_VREDRAW;[m
[32m+[m[32m    window_class.cbClsExtra = 0;[m
[32m+[m[32m    window_class.cbWndExtra = 0;[m
[32m+[m[32m    window_class.hInstance = GetModuleHandle(nullptr);[m
[32m+[m[32m    window_class.hIcon =[m
[32m+[m[32m        LoadIcon(window_class.hInstance, MAKEINTRESOURCE(IDI_APP_ICON));[m
[32m+[m[32m    window_class.hbrBackground = 0;[m
[32m+[m[32m    window_class.lpszMenuName = nullptr;[m
[32m+[m[32m    window_class.lpfnWndProc = Win32Window::WndProc;[m
[32m+[m[32m    RegisterClass(&window_class);[m
[32m+[m[32m    class_registered_ = true;[m
[32m+[m[32m  }[m
[32m+[m[32m  return kWindowClassName;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mvoid WindowClassRegistrar::UnregisterWindowClass() {[m
[32m+[m[32m  UnregisterClass(kWindowClassName, nullptr);[m
[32m+[m[32m  class_registered_ = false;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mWin32Window::Win32Window() {[m
[32m+[m[32m  ++g_active_window_count;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mWin32Window::~Win32Window() {[m
[32m+[m[32m  --g_active_window_count;[m
[32m+[m[32m  Destroy();[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mbool Win32Window::CreateAndShow(const std::wstring& title,[m
[32m+[m[32m                                const Point& origin,[m
[32m+[m[32m                                const Size& size) {[m
[32m+[m[32m  Destroy();[m
[32m+[m
[32m+[m[32m  const wchar_t* window_class =[m
[32m+[m[32m      WindowClassRegistrar::GetInstance()->GetWindowClass();[m
[32m+[m
[32m+[m[32m  const POINT target_point = {static_cast<LONG>(origin.x),[m
[32m+[m[32m                              static_cast<LONG>(origin.y)};[m
[32m+[m[32m  HMONITOR monitor = MonitorFromPoint(target_point, MONITOR_DEFAULTTONEAREST);[m
[32m+[m[32m  UINT dpi = FlutterDesktopGetDpiForMonitor(monitor);[m
[32m+[m[32m  double scale_factor = dpi / 96.0;[m
[32m+[m
[32m+[m[32m  HWND window = CreateWindow([m
[32m+[m[32m      window_class, title.c_str(), WS_OVERLAPPEDWINDOW | WS_VISIBLE,[m
[32m+[m[32m      Scale(origin.x, scale_factor), Scale(origin.y, scale_factor),[m
[32m+[m[32m      Scale(size.width, scale_factor), Scale(size.height, scale_factor),[m
[32m+[m[32m      nullptr, nullptr, GetModuleHandle(nullptr), this);[m
[32m+[m
[32m+[m[32m  if (!window) {[m
[32m+[m[32m    return false;[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  return OnCreate();[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m// static[m
[32m+[m[32mLRESULT CALLBACK Win32Window::WndProc(HWND const window,[m
[32m+[m[32m                                      UINT const message,[m
[32m+[m[32m                                      WPARAM const wparam,[m
[32m+[m[32m                                      LPARAM const lparam) noexcept {[m
[32m+[m[32m  if (message == WM_NCCREATE) {[m
[32m+[m[32m    auto window_struct = reinterpret_cast<CREATESTRUCT*>(lparam);[m
[32m+[m[32m    SetWindowLongPtr(window, GWLP_USERDATA,[m
[32m+[m[32m                     reinterpret_cast<LONG_PTR>(window_struct->lpCreateParams));[m
[32m+[m
[32m+[m[32m    auto that = static_cast<Win32Window*>(window_struct->lpCreateParams);[m
[32m+[m[32m    EnableFullDpiSupportIfAvailable(window);[m
[32m+[m[32m    that->window_handle_ = window;[m
[32m+[m[32m  } else if (Win32Window* that = GetThisFromHandle(window)) {[m
[32m+[m[32m    return that->MessageHandler(window, message, wparam, lparam);[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  return DefWindowProc(window, message, wparam, lparam);[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mLRESULT[m
[32m+[m[32mWin32Window::MessageHandler(HWND hwnd,[m
[32m+[m[32m                            UINT const message,[m
[32m+[m[32m                            WPARAM const wparam,[m
[32m+[m[32m                            LPARAM const lparam) noexcept {[m
[32m+[m[32m  switch (message) {[m
[32m+[m[32m    case WM_DESTROY:[m
[32m+[m[32m      window_handle_ = nullptr;[m
[32m+[m[32m      Destroy();[m
[32m+[m[32m      if (quit_on_close_) {[m
[32m+[m[32m        PostQuitMessage(0);[m
[32m+[m[32m      }[m
[32m+[m[32m      return 0;[m
[32m+[m
[32m+[m[32m    case WM_DPICHANGED: {[m
[32m+[m[32m      auto newRectSize = reinterpret_cast<RECT*>(lparam);[m
[32m+[m[32m      LONG newWidth = newRectSize->right - newRectSize->left;[m
[32m+[m[32m      LONG newHeight = newRectSize->bottom - newRectSize->top;[m
[32m+[m
[32m+[m[32m      SetWindowPos(hwnd, nullptr, newRectSize->left, newRectSize->top, newWidth,[m
[32m+[m[32m                   newHeight, SWP_NOZORDER | SWP_NOACTIVATE);[m
[32m+[m
[32m+[m[32m      return 0;[m
[32m+[m[32m    }[m
[32m+[m[32m    case WM_SIZE: {[m
[32m+[m[32m      RECT rect = GetClientArea();[m
[32m+[m[32m      if (child_content_ != nullptr) {[m
[32m+[m[32m        // Size and position the child window.[m
[32m+[m[32m        MoveWindow(child_content_, rect.left, rect.top, rect.right - rect.left,[m
[32m+[m[32m                   rect.bottom - rect.top, TRUE);[m
[32m+[m[32m      }[m
[32m+[m[32m      return 0;[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m    case WM_ACTIVATE:[m
[32m+[m[32m      if (child_content_ != nullptr) {[m
[32m+[m[32m        SetFocus(child_content_);[m
[32m+[m[32m      }[m
[32m+[m[32m      return 0;[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  return DefWindowProc(window_handle_, message, wparam, lparam);[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mvoid Win32Window::Destroy() {[m
[32m+[m[32m  OnDestroy();[m
[32m+[m
[32m+[m[32m  if (window_handle_) {[m
[32m+[m[32m    DestroyWindow(window_handle_);[m
[32m+[m[32m    window_handle_ = nullptr;[m
[32m+[m[32m  }[m
[32m+[m[32m  if (g_active_window_count == 0) {[m
[32m+[m[32m    WindowClassRegistrar::GetInstance()->UnregisterWindowClass();[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mWin32Window* Win32Window::GetThisFromHandle(HWND const window) noexcept {[m
[32m+[m[32m  return reinterpret_cast<Win32Window*>([m
[32m+[m[32m      GetWindowLongPtr(window, GWLP_USERDATA));[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mvoid Win32Window::SetChildContent(HWND content) {[m
[32m+[m[32m  child_content_ = content;[m
[32m+[m[32m  SetParent(content, window_handle_);[m
[32m+[m[32m  RECT frame = GetClientArea();[m
[32m+[m
[32m+[m[32m  MoveWindow(content, frame.left, frame.top, frame.right - frame.left,[m
[32m+[m[32m             frame.bottom - frame.top, true);[m
[32m+[m
[32m+[m[32m  SetFocus(child_content_);[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mRECT Win32Window::GetClientArea() {[m
[32m+[m[32m  RECT frame;[m
[32m+[m[32m  GetClientRect(window_handle_, &frame);[m
[32m+[m[32m  return frame;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mHWND Win32Window::GetHandle() {[m
[32m+[m[32m  return window_handle_;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mvoid Win32Window::SetQuitOnClose(bool quit_on_close) {[m
[32m+[m[32m  quit_on_close_ = quit_on_close;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mbool Win32Window::OnCreate() {[m
[32m+[m[32m  // No-op; provided for subclasses.[m
[32m+[m[32m  return true;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32mvoid Win32Window::OnDestroy() {[m
[32m+[m[32m  // No-op; provided for subclasses.[m
[32m+[m[32m}[m
[1mdiff --git a/windows/runner/win32_window.h b/windows/runner/win32_window.h[m
[1mnew file mode 100644[m
[1mindex 0000000..17ba431[m
[1m--- /dev/null[m
[1m+++ b/windows/runner/win32_window.h[m
[36m@@ -0,0 +1,98 @@[m
[32m+[m[32m#ifndef RUNNER_WIN32_WINDOW_H_[m
[32m+[m[32m#define RUNNER_WIN32_WINDOW_H_[m
[32m+[m
[32m+[m[32m#include <windows.h>[m
[32m+[m
[32m+[m[32m#include <functional>[m
[32m+[m[32m#include <memory>[m
[32m+[m[32m#include <string>[m
[32m+[m
[32m+[m[32m// A class abstraction for a high DPI-aware Win32 Window. Intended to be[m
[32m+[m[32m// inherited from by classes that wish to specialize with custom[m
[32m+[m[32m// rendering and input handling[m
[32m+[m[32mclass Win32Window {[m
[32m+[m[32m public:[m
[32m+[m[32m  struct Point {[m
[32m+[m[32m    unsigned int x;[m
[32m+[m[32m    unsigned int y;[m
[32m+[m[32m    Point(unsigned int x, unsigned int y) : x(x), y(y) {}[m
[32m+[m[32m  };[m
[32m+[m
[32m+[m[32m  struct Size {[m
[32m+[m[32m    unsigned int width;[m
[32m+[m[32m    unsigned int height;[m
[32m+[m[32m    Size(unsigned int width, unsigned int height)[m
[32m+[m[32m        : width(width), height(height) {}[m
[32m+[m[32m  };[m
[32m+[m
[32m+[m[32m  Win32Window();[m
[32m+[m[32m  virtual ~Win32Window();[m
[32m+[m
[32m+[m[32m  // Creates and shows a win32 window with |title| and position and size using[m
[32m+[m[32m  // |origin| and |size|. New windows are created on the default monitor. Window[m
[32m+[m[32m  // sizes are specified to the OS in physical pixels, hence to ensure a[m
[32m+[m[32m  // consistent size to will treat the width height passed in to this function[m
[32m+[m[32m  // as logical pixels and scale to appropriate for the default monitor. Returns[m
[32m+[m[32m  // true if the window was created successfully.[m
[32m+[m[32m  bool CreateAndShow(const std::wstring& title,[m
[32m+[m[32m                     const Point& origin,[m
[32m+[m[32m                     const Size& size);[m
[32m+[m
[32m+[m[32m  // Release OS resources associated with window.[m
[32m+[m[32m  void Destroy();[m
[32m+[m
[32m+[m[32m  // Inserts |content| into the window tree.[m
[32m+[m[32m  void SetChildContent(HWND content);[m
[32m+[m
[32m+[m[32m  // Returns the backing Window handle to enable clients to set icon and other[m
[32m+[m[32m  // window properties. Returns nullptr if the window has been destroyed.[m
[32m+[m[32m  HWND GetHandle();[m
[32m+[m
[32m+[m[32m  // If true, closing this window will quit the application.[m
[32m+[m[32m  void SetQuitOnClose(bool quit_on_close);[m
[32m+[m
[32m+[m[32m  // Return a RECT representing the bounds of the current client area.[m
[32m+[m[32m  RECT GetClientArea();[m
[32m+[m
[32m+[m[32m protected:[m
[32m+[m[32m  // Processes and route salient window messages for mouse handling,[m
[32m+[m[32m  // size change and DPI. Delegates handling of these to member overloads that[m
[32m+[m[32m  // inheriting classes can handle.[m
[32m+[m[32m  virtual LRESULT MessageHandler(HWND window,[m
[32m+[m[32m                                 UINT const message,[m
[32m+[m[32m                                 WPARAM const wparam,[m
[32m+[m[32m                                 LPARAM const lparam) noexcept;[m
[32m+[m
[32m+[m[32m  // Called when CreateAndShow is called, allowing subclass window-related[m
[32m+[m[32m  // setup. Subclasses should return false if setup fails.[m
[32m+[m[32m  virtual bool OnCreate();[m
[32m+[m
[32m+[m[32m  // Called when Destroy is called.[m
[32m+[m[32m  virtual void OnDestroy();[m
[32m+[m
[32m+[m[32m private:[m
[32m+[m[32m  friend class WindowClassRegistrar;[m
[32m+[m
[32m+[m[32m  // OS callback called by message pump. Handles the WM_NCCREATE message which[m
[32m+[m[32m  // is passed when the non-client area is being created and enables automatic[m
[32m+[m[32m  // non-client DPI scaling so that the non-client area automatically[m
[32m+[m[32m  // responsponds to changes in DPI. All other messages are handled by[m
[32m+[m[32m  // MessageHandler.[m
[32m+[m[32m  static LRESULT CALLBACK WndProc(HWND const window,[m
[32m+[m[32m                                  UINT const message,[m
[32m+[m[32m                                  WPARAM const wparam,[m
[32m+[m[32m                                  LPARAM const lparam) noexcept;[m
[32m+[m
[32m+[m[32m  // Retrieves a class instance pointer for |window|[m
[32m+[m[32m  static Win32Window* GetThisFromHandle(HWND const window) noexcept;[m
[32m+[m
[32m+[m[32m  bool quit_on_close_ = false;[m
[32m+[m
[32m+[m[32m  // window handle for top level window.[m
[32m+[m[32m  HWND window_handle_ = nullptr;[m
[32m+[m
[32m+[m[32m  // window handle for hosted content.[m
[32m+[m[32m  HWND child_content_ = nullptr;[m
[32m+[m[32m};[m
[32m+[m
[32m+[m[32m#endif  // RUNNER_WIN32_WINDOW_H_[m
