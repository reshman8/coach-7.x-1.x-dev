core = 7.x
api = 2 

; Core latest stable release
;projects[] = drupal

; Core specific release
projects[drupal][type] = core
projects[drupal][version] = 7.22

; Core latest dev
;projects[drupal][type] = core
;projects[drupal][version] = 7.x-dev

;Install profile
projects[mm][type] = profile
projects[mm][download][type] = git
projects[mm][download][url] = https://github.com/maustyle/coach-7.x-1.x-dev.git

;this one triggers the D7-dev betas!
;projects[mm][download][revision] = aaaa5f0


; this one reverts Aegir changes for 1.5 Beta1 release

;projects[mm][download][revision] = a400af26d4b96c212c6e0163b4058c6279a01e73
