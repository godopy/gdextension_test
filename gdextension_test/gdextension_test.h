#pragma once

#include "core/io/resource.h"


class GDExtensionTestCase : public Object {
    GDCLASS(GDExtensionTestCase, Object);

private:
    bool m_bool;
    int8_t m_int8;
    int16_t m_int16;
    int32_t m_int32;
    int64_t m_int64;
    float m_float32;
    double m_float64;
    String m_string;
    Vector2 m_vector2;
    Vector2i m_vector2i;
    Rect2 m_rect2;
    Rect2i m_rect2i;
    Vector3 m_vector3;
    Vector3i m_vector3i;
    Transform2D m_transform2d;
    Vector4 m_vector4;
    Vector4i m_vector4i;
    Plane m_plane;
    Quaternion m_quaternion;
    AABB m_aabb;
    Basis m_basis;
    Transform3D m_transform3d;
    Projection m_projection;
    Color m_color;
    StringName m_string_name;
    RID m_rid;
    Object m_object;
    Callable m_callable;
    Signal m_signal;
    Dictionary m_dictionary;
    Array m_array;
    PackedByteArray m_packed_byte_array;
    PackedInt32Array m_packed_int32_array;
    PackedInt64Array m_packed_int64_array;
    PackedFloat32Array m_packed_float32_array;
    PackedFloat64Array m_packed_float64_array;
    PackedStringArray m_packed_string_array;
    PackedVector2Array m_packed_vector2_array;
    PackedVector3Array m_packed_vector3_array;
    PackedColorArray m_packed_color_array;
    PackedVector4Array m_packed_vector4_array;

protected:
	static void _bind_methods();

public:
    void atomic_args(const bool p_bool, const int32_t p_int32, const int64_t p_int64, const float p_float32,
                     const double p_float64, const String &p_string);
    void math_args_1(const Vector2 &p_vector2, const Vector2i &p_vector2i, const Rect2 &p_rect2,
                     const Rect2i &p_rect2i, const Vector3 &p_vector3, const Vector3i &p_vector3i,
                     const Transform2D &p_transform2d, const Vector4 &p_vector4, const Vector4i &p_vector4i);

    bool get_bool() const { return m_bool; }
    int32_t get_int32() const { return m_int32; }
    int64_t get_int64() const { return m_int64; }
    float get_float32() const { return m_float32; }
    double get_float64() const { return m_float64; }
    String get_string() const { return m_string; }
    Vector2 get_vector2() const { return m_vector2; }
    Vector2i get_vector2i() const { return m_vector2i; }
    Rect2 get_rect2() const { return m_rect2; }
    Rect2i get_rect2i() const { return m_rect2i; }
    Vector3 get_vector3() const { return m_vector3; }
    Vector3i get_vector3i() const { return m_vector3i; }
    Transform2D get_transform2d() const { return m_transform2d; }
    Vector4 get_vector4() const { return m_vector4; }
    Vector4i get_vector4i() const { return m_vector4i; }
};
