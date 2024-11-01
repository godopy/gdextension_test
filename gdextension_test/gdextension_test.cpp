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

void GDExtensionTestCase::math_args_2(const Plane &p_plane, const Quaternion &p_quaternion, const AABB &p_aabb,
                                      const Basis &p_basis, const Transform3D &p_transform3d,
                                      const Projection p_projection, const Color &p_color) {
    m_plane = p_plane;
    m_quaternion = p_quaternion;
    m_aabb = p_aabb;
    m_basis = p_basis;
    m_transform3d = p_transform3d;
    m_projection = p_projection;
    m_color = p_color;
}

void GDExtensionTestCase::misc_args(const StringName &p_string_name, const NodePath &p_node_path, const RID &p_rid,
                                    const Object *p_object, const Callable &p_callable, const Signal &p_signal,
                                    const Dictionary &p_dictionary, const Array &p_array) {
    m_string_name = p_string_name;
    m_node_path = p_node_path;
    m_rid = p_rid;
    m_object = (Object *)p_object;
    m_callable = p_callable;
    m_signal = p_signal;
    m_dictionary = p_dictionary;
    m_array = p_array;
}

void GDExtensionTestCase::packed_array_args(const PackedByteArray &p_packed_byte_array,
                                            const PackedInt32Array &p_packed_int32_array,
                                            const PackedInt64Array &p_packed_int64_array,
                                            const PackedFloat32Array &p_packed_float32_array,
                                            const PackedFloat64Array &p_packed_float64_array,
                                            const PackedStringArray &p_packed_string_array,
                                            const PackedVector2Array &p_packed_vector2_array,
                                            const PackedVector3Array &p_packed_vector3_array,
                                            const PackedColorArray &p_packed_color_array,
                                            const PackedVector4Array &p_packed_vector4_array) {
    m_packed_byte_array = p_packed_byte_array;
    m_packed_int32_array = p_packed_int32_array;
    m_packed_int64_array = p_packed_int64_array;
    m_packed_float32_array = p_packed_float32_array;
    m_packed_float64_array = p_packed_float64_array;
    m_packed_string_array = p_packed_string_array;
    m_packed_vector2_array = p_packed_vector2_array;
    m_packed_vector3_array = p_packed_vector3_array;
    m_packed_color_array = p_packed_color_array;
    m_packed_vector4_array = p_packed_vector4_array;
}

void GDExtensionTestCase::other_args_1(const Variant &p_variant, GDExtensionConstPtr<const void> p_pointer1,
                                       GDExtensionConstPtr<const void> p_pointer2,
                                       GDExtensionConstPtr<const uint8_t> p_uint8_pointer1,
                                       GDExtensionConstPtr<const uint8_t> p_uint8_pointer2,
                                       GDExtensionConstPtr<const uint8_t> p_uint8_pointer3,
                                       GDExtensionConstPtr<const uint8_t> p_uint8_pointer4) {
    m_variant = p_variant;
    m_pointer1 = (void *)p_pointer1.data;
    m_pointer2 = (void *)p_pointer2.data;

    const uint8_t *ptr = p_uint8_pointer1.data;
    uint8_t *ptrw = m_uint8_arr1;
    for (size_t i = 0; i < 8; i++) {
        *ptrw = *ptr;
        ptrw++;
        ptr++;
    }
    m_uint8 = p_uint8_pointer1[0];

    ptr = p_uint8_pointer2.data;
    ptrw = m_uint8_arr2;
    for (size_t i = 0; i < 8; i++) {
        *ptrw = *ptr;
        ptrw++;
        ptr++;
    }

    ptr = p_uint8_pointer3.data;
    ptrw = m_uint8_arr3;
    for (size_t i = 0; i < 8; i++) {
        *ptrw = *ptr;
        ptrw++;
        ptr++;
    }

    ptr = p_uint8_pointer4.data;
    ptrw = m_uint8_arr4;
    for (size_t i = 0; i < 8; i++) {
        *ptrw = *ptr;
        ptrw++;
        ptr++;
    }
}


void GDExtensionTestCase::other_args_2(GDExtensionConstPtr<const AudioFrame> p_audio_frame,
                                       GDExtensionConstPtr<const CaretInfo> p_caret_info,
                                       GDExtensionConstPtr<const Glyph> p_glyph,
                                       GDExtensionConstPtr<const void> p_object_id) {
    m_audio_frame = *p_audio_frame;
    m_caret_info = *p_caret_info;
    m_glyph = *p_glyph;
    m_object_id = *(const ObjectID *)(const void *)p_object_id;
}

void GDExtensionTestCase::other_args_3(
    GDExtensionConstPtr<const PhysicsServer2DExtensionMotionResult> p_ps2d_motion_result,
    GDExtensionConstPtr<const PhysicsServer2DExtensionRayResult> p_ps2d_ray_result,
    GDExtensionConstPtr<const PhysicsServer2DExtensionShapeRestInfo> p_ps2d_shape_rest_info,
    GDExtensionConstPtr<const PhysicsServer2DExtensionShapeResult> p_ps2d_shape_result,
    GDExtensionConstPtr<const PhysicsServer3DExtensionMotionCollision> p_ps3d_motion_collision,
    GDExtensionConstPtr<const PhysicsServer3DExtensionMotionResult> p_ps3d_motion_result,
    GDExtensionConstPtr<const PhysicsServer3DExtensionRayResult> p_ps3d_ray_result,
    GDExtensionConstPtr<const PhysicsServer3DExtensionShapeRestInfo> p_ps3d_shape_rest_info,
    GDExtensionConstPtr<const PhysicsServer3DExtensionShapeResult> p_ps3d_shape_result,
    GDExtensionConstPtr<const ScriptLanguageExtensionProfilingInfo> p_script_language_profiling_info
) {
    m_ps2d_motion_result = *p_ps2d_motion_result;
    m_ps2d_ray_result = *p_ps2d_ray_result;
    m_ps2d_shape_rest_info = *p_ps2d_shape_rest_info;
    m_ps2d_shape_result = *p_ps2d_shape_result;
    m_ps3d_motion_collision = *p_ps3d_motion_collision;
    m_ps3d_motion_result = *p_ps3d_motion_result;
    m_ps3d_ray_result = *p_ps3d_ray_result;
    m_ps3d_shape_rest_info = *p_ps3d_shape_rest_info;
    m_ps3d_shape_result = *p_ps3d_shape_result;
    m_script_language_profiling_info = *p_script_language_profiling_info;
}


void GDExtensionTestCase::_bind_methods() {
    ClassDB::bind_method(D_METHOD("atomic_args", "p_bool", "p_int32", "p_int64", "p_float32", "p_float64", "p_string"),
                         &GDExtensionTestCase::atomic_args);
    GDVIRTUAL_BIND(_atomic_args, "p_bool", "p_int32", "p_int64", "p_float32", "p_float64", "p_string");
    ClassDB::bind_method(D_METHOD("atomic_args_virtual_call"), &GDExtensionTestCase::atomic_args_virtual_call);


    ClassDB::bind_method(D_METHOD("math_args_1", "p_vector2", "p_vector2i", "p_rect2", "p_rect2i", "p_vector3",
                                  "p_vector3i", "p_transform2d", "p_vector4", "p_vector4i"),
                         &GDExtensionTestCase::math_args_1);
    GDVIRTUAL_BIND(_math_args_1, "p_vector2", "p_vector2i", "p_rect2", "p_rect2i", "p_vector3", "p_vector3i",
                   "p_transform2d", "p_vector4", "p_vector4i");
    ClassDB::bind_method(D_METHOD("math_args_1_virtual_call"), &GDExtensionTestCase::math_args_1_virtual_call);


    ClassDB::bind_method(D_METHOD("math_args_2", "p_plane", "p_quaternion", "p_aabb", "p_basis", "p_transform3d",
                                  "p_projection", "p_color"), &GDExtensionTestCase::math_args_2);
    GDVIRTUAL_BIND(_math_args_2, "p_plane", "p_quaternion", "p_aabb", "p_basis", "p_transform3d", "p_projection",
                   "p_color");
    ClassDB::bind_method(D_METHOD("math_args_2_virtual_call"), &GDExtensionTestCase::math_args_2_virtual_call);


    ClassDB::bind_method(D_METHOD("misc_args", "p_string_name", "p_node_path", "p_rid", "p_object", "p_callable",
                                  "p_signal", "p_dictionary", "p_array"), &GDExtensionTestCase::misc_args);
    GDVIRTUAL_BIND(_misc_args, "p_string_name", "p_node_path", "p_rid", "p_object", "p_callable", "p_signal",
                   "p_dictionary", "p_array");
    ClassDB::bind_method(D_METHOD("misc_args_virtual_call"), &GDExtensionTestCase::misc_args_virtual_call);


    ClassDB::bind_method(D_METHOD("packed_array_args", "p_packed_byte_array", "p_packed_int32_array",
                                  "p_packed_int64_array", "p_packed_float32_array", "p_packed_float64_array",
                                  "p_packed_string_array", "p_packed_vector2_array", "p_packed_vector3_array",
                                  "p_packed_color_array", "p_packed_vector4_array"),
                         &GDExtensionTestCase::packed_array_args);
    GDVIRTUAL_BIND(_packed_array_args, "p_packed_byte_array", "p_packed_int32_array", "p_packed_int64_array",
                   "p_packed_float32_array",  "p_packed_float64_array", "p_packed_string_array",
                   "p_packed_vector2_array", "p_packed_vector3_array", "p_packed_color_array",
                   "p_packed_vector4_array");
    ClassDB::bind_method(D_METHOD("packed_array_args_virtual_call"),
                         &GDExtensionTestCase::packed_array_args_virtual_call);


    ClassDB::bind_method(D_METHOD("other_args_1", "p_variant", "p_pointer1", "p_pointer2", "p_uint8_pointer1",
                                  "p_uint8_pointer2", "p_uint8_pointer3", "p_uint8_pointer4"),
                         &GDExtensionTestCase::other_args_1);
    GDVIRTUAL_BIND(_other_args_1, "p_variant", "p_pointer", "r_pointer", "p_uint8_pointer", "r_uint8_pointer",
                   "p_uint8_ptr_pointer", "r_uint8_ptr_pointer", "r_float32", "r_int32");
    ClassDB::bind_method(D_METHOD("other_args_1_virtual_call"), &GDExtensionTestCase::other_args_1_virtual_call);


    ClassDB::bind_method(D_METHOD("other_args_2", "p_audio_frame", "p_caret_info", "p_glyph", "p_object_id"),
                         &GDExtensionTestCase::other_args_2);
    GDVIRTUAL_BIND(_other_args_2, "p_audio_frame", "p_caret_info", "p_glyph", "p_object_id");
    ClassDB::bind_method(D_METHOD("other_args_2_virtual_call"), &GDExtensionTestCase::other_args_2_virtual_call);


    ClassDB::bind_method(D_METHOD("other_args_3", "p_ps2d_motion_result", "p_ps2d_ray_result",
                                  "p_ps2d_shape_rest_info", "p_ps2d_shape_result", "p_ps3d_motion_collision",
                                  "p_ps3d_motion_result", "p_ps3d_ray_result", "p_ps3d_shape_rest_info",
                                  "p_ps3d_shape_result", "p_script_language_profiling_info"),
                         &GDExtensionTestCase::other_args_3);
    GDVIRTUAL_BIND(_other_args_3, "p_ps2d_motion_result", "p_ps2d_ray_result", "p_ps2d_shape_rest_info",
                   "p_ps2d_shape_result", "p_ps3d_motion_collision", "p_ps3d_motion_result", "p_ps3d_ray_result",
                   "p_ps3d_shape_rest_info", "p_ps3d_shape_result", "p_script_language_profiling_info");
    ClassDB::bind_method(D_METHOD("other_args_3_virtual_call"), &GDExtensionTestCase::other_args_3_virtual_call);


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
    GDVIRTUAL_BIND(_get_vector2);
    ClassDB::bind_method(D_METHOD("get_vector2_virtual_call"), &GDExtensionTestCase::get_vector2_virtual_call);

    ClassDB::bind_method(D_METHOD("get_vector2i"), &GDExtensionTestCase::get_vector2i);
    GDVIRTUAL_BIND(_get_vector2i);
    ClassDB::bind_method(D_METHOD("get_vector2i_virtual_call"), &GDExtensionTestCase::get_vector2i_virtual_call);

    ClassDB::bind_method(D_METHOD("get_rect2"), &GDExtensionTestCase::get_rect2);
    GDVIRTUAL_BIND(_get_rect2);
    ClassDB::bind_method(D_METHOD("get_rect2_virtual_call"), &GDExtensionTestCase::get_rect2_virtual_call);

    ClassDB::bind_method(D_METHOD("get_rect2i"), &GDExtensionTestCase::get_rect2i);
    GDVIRTUAL_BIND(_get_rect2i);
    ClassDB::bind_method(D_METHOD("get_rect2i_virtual_call"), &GDExtensionTestCase::get_rect2i_virtual_call);

    ClassDB::bind_method(D_METHOD("get_vector3"), &GDExtensionTestCase::get_vector3);
    GDVIRTUAL_BIND(_get_vector3);
    ClassDB::bind_method(D_METHOD("get_vector3_virtual_call"), &GDExtensionTestCase::get_vector3_virtual_call);

    ClassDB::bind_method(D_METHOD("get_vector3i"), &GDExtensionTestCase::get_vector3i);
    GDVIRTUAL_BIND(_get_vector3i);
    ClassDB::bind_method(D_METHOD("get_vector3i_virtual_call"), &GDExtensionTestCase::get_vector3i_virtual_call);

    ClassDB::bind_method(D_METHOD("get_transform2d"), &GDExtensionTestCase::get_transform2d);
    GDVIRTUAL_BIND(_get_transform2d);
    ClassDB::bind_method(D_METHOD("get_transform2d_virtual_call"), &GDExtensionTestCase::get_transform2d_virtual_call);

    ClassDB::bind_method(D_METHOD("get_vector4"), &GDExtensionTestCase::get_vector4);
    GDVIRTUAL_BIND(_get_vector4);
    ClassDB::bind_method(D_METHOD("get_vector4_virtual_call"), &GDExtensionTestCase::get_vector4_virtual_call);

    ClassDB::bind_method(D_METHOD("get_vector4i"), &GDExtensionTestCase::get_vector4i);
    GDVIRTUAL_BIND(_get_vector4i);
    ClassDB::bind_method(D_METHOD("get_vector4i_virtual_call"), &GDExtensionTestCase::get_vector4i_virtual_call);

    ClassDB::bind_method(D_METHOD("get_plane"), &GDExtensionTestCase::get_plane);
    GDVIRTUAL_BIND(_get_plane);
    ClassDB::bind_method(D_METHOD("get_plane_virtual_call"), &GDExtensionTestCase::get_plane_virtual_call);

    ClassDB::bind_method(D_METHOD("get_quaternion"), &GDExtensionTestCase::get_quaternion);
    GDVIRTUAL_BIND(_get_quaternion);
    ClassDB::bind_method(D_METHOD("get_quaternion_virtual_call"), &GDExtensionTestCase::get_quaternion_virtual_call);

    ClassDB::bind_method(D_METHOD("get_aabb"), &GDExtensionTestCase::get_aabb);
    GDVIRTUAL_BIND(_get_aabb);
    ClassDB::bind_method(D_METHOD("get_aabb_virtual_call"), &GDExtensionTestCase::get_aabb_virtual_call);

    ClassDB::bind_method(D_METHOD("get_basis"), &GDExtensionTestCase::get_basis);
    GDVIRTUAL_BIND(_get_basis);
    ClassDB::bind_method(D_METHOD("get_basis_virtual_call"), &GDExtensionTestCase::get_basis_virtual_call);

    ClassDB::bind_method(D_METHOD("get_transform3d"), &GDExtensionTestCase::get_transform3d);
    GDVIRTUAL_BIND(_get_transform3d);
    ClassDB::bind_method(D_METHOD("get_transform3d_virtual_call"), &GDExtensionTestCase::get_transform3d_virtual_call);

    ClassDB::bind_method(D_METHOD("get_projection"), &GDExtensionTestCase::get_projection);
    GDVIRTUAL_BIND(_get_projection);
    ClassDB::bind_method(D_METHOD("get_projection_virtual_call"), &GDExtensionTestCase::get_projection_virtual_call);

    ClassDB::bind_method(D_METHOD("get_color"), &GDExtensionTestCase::get_color);
    GDVIRTUAL_BIND(_get_color);
    ClassDB::bind_method(D_METHOD("get_color_virtual_call"), &GDExtensionTestCase::get_color_virtual_call);

    ClassDB::bind_method(D_METHOD("get_string_name"), &GDExtensionTestCase::get_string_name);
    GDVIRTUAL_BIND(_get_string_name);
    ClassDB::bind_method(D_METHOD("get_string_name_virtual_call"), &GDExtensionTestCase::get_string_name_virtual_call);

    ClassDB::bind_method(D_METHOD("get_node_path"), &GDExtensionTestCase::get_node_path);
    GDVIRTUAL_BIND(_get_node_path);
    ClassDB::bind_method(D_METHOD("get_node_path_virtual_call"), &GDExtensionTestCase::get_node_path_virtual_call);

    ClassDB::bind_method(D_METHOD("get_rid"), &GDExtensionTestCase::get_rid);
    GDVIRTUAL_BIND(_get_rid);
    ClassDB::bind_method(D_METHOD("get_rid_virtual_call"), &GDExtensionTestCase::get_rid_virtual_call);

    ClassDB::bind_method(D_METHOD("get_object"), &GDExtensionTestCase::get_object);
    GDVIRTUAL_BIND(_get_object);
    ClassDB::bind_method(D_METHOD("get_object_virtual_call"), &GDExtensionTestCase::get_object_virtual_call);

    ClassDB::bind_method(D_METHOD("get_callable"), &GDExtensionTestCase::get_callable);
    GDVIRTUAL_BIND(_get_callable);
    ClassDB::bind_method(D_METHOD("get_callable_virtual_call"), &GDExtensionTestCase::get_callable_virtual_call);

    ClassDB::bind_method(D_METHOD("get_signal"), &GDExtensionTestCase::get_signal);
    GDVIRTUAL_BIND(_get_signal);
    ClassDB::bind_method(D_METHOD("get_signal_virtual_call"), &GDExtensionTestCase::get_signal_virtual_call);

    ClassDB::bind_method(D_METHOD("get_dictionary"), &GDExtensionTestCase::get_dictionary);
    GDVIRTUAL_BIND(_get_dictionary);
    ClassDB::bind_method(D_METHOD("get_dictionary_virtual_call"), &GDExtensionTestCase::get_dictionary_virtual_call);

    ClassDB::bind_method(D_METHOD("get_array"), &GDExtensionTestCase::get_array);
    GDVIRTUAL_BIND(_get_array);
    ClassDB::bind_method(D_METHOD("get_array_virtual_call"), &GDExtensionTestCase::get_array_virtual_call);

    ClassDB::bind_method(D_METHOD("get_packed_byte_array"), &GDExtensionTestCase::get_packed_byte_array);
    GDVIRTUAL_BIND(_get_packed_byte_array);
    ClassDB::bind_method(D_METHOD("get_packed_byte_array_virtual_call"),
                         &GDExtensionTestCase::get_packed_byte_array_virtual_call);

    ClassDB::bind_method(D_METHOD("get_packed_int32_array"), &GDExtensionTestCase::get_packed_int32_array);
    GDVIRTUAL_BIND(_get_packed_int32_array);
    ClassDB::bind_method(D_METHOD("get_packed_int32_array_virtual_call"),
                         &GDExtensionTestCase::get_packed_int32_array_virtual_call);

    ClassDB::bind_method(D_METHOD("get_packed_int64_array"), &GDExtensionTestCase::get_packed_int64_array);
    GDVIRTUAL_BIND(_get_packed_int64_array);
    ClassDB::bind_method(D_METHOD("get_packed_int64_array_virtual_call"),
                         &GDExtensionTestCase::get_packed_int64_array_virtual_call);

    ClassDB::bind_method(D_METHOD("get_packed_float32_array"), &GDExtensionTestCase::get_packed_float32_array);
    GDVIRTUAL_BIND(_get_packed_float32_array);
    ClassDB::bind_method(D_METHOD("get_packed_float32_array_virtual_call"),
                         &GDExtensionTestCase::get_packed_float32_array_virtual_call);

    ClassDB::bind_method(D_METHOD("get_packed_float64_array"), &GDExtensionTestCase::get_packed_float64_array);
    GDVIRTUAL_BIND(_get_packed_float64_array);
    ClassDB::bind_method(D_METHOD("get_packed_float64_array_virtual_call"),
                         &GDExtensionTestCase::get_packed_float64_array_virtual_call);

    ClassDB::bind_method(D_METHOD("get_packed_string_array"), &GDExtensionTestCase::get_packed_string_array);
    GDVIRTUAL_BIND(_get_packed_string_array);
    ClassDB::bind_method(D_METHOD("get_packed_string_array_virtual_call"),
                         &GDExtensionTestCase::get_packed_string_array_virtual_call);

    ClassDB::bind_method(D_METHOD("get_packed_vector2_array"), &GDExtensionTestCase::get_packed_vector2_array);
    GDVIRTUAL_BIND(_get_packed_vector2_array);
    ClassDB::bind_method(D_METHOD("get_packed_vector2_array_virtual_call"),
                         &GDExtensionTestCase::get_packed_vector2_array_virtual_call);

    ClassDB::bind_method(D_METHOD("get_packed_vector3_array"), &GDExtensionTestCase::get_packed_vector3_array);
    GDVIRTUAL_BIND(_get_packed_vector3_array);
    ClassDB::bind_method(D_METHOD("get_packed_vector3_array_virtual_call"),
                         &GDExtensionTestCase::get_packed_vector3_array_virtual_call);

    ClassDB::bind_method(D_METHOD("get_packed_color_array"), &GDExtensionTestCase::get_packed_color_array);
    GDVIRTUAL_BIND(_get_packed_color_array);
    ClassDB::bind_method(D_METHOD("get_packed_color_array_virtual_call"),
                         &GDExtensionTestCase::get_packed_color_array_virtual_call);

    ClassDB::bind_method(D_METHOD("get_packed_vector4_array"), &GDExtensionTestCase::get_packed_vector4_array);
    GDVIRTUAL_BIND(_get_packed_vector4_array);
    ClassDB::bind_method(D_METHOD("get_packed_vector4_array_virtual_call"),
                         &GDExtensionTestCase::get_packed_vector4_array_virtual_call);

    ClassDB::bind_method(D_METHOD("get_variant"), &GDExtensionTestCase::get_variant);
    GDVIRTUAL_BIND(_get_variant);
    ClassDB::bind_method(D_METHOD("get_variant_virtual_call"), &GDExtensionTestCase::get_variant_virtual_call);

    ClassDB::bind_method(D_METHOD("get_pointer1"), &GDExtensionTestCase::get_pointer1);
    GDVIRTUAL_BIND(_get_pointer1);
    ClassDB::bind_method(D_METHOD("get_pointer1_virtual_call"), &GDExtensionTestCase::get_pointer1_virtual_call);

    ClassDB::bind_method(D_METHOD("get_pointer2"), &GDExtensionTestCase::get_pointer2);
    GDVIRTUAL_BIND(_get_pointer2);
    ClassDB::bind_method(D_METHOD("get_pointer2_virtual_call"), &GDExtensionTestCase::get_pointer2_virtual_call);

    ClassDB::bind_method(D_METHOD("get_uint8_pointer1"), &GDExtensionTestCase::get_uint8_pointer1);
    GDVIRTUAL_BIND(_get_uint8_pointer1);
    ClassDB::bind_method(D_METHOD("get_uint8_pointer1_virtual_call"),
                         &GDExtensionTestCase::get_uint8_pointer1_virtual_call);

    ClassDB::bind_method(D_METHOD("get_uint8_pointer2"), &GDExtensionTestCase::get_uint8_pointer2);
    GDVIRTUAL_BIND(_get_uint8_pointer2);
    ClassDB::bind_method(D_METHOD("get_uint8_pointer2_virtual_call"),
                         &GDExtensionTestCase::get_uint8_pointer2_virtual_call);

    ClassDB::bind_method(D_METHOD("get_uint8_pointer3"), &GDExtensionTestCase::get_uint8_pointer3);
    GDVIRTUAL_BIND(_get_uint8_pointer3);
    ClassDB::bind_method(D_METHOD("get_uint8_pointer3_virtual_call"),
                         &GDExtensionTestCase::get_uint8_pointer3_virtual_call);

    ClassDB::bind_method(D_METHOD("get_uint8_pointer4"), &GDExtensionTestCase::get_uint8_pointer4);
    GDVIRTUAL_BIND(_get_uint8_pointer4);
    ClassDB::bind_method(D_METHOD("get_uint8_pointer4_virtual_call"),
                         &GDExtensionTestCase::get_uint8_pointer4_virtual_call);

    ClassDB::bind_method(D_METHOD("get_audio_frame"), &GDExtensionTestCase::get_audio_frame);
    GDVIRTUAL_BIND(_get_audio_frame);
    ClassDB::bind_method(D_METHOD("get_audio_frame_virtual_call"),
                         &GDExtensionTestCase::get_audio_frame_virtual_call);

    ClassDB::bind_method(D_METHOD("get_caret_info"), &GDExtensionTestCase::get_caret_info);
    GDVIRTUAL_BIND(_get_caret_info);
    ClassDB::bind_method(D_METHOD("get_caret_info_virtual_call"),
                         &GDExtensionTestCase::get_caret_info_virtual_call);

    ClassDB::bind_method(D_METHOD("get_glyph"), &GDExtensionTestCase::get_glyph);
    GDVIRTUAL_BIND(_get_glyph);
    ClassDB::bind_method(D_METHOD("get_glyph_virtual_call"), &GDExtensionTestCase::get_glyph_virtual_call);

    ClassDB::bind_method(D_METHOD("get_object_id"), &GDExtensionTestCase::get_object_id);
    GDVIRTUAL_BIND(_get_object_id);
    ClassDB::bind_method(D_METHOD("get_object_id_virtual_call"), &GDExtensionTestCase::get_object_id_virtual_call);

    ClassDB::bind_method(D_METHOD("get_ps2d_motion_result"), &GDExtensionTestCase::get_ps2d_motion_result);
    GDVIRTUAL_BIND(_get_ps2d_motion_result);
    ClassDB::bind_method(D_METHOD("get_ps2d_motion_result_virtual_call"),
                         &GDExtensionTestCase::get_ps2d_motion_result_virtual_call);

    ClassDB::bind_method(D_METHOD("get_ps2d_ray_result"), &GDExtensionTestCase::get_ps2d_ray_result);
    GDVIRTUAL_BIND(_get_ps2d_ray_result);
    ClassDB::bind_method(D_METHOD("get_ps2d_ray_result_virtual_call"),
                         &GDExtensionTestCase::get_ps2d_ray_result_virtual_call);

    ClassDB::bind_method(D_METHOD("get_ps2d_shape_rest_info"), &GDExtensionTestCase::get_ps2d_shape_rest_info);
    GDVIRTUAL_BIND(_get_ps2d_shape_rest_info);
    ClassDB::bind_method(D_METHOD("get_ps2d_shape_rest_info_virtual_call"),
                         &GDExtensionTestCase::get_ps2d_shape_rest_info_virtual_call);

    ClassDB::bind_method(D_METHOD("get_ps2d_shape_result"), &GDExtensionTestCase::get_ps2d_shape_result);
    GDVIRTUAL_BIND(_get_ps2d_shape_result);
    ClassDB::bind_method(D_METHOD("get_ps2d_shape_result_virtual_call"),
                         &GDExtensionTestCase::get_ps2d_shape_result_virtual_call);

    ClassDB::bind_method(D_METHOD("get_ps3d_motion_collision"), &GDExtensionTestCase::get_ps3d_motion_collision);
    GDVIRTUAL_BIND(_get_ps3d_motion_collision);
    ClassDB::bind_method(D_METHOD("get_ps3d_motion_collision_virtual_call"),
                         &GDExtensionTestCase::get_ps3d_motion_collision_virtual_call);

    ClassDB::bind_method(D_METHOD("get_ps3d_motion_result"), &GDExtensionTestCase::get_ps3d_motion_result);
    GDVIRTUAL_BIND(_get_ps3d_motion_result);
    ClassDB::bind_method(D_METHOD("get_ps3d_motion_result_virtual_call"),
                         &GDExtensionTestCase::get_ps3d_motion_result_virtual_call);

    ClassDB::bind_method(D_METHOD("get_ps3d_ray_result"), &GDExtensionTestCase::get_ps3d_ray_result);
    GDVIRTUAL_BIND(_get_ps3d_ray_result);
    ClassDB::bind_method(D_METHOD("get_ps3d_ray_result_virtual_call"),
                         &GDExtensionTestCase::get_ps3d_ray_result_virtual_call);

    ClassDB::bind_method(D_METHOD("get_ps3d_shape_rest_info"), &GDExtensionTestCase::get_ps3d_shape_rest_info);
    GDVIRTUAL_BIND(_get_ps3d_shape_rest_info);
    ClassDB::bind_method(D_METHOD("get_ps3d_shape_rest_info_virtual_call"),
                         &GDExtensionTestCase::get_ps3d_shape_rest_info_virtual_call);

    ClassDB::bind_method(D_METHOD("get_ps3d_shape_result"), &GDExtensionTestCase::get_ps3d_shape_result);
    GDVIRTUAL_BIND(_get_ps3d_shape_result);
    ClassDB::bind_method(D_METHOD("get_ps3d_shape_result_virtual_call"),
                         &GDExtensionTestCase::get_ps3d_shape_result_virtual_call);

    ClassDB::bind_method(D_METHOD("get_script_language_profiling_info"),
                         &GDExtensionTestCase::get_script_language_profiling_info);
    GDVIRTUAL_BIND(_get_script_language_profiling_info);
    ClassDB::bind_method(D_METHOD("get_script_language_profiling_info_virtual_call"),
                         &GDExtensionTestCase::get_script_language_profiling_info_virtual_call);
}
