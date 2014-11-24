<?php
/*
  Preprocess
*/


function refills2_breadcrumb($vars) {
  $breadcrumb = $vars['breadcrumb'];
  if (!empty($breadcrumb)) {
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';
    $output .= '<div class="breadcrumb">' . implode('', $breadcrumb) . '</div>';
    return $output;
  }
}
/*
function refills2_preprocess_html(&$vars) {
  //  kpr($vars['content']);
}
*/

function refills2_preprocess_page(&$vars,$hook) {

  //googlefont
  drupal_add_css('//fonts.googleapis.com/css?family=Questrial','external');
  drupal_add_css('//fonts.googleapis.com/css?family=Sanchez:400italic,400','external');

}

/*
function refills2_preprocess_region(&$vars,$hook) {
  //  kpr($vars['content']);
}
*/
/*
function refills2_preprocess_block(&$vars, $hook) {
  //  kpr($vars['content']);

  //lets look for unique block in a region $region-$blockcreator-$delta
   $block =
   $vars['elements']['#block']->region .'-'.
   $vars['elements']['#block']->module .'-'.
   $vars['elements']['#block']->delta;

  // print $block .' ';
   switch ($block) {
     case 'header-menu_block-2':
       $vars['classes_array'][] = '';
       break;
     case 'sidebar-system-navigation':
       $vars['classes_array'][] = '';
       break;
    default:

    break;

   }


  switch ($vars['elements']['#block']->region) {
    case 'header':
      $vars['classes_array'][] = '';
      break;
    case 'sidebar':
      $vars['classes_array'][] = '';
      $vars['classes_array'][] = '';
      break;
    default:

      break;
  }

}
*/
/*
function refills2_preprocess_node(&$vars,$hook) {
  //  kpr($vars['content']);

  // add a nodeblock
  // in .info define a region : regions[block_in_a_node] = block_in_a_node
  // in node.tpl  <?php if($noderegion){ ?> <?php print render($noderegion); ?><?php } ?>
  //$vars['block_in_a_node'] = block_get_blocks_by_region('block_in_a_node');
}
*/
/*
function refills2_preprocess_comment(&$vars,$hook) {
  //  kpr($vars['content']);
}
*/
/*
function refills2_preprocess_field(&$vars,$hook) {
  //  kpr($vars['content']);
  //add class to a specific field
  switch ($vars['element']['#field_name']) {
    case 'field_ROCK':
      $vars['classes_array'][] = 'classname1';
    case 'field_ROLL':
      $vars['classes_array'][] = 'classname1';
      $vars['classes_array'][] = 'classname2';
      $vars['classes_array'][] = 'classname1';
    case 'field_FOO':
      $vars['classes_array'][] = 'classname1';
    case 'field_BAR':
      $vars['classes_array'][] = 'classname1';
    default:
      break;
  }

}
*/
/*
function refills2_preprocess_maintenance_page(){
  //  kpr($vars['content']);
}
*/

function refills2_form_search_block_form_alter(&$form, &$form_state, $form_id) {
  $form['actions']['submit'] = array('#type' => 'image_button', '#src' => 'https://raw.githubusercontent.com/thoughtbot/refills/master/source/images/search-icon.png');
}


