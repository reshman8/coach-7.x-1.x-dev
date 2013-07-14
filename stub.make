core = 7.x
api = 2 

;Core
projects[drupal][type] = core
projects[drupal][version] = 7.22

;Install profile
projects[mm][type] = profile
projects[mm][download][type] = git
projects[mm][download][url] = "https://github.com/maustyle/tci-7-x-v2-3.git"  

; Panopoly
projects[panopoly][type] = profile 
projects[panopoly][download][type] = git
projects[panopoly][download][branch] = 7.x-1.x