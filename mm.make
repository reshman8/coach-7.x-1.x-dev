api = 2 
core = 7.x
 
 projects[admin_menu][subdir] = contrib
 projects[coffee][subdir] = contrib
 projects[devel][subdir] = contrib
 projects[diff][subdir] = contrib
 projects[backup_migrate][subdir] = contrib
 projects[derivicon][subdir] = contrib
 projects[context][subdir] = contrib
 projects[nodehierarchy][subdir] = contrib
 projects[simplehtmldom][subdir] = contrib
 projects[devel_themer][subdir] = contrib
 

; The Panopoly Foundation

projects[panopoly_core][version] = 1.x-dev
projects[panopoly_core][subdir] = panopoly
projects[panopoly_core][download][type] = git
projects[panopoly_core][download][revision] = ef68207
projects[panopoly_core][download][branch] = 7.x-1.x

projects[panopoly_images][version] = 1.0-rc4
projects[panopoly_images][subdir] = panopoly

projects[panopoly_theme][version] = 1.x-dev
projects[panopoly_theme][subdir] = panopoly
projects[panopoly_theme][download][type] = git
projects[panopoly_theme][download][revision] = 7b20a6c
projects[panopoly_theme][download][branch] = 7.x-1.x

projects[panopoly_magic][version] = 1.x-dev
projects[panopoly_magic][subdir] = panopoly
projects[panopoly_magic][download][type] = git
projects[panopoly_magic][download][revision] = 16add88
projects[panopoly_magic][download][branch] = 7.x-1.x

projects[panopoly_widgets][version] = 1.x-dev
projects[panopoly_widgets][subdir] = panopoly
projects[panopoly_widgets][download][type] = git
projects[panopoly_widgets][download][revision] = 17964b9
projects[panopoly_widgets][download][branch] = 7.x-1.x

projects[panopoly_admin][version] = 1.x-dev
projects[panopoly_admin][subdir] = panopoly
projects[panopoly_admin][download][type] = git
projects[panopoly_admin][download][revision] = a0e9881
projects[panopoly_admin][download][branch] = 7.x-1.x

projects[panopoly_users][version] = 1.0-rc4
projects[panopoly_users][subdir] = panopoly

; The Panopoly Toolset

projects[panopoly_pages][version] = 1.0-rc4
projects[panopoly_pages][subdir] = panopoly

projects[panopoly_wysiwyg][version] = 1.0-rc4
projects[panopoly_wysiwyg][subdir] = panopoly

projects[panopoly_search][version] = 1.x-dev
projects[panopoly_search][subdir] = panopoly
projects[panopoly_search][download][type] = git
projects[panopoly_search][download][revision] = 3900b8a
projects[panopoly_search][download][branch] = 7.x-1.x

; The Panopoly Kalatheme

projects[kalatheme][version] = 1.0-rc4
projects[kalatheme][type] = theme
projects[kalatheme][subdir] = contrib
; patch not working
; projects[kalatheme][patch][1935440] = http://drupal.org/files/kalatheme-illegal-string-offset-1935440-4.patch

; Bootstrap Framework

libraries[bootstrap][download][type] = get
libraries[bootstrap][download][url] = http://twitter.github.com/bootstrap/assets/bootstrap.zip

; Need 2.1 for Kalatheme RC4 - take this out when we move to Panopoly RC4

; projects[libraries][version] = 2.1
; projects[libraries][subdir] = contrib

; Panopoly Recommended

; projects[devel][version] = 1.3
; projects[devel][subdir] = contrib
; 
; projects[uuid][version] = 1.x-dev
; projects[uuid][subdir] = contrib
; projects[uuid][download][type] = git
; projects[uuid][download][revision] = 4730c67
; projects[uuid][download][branch] = 7.x-1.x
; projects[uuid][patch][1605284] = http://drupal.org/files/1605284-define-types-for-tokens-6.patch

; Radix
  
;  projects[radix_core][type] = module
;  projects[radix_core][download][type] = git
;  projects[radix_core][download][revision] = 5a63a93
;  projects[radix_core][download][branch] = 7.x-1.x
;  projects[radix_core][subdir] = contrib
  
; Other themes

; projects[omega][type] = theme
; projects[omega][subdir] = contrib
; projects[tweme][type] = theme
; projects[tweme][subdir] = contrib





