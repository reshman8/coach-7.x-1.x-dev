core = 7.x
api = 2 

;Core
;projects[drupal][type] = core
;projects[drupal][version] = 7.18

; Core latest
;projects[] = drupal

; Core latest dev
projects[drupal][type] = core
projects[drupal][version] = 7.x-dev

;Install profile
projects[mm][type] = profile
projects[mm][download][type] = git
projects[mm][download][url] = https://github.com/maustyle/coach-7.x-1.x-dev.git

;this one triggers the D7-dev betas!
;projects[mm][download][revision] = aaaa5f0

;projects[mm][download][branch] = 7.x-1.0