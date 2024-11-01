#pragma once

#include "core/io/resource.h"
#include "core/object/object_id.h"
#include "core/object/script_language_extension.h"
#include "core/math/audio_frame.h"
#include "servers/text_server.h"
#include "servers/extensions/physics_server_2d_extension.h"
#include "servers/extensions/physics_server_3d_extension.h"
#include "core/variant/native_ptr.h"

#include "core/extension/ext_wrappers.gen.inc"
#include "core/object/gdvirtual.gen.inc"

class GDExtensionTestCase : public Object {
    GDCLASS(GDExtensionTestCase, Object);

private:
    bool m_bool;
    uint8_t m_uint8;
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
    NodePath m_node_path;
    RID m_rid;
    Object *m_object;
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

    Variant m_variant;
    void *m_pointer1;
    void *m_pointer2;
    uint8_t m_uint8_arr1[8];
    uint8_t m_uint8_arr2[8];
    uint8_t m_uint8_arr3[8];
    uint8_t m_uint8_arr4[8];

    AudioFrame m_audio_frame;
    CaretInfo m_caret_info;
    Glyph m_glyph;
    ObjectID m_object_id;

    PhysicsServer2DExtensionMotionResult m_ps2d_motion_result;
    PhysicsServer2DExtensionRayResult m_ps2d_ray_result;
    PhysicsServer2DExtensionShapeRestInfo m_ps2d_shape_rest_info;
    PhysicsServer2DExtensionShapeResult m_ps2d_shape_result;
    PhysicsServer3DExtensionMotionCollision m_ps3d_motion_collision;
    PhysicsServer3DExtensionMotionResult m_ps3d_motion_result;
    PhysicsServer3DExtensionRayResult m_ps3d_ray_result;
    PhysicsServer3DExtensionShapeRestInfo m_ps3d_shape_rest_info;
    PhysicsServer3DExtensionShapeResult m_ps3d_shape_result;
    ScriptLanguageExtensionProfilingInfo m_script_language_profiling_info;

protected:
	static void _bind_methods();

public:
    void atomic_args(const bool p_bool, const int32_t p_int32, const int64_t p_int64, const float p_float32,
                     const double p_float64, const String &p_string);
    GDVIRTUAL6(_atomic_args, bool, int32_t, int64_t, float, double, String)
    void atomic_args_virtual_call() {
        GDVIRTUAL_CALL(_atomic_args, m_bool, m_int32, m_int64, m_float32, m_float64, m_string);
    }

    void math_args_1(const Vector2 &p_vector2, const Vector2i &p_vector2i, const Rect2 &p_rect2,
                     const Rect2i &p_rect2i, const Vector3 &p_vector3, const Vector3i &p_vector3i,
                     const Transform2D &p_transform2d, const Vector4 &p_vector4, const Vector4i &p_vector4i);
    GDVIRTUAL9(_math_args_1, Vector2, Vector2i, Rect2, Rect2i, Vector3, Vector3i, Transform2D, Vector4, Vector4i)
    void math_args_1_virtual_call() {
        GDVIRTUAL_CALL(_math_args_1, m_vector2, m_vector2i, m_rect2, m_rect2i, m_vector3, m_vector3i, m_transform2d,
                       m_vector4, m_vector4i);
    }

    void math_args_2(const Plane &p_plane, const Quaternion &p_quaternion, const AABB &p_aabb,
                     const Basis &p_basis, const Transform3D &p_transform3d, const Projection p_projection,
                     const Color &p_color);
    GDVIRTUAL7(_math_args_2, Plane, Quaternion, AABB, Basis, Transform3D, Projection, Color)
    void math_args_2_virtual_call() {
        GDVIRTUAL_CALL(_math_args_2, m_plane, m_quaternion, m_aabb, m_basis, m_transform3d, m_projection, m_color);
    }

    void misc_args(const StringName &p_string_name, const NodePath &p_node_path, const RID &p_rid,
                   const Object *p_object, const Callable &p_callable, const Signal &p_signal,
                   const Dictionary &p_dictionary, const Array &p_array);
    GDVIRTUAL8(_misc_args, StringName, NodePath, RID, Object *, Callable, Signal, Dictionary, Array)
    void misc_args_virtual_call() {
        GDVIRTUAL_CALL(_misc_args, m_string_name, m_node_path, m_rid, m_object, m_callable, m_signal, m_dictionary,
                       m_array);
    }

    void packed_array_args(const PackedByteArray &, const PackedInt32Array &, const PackedInt64Array &,
                           const PackedFloat32Array &, const PackedFloat64Array &, const PackedStringArray &,
                           const PackedVector2Array &, const PackedVector3Array &, const PackedColorArray &,
                           const PackedVector4Array &);
    GDVIRTUAL10(_packed_array_args, PackedByteArray, PackedInt32Array, PackedInt64Array, PackedFloat32Array,
                PackedFloat64Array, PackedStringArray, PackedVector2Array, PackedVector3Array, PackedColorArray,
                PackedVector4Array)
    void packed_array_args_virtual_call() {
        GDVIRTUAL_CALL(_packed_array_args, m_packed_byte_array, m_packed_int32_array, m_packed_int64_array,
                       m_packed_float32_array, m_packed_float64_array, m_packed_string_array, m_packed_vector2_array,
                       m_packed_vector3_array, m_packed_color_array, m_packed_vector4_array);
    }

    void other_args_1(const Variant &p_variant, GDExtensionConstPtr<const void> p_pointer1,
                      GDExtensionConstPtr<const void> p_pointer2, GDExtensionConstPtr<const uint8_t> p_uint8_pointer1,
                      GDExtensionConstPtr<const uint8_t> p_uint8_pointer2,
                      GDExtensionConstPtr<const uint8_t> p_uint8_pointer3,
                      GDExtensionConstPtr<const uint8_t> p_uint8_pointer4);
    GDVIRTUAL9(_other_args_1, Variant, GDExtensionConstPtr<const void>, GDExtensionPtr<void>,
                GDExtensionConstPtr<const uint8_t>, GDExtensionPtr<uint8_t>, GDExtensionConstPtr<const uint8_t *>,
                GDExtensionPtr<uint8_t *>, GDExtensionPtr<real_t>, GDExtensionPtr<int32_t>)
    void other_args_1_virtual_call() {
        GDVIRTUAL_CALL(_other_args_1, m_variant, m_pointer1, m_pointer2, (const uint8_t *)m_uint8_arr1,
                      (uint8_t *)m_uint8_arr2, (const uint8_t **)(&m_uint8_arr3), (uint8_t **)(&m_uint8_arr4),
                      &m_float32, &m_int32);
    }

    void other_args_2(GDExtensionConstPtr<const AudioFrame> p_audio_frame,
                      GDExtensionConstPtr<const CaretInfo> p_cartet_info, GDExtensionConstPtr<const Glyph> p_glyph,
                      GDExtensionConstPtr<const void> p_object_id);
    GDVIRTUAL4(_other_args_2, GDExtensionConstPtr<const AudioFrame>, GDExtensionConstPtr<const CaretInfo>,
                GDExtensionConstPtr<const Glyph>, GDExtensionPtr<ObjectID>)
    void other_args_2_virtual_call() {
        GDVIRTUAL_CALL(_other_args_2, &m_audio_frame, &m_caret_info, &m_glyph, &m_object_id);
    }

    void other_args_3(GDExtensionConstPtr<const PhysicsServer2DExtensionMotionResult> p_ps2d_motion_result,
                      GDExtensionConstPtr<const PhysicsServer2DExtensionRayResult> p_ps2d_ray_result,
                      GDExtensionConstPtr<const PhysicsServer2DExtensionShapeRestInfo> p_ps2d_shape_rest_info,
                      GDExtensionConstPtr<const PhysicsServer2DExtensionShapeResult> p_ps2d_shape_result,
                      GDExtensionConstPtr<const PhysicsServer3DExtensionMotionCollision> p_ps3d_motion_collision,
                      GDExtensionConstPtr<const PhysicsServer3DExtensionMotionResult> p_ps3d_motion_result,
                      GDExtensionConstPtr<const PhysicsServer3DExtensionRayResult> p_ps3d_ray_result,
                      GDExtensionConstPtr<const PhysicsServer3DExtensionShapeRestInfo> p_ps3d_shape_rest_info,
                      GDExtensionConstPtr<const PhysicsServer3DExtensionShapeResult> p_ps3d_shape_result,
                      GDExtensionConstPtr<const ScriptLanguageExtensionProfilingInfo> p_script_language_profiling_info);
    GDVIRTUAL10(_other_args_3, GDExtensionConstPtr<const PhysicsServer2DExtensionMotionResult>,
                GDExtensionConstPtr<const PhysicsServer2DExtensionRayResult>,
                GDExtensionConstPtr<const PhysicsServer2DExtensionShapeRestInfo>,
                GDExtensionConstPtr<const PhysicsServer2DExtensionShapeResult>,
                GDExtensionConstPtr<const PhysicsServer3DExtensionMotionCollision>,
                GDExtensionConstPtr<const PhysicsServer3DExtensionMotionResult>,
                GDExtensionConstPtr<const PhysicsServer3DExtensionRayResult>,
                GDExtensionConstPtr<const PhysicsServer3DExtensionShapeRestInfo>,
                GDExtensionConstPtr<const PhysicsServer3DExtensionShapeResult>,
                GDExtensionConstPtr<const ScriptLanguageExtensionProfilingInfo>)
    void other_args_3_virtual_call() {
        GDVIRTUAL_CALL(_other_args_3, &m_ps2d_motion_result, &m_ps2d_ray_result, &m_ps2d_shape_rest_info,
                       &m_ps2d_shape_result, &m_ps3d_motion_collision, &m_ps3d_motion_result, &m_ps3d_ray_result,
                       &m_ps3d_shape_rest_info, &m_ps3d_shape_result, &m_script_language_profiling_info);
    }


    bool get_bool() const { return m_bool; }
    GDVIRTUAL0RC(bool, _get_bool)
    void get_bool_virtual_call() { GDVIRTUAL_CALL(_get_bool, m_bool); }

    int32_t get_int32() const { return m_int32; }
    GDVIRTUAL0RC(int32_t, _get_int32)
    void get_int32_virtual_call() { GDVIRTUAL_CALL(_get_int32, m_int32); }

    int64_t get_int64() const { return m_int64; }
    GDVIRTUAL0RC(int64_t, _get_int64)
    void get_int64_virtual_call() { GDVIRTUAL_CALL(_get_int64, m_int64); }

    float get_float32() const { return m_float32; }
    GDVIRTUAL0RC(float, _get_float32)
    void get_float32_virtual_call() { GDVIRTUAL_CALL(_get_float32, m_float32); }

    double get_float64() const { return m_float64; }
    GDVIRTUAL0RC(double, _get_float64)
    void get_float64_virtual_call() { GDVIRTUAL_CALL(_get_float64, m_float64); }

    String get_string() const { return m_string; }
    GDVIRTUAL0RC(String, _get_string)
    void get_string_virtual_call() { GDVIRTUAL_CALL(_get_string, m_string); }

    Vector2 get_vector2() const { return m_vector2; }
    GDVIRTUAL0RC(Vector2, _get_vector2)
    void get_vector2_virtual_call() { GDVIRTUAL_CALL(_get_vector2, m_vector2); }

    Vector2i get_vector2i() const { return m_vector2i; }
    GDVIRTUAL0RC(Vector2i, _get_vector2i)
    void get_vector2i_virtual_call() { GDVIRTUAL_CALL(_get_vector2i, m_vector2i); }

    Rect2 get_rect2() const { return m_rect2; }
    GDVIRTUAL0RC(Rect2, _get_rect2)
    void get_rect2_virtual_call() { GDVIRTUAL_CALL(_get_rect2, m_rect2); }

    Rect2i get_rect2i() const { return m_rect2i; }
    GDVIRTUAL0RC(Rect2i, _get_rect2i)
    void get_rect2i_virtual_call() { GDVIRTUAL_CALL(_get_rect2i, m_rect2i); }

    Vector3 get_vector3() const { return m_vector3; }
    GDVIRTUAL0RC(Vector3, _get_vector3)
    void get_vector3_virtual_call() { GDVIRTUAL_CALL(_get_vector3, m_vector3); }

    Vector3i get_vector3i() const { return m_vector3i; }
    GDVIRTUAL0RC(Vector3i, _get_vector3i)
    void get_vector3i_virtual_call() { GDVIRTUAL_CALL(_get_vector3i, m_vector3i); }

    Transform2D get_transform2d() const { return m_transform2d; }
    GDVIRTUAL0RC(Transform2D, _get_transform2d)
    void get_transform2d_virtual_call() { GDVIRTUAL_CALL(_get_transform2d, m_transform2d); }

    Vector4 get_vector4() const { return m_vector4; }
    GDVIRTUAL0RC(Vector4, _get_vector4)
    void get_vector4_virtual_call() { GDVIRTUAL_CALL(_get_vector4, m_vector4); }

    Vector4i get_vector4i() const { return m_vector4i; }
    GDVIRTUAL0RC(Vector4i, _get_vector4i)
    void get_vector4i_virtual_call() { GDVIRTUAL_CALL(_get_vector4i, m_vector4i); }

    Plane get_plane() const { return m_plane; }
    GDVIRTUAL0RC(Plane, _get_plane)
    void get_plane_virtual_call() { GDVIRTUAL_CALL(_get_plane, m_plane); }

    Quaternion get_quaternion() const { return m_quaternion; }
    GDVIRTUAL0RC(Quaternion, _get_quaternion)
    void get_quaternion_virtual_call() { GDVIRTUAL_CALL(_get_quaternion, m_quaternion); }

    AABB get_aabb() const { return m_aabb; }
    GDVIRTUAL0RC(AABB, _get_aabb)
    void get_aabb_virtual_call() { GDVIRTUAL_CALL(_get_aabb, m_aabb); }

    Basis get_basis() const { return m_basis; }
    GDVIRTUAL0RC(Basis, _get_basis)
    void get_basis_virtual_call() { GDVIRTUAL_CALL(_get_basis, m_basis); }

    Transform3D get_transform3d() const { return m_transform3d; }
    GDVIRTUAL0RC(Transform3D, _get_transform3d)
    void get_transform3d_virtual_call() { GDVIRTUAL_CALL(_get_transform3d, m_transform3d); }

    Projection get_projection() const { return m_projection; }
    GDVIRTUAL0RC(Projection, _get_projection)
    void get_projection_virtual_call() { GDVIRTUAL_CALL(_get_projection, m_projection); }

    Color get_color() const { return m_color; }
    GDVIRTUAL0RC(Color, _get_color)
    void get_color_virtual_call() { GDVIRTUAL_CALL(_get_color, m_color); }

    StringName get_string_name() const { return m_string_name; }
    GDVIRTUAL0RC(StringName, _get_string_name)
    void get_string_name_virtual_call() { GDVIRTUAL_CALL(_get_string_name, m_string_name); }

    NodePath get_node_path() const { return m_node_path; }
    GDVIRTUAL0RC(NodePath, _get_node_path)
    void get_node_path_virtual_call() { GDVIRTUAL_CALL(_get_node_path, m_node_path); }

    RID get_rid() const { return m_rid; }
    GDVIRTUAL0RC(RID, _get_rid)
    void get_rid_virtual_call() { GDVIRTUAL_CALL(_get_rid, m_rid); }

    Object *get_object() const { return m_object; }
    GDVIRTUAL0RC(Object *, _get_object)
    void get_object_virtual_call() { GDVIRTUAL_CALL(_get_object, m_object); }

    Callable get_callable() const { return m_callable; }
    GDVIRTUAL0RC(Callable, _get_callable)
    void get_callable_virtual_call() { GDVIRTUAL_CALL(_get_callable, m_callable); }

    Signal get_signal() const { return m_signal; }
    GDVIRTUAL0RC(Signal, _get_signal)
    void get_signal_virtual_call() { GDVIRTUAL_CALL(_get_signal, m_signal); }

    Dictionary get_dictionary() const { return m_dictionary; }
    GDVIRTUAL0RC(Dictionary, _get_dictionary)
    void get_dictionary_virtual_call() { GDVIRTUAL_CALL(_get_dictionary, m_dictionary); }

    Array get_array() const { return m_array; }
    GDVIRTUAL0RC(Array, _get_array)
    void get_array_virtual_call() { GDVIRTUAL_CALL(_get_array, m_array); }

    PackedByteArray get_packed_byte_array() const { return m_packed_byte_array; }
    GDVIRTUAL0RC(PackedByteArray, _get_packed_byte_array)
    void get_packed_byte_array_virtual_call() { GDVIRTUAL_CALL(_get_packed_byte_array, m_packed_byte_array); }

    PackedInt32Array get_packed_int32_array() const { return m_packed_int32_array; }
    GDVIRTUAL0RC(PackedInt32Array, _get_packed_int32_array)
    void get_packed_int32_array_virtual_call() { GDVIRTUAL_CALL(_get_packed_int32_array, m_packed_int32_array); }

    PackedInt64Array get_packed_int64_array() const { return m_packed_int64_array; }
    GDVIRTUAL0RC(PackedInt64Array, _get_packed_int64_array)
    void get_packed_int64_array_virtual_call() { GDVIRTUAL_CALL(_get_packed_int64_array, m_packed_int64_array); }

    PackedFloat32Array get_packed_float32_array() const { return m_packed_float32_array; }
    GDVIRTUAL0RC(PackedFloat32Array, _get_packed_float32_array)
    void get_packed_float32_array_virtual_call() { GDVIRTUAL_CALL(_get_packed_float32_array, m_packed_float32_array); }

    PackedFloat64Array get_packed_float64_array() const { return m_packed_float64_array; }
    GDVIRTUAL0RC(PackedFloat64Array, _get_packed_float64_array)
    void get_packed_float64_array_virtual_call() { GDVIRTUAL_CALL(_get_packed_float64_array, m_packed_float64_array); }

    PackedStringArray get_packed_string_array() const { return m_packed_string_array; }
    GDVIRTUAL0RC(PackedStringArray, _get_packed_string_array)
    void get_packed_string_array_virtual_call() { GDVIRTUAL_CALL(_get_packed_string_array, m_packed_string_array); }

    PackedVector2Array get_packed_vector2_array() const { return m_packed_vector2_array; }
    GDVIRTUAL0RC(PackedVector2Array, _get_packed_vector2_array)
    void get_packed_vector2_array_virtual_call() { GDVIRTUAL_CALL(_get_packed_vector2_array, m_packed_vector2_array); }

    PackedVector3Array get_packed_vector3_array() const { return m_packed_vector3_array; }
    GDVIRTUAL0RC(PackedVector3Array, _get_packed_vector3_array)
    void get_packed_vector3_array_virtual_call() { GDVIRTUAL_CALL(_get_packed_vector3_array, m_packed_vector3_array); }

    PackedColorArray get_packed_color_array() const { return m_packed_color_array; }
    GDVIRTUAL0RC(PackedColorArray, _get_packed_color_array)
    void get_packed_color_array_virtual_call() { GDVIRTUAL_CALL(_get_packed_color_array, m_packed_color_array); }

    PackedVector4Array get_packed_vector4_array() const { return m_packed_vector4_array; }
    GDVIRTUAL0RC(PackedVector4Array, _get_packed_vector4_array)
    void get_packed_vector4_array_virtual_call() { GDVIRTUAL_CALL(_get_packed_vector4_array, m_packed_vector4_array); }

    Variant get_variant() const { return m_variant; }
    GDVIRTUAL0RC(Variant, _get_variant)
    void get_variant_virtual_call() { GDVIRTUAL_CALL(_get_variant, m_variant); }

    GDExtensionConstPtr<const void> get_pointer1() const { return m_pointer1; }
    GDVIRTUAL0RC(GDExtensionConstPtr<const void>, _get_pointer1)
    void get_pointer1_virtual_call() {
        GDExtensionConstPtr<const void> ret = nullptr;
        GDVIRTUAL_CALL(_get_pointer1, ret);
        m_pointer1 = ret.data;
    }

    GDExtensionPtr<void> get_pointer2() const { return m_pointer2; }
    GDVIRTUAL0RC(GDExtensionPtr<void>, _get_pointer2)
    void get_pointer2_virtual_call() {
        GDExtensionPtr<void> ret = nullptr;
        GDVIRTUAL_CALL(_get_pointer2, ret);
        m_pointer2 = ret.data;
    }

    GDExtensionConstPtr<const void> get_uint8_pointer1() const { return (const void *)m_uint8_arr1; }
    GDVIRTUAL0RC(GDExtensionConstPtr<const uint8_t>, _get_uint8_pointer1)
    void get_uint8_pointer1_virtual_call() {
        GDExtensionConstPtr<const uint8_t> ret = nullptr;
        GDVIRTUAL_CALL(_get_uint8_pointer1, ret);
        const uint8_t *ptr = ret.data;
        uint8_t *ptrw = m_uint8_arr1;
        for (size_t i = 0; i < 8; i++) {
            *ptrw = *ptr;
            ptrw++;
            ptr++;
        }
    }

    GDExtensionPtr<void> get_uint8_pointer2() const { return (void *)m_uint8_arr2; }
    GDVIRTUAL0RC(GDExtensionPtr<uint8_t>, _get_uint8_pointer2)
    void get_uint8_pointer2_virtual_call() {
        GDExtensionPtr<uint8_t> ret = nullptr;
        GDVIRTUAL_CALL(_get_uint8_pointer2, ret);
        uint8_t *ptr = ret.data;
        uint8_t *ptrw = m_uint8_arr2;
        for (size_t i = 0; i < 8; i++) {
            *ptrw = *ptr;
            ptrw++;
            ptr++;
        }
    }

    GDExtensionConstPtr<const void> get_uint8_pointer3() const { return (const void *)&m_uint8_arr3; }
    GDVIRTUAL0RC(GDExtensionConstPtr<const uint8_t>, _get_uint8_pointer3)
    void get_uint8_pointer3_virtual_call() {
        GDExtensionConstPtr<const uint8_t> ret = nullptr;
        GDVIRTUAL_CALL(_get_uint8_pointer3, ret);
        const uint8_t *ptr = ret.data;
        uint8_t *ptrw = m_uint8_arr3;
        for (size_t i = 0; i < 8; i++) {
            *ptrw = *ptr;
            ptrw++;
            ptr++;
        }
    }

    GDExtensionPtr<void> get_uint8_pointer4() const { return (void *)&m_uint8_arr4; }
    GDVIRTUAL0RC(GDExtensionPtr<uint8_t>, _get_uint8_pointer4)
    void get_uint8_pointer4_virtual_call() {
        GDExtensionPtr<uint8_t> ret = nullptr;
        GDVIRTUAL_CALL(_get_uint8_pointer4, ret);
        uint8_t *ptr = ret.data;
        uint8_t *ptrw = m_uint8_arr4;
        for (size_t i = 0; i < 8; i++) {
            *ptrw = *ptr;
            ptrw++;
            ptr++;
        }
    }

    GDExtensionConstPtr<const void> get_audio_frame() const { return &m_audio_frame; }
    GDVIRTUAL0RC(GDExtensionConstPtr<const AudioFrame>, _get_audio_frame)
    void get_audio_frame_virtual_call() {
        GDExtensionConstPtr<const AudioFrame> ret = nullptr;
        GDVIRTUAL_CALL(_get_audio_frame, ret);
        m_audio_frame = *ret;
    }

    GDExtensionConstPtr<const void> get_caret_info() const { return &m_caret_info; }
    GDVIRTUAL0RC(GDExtensionConstPtr<const CaretInfo>, _get_caret_info)
    void get_caret_info_virtual_call() {
        GDExtensionConstPtr<const CaretInfo> ret = nullptr;
        GDVIRTUAL_CALL(_get_caret_info, ret);
        m_caret_info = *ret;
    }

    GDExtensionConstPtr<const void> get_glyph() const { return &m_glyph; }
    GDVIRTUAL0RC(GDExtensionConstPtr<const Glyph>, _get_glyph)
    void get_glyph_virtual_call() {
        GDExtensionConstPtr<const Glyph> ret = nullptr;
        GDVIRTUAL_CALL(_get_glyph, ret);
        m_glyph = *ret;
    }

    GDExtensionConstPtr<const void> get_object_id() const { return &m_object_id; }
    GDVIRTUAL0RC(GDExtensionConstPtr<const void>, _get_object_id)
    void get_object_id_virtual_call() {
        GDExtensionConstPtr<const void> ret = nullptr;
        GDVIRTUAL_CALL(_get_object_id, ret);
        m_object_id = *(const ObjectID *)(const void *)ret;
    }

    GDExtensionConstPtr<const void> get_ps2d_motion_result() const {
        return &m_ps2d_motion_result;
    }
    GDVIRTUAL0RC(GDExtensionConstPtr<const PhysicsServer2DExtensionMotionResult>, _get_ps2d_motion_result)
    void get_ps2d_motion_result_virtual_call() {
        GDExtensionConstPtr<const PhysicsServer2DExtensionMotionResult> ret = nullptr;
        GDVIRTUAL_CALL(_get_ps2d_motion_result, ret);
        m_ps2d_motion_result = *ret;
    }

    GDExtensionConstPtr<const void> get_ps2d_ray_result() const {
        return &m_ps2d_ray_result;
    }
    GDVIRTUAL0RC(GDExtensionConstPtr<const PhysicsServer2DExtensionRayResult>, _get_ps2d_ray_result)
    void get_ps2d_ray_result_virtual_call() {
        GDExtensionConstPtr<const PhysicsServer2DExtensionRayResult> ret = nullptr;
        GDVIRTUAL_CALL(_get_ps2d_ray_result, ret);
        m_ps2d_ray_result = *ret;
    }


    GDExtensionConstPtr<const void> get_ps2d_shape_rest_info() const {
        return &m_ps2d_shape_rest_info;
    }
    GDVIRTUAL0RC(GDExtensionConstPtr<const PhysicsServer2DExtensionShapeRestInfo>, _get_ps2d_shape_rest_info)
    void get_ps2d_shape_rest_info_virtual_call() {
        GDExtensionConstPtr<const PhysicsServer2DExtensionShapeRestInfo> ret = nullptr;
        GDVIRTUAL_CALL(_get_ps2d_shape_rest_info, ret);
        m_ps2d_shape_rest_info = *ret;
    }


    GDExtensionConstPtr<const void> get_ps2d_shape_result() const {
        return &m_ps2d_shape_result;
    }
    GDVIRTUAL0RC(GDExtensionConstPtr<const PhysicsServer2DExtensionShapeResult>, _get_ps2d_shape_result)
    void get_ps2d_shape_result_virtual_call() {
        GDExtensionConstPtr<const PhysicsServer2DExtensionShapeResult> ret = nullptr;
        GDVIRTUAL_CALL(_get_ps2d_shape_result, ret);
        m_ps2d_shape_result = *ret;
    }


    GDExtensionConstPtr<const void> get_ps3d_motion_collision() const {
        return &m_ps3d_motion_collision;
    }
    GDVIRTUAL0RC(GDExtensionConstPtr<const PhysicsServer3DExtensionMotionCollision>, _get_ps3d_motion_collision)
    void get_ps3d_motion_collision_virtual_call() {
        GDExtensionConstPtr<const PhysicsServer3DExtensionMotionCollision> ret = nullptr;
        GDVIRTUAL_CALL(_get_ps3d_motion_collision, ret);
        m_ps3d_motion_collision = *ret;
    }


    GDExtensionConstPtr<const void> get_ps3d_motion_result() const {
        return &m_ps3d_motion_result;
    }
    GDVIRTUAL0RC(GDExtensionConstPtr<const PhysicsServer3DExtensionMotionResult>, _get_ps3d_motion_result)
    void get_ps3d_motion_result_virtual_call() {
        GDExtensionConstPtr<const PhysicsServer3DExtensionMotionResult> ret = nullptr;
        GDVIRTUAL_CALL(_get_ps3d_motion_result, ret);
        m_ps3d_motion_result = *ret;
    }


    GDExtensionConstPtr<const void> get_ps3d_ray_result() const {
        return &m_ps3d_ray_result;
    }
    GDVIRTUAL0RC(GDExtensionConstPtr<const PhysicsServer3DExtensionRayResult>, _get_ps3d_ray_result)
    void get_ps3d_ray_result_virtual_call() {
        GDExtensionConstPtr<const PhysicsServer3DExtensionRayResult> ret = nullptr;
        GDVIRTUAL_CALL(_get_ps3d_ray_result, ret);
        m_ps3d_ray_result = *ret;
    }


    GDExtensionConstPtr<const void> get_ps3d_shape_rest_info() const {
        return &m_ps3d_shape_rest_info;
    }
    GDVIRTUAL0RC(GDExtensionConstPtr<const PhysicsServer3DExtensionShapeRestInfo>, _get_ps3d_shape_rest_info)
    void get_ps3d_shape_rest_info_virtual_call() {
        GDExtensionConstPtr<const PhysicsServer3DExtensionShapeRestInfo> ret = nullptr;
        GDVIRTUAL_CALL(_get_ps3d_shape_rest_info, ret);
        m_ps3d_shape_rest_info = *ret;
    }


    GDExtensionConstPtr<const void> get_ps3d_shape_result() const {
        return &m_ps3d_shape_result;
    }
    GDVIRTUAL0RC(GDExtensionConstPtr<const PhysicsServer3DExtensionShapeResult>, _get_ps3d_shape_result)
    void get_ps3d_shape_result_virtual_call() {
        GDExtensionConstPtr<const PhysicsServer3DExtensionShapeResult> ret = nullptr;
        GDVIRTUAL_CALL(_get_ps3d_shape_result, ret);
        m_ps3d_shape_result = *ret;
    }


    GDExtensionConstPtr<const void> get_script_language_profiling_info() const {
        return &m_script_language_profiling_info;
    }
    GDVIRTUAL0RC(GDExtensionConstPtr<const ScriptLanguageExtensionProfilingInfo>, _get_script_language_profiling_info)
    void get_script_language_profiling_info_virtual_call() {
        GDExtensionConstPtr<const ScriptLanguageExtensionProfilingInfo> ret = nullptr;
        GDVIRTUAL_CALL(_get_script_language_profiling_info, ret);
        m_script_language_profiling_info = *ret;
    }
};
