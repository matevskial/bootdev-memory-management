project('bootdev-memory-management', 'c',
        version : '1.0.0',
        default_options : ['warning_level=3', 'c_std=c99'])

subdir('headerexample')
subdir('structexample')
subdir('unionexample')

sources = ['main.c'] + headerexample_sources + structexample_sources + unionexample_sources
includes = [headerexample_inc, structexample_inc, unionexample_inc]

bootdev_memory_management = executable(
        'bootdev_memory_management',
        sources,
        include_directories : includes,
        install : true)

test('test', bootdev_memory_management)
