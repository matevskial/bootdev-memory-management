project('bootdev-memory-management', 'c',
        version : '1.0.0',
        default_options : ['warning_level=3', 'c_std=c89'])

subdir('headerexample')

sources = ['main.c'] + headerexample_sources
includes = [headerexample_inc]

bootdev_memory_management = executable(
        'bootdev_memory_management',
        sources,
        include_directories : includes,
        install : true)

test('test', bootdev_memory_management)
