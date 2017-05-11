#pragma once

#include <mbgl/util/noncopyable.hpp>

#include <jni/jni.hpp>

namespace mbgl {
namespace android {
namespace style {

class Filter : private mbgl::util::noncopyable {
public:

    static constexpr auto Name() { return "com/mapbox/mapboxsdk/style/layers/Filter"; };

    static jni::Class<Filter> javaClass;

    static void registerNative(jni::JNIEnv&);

};

} // namespace style
} // namespace android
} // namespace mbgl