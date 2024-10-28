#include "gdextension_test.h"

void GDExtensionTestCase::atomic_args(const bool p_bool, const int32_t p_int32, const int64_t p_int64,
                                      const float p_float32, const double p_float64, const String &p_string) {
    m_bool = p_bool;
    m_int32 = p_int32;
    m_int64 = p_int64;
    m_float32 = p_float32;
    m_float64 = p_float64;
    m_string = p_string;
}

void GDExtensionTestCase::math_args_1(const Vector2 &p_vector2, const Vector2i &p_vector2i, const Rect2 &p_rect2,
                                      const Rect2i &p_rect2i, const Vector3 &p_vector3, const Vector3i &p_vector3i,
                                      const Transform2D &p_transform2d, const Vector4 &p_vector4,
                                      const Vector4i &p_vector4i) {
    m_vector2 = p_vector2;
    m_vector2i = p_vector2i;
    m_rect2 = p_rect2;
    m_rect2i = p_rect2i;
    m_vector3 = p_vector3;
    m_vector3i = p_vector3i;
    m_transform2d = p_transform2d;
    m_vector4 = p_vector4;
    m_vector4i = p_vector4i;
}

void GDExtensionTestCase::_bind_methods() {
    ClassDB::bind_method(D_METHOD("atomic_args", "p_bool", "p_int32", "p_int64", "p_float32", "p_float64", "p_string"),
                         &GDExtensionTestCase::atomic_args);
    GDVIRTUAL_BIND(_atomic_args, "p_bool", "p_int32", "p_int64", "p_float32", "p_float64", "p_string");
    ClassDB::bind_method(D_METHOD("atomic_args_virtual_call"), &GDExtensionTestCase::atomic_args_virtual_call);

    ClassDB::bind_method(D_METHOD("math_args_1", "p_vector2", "p_vector2i", "p_rect2", "p_rect2i", "p_vector3",
                                  "p_vector3i", "p_transform2d", "p_vector4", "p_vector4i"),
                         &GDExtensionTestCase::math_args_1);

    ClassDB::bind_method(D_METHOD("get_bool"), &GDExtensionTestCase::get_bool);
    GDVIRTUAL_BIND(_get_bool);
    ClassDB::bind_method(D_METHOD("get_bool_virtual_call"), &GDExtensionTestCase::get_bool_virtual_call);

    ClassDB::bind_method(D_METHOD("get_int32"), &GDExtensionTestCase::get_int32);
    GDVIRTUAL_BIND(_get_int32);
    ClassDB::bind_method(D_METHOD("get_int32_virtual_call"), &GDExtensionTestCase::get_int32_virtual_call);

    ClassDB::bind_method(D_METHOD("get_int64"), &GDExtensionTestCase::get_int64);
    GDVIRTUAL_BIND(_get_int64);
    ClassDB::bind_method(D_METHOD("get_int64_virtual_call"), &GDExtensionTestCase::get_int64_virtual_call);

    ClassDB::bind_method(D_METHOD("get_float32"), &GDExtensionTestCase::get_float32);
    GDVIRTUAL_BIND(_get_float32);
    ClassDB::bind_method(D_METHOD("get_float32_virtual_call"), &GDExtensionTestCase::get_float32_virtual_call);

    ClassDB::bind_method(D_METHOD("get_float64"), &GDExtensionTestCase::get_float64);
    GDVIRTUAL_BIND(_get_float64);
    ClassDB::bind_method(D_METHOD("get_float64_virtual_call"), &GDExtensionTestCase::get_float64_virtual_call);

    ClassDB::bind_method(D_METHOD("get_string"), &GDExtensionTestCase::get_string);
    GDVIRTUAL_BIND(_get_string);
    ClassDB::bind_method(D_METHOD("get_string_virtual_call"), &GDExtensionTestCase::get_string_virtual_call);

    ClassDB::bind_method(D_METHOD("get_vector2"), &GDExtensionTestCase::get_vector2);
    ClassDB::bind_method(D_METHOD("get_vector2i"), &GDExtensionTestCase::get_vector2i);
    ClassDB::bind_method(D_METHOD("get_rect2"), &GDExtensionTestCase::get_rect2);
    ClassDB::bind_method(D_METHOD("get_rect2i"), &GDExtensionTestCase::get_rect2i);
    ClassDB::bind_method(D_METHOD("get_vector3"), &GDExtensionTestCase::get_vector3);
    ClassDB::bind_method(D_METHOD("get_vector3i"), &GDExtensionTestCase::get_vector3i);
    ClassDB::bind_method(D_METHOD("get_transform2d"), &GDExtensionTestCase::get_transform2d);
    ClassDB::bind_method(D_METHOD("get_vector4"), &GDExtensionTestCase::get_vector4);
    ClassDB::bind_method(D_METHOD("get_vector4i"), &GDExtensionTestCase::get_vector4i);
}
