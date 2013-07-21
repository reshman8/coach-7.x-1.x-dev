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
 

; The Panopoly Foundation

 projects[panopoly_core][version] = 1.x-dev
 projects[panopoly_core][subdir] = contrib/panopoly
; projects[panopoly_core][download][type] = git
; projects[panopoly_core][download][revision] = ef68207
; projects[panopoly_core][download][branch] = 7.x-1.x
; 
 projects[panopoly_images][version] = 1.0-rc4
 projects[panopoly_images][subdir] = contrib/panopoly
; 
 projects[panopoly_theme][version] = 1.x-dev
 projects[panopoly_theme][subdir] = contrib/panopoly
; projects[panopoly_theme][download][type] = git
; projects[panopoly_theme][download][revision] = 7b20a6c
; projects[panopoly_theme][download][branch] = 7.x-1.x
; 
 projects[panopoly_magic][version] = 1.x-dev
 projects[panopoly_magic][subdir] = contrib/panopoly
; projects[panopoly_magic][download][type] = git
; projects[panopoly_magic][download][revision] = 16add88
; projects[panopoly_magic][download][branch] = 7.x-1.x
; 
 projects[panopoly_widgets][version] = 1.x-dev
 projects[panopoly_widgets][subdir] = contrib/panopoly
; projects[panopoly_widgets][download][type] = git
; projects[panopoly_widgets][download][revision] = 17964b9
; projects[panopoly_widgets][download][branch] = 7.x-1.x
; 
 projects[panopoly_admin][version] = 1.x-dev
 projects[panopoly_admin][subdir] = contrib/panopoly
; projects[panopoly_admin][download][type] = git
; projects[panopoly_admin][download][revision] = a0e9881
; projects[panopoly_admin][download][branch] = 7.x-1.x
; 
 projects[panopoly_users][version] = 1.0-rc4
 projects[panopoly_users][subdir] = contrib/panopoly
; 
; ; The Panopoly Toolset
; 
 projects[panopoly_pages][version] = 1.0-rc4
 projects[panopoly_pages][subdir] = contrib/panopoly
; 
 projects[panopoly_wysiwyg][version] = 1.0-rc4
 projects[panopoly_wysiwyg][subdir] = contrib/panopoly
; 
 projects[panopoly_search][version] = 1.x-dev
 projects[panopoly_search][subdir] = contrib/panopoly
; projects[panopoly_search][download][type] = git
; projects[panopoly_search][download][revision] = 3900b8a
; projects[panopoly_search][download][branch] = 7.x-1.x




; Asu cas

;projects[asu_cas][version] = 1.x-dev
;projects[asu_cas][subdir] = custom
;projects[asu_cas][download][type] = git
;projects[asu_cas][download][revision] = 70a7c50
;projects[asu_cas][download][branch] = 7.x-1.x
;projects[asu_cas][download][url] = https://github.com/kalamuna/asu_cas.git

; Bootstrap Framework

projects[kalatheme][version] = 1.0-rc4
projects[kalatheme][type] = theme

;projects[openasu_bootstrap][version] = 1.x-dev
;projects[openasu_bootstrap][type] = theme
;projects[openasu_bootstrap][download][type] = git
;projects[openasu_bootstrap][download][revision] = 6aae928
;projects[openasu_bootstrap][download][branch] = 7.x-1.x
;projects[openasu_bootstrap][download][url] = https://github.com/kalamuna/openasu_bootstrap.git

libraries[bootstrap][download][type] = get
libraries[bootstrap][download][url] = https://github.com/kalamuna/asu_bootlibrary/archive/v2.3.0.zip

; Need 2.1 for Kalatheme RC4 - take this out when we move to Panopoly RC4

projects[libraries][version] = 2.1
projects[libraries][subdir] = contrib











