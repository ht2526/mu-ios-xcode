.section __TEXT,__text,regular,pure_instructions
.p2align 2

.macro LEGACY_TRAMP name
    .globl _\name
    .p2align 2
_\name:
    sub sp, sp, #224
    stp x0, x1, [sp, #0]
    stp x2, x3, [sp, #16]
    stp x4, x5, [sp, #32]
    stp x6, x7, [sp, #48]
    stp x8, x30, [sp, #64]
    stp q0, q1, [sp, #80]
    stp q2, q3, [sp, #112]
    stp q4, q5, [sp, #144]
    stp q6, q7, [sp, #176]

    adrp x0, L_\name@PAGE
    add x0, x0, L_\name@PAGEOFF
    bl _mu_legacy_resolve
    mov x16, x0

    ldp q6, q7, [sp, #176]
    ldp q4, q5, [sp, #144]
    ldp q2, q3, [sp, #112]
    ldp q0, q1, [sp, #80]
    ldp x8, x30, [sp, #64]
    ldp x6, x7, [sp, #48]
    ldp x4, x5, [sp, #32]
    ldp x2, x3, [sp, #16]
    ldp x0, x1, [sp, #0]
    add sp, sp, #224
    br x16

    .section __TEXT,__cstring,cstring_literals
L_\name:
    .asciz "\name"
    .section __TEXT,__text,regular,pure_instructions
.endm

LEGACY_TRAMP cpp_copy_stream_persistent
LEGACY_TRAMP cpp_free_memory
LEGACY_TRAMP cpp_get_cpu_tick
LEGACY_TRAMP cpp_read_asset
LEGACY_TRAMP cpp_read_asset_block
LEGACY_TRAMP cpp_read_file
LEGACY_TRAMP cpp_read_file_block
LEGACY_TRAMP cpp_send_message_to_native
LEGACY_TRAMP cpp_set_logger
LEGACY_TRAMP cpp_set_package_name
LEGACY_TRAMP cpp_unzip
LEGACY_TRAMP cpp_zip
LEGACY_TRAMP nav_anim_hash
LEGACY_TRAMP nav_blockray
LEGACY_TRAMP nav_create_scene
LEGACY_TRAMP nav_find_camera_position
LEGACY_TRAMP nav_find_jump_path_buffer
LEGACY_TRAMP nav_find_path_buffer
LEGACY_TRAMP nav_get_height
LEGACY_TRAMP nav_get_jump_path_buffer
LEGACY_TRAMP nav_get_location_info
LEGACY_TRAMP nav_get_nearest_passable_position
LEGACY_TRAMP nav_get_normal
LEGACY_TRAMP nav_get_passable
LEGACY_TRAMP nav_get_triangle_under_pos
LEGACY_TRAMP nav_height_map
LEGACY_TRAMP nav_init_scene
LEGACY_TRAMP nav_pushcast
LEGACY_TRAMP nav_raycast
LEGACY_TRAMP nav_remove_scene
LEGACY_TRAMP nav_screen_passable
LEGACY_TRAMP nav_set_jump_path_policy
LEGACY_TRAMP nav_set_logger
LEGACY_TRAMP nav_set_name
LEGACY_TRAMP nav_set_pmode
LEGACY_TRAMP nav_set_terrain_mode
LEGACY_TRAMP nav_set_terrain_mode_list
LEGACY_TRAMP nav_update_agent
LEGACY_TRAMP plant_updateforce
LEGACY_TRAMP plant_updateforce_gpuinstancing
LEGACY_TRAMP rectpack_clear
LEGACY_TRAMP rectpack_create
LEGACY_TRAMP rectpack_delete
LEGACY_TRAMP rectpack_getcount
LEGACY_TRAMP rectpack_getpacksize
LEGACY_TRAMP rectpack_pack
LEGACY_TRAMP rectpack_removeblock
LEGACY_TRAMP rectpack_reset
LEGACY_TRAMP rectpack_setmethod
LEGACY_TRAMP sensitive_censor
LEGACY_TRAMP sensitive_dispose
LEGACY_TRAMP sensitive_exclude
LEGACY_TRAMP sensitive_find
LEGACY_TRAMP sensitive_read_asset
LEGACY_TRAMP sensitive_read_file
LEGACY_TRAMP sensitive_read_mem
LEGACY_TRAMP sensitive_setmode
LEGACY_TRAMP tile_blockray
LEGACY_TRAMP tile_find_path_buffer
LEGACY_TRAMP tile_get_location_info
LEGACY_TRAMP tile_get_nearest_passable_position
LEGACY_TRAMP tile_get_passable
LEGACY_TRAMP tile_get_tile_under_pos
LEGACY_TRAMP tile_init_scene
LEGACY_TRAMP tile_insert_entity
LEGACY_TRAMP tile_map_info
LEGACY_TRAMP tile_pushcast
LEGACY_TRAMP tile_range_rolecount
LEGACY_TRAMP tile_range_rolelist
LEGACY_TRAMP tile_raycast
LEGACY_TRAMP tile_remove_entity
LEGACY_TRAMP tile_remove_scene
LEGACY_TRAMP tile_rolecount
LEGACY_TRAMP tile_rolelist
LEGACY_TRAMP tile_screen_passable
LEGACY_TRAMP tile_set_terrain_mode
LEGACY_TRAMP tile_set_terrain_mode_list
LEGACY_TRAMP tile_update_agent
