;We need to preload chan_local and pbx_config
;so that the lone queue member doesn't appear as "Invalid"
;and thus prevent the caller from entering the queue.
preload => chan_local.so
preload => pbx_config.so

noload => app_directory.so


