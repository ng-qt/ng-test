{
  'variables': {
    'qt_libraries%': '<!(echo $QT_LIBRARIES)',
    'qt_include%': '<!(echo $QT_INCLUDE_DIRS)',
  },
  'target_conditions': [
    ['OS=="linux"', {
      'include_dirs': [
        '<(qt_include)',
        '<(qt_include)/QtTest',
        '<(qt_include)/QtWidgets',
        '<(qt_include)/QtCore',
      ],
      'libraries': [
        '<(qt_libraries)/libQt5Widgets.so',
        '<(qt_libraries)/libQt5Core.so',
        '<(qt_libraries)/libQt5Test.so',
      ],
    }]
  ],
}