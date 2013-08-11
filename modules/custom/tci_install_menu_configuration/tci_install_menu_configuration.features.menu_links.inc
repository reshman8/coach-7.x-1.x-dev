<?php
/**
 * @file
 * tci_install_menu_configuration.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function tci_install_menu_configuration_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:blog
  $menu_links['main-menu:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'News',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: management:admin/structure/menu-position
  $menu_links['management:admin/structure/menu-position'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu-position',
    'router_path' => 'admin/structure/menu-position',
    'link_title' => 'Menu position rules',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure rules for menu positions.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: menu-contact-us:node/44
  $menu_links['menu-contact-us:node/44'] = array(
    'menu_name' => 'menu-contact-us',
    'link_path' => 'node/44',
    'router_path' => 'node/%',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-tci-menu-coaching-resources:node/33
  $menu_links['menu-tci-menu-coaching-resources:node/33'] = array(
    'menu_name' => 'menu-tci-menu-coaching-resources',
    'link_path' => 'node/33',
    'router_path' => 'node/%',
    'link_title' => 'Articles',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-tci-menu-coaching-resources:node/34
  $menu_links['menu-tci-menu-coaching-resources:node/34'] = array(
    'menu_name' => 'menu-tci-menu-coaching-resources',
    'link_path' => 'node/34',
    'router_path' => 'node/%',
    'link_title' => 'Tools',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-tci-menu-current-students:node/10
  $menu_links['menu-tci-menu-current-students:node/10'] = array(
    'menu_name' => 'menu-tci-menu-current-students',
    'link_path' => 'node/10',
    'router_path' => 'node/%',
    'link_title' => 'Community',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-tci-menu-current-students:node/12
  $menu_links['menu-tci-menu-current-students:node/12'] = array(
    'menu_name' => 'menu-tci-menu-current-students',
    'link_path' => 'node/12',
    'router_path' => 'node/%',
    'link_title' => 'Trainings',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: menu-tci-menu-current-students:node/31
  $menu_links['menu-tci-menu-current-students:node/31'] = array(
    'menu_name' => 'menu-tci-menu-current-students',
    'link_path' => 'node/31',
    'router_path' => 'node/%',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-tci-menu-current-students:node/32
  $menu_links['menu-tci-menu-current-students:node/32'] = array(
    'menu_name' => 'menu-tci-menu-current-students',
    'link_path' => 'node/32',
    'router_path' => 'node/%',
    'link_title' => 'Calendar',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'node/12',
  );
  // Exported menu link: menu-tci-menu-get-to-know-us:node/35
  $menu_links['menu-tci-menu-get-to-know-us:node/35'] = array(
    'menu_name' => 'menu-tci-menu-get-to-know-us',
    'link_path' => 'node/35',
    'router_path' => 'node/%',
    'link_title' => 'Our Story',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-tci-menu-get-to-know-us:node/36
  $menu_links['menu-tci-menu-get-to-know-us:node/36'] = array(
    'menu_name' => 'menu-tci-menu-get-to-know-us',
    'link_path' => 'node/36',
    'router_path' => 'node/%',
    'link_title' => 'Our Culture',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-tci-menu-get-to-know-us:node/37
  $menu_links['menu-tci-menu-get-to-know-us:node/37'] = array(
    'menu_name' => 'menu-tci-menu-get-to-know-us',
    'link_path' => 'node/37',
    'router_path' => 'node/%',
    'link_title' => 'Our Team',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-tci-menu-get-to-know-us:node/38
  $menu_links['menu-tci-menu-get-to-know-us:node/38'] = array(
    'menu_name' => 'menu-tci-menu-get-to-know-us',
    'link_path' => 'node/38',
    'router_path' => 'node/%',
    'link_title' => 'Accreditations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: menu-tci-menu-get-to-know-us:node/39
  $menu_links['menu-tci-menu-get-to-know-us:node/39'] = array(
    'menu_name' => 'menu-tci-menu-get-to-know-us',
    'link_path' => 'node/39',
    'router_path' => 'node/%',
    'link_title' => 'TCI Foundation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
  );
  // Exported menu link: menu-tci-menu-get-to-know-us:node/40
  $menu_links['menu-tci-menu-get-to-know-us:node/40'] = array(
    'menu_name' => 'menu-tci-menu-get-to-know-us',
    'link_path' => 'node/40',
    'router_path' => 'node/%',
    'link_title' => 'Founder',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'node/37',
  );
  // Exported menu link: menu-tci-menu-get-to-know-us:node/41
  $menu_links['menu-tci-menu-get-to-know-us:node/41'] = array(
    'menu_name' => 'menu-tci-menu-get-to-know-us',
    'link_path' => 'node/41',
    'router_path' => 'node/%',
    'link_title' => 'Mentors',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'node/37',
  );
  // Exported menu link: menu-tci-menu-get-to-know-us:node/42
  $menu_links['menu-tci-menu-get-to-know-us:node/42'] = array(
    'menu_name' => 'menu-tci-menu-get-to-know-us',
    'link_path' => 'node/42',
    'router_path' => 'node/%',
    'link_title' => 'Facilitators',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'node/37',
  );
  // Exported menu link: menu-tci-menu-get-to-know-us:node/43
  $menu_links['menu-tci-menu-get-to-know-us:node/43'] = array(
    'menu_name' => 'menu-tci-menu-get-to-know-us',
    'link_path' => 'node/43',
    'router_path' => 'node/%',
    'link_title' => 'Join Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'node/37',
  );
  // Exported menu link: menu-tci-menu-life-coaching:blog
  $menu_links['menu-tci-menu-life-coaching:blog'] = array(
    'menu_name' => 'menu-tci-menu-life-coaching',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'node/23',
  );
  // Exported menu link: menu-tci-menu-life-coaching:menu-position/5
  $menu_links['menu-tci-menu-life-coaching:menu-position/5'] = array(
    'menu_name' => 'menu-tci-menu-life-coaching',
    'link_path' => 'menu-position/5',
    'router_path' => 'menu-position/%',
    'link_title' => 'BLog rule (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
    ),
    'module' => 'menu_position',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'blog',
  );
  // Exported menu link: menu-tci-menu-life-coaching:node/1
  $menu_links['menu-tci-menu-life-coaching:node/1'] = array(
    'menu_name' => 'menu-tci-menu-life-coaching',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Life Coaching',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-tci-menu-life-coaching:node/13
  $menu_links['menu-tci-menu-life-coaching:node/13'] = array(
    'menu_name' => 'menu-tci-menu-life-coaching',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'Meta Dynamics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-tci-menu-life-coaching:node/14
  $menu_links['menu-tci-menu-life-coaching:node/14'] = array(
    'menu_name' => 'menu-tci-menu-life-coaching',
    'link_path' => 'node/14',
    'router_path' => 'node/%',
    'link_title' => 'What Is NLP?',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'node/13',
  );
  // Exported menu link: menu-tci-menu-life-coaching:node/15
  $menu_links['menu-tci-menu-life-coaching:node/15'] = array(
    'menu_name' => 'menu-tci-menu-life-coaching',
    'link_path' => 'node/15',
    'router_path' => 'node/%',
    'link_title' => 'The Meta Dynamics Methodology',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'node/13',
  );
  // Exported menu link: menu-tci-menu-life-coaching:node/16
  $menu_links['menu-tci-menu-life-coaching:node/16'] = array(
    'menu_name' => 'menu-tci-menu-life-coaching',
    'link_path' => 'node/16',
    'router_path' => 'node/%',
    'link_title' => 'Courses',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-tci-menu-life-coaching:node/17
  $menu_links['menu-tci-menu-life-coaching:node/17'] = array(
    'menu_name' => 'menu-tci-menu-life-coaching',
    'link_path' => 'node/17',
    'router_path' => 'node/%',
    'link_title' => 'Practitioner Of Life Coaching',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'node/16',
  );
  // Exported menu link: menu-tci-menu-life-coaching:node/18
  $menu_links['menu-tci-menu-life-coaching:node/18'] = array(
    'menu_name' => 'menu-tci-menu-life-coaching',
    'link_path' => 'node/18',
    'router_path' => 'node/%',
    'link_title' => 'Advanced Practitioner Of Life Coaching',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'node/16',
  );
  // Exported menu link: menu-tci-menu-life-coaching:node/19
  $menu_links['menu-tci-menu-life-coaching:node/19'] = array(
    'menu_name' => 'menu-tci-menu-life-coaching',
    'link_path' => 'node/19',
    'router_path' => 'node/%',
    'link_title' => 'Master Practitioner Of Life Coaching',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'node/16',
  );
  // Exported menu link: menu-tci-menu-life-coaching:node/2
  $menu_links['menu-tci-menu-life-coaching:node/2'] = array(
    'menu_name' => 'menu-tci-menu-life-coaching',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'What Is Life Coaching',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'node/1',
  );
  // Exported menu link: menu-tci-menu-life-coaching:node/20
  $menu_links['menu-tci-menu-life-coaching:node/20'] = array(
    'menu_name' => 'menu-tci-menu-life-coaching',
    'link_path' => 'node/20',
    'router_path' => 'node/%',
    'link_title' => 'Meta Dynamics Certified Practitioner',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'node/16',
  );
  // Exported menu link: menu-tci-menu-life-coaching:node/21
  $menu_links['menu-tci-menu-life-coaching:node/21'] = array(
    'menu_name' => 'menu-tci-menu-life-coaching',
    'link_path' => 'node/21',
    'router_path' => 'node/%',
    'link_title' => 'Thought Dynamics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_path' => 'node/16',
  );
  // Exported menu link: menu-tci-menu-life-coaching:node/22
  $menu_links['menu-tci-menu-life-coaching:node/22'] = array(
    'menu_name' => 'menu-tci-menu-life-coaching',
    'link_path' => 'node/22',
    'router_path' => 'node/%',
    'link_title' => 'Enrol Now',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'parent_path' => 'node/16',
  );
  // Exported menu link: menu-tci-menu-life-coaching:node/23
  $menu_links['menu-tci-menu-life-coaching:node/23'] = array(
    'menu_name' => 'menu-tci-menu-life-coaching',
    'link_path' => 'node/23',
    'router_path' => 'node/%',
    'link_title' => 'Life@TCI',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: menu-tci-menu-life-coaching:node/24
  $menu_links['menu-tci-menu-life-coaching:node/24'] = array(
    'menu_name' => 'menu-tci-menu-life-coaching',
    'link_path' => 'node/24',
    'router_path' => 'node/%',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'node/23',
  );
  // Exported menu link: menu-tci-menu-life-coaching:node/25
  $menu_links['menu-tci-menu-life-coaching:node/25'] = array(
    'menu_name' => 'menu-tci-menu-life-coaching',
    'link_path' => 'node/25',
    'router_path' => 'node/%',
    'link_title' => 'Design Your Life',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'node/24',
  );
  // Exported menu link: menu-tci-menu-life-coaching:node/26
  $menu_links['menu-tci-menu-life-coaching:node/26'] = array(
    'menu_name' => 'menu-tci-menu-life-coaching',
    'link_path' => 'node/26',
    'router_path' => 'node/%',
    'link_title' => 'Personal Power',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'node/24',
  );
  // Exported menu link: menu-tci-menu-life-coaching:node/27
  $menu_links['menu-tci-menu-life-coaching:node/27'] = array(
    'menu_name' => 'menu-tci-menu-life-coaching',
    'link_path' => 'node/27',
    'router_path' => 'node/%',
    'link_title' => 'Coach & Connect',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'node/24',
  );
  // Exported menu link: menu-tci-menu-life-coaching:node/28
  $menu_links['menu-tci-menu-life-coaching:node/28'] = array(
    'menu_name' => 'menu-tci-menu-life-coaching',
    'link_path' => 'node/28',
    'router_path' => 'node/%',
    'link_title' => 'Success Stories',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'node/23',
  );
  // Exported menu link: menu-tci-menu-life-coaching:node/29
  $menu_links['menu-tci-menu-life-coaching:node/29'] = array(
    'menu_name' => 'menu-tci-menu-life-coaching',
    'link_path' => 'node/29',
    'router_path' => 'node/%',
    'link_title' => 'FAQ\'s',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'node/23',
  );
  // Exported menu link: menu-tci-menu-life-coaching:node/3
  $menu_links['menu-tci-menu-life-coaching:node/3'] = array(
    'menu_name' => 'menu-tci-menu-life-coaching',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Is Life Coaching For Me? Quiz',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'node/1',
  );
  // Exported menu link: menu-tci-menu-life-coaching:node/4
  $menu_links['menu-tci-menu-life-coaching:node/4'] = array(
    'menu_name' => 'menu-tci-menu-life-coaching',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Free \'Getting Started As A Life Coach\' Gift Pack',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'node/1',
  );
  // Exported menu link: menu-tci-menu-life-coaching:node/45
  $menu_links['menu-tci-menu-life-coaching:node/45'] = array(
    'menu_name' => 'menu-tci-menu-life-coaching',
    'link_path' => 'node/45',
    'router_path' => 'node/%',
    'link_title' => 'Event Testimonials',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'node/28',
  );
  // Exported menu link: menu-tci-menu-life-coaching:node/46
  $menu_links['menu-tci-menu-life-coaching:node/46'] = array(
    'menu_name' => 'menu-tci-menu-life-coaching',
    'link_path' => 'node/46',
    'router_path' => 'node/%',
    'link_title' => 'Student Testimonials',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'node/28',
  );
  // Exported menu link: menu-tci-menu-life-coaching:node/48
  $menu_links['menu-tci-menu-life-coaching:node/48'] = array(
    'menu_name' => 'menu-tci-menu-life-coaching',
    'link_path' => 'node/48',
    'router_path' => 'node/%',
    'link_title' => 'DEV - Life Coaching',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: menu-top-menu:menu-position/6
  $menu_links['menu-top-menu:menu-position/6'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'menu-position/6',
    'router_path' => 'menu-position/%',
    'link_title' => 'Blog rule 2 (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
    ),
    'module' => 'menu_position',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/1',
  );
  // Exported menu link: menu-top-menu:node/1
  $menu_links['menu-top-menu:node/1'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Future Students',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-top-menu:node/47
  $menu_links['menu-top-menu:node/47'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'node/47',
    'router_path' => 'node/%',
    'link_title' => 'Current Students',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-top-menu:node/6
  $menu_links['menu-top-menu:node/6'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'node/6',
    'router_path' => 'node/%',
    'link_title' => 'Current Students - obsolete',
    'options' => array(
      'attributes' => array(
        'title' => 'this branch is made with the wrong content type',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-top-menu:node/7
  $menu_links['menu-top-menu:node/7'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'Coaching Resources',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: menu-top-menu:node/8
  $menu_links['menu-top-menu:node/8'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'node/8',
    'router_path' => 'node/%',
    'link_title' => 'Get To Know Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
  );
  // Exported menu link: user-menu:user
  $menu_links['user-menu:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
  );
  // Exported menu link: user-menu:user/login
  $menu_links['user-menu:user/login'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Log in',
    'options' => array(),
    'module' => 'system',
    'hidden' => -1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'user',
  );
  // Exported menu link: user-menu:user/logout
  $menu_links['user-menu:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Accreditations');
  t('Advanced Practitioner Of Life Coaching');
  t('Articles');
  t('BLog rule (menu position rule)');
  t('Blog');
  t('Blog rule 2 (menu position rule)');
  t('Calendar');
  t('Coach & Connect');
  t('Coaching Resources');
  t('Community');
  t('Contact Us');
  t('Courses');
  t('Current Students');
  t('Current Students - obsolete');
  t('DEV - Life Coaching');
  t('Design Your Life');
  t('Enrol Now');
  t('Event Testimonials');
  t('Events');
  t('FAQ\'s');
  t('Facilitators');
  t('Founder');
  t('Free \'Getting Started As A Life Coach\' Gift Pack');
  t('Future Students');
  t('Get To Know Us');
  t('Is Life Coaching For Me? Quiz');
  t('Join Us');
  t('Life Coaching');
  t('Life@TCI');
  t('Log in');
  t('Log out');
  t('Login');
  t('Master Practitioner Of Life Coaching');
  t('Mentors');
  t('Menu position rules');
  t('Meta Dynamics');
  t('Meta Dynamics Certified Practitioner');
  t('News');
  t('Our Culture');
  t('Our Story');
  t('Our Team');
  t('Personal Power');
  t('Practitioner Of Life Coaching');
  t('Student Testimonials');
  t('Success Stories');
  t('TCI Foundation');
  t('The Meta Dynamics Methodology');
  t('Thought Dynamics');
  t('Tools');
  t('Trainings');
  t('User account');
  t('What Is Life Coaching');
  t('What Is NLP?');


  return $menu_links;
}
