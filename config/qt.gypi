{
    'variables': {
        'qt_home_dir%': "/home/marcus-sa/Qt/5.13.1/gcc_64",
    },
    'target_conditions': [
        ['OS=="mac"', {
            'actions': [
                {
                    'action_name': 'symlink_qt_headers',
                    'inputs': [],
                    'outputs': [
                        '<(qt_home_dir)/include/QtCore',
                        '<(qt_home_dir)/include/QtTest',
                    ],
                    'action': [
                        'sh', '-c',
                        'mkdir -p <(qt_home_dir)/include && \
                            ln -sfn <(qt_home_dir)/lib/QtCore.framework/Versions/5/Headers <(qt_home_dir)/include/QtCore && \
                            ln -sfn <(qt_home_dir)/lib/QtTest.framework/Versions/5/Headers <(qt_home_dir)/include/QtTest'
                    ],
                }
            ],
            'include_dirs': [
                '<(qt_home_dir)/include',
                '<(qt_home_dir)/lib/QtTest.framework/Versions/5/QtTest',
                '<(qt_home_dir)/lib/QtCore.framework/Versions/5/QtCore',
            ],
            'libraries': [
                '<(qt_home_dir)/lib/QtTest.framework/Versions/5/QtTest',
                '<(qt_home_dir)/lib/QtCore.framework/Versions/5/QtCore',
            ],
        }],
        ['OS=="linux"', {
            'include_dirs': [
                '<(qt_home_dir)/include',
                '<(qt_home_dir)/include/QtTest',
                '<(qt_home_dir)/include/QtWidgets',
                '<(qt_home_dir)/include/QtCore',
            ],
            'libraries': [
            		'<(qt_home_dir)/lib/libQt5Test.so',
                '<(qt_home_dir)/lib/libQt5Widgets.so',
                '<(qt_home_dir)/lib/libQt5Core.so',
            ],
        }],
        ['OS=="win"', {
            'include_dirs': [
                '<(qt_home_dir)\\include',
                '<(qt_home_dir)\\include\\QtTest',
                '<(qt_home_dir)\\include\\QtCore',
            ],
            'libraries': [
                '<(qt_home_dir)\\lib\\Qt5Test.lib',
                '<(qt_home_dir)\\lib\\Qt5Core.lib',
            ]
        }],
    ],
}