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
projects[panopoly_core][subdir] = contrib/panopoly
projects[panopoly_core][download][type] = git
projects[panopoly_core][download][revision] = ef68207
projects[panopoly_core][download][branch] = 7.x-1.x

projects[panopoly_images][version] = 1.0-rc4
projects[panopoly_images][subdir] = contrib/panopoly

projects[panopoly_theme][version] = 1.x-dev
projects[panopoly_theme][subdir] = contrib/panopoly
projects[panopoly_theme][download][type] = git
projects[panopoly_theme][download][revision] = 7b20a6c
projects[panopoly_theme][download][branch] = 7.x-1.x

projects[panopoly_magic][version] = 1.x-dev
projects[panopoly_magic][subdir] = contrib/panopoly
projects[panopoly_magic][download][type] = git
projects[panopoly_magic][download][revision] = 16add88
projects[panopoly_magic][download][branch] = 7.x-1.x

projects[panopoly_widgets][version] = 1.x-dev
projects[panopoly_widgets][subdir] = contrib/panopoly
projects[panopoly_widgets][download][type] = git
projects[panopoly_widgets][download][revision] = 17964b9
projects[panopoly_widgets][download][branch] = 7.x-1.x

projects[panopoly_admin][version] = 1.x-dev
projects[panopoly_admin][subdir] = contrib/panopoly
projects[panopoly_admin][download][type] = git
projects[panopoly_admin][download][revision] = a0e9881
projects[panopoly_admin][download][branch] = 7.x-1.x

projects[panopoly_users][version] = 1.0-rc4
projects[panopoly_users][subdir] = contrib/panopoly

; The Panopoly Toolset

projects[panopoly_pages][version] = 1.0-rc4
projects[panopoly_pages][subdir] = contrib/panopoly

projects[panopoly_wysiwyg][version] = 1.0-rc4
projects[panopoly_wysiwyg][subdir] = contrib/panopoly

projects[panopoly_search][version] = 1.x-dev
projects[panopoly_search][subdir] = contrib/panopoly
projects[panopoly_search][download][type] = git
projects[panopoly_search][download][revision] = 3900b8a
projects[panopoly_search][download][branch] = 7.x-1.x

; Bootstrap Framework

projects[kalatheme][version] = 1.0-rc4
projects[kalatheme][type] = theme

libraries[bootstrap][download][type] = get
libraries[bootstrap][download][url] = https://github.com/kalamuna/asu_bootlibrary/archive/v2.3.0.zip

; Need 2.1 for Kalatheme RC4 - take this out when we move to Panopoly RC4

projects[libraries][version] = 2.1
projects[libraries][subdir] = contrib

; Asu cas - omitted for not downloading correctly i.e. drush make gives an error

;projects[asu_cas][version] = 1.x-dev
;projects[asu_cas][subdir] = custom
;projects[asu_cas][download][type] = git
;projects[asu_cas][download][revision] = 70a7c50
;projects[asu_cas][download][branch] = 7.x-1.x
;projects[asu_cas][download][url] = https://github.com/kalamuna/asu_cas.git

; Asu cas - omitted for not downloading correctly i.e. drush make gives an error

;projects[openasu_bootstrap][version] = 1.x-dev
;projects[openasu_bootstrap][type] = theme
;projects[openasu_bootstrap][download][type] = git
;projects[openasu_bootstrap][download][revision] = 6aae928
;projects[openasu_bootstrap][download][branch] = 7.x-1.x
;projects[openasu_bootstrap][download][url] = https://github.com/kalamuna/openasu_bootstrap.git

; Radix
  
  projects[radix_core][type] = module
  projects[radix_core][download][type] = git
  projects[radix_core][download][revision] = 5a63a93
  projects[radix_core][download][branch] = 7.x-1.x
  projects[radix_core][subdir] = contrib
  
 ; Restaurant
  
;  projects[restaurant_base][type] = module
;  projects[restaurant_base][download][type] = git
;  projects[restaurant_base][download][revision] = 7d0e0ed
;  projects[restaurant_base][download][branch] = 7.x-1.x
;  projects[restaurant_base][subdir] = contrib/restaurant
;  
;  projects[restaurant_theme][type] = module
;  projects[restaurant_theme][download][type] = git
;  projects[restaurant_theme][download][revision] = a80d5c0
;  projects[restaurant_theme][download][branch] = 7.x-1.x
;  projects[restaurant_theme][subdir] = contrib/restaurant
;  
;  projects[restaurant_admin][type] = module
;  projects[restaurant_admin][download][type] = git
;  projects[restaurant_admin][download][revision] = 4aa2564
;  projects[restaurant_admin][download][branch] = 7.x-1.x
;  projects[restaurant_admin][subdir] = contrib/restaurant
;  
;  projects[restaurant_plugins][type] = module
;  projects[restaurant_plugins][download][type] = git
;  projects[restaurant_plugins][download][revision] = ebc5ca2
;  projects[restaurant_plugins][download][branch] = 7.x-1.x
;  projects[restaurant_plugins][subdir] = contrib/restaurant
  
  ; Restaurant Apps
  
;  projects[restaurant_menu][type] = module
;  projects[restaurant_menu][download][type] = git
;  projects[restaurant_menu][download][revision] = aa23364
;  projects[restaurant_menu][download][branch] = 7.x-1.x
;  projects[restaurant_menu][subdir] = contrib/restaurant
;  
;  projects[restaurant_blog][type] = module
;  projects[restaurant_blog][download][type] = git
;  projects[restaurant_blog][download][revision] = 73aecb6
;  projects[restaurant_blog][download][branch] = 7.x-1.x
;  projects[restaurant_blog][subdir] = contrib/restaurant
;  
;  projects[restaurant_slideshow][type] = module
;  projects[restaurant_slideshow][download][type] = git
;  projects[restaurant_slideshow][download][revision] = 13d73f7
;  projects[restaurant_slideshow][download][branch] = 7.x-1.x
;  projects[restaurant_slideshow][subdir] = contrib/restaurant
;  
;  projects[restaurant_pages][type] = module
;  projects[restaurant_pages][download][type] = git
;  projects[restaurant_pages][download][revision] = 4e22eba
;  projects[restaurant_pages][download][branch] = 7.x-1.x
;  projects[restaurant_pages][subdir] = contrib/restaurant

; Themes

projects[omega][type] = theme
projects[omega][subdir] = contrib
projects[tweme][type] = theme
projects[tweme][subdir] = contrib





