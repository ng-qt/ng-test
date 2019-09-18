{
	"includes": [],
	"targets": [
		{
			"target_name": "ngtest",
			"include_dirs": ["."],
			"includes": [
				"./config/app.gypi",
				"./config/common.gypi",
				"./config/qt.gypi",
			],
			'conditions':[
				['OS=="mac"', {
					'xcode_settings': {
						'OTHER_LDFLAGS': ['-Wl,-rpath,@loader_path'],
					},
				}]
			]
		}
	]
}