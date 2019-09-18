{
    'variables': {
    	'qt_home_dir%': '<!(echo $NG_QT_PATH)',
    },
    'target_conditions': [
        ['OS=="linux"', {
            'include_dirs': [
                '<(qt_home_dir)/include',
                '<(qt_home_dir)/include/QtTest',
                '<(qt_home_dir)/include/QtWidgets',
                '<(qt_home_dir)/include/QtCore',
            ],
            'libraries': [
                '<(qt_home_dir)/lib/libQt5Widgets.so',
                '<(qt_home_dir)/lib/libQt5Core.so',
            		'<(qt_home_dir)/lib/libQt5Test.so',
            ],
        }]
    ],
}