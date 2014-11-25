<?php
/**
 * @file
 * new_base.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function new_base_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_compression_type';
  $strongarm->value = 'min';
  $export['jquery_update_compression_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_admin_version';
  $strongarm->value = '1.5';
  $export['jquery_update_jquery_admin_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_cdn';
  $strongarm->value = 'none';
  $export['jquery_update_jquery_cdn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.10';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_allthemes';
  $strongarm->value = 0;
  $export['themekey_allthemes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_attributes';
  $strongarm->value = array(
    'drupal:base_path' => array(
      'description' => 'Drupal: Base path - If Drupal is installed in a subdirectory, the base path will be \'/[subdirectory]/\', otherwise just \'/\'.',
      'page cache' => 1,
    ),
    'drupal:get_q' => array(
      'description' => 'Drupal: $_GET[\'q\'] - Current value of Drupal\'s query parameter "q"',
      'validator' => '',
      'page cache' => 1,
    ),
    'drupal:is_front_page' => array(
      'description' => 'Drupal: Is front page - \'true\' if current page is front page, otherwise just \'false\'.',
      'validator' => 'themekey_validator_string_boolean',
      'page cache' => 1,
    ),
    'drupal:path' => array(
      'description' => 'Drupal: Drupal path like "node/add/story" or path alias with support for wildcards.<br />
Query parameters are stripped off before the path gets examined. P.e. "node/add/story?destination=node" becomes "node/add/story" first. If you want to access query parameters, have a look at the <strong>system:query_param</strong> property.<br />
Wildcard characters are "#" for numeric parts and "%" for all characters. To match conditions against a certain part, use an identifier with the wildcard. For example "comment/reply/#xyz" matches all paths with "comment/reply" and a numeric third argument. You can then specify conditions for every wildcard argument using the property "drupal:path:wildcard" and the identifier you choose ("xyz" in this example).<br />
These are the possible wildcard replacements for foo/bar/42/test.html:<pre>
foo/bar/42/test.html
foo/bar/42/%
foo/bar/42
foo/bar/%/test.html
foo/bar/%/%
foo/bar/%
foo/bar/#/test.html
foo/bar/#/%
foo/bar/#
foo/bar
foo/%/42/test.html
foo/%/42/%
foo/%/42
foo/%/%/test.html
foo/%/%/%
foo/%/%
foo/%/#/test.html
foo/%/#/%
foo/%/#
foo/%
foo
%/bar/42/test.html
%/bar/42/%
%/bar/42
%/bar/%/test.html
%/bar/%/%
%/bar/%
%/bar/#/test.html
%/bar/#/%
%/bar/#
%/bar
%/%/42/test.html
%/%/42/%
%/%/42
%/%/%/test.html
%/%/%/%
%/%/%
%/%/#/test.html
%/%/#/%
%/%/#
%/%
%
</pre>',
      'validator' => 'themekey_validator_drupal_path',
      'page cache' => 1,
    ),
    'drupal:path:wildcard' => array(
      'description' => 'Wildcard of "drupal:path". See explanation of "drupal:path" for details.',
      'validator' => 'themekey_validator_wildcard',
      'page cache' => 1,
    ),
    'drupal:path_is_admin' => array(
      'description' => 'Drupal: Path is admin - \'true\' if current page\'s path belongs to the admin section, otherwise just \'false\'.',
      'validator' => 'themekey_validator_string_boolean',
      'page cache' => 1,
    ),
    'node:body_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">body</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:body_summary' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">summary</em> of the field <em class="placeholder">body</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:body_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">body</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:changed' => array(
      'description' => 'Node: Changed date - The date when the node was last edited/updated, formatted as unix timestamp like "1248873565".',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'node:changed_date' => array(
      'description' => 'Node: Changed date - The date without the time when the node was last edited/updated, formatted like "2009-12-24"',
      'validator' => 'themekey_validator_date',
      'page cache' => 1,
    ),
    'node:changed_date_time' => array(
      'description' => 'Node: Changed date - The date including the time when the node was last edited/updated, formatted like "2009-12-24 18:13:24"',
      'validator' => 'themekey_validator_date_time',
      'page cache' => 1,
    ),
    'node:created' => array(
      'description' => 'Node: Created date - The date when the node was created, formatted as unix timestamp like "1248873565".',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'node:created_date' => array(
      'description' => 'Node: Created date - The date without the time when the node was created, formatted like "2009-12-24"',
      'validator' => 'themekey_validator_date',
      'page cache' => 1,
    ),
    'node:created_date_time' => array(
      'description' => 'Node: Created date - The date including the time when the node was created, formatted like "2009-12-24 18:13:24"',
      'validator' => 'themekey_validator_date_time',
      'page cache' => 1,
    ),
    'node:field_background_image_alt' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">alt</em> of the field <em class="placeholder">field_background_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_background_image_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_background_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_background_image_height' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">height</em> of the field <em class="placeholder">field_background_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_background_image_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_background_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_background_image_width' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">width</em> of the field <em class="placeholder">field_background_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_call_to_action_attributes' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">attributes</em> of the field <em class="placeholder">field_call_to_action</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_call_to_action_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_call_to_action</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_call_to_action_url' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">url</em> of the field <em class="placeholder">field_call_to_action</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_hero_primary_text_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_hero_primary_text</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_hero_primary_text_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_hero_primary_text</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_hero_secondary_text_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_hero_secondary_text</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_hero_secondary_text_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_hero_secondary_text</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_icon_image_alt' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">alt</em> of the field <em class="placeholder">field_icon_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_icon_image_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_icon_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_icon_image_height' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">height</em> of the field <em class="placeholder">field_icon_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_icon_image_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_icon_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_icon_image_width' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">width</em> of the field <em class="placeholder">field_icon_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_news_body_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_news_body</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_news_body_summary' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">summary</em> of the field <em class="placeholder">field_news_body</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_news_body_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_news_body</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_news_main_image_alt' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">alt</em> of the field <em class="placeholder">field_news_main_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_news_main_image_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_news_main_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_news_main_image_height' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">height</em> of the field <em class="placeholder">field_news_main_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_news_main_image_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_news_main_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_news_main_image_width' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">width</em> of the field <em class="placeholder">field_news_main_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_small_blurb_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_small_blurb</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_small_blurb_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_small_blurb</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_tags_tid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">tid</em> of the field <em class="placeholder">field_tags</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:language' => array(
      'description' => 'Node: Language - The code of the selected language of a node (formatted like "en" or "de") or "neutral". See <a href="/admin/config/language">admin/config/language</a> for the codes of your enabled languages',
      'validator' => 'themekey_validator_language',
      'page cache' => 1,
    ),
    'node:nid' => array(
      'description' => 'Node: ID - The id of a node (nid), can be found in the URL of the node, "node/23" or "node/23/edit" (23 = nid)',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'node:promote' => array(
      'description' => 'Node: Promoted - If the node is promoted to the front page. Possible values are "0" for true and "1" for false.',
      'validator' => 'themekey_validator_numeric_boolean',
      'page cache' => 1,
    ),
    'node:sticky' => array(
      'description' => 'Node: Sticky - If the node is set "Sticky at top of lists". Possible values are "0" for true and "1" for false.',
      'validator' => 'themekey_validator_numeric_boolean',
      'page cache' => 1,
    ),
    'node:title' => array(
      'description' => 'Node: Title - The title of the node.',
      'page cache' => 1,
    ),
    'node:type' => array(
      'description' => 'Node: Type - The machine-readable content type of the node. See <a href="/admin/structure/types">admin/structure/types</a> for your content types (use column "Type"). Drupal default types are "page" and "story".',
      'validator' => 'themekey_validator_node_type',
      'page cache' => 1,
    ),
    'node:uid' => array(
      'description' => 'Node: User ID - The node author\'s user id (uid). The user id can be found in the URL of the user\'s profile page, "user/23" or "user/23/edit" (23 = uid). See <a href="/admin/user/user/list">admin/user/user/list</a> for your users.',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'node:vid' => array(
      'description' => 'Node: The version id of a node (vid), mostly for internal use within ThemeKey. In most cases it\'s better to use node:nid within your rule chains.',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'overlay:mode' => array(
      'description' => 'Overlay: Mode - The current overlay mode used to show the content. Note: If you add such a rule, the mode \'none\' will not work anymore. That means that different modules won\'t be able to turn off overlay manually. That\'s not an issue for drupal core. See <a href="https://api.drupal.org/api/drupal/modules!overlay!overlay.module/function/overlay_set_mode/7">function overlay_set_mode documentation</a> for details.',
      'validator' => 'themekey_validator_overlay_mode',
      'page cache' => 0,
    ),
    'path:node_alias' => array(
      'description' => 'Path: Node alias - The path alias assigned to a node.',
      'validator' => '',
      'page cache' => 1,
    ),
    'system:cookie' => array(
      'description' => 'System: Cookie - Every single cookie and its value if present will be formatted like \'COOKIE_NAME=COOKIE_VALUE\'',
      'page cache' => 0,
    ),
    'system:date' => array(
      'description' => 'System: Date - Current time formatted as Y-m-d (example: 2009-12-24)',
      'validator' => 'themekey_validator_date',
      'page cache' => 2,
    ),
    'system:date_time' => array(
      'description' => 'System: Date Time - Current time formatted as Y-m-d H:i:s (example: 2009-12-24 18:30:10)',
      'validator' => 'themekey_validator_date_time',
      'page cache' => 2,
    ),
    'system:day_of_month' => array(
      'description' => 'System: Day of Month - Current day of the month formatted as 1 - 31',
      'validator' => 'themekey_validator_day_of_month',
      'page cache' => 2,
    ),
    'system:day_of_week' => array(
      'description' => 'System: Day of Week - Current day of the week formatted as three letters \'Mon\' through \'Sun\'',
      'validator' => 'themekey_validator_day_of_week',
      'page cache' => 2,
    ),
    'system:dummy' => array(
      'description' => 'System: Dummy - Dummy property. Value is always \'dummy\'',
      'page cache' => 1,
    ),
    'system:host' => array(
      'description' => 'System: HTTP_HOST - The hostname/domain of the site without http:// or https://, like "www.drupal.org" or "www.biologis.com"',
      'validator' => 'themekey_validator_http_host',
      'page cache' => 1,
    ),
    'system:http_header' => array(
      'description' => 'System: HTTP Header - Every single HTTP header and its value if present will be formatted like \'HEADER_NAME=HEADER_VALUE\'',
      'page cache' => 0,
    ),
    'system:https' => array(
      'description' => 'System: \'HTTPS\' - Set to \'true\' value if the script was queried through the HTTPS protocol, otherwise \'false\'.',
      'validator' => 'themekey_validator_string_boolean',
      'page cache' => 1,
    ),
    'system:month' => array(
      'description' => 'System: Month - Current month formatted as \'Jan\' through \'Dec\'',
      'validator' => 'themekey_validator_month',
      'page cache' => 2,
    ),
    'system:post' => array(
      'description' => 'System: POST - Every single POST value formatted like \'POST_VARIABLE_NAME=POST_VARIABLE_VALUE\'. Example: form_id=node_form. If the POST value is not a scalar but a complex type like array or object, the resulting string is formatted as \'POST_VARIABLE_NAME\' without a value.',
      'page cache' => 0,
    ),
    'system:query_param' => array(
      'description' => 'System: Query Parameter - Every single query parameter other than \'q\' and its value, if present. Note that values are url decoded. Example: \'?q=node&foo=bar&dummy&filter=tid%3A27\' will cause three entries \'foo=bar\', \'dummy\' and \'filter=tid:27\'. For \'q\', see property drupal:get_q.',
      'page cache' => 1,
    ),
    'system:query_string' => array(
      'description' => 'System: Query String - Complete query string except parameter \'q\'. Example: \'?q=node&foo=bar&dummy&filter=tid%3A27\' will result in \'foo=bar&dummy&filter=tid%3A27\'. For \'q\' see property drupal:get_q.',
      'page cache' => 1,
    ),
    'system:random' => array(
      'description' => 'System: Random - A random value that could be \'0\' or 1\'.',
      'validator' => 'themekey_validator_numeric_boolean',
      'page cache' => 0,
    ),
    'system:referer' => array(
      'description' => 'System: \'HTTP_REFERER\' - The address of the page (if any) which referred the user agent to the current page. This is set by the user agent. Not all user agents will set this, and some provide the ability to modify HTTP_REFERER as a feature. In short, it cannot really be trusted.',
      'page cache' => 0,
    ),
    'system:remote_ip' => array(
      'description' => 'System: \'REMOTE_ADDR\' - The IP address from which the user is viewing the current page.',
      'validator' => 'themekey_validator_ip_address',
      'page cache' => 0,
    ),
    'system:server_ip' => array(
      'description' => 'System: \'SERVER_ADDR\' - The IP address of the server under which the current script is executing.',
      'validator' => 'themekey_validator_ip_address',
      'page cache' => 0,
    ),
    'system:server_name' => array(
      'description' => 'System:  \'SERVER_NAME\' - The name of the server host under which the current script is executing. If the script is running on a virtual host, this will be the value defined for that virtual host.',
      'page cache' => 0,
    ),
    'system:server_port' => array(
      'description' => 'System: \'SERVER_PORT\' - The port on the server machine being used by the web server for communication. For default setups, this will be \'80\'; using SSL, for instance, will change this to whatever your defined secure HTTP port is.',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 0,
    ),
    'system:session' => array(
      'description' => 'System: Session - Every single session parameter and its value, if a value is present and a simple type (string, integer, boolean). Booleans are represented as integers; \'1\' as TRUE and \'0\' as FALSE.',
      'page cache' => 1,
    ),
    'system:time' => array(
      'description' => 'System: Time - Current time formatted as H:i:s (example: 18:30:10)',
      'validator' => 'themekey_validator_time',
      'page cache' => 2,
    ),
    'system:user_agent' => array(
      'description' => 'System: \'HTTP_USER_AGENT\' - Contents of the User-Agent: header from the current request, if there is one. This is a string denoting the user agent which is accessing the page. A typical example is: Mozilla/4.5 [en] (X11; U; Linux 2.2.9 i586).',
      'page cache' => 0,
    ),
    'system:user_browser' => array(
      'description' => 'System: Browser - Information about user\'s browser. Possible values: \'Blazer [VERSION]\', \'Internet Explorer [VERSION]\', \'Internet Explorer Mobile [VERSION]\', \'Mozilla Firefox [VERSION]\', \'Netscape [VERSION]\', \'Google Chrome [VERSION]\', \'Safari [VERSION]\', \'Galeon [VERSION]\', \'Konqueror [VERSION]\', \'Gecko based\', \'Opera [VERSION]\', \'Lynx [VERSION]\', \'Fennec [VERSION]\', \'Maemo [VERSION]\', \'unknown\'',
      'page cache' => 0,
      'deprecated' => TRUE,
      'deprecated message' => 'Property system:user_browser is deprecated. Consider to use one of the new properties ThemeKey provides in combination with <a href="https://drupal.org/project/browscap">Browscap</a>, <a href="https://drupal.org/project/mobile_detect_api">Mobile Detect API</a>, or <a href="https://drupal.org/project/mobile_detect_api">Mobile Detect</a>.',
    ),
    'system:user_browser_simplified' => array(
      'description' => 'System: Browser - Simplified information about user\'s browser. Possible values: \'Blazer\', \'Internet Explorer\', \'Internet Explorer Mobile\', \'Mozilla Firefox\', \'Netscape\', \'Google Chrome\', \'Safari\', \'Galeon\', \'Konqueror\', \'Gecko based\', \'Opera\', \'Lynx\', \'Fennec\', \'Maemo\', \'unknown\'',
      'page cache' => 0,
      'deprecated' => TRUE,
      'deprecated message' => 'Property system:user_browser_simplified is deprecated. Consider to use one of the new properties ThemeKey provides in combination with <a href="https://drupal.org/project/browscap">Browscap</a>, <a href="https://drupal.org/project/mobile_detect_api">Mobile Detect API</a>, or <a href="https://drupal.org/project/mobile_detect_api">Mobile Detect</a>.',
    ),
    'system:user_os' => array(
      'description' => 'System: Operating System - Information about user\'s browser. Possible values: \'Windows XP\', \'Windows Vista\', \'Windows 98\', \'Windows 2000\', \'Windows 2003 server\', \'Windows NT\',  \'Windows ME\', \'Windows CE\', \'Windows ME\', \'Windows Phone\', \'iPhone\', \'iPad\', \'Mac OS X\', \'Macintosh\', \'Linux\', \'Free BSD\', \'Symbian\', \'webOS\', \'Android\', \'Blackberry\', \'unknown\'',
      'page cache' => 0,
      'deprecated' => TRUE,
      'deprecated message' => 'Property system:user_os is deprecated. Consider to use one of the new properties ThemeKey provides in combination with <a href="https://drupal.org/project/browscap">Browscap</a>, <a href="https://drupal.org/project/mobile_detect_api">Mobile Detect API</a>, or <a href="https://drupal.org/project/mobile_detect_api">Mobile Detect</a>.',
    ),
    'system:user_os_simplified' => array(
      'description' => 'System: Operating System - Simplified information about user\'s browser. Possible values: \'Windows\', \'Windows Phone\', \'iPhone\', \'iPad\', \'Mac OS X\', \'Macintosh\', \'Linux\', \'Free BSD\', \'Symbian\', \'webOS\', \'Android\', \'Blackberry\', \'unknown\'',
      'page cache' => 0,
      'deprecated' => TRUE,
      'deprecated message' => 'Property system:user_os_simplified is deprecated. Consider to use one of the new properties ThemeKey provides in combination with <a href="https://drupal.org/project/browscap">Browscap</a>, <a href="https://drupal.org/project/mobile_detect_api">Mobile Detect API</a>, or <a href="https://drupal.org/project/mobile_detect_api">Mobile Detect</a>.',
    ),
    'taxonomy:name' => array(
      'description' => 'Taxonomy: Name - The term name (name) of a taxonomy term without support for translations.',
      'validator' => '',
      'page cache' => 1,
    ),
    'taxonomy:tid' => array(
      'description' => 'Taxonomy: Term - The term id (tid) of a taxonomy term.',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'taxonomy:tid_and_childs' => array(
      'description' => 'Taxonomy: Term and its childs - The term id (tid) of a taxonomy term. If set, all child terms of this term will be used too.',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 0,
    ),
    'taxonomy:vid' => array(
      'description' => 'Taxonomy: Vocabulary - The vocabulary id (vid) of a taxonomy vocabulary. See <a href="/admin/structure/taxonomy">admin/structure/taxonomy</a> for your vocabularies.',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'themekey_ui:author_triggers_theme' => array(
      'description' => 'The property, themekey_ui:author_triggers_theme, could not be selected from the property drop down. You get this static property by activating <a href="/admin/config/user-interface/themekey/settings/ui">Let the user select a theme that will be used to display all content she creates.</a>. Afterwards, you can move the property to any position in the rule chain. When done, it triggers the switch to the theme the author selected in her user profile for own content, a contact form or blog pages.',
      'page cache' => 1,
      'static' => TRUE,
    ),
    'themekey_ui:node_triggers_theme' => array(
      'description' => 'The property, themekey_ui:node_triggers_theme, could not be selected from the property drop-down. You get this static property by activating <a href="/admin/config/user-interface/themekey/settings/ui">Show theme option in create/edit node forms</a>. Afterwards, you can move the property to any position in the rule chain. When done, it triggers the switch to the theme assigned to the current node using ThemeKey UI.',
      'page cache' => 1,
      'static' => TRUE,
    ),
    'user:hostname' => array(
      'description' => 'User: Hostname - The user hostname property which is the IP address of client machine, adjusted for reverse proxy. Text from Drupal bootstrap.inc:
      If Drupal is behind a reverse proxy, we use the X-Forwarded-For header instead of $_SERVER[\'REMOTE_ADDR\'], which would be the IP address of the proxy server, and not the client\'s.',
      'validator' => 'themekey_validator_http_host',
      'page cache' => 0,
    ),
    'user:language' => array(
      'description' => 'User: Language - The language the user has set in the settings of his profile page.
      Format is the language code (for example "en" for English or "de" for German) that can be found on <a href="/admin/config/regional/language/overview">admin/config/regional/language/overview</a>.',
      'validator' => 'themekey_validator_language',
      'page cache' => 1,
    ),
    'user:name' => array(
      'description' => 'User: Name - The username of the user. See <a href="/admin/people/people">admin/people/people</a> for your users.',
      'page cache' => 1,
    ),
    'user:role' => array(
      'description' => 'User: Role - Defined user roles (examples: \'anonymous user\', \'authenticated user\')',
      'validator' => 'themekey_validator_role',
      'page cache' => 1,
    ),
    'user:uid' => array(
      'description' => 'User: ID - The id of the user (uid). The user id can be found in the URL of the users profile page, "user/23" or "user/23/edit" (23 = uid). See <a href="/admin/people/people">admin/people/people</a> for your users.',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'views:human_name' => array(
      'description' => 'Views: Human Name - The (human readable) name of a view',
      'page cache' => 1,
    ),
    'views:machine_name' => array(
      'description' => 'Views: Machine Name - The machine name of a view',
      'page cache' => 1,
    ),
    'views:vid' => array(
      'description' => 'Views: VID - The vid of a view (vid)',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
  );
  $export['themekey_attributes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_cron_page_cache';
  $strongarm->value = 1;
  $export['themekey_cron_page_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_maps';
  $strongarm->value = array(
    0 => array(
      'src' => 'node:nid',
      'dst' => 'node:changed',
      'callback' => 'themekey_node_nid2changed',
    ),
    1 => array(
      'src' => 'node:nid',
      'dst' => 'node:created',
      'callback' => 'themekey_node_nid2created',
    ),
    2 => array(
      'src' => 'node:changed',
      'dst' => 'node:changed_date_time',
      'callback' => 'themekey_node_timestamp2datetime',
    ),
    3 => array(
      'src' => 'node:created',
      'dst' => 'node:created_date_time',
      'callback' => 'themekey_node_timestamp2datetime',
    ),
    4 => array(
      'src' => 'node:changed',
      'dst' => 'node:changed_date',
      'callback' => 'themekey_node_timestamp2date',
    ),
    5 => array(
      'src' => 'node:created',
      'dst' => 'node:created_date',
      'callback' => 'themekey_node_timestamp2date',
    ),
    6 => array(
      'src' => 'node:nid',
      'dst' => 'node:language',
      'callback' => 'themekey_node_nid2language',
    ),
    7 => array(
      'src' => 'node:nid',
      'dst' => 'node:vid',
      'callback' => 'themekey_node_nid2vid',
    ),
    8 => array(
      'src' => 'node:nid',
      'dst' => 'node:promote',
      'callback' => 'themekey_node_nid2promote',
    ),
    9 => array(
      'src' => 'node:nid',
      'dst' => 'node:sticky',
      'callback' => 'themekey_node_nid2sticky',
    ),
    10 => array(
      'src' => 'node:nid',
      'dst' => 'node:type',
      'callback' => 'themekey_node_nid2type',
    ),
    11 => array(
      'src' => 'node:nid',
      'dst' => 'node:uid',
      'callback' => 'themekey_node_nid2uid',
    ),
    12 => array(
      'src' => 'node:nid',
      'dst' => 'node:title',
      'callback' => 'themekey_node_nid2title',
    ),
    13 => array(
      'src' => 'drupal:get_q',
      'dst' => 'node:type',
      'callback' => 'themekey_node_get_q2type',
    ),
    14 => array(
      'src' => 'node:nid',
      'dst' => 'node:body_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'body',
        'type' => 'text_with_summary',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    15 => array(
      'src' => 'node:nid',
      'dst' => 'node:body_summary',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'body',
        'type' => 'text_with_summary',
        'column' => 'summary',
        'translatable' => '0',
      ),
    ),
    16 => array(
      'src' => 'node:nid',
      'dst' => 'node:body_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'body',
        'type' => 'text_with_summary',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    17 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_hero_secondary_text_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_hero_secondary_text',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    18 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_hero_secondary_text_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_hero_secondary_text',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    19 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_call_to_action_url',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_call_to_action',
        'type' => 'link_field',
        'column' => 'url',
        'translatable' => '0',
      ),
    ),
    20 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_call_to_action_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_call_to_action',
        'type' => 'link_field',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    21 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_call_to_action_attributes',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_call_to_action',
        'type' => 'link_field',
        'column' => 'attributes',
        'translatable' => '0',
      ),
    ),
    22 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_background_image_fid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_background_image',
        'type' => 'image',
        'column' => 'fid',
        'translatable' => '0',
      ),
    ),
    23 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_background_image_alt',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_background_image',
        'type' => 'image',
        'column' => 'alt',
        'translatable' => '0',
      ),
    ),
    24 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_background_image_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_background_image',
        'type' => 'image',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    25 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_background_image_width',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_background_image',
        'type' => 'image',
        'column' => 'width',
        'translatable' => '0',
      ),
    ),
    26 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_background_image_height',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_background_image',
        'type' => 'image',
        'column' => 'height',
        'translatable' => '0',
      ),
    ),
    27 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_hero_primary_text_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_hero_primary_text',
        'type' => 'text',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    28 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_hero_primary_text_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_hero_primary_text',
        'type' => 'text',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    29 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_news_body_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_news_body',
        'type' => 'text_with_summary',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    30 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_news_body_summary',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_news_body',
        'type' => 'text_with_summary',
        'column' => 'summary',
        'translatable' => '0',
      ),
    ),
    31 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_news_body_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_news_body',
        'type' => 'text_with_summary',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    32 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_news_main_image_fid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_news_main_image',
        'type' => 'image',
        'column' => 'fid',
        'translatable' => '0',
      ),
    ),
    33 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_news_main_image_alt',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_news_main_image',
        'type' => 'image',
        'column' => 'alt',
        'translatable' => '0',
      ),
    ),
    34 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_news_main_image_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_news_main_image',
        'type' => 'image',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    35 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_news_main_image_width',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_news_main_image',
        'type' => 'image',
        'column' => 'width',
        'translatable' => '0',
      ),
    ),
    36 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_news_main_image_height',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_news_main_image',
        'type' => 'image',
        'column' => 'height',
        'translatable' => '0',
      ),
    ),
    37 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_tags_tid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_tags',
        'type' => 'taxonomy_term_reference',
        'column' => 'tid',
        'translatable' => '0',
      ),
    ),
    38 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_small_blurb_value',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_small_blurb',
        'type' => 'text_long',
        'column' => 'value',
        'translatable' => '0',
      ),
    ),
    39 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_small_blurb_format',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_small_blurb',
        'type' => 'text_long',
        'column' => 'format',
        'translatable' => '0',
      ),
    ),
    40 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_icon_image_fid',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_icon_image',
        'type' => 'image',
        'column' => 'fid',
        'translatable' => '0',
      ),
    ),
    41 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_icon_image_alt',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_icon_image',
        'type' => 'image',
        'column' => 'alt',
        'translatable' => '0',
      ),
    ),
    42 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_icon_image_title',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_icon_image',
        'type' => 'image',
        'column' => 'title',
        'translatable' => '0',
      ),
    ),
    43 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_icon_image_width',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_icon_image',
        'type' => 'image',
        'column' => 'width',
        'translatable' => '0',
      ),
    ),
    44 => array(
      'src' => 'node:nid',
      'dst' => 'node:field_icon_image_height',
      'callback' => 'themekey_node_nid2field_value',
      'args' => array(
        'field_name' => 'field_icon_image',
        'type' => 'image',
        'column' => 'height',
        'translatable' => '0',
      ),
    ),
    45 => array(
      'src' => 'system:dummy',
      'dst' => 'overlay:mode',
      'callback' => 'themekey_overlay_dummy2mode',
    ),
    46 => array(
      'src' => 'node:nid',
      'dst' => 'path:node_alias',
      'callback' => 'themekey_path_nid2alias',
    ),
    47 => array(
      'src' => 'system:dummy',
      'dst' => 'system:query_param',
      'callback' => 'themekey_dummy2query_param',
    ),
    48 => array(
      'src' => 'system:dummy',
      'dst' => 'system:cookie',
      'callback' => 'themekey_dummy2cookie',
    ),
    49 => array(
      'src' => 'system:dummy',
      'dst' => 'system:http_header',
      'callback' => 'themekey_dummy2http_header',
    ),
    50 => array(
      'src' => 'system:dummy',
      'dst' => 'system:post',
      'callback' => 'themekey_dummy2post',
    ),
    51 => array(
      'src' => 'system:dummy',
      'dst' => 'system:query_string',
      'callback' => 'themekey_dummy2query_string',
    ),
    52 => array(
      'src' => 'system:dummy',
      'dst' => 'system:date_time',
      'callback' => 'themekey_dummy2date_time',
    ),
    53 => array(
      'src' => 'system:dummy',
      'dst' => 'system:date',
      'callback' => 'themekey_dummy2date',
    ),
    54 => array(
      'src' => 'system:dummy',
      'dst' => 'system:month',
      'callback' => 'themekey_dummy2month',
    ),
    55 => array(
      'src' => 'system:dummy',
      'dst' => 'system:time',
      'callback' => 'themekey_dummy2time',
    ),
    56 => array(
      'src' => 'system:dummy',
      'dst' => 'system:day_of_week',
      'callback' => 'themekey_dummy2day_of_week',
    ),
    57 => array(
      'src' => 'system:dummy',
      'dst' => 'system:day_of_month',
      'callback' => 'themekey_dummy2day_of_month',
    ),
    58 => array(
      'src' => 'system:dummy',
      'dst' => 'system:user_browser',
      'callback' => 'themekey_dummy2user_browser',
    ),
    59 => array(
      'src' => 'system:dummy',
      'dst' => 'system:user_os',
      'callback' => 'themekey_dummy2user_os',
    ),
    60 => array(
      'src' => 'system:user_browser',
      'dst' => 'system:user_browser_simplified',
      'callback' => 'themekey_user_browser2user_browser_simplified',
    ),
    61 => array(
      'src' => 'system:user_os',
      'dst' => 'system:user_os_simplified',
      'callback' => 'themekey_user_os2user_os_simplified',
    ),
    62 => array(
      'src' => 'system:dummy',
      'dst' => 'system:session',
      'callback' => 'themekey_dummy2session',
    ),
    63 => array(
      'src' => 'taxonomy:tid',
      'dst' => 'taxonomy:vid',
      'callback' => 'themekey_taxonomy_tid2vid',
    ),
    64 => array(
      'src' => 'taxonomy:tid',
      'dst' => 'taxonomy:tid_and_childs',
      'callback' => 'themekey_taxonomy_tid2tid_and_parents',
    ),
    65 => array(
      'src' => 'node:nid',
      'dst' => 'taxonomy:tid',
      'callback' => 'themekey_taxonomy_nid2tid',
    ),
    66 => array(
      'src' => 'taxonomy:tid',
      'dst' => 'taxonomy:name',
      'callback' => 'themekey_taxonomy_tid2name',
    ),
    67 => array(
      'src' => 'profile:uid',
      'dst' => 'themekey_ui:author_triggers_theme',
      'callback' => 'themekey_user_profile2theme',
    ),
    68 => array(
      'src' => 'drupal:get_q',
      'dst' => 'views:vid',
      'callback' => 'themekey_views_getq2vid',
    ),
    69 => array(
      'src' => 'drupal:get_q',
      'dst' => 'views:machine_name',
      'callback' => 'themekey_views_getq2machine_name',
    ),
    70 => array(
      'src' => 'drupal:get_q',
      'dst' => 'views:human_name',
      'callback' => 'themekey_views_getq2human_name',
    ),
    71 => array(
      'src' => 'node:nid',
      'dst' => 'themekey_ui:node_triggers_theme',
      'callback' => 'themekey_ui_nid2theme',
    ),
    72 => array(
      'src' => 'node:nid',
      'dst' => 'themekey_ui:author_triggers_theme',
      'callback' => 'themekey_ui_node_author2theme',
    ),
  );
  $export['themekey_maps'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_modules';
  $strongarm->value = array(
    0 => 'admin_menu',
    1 => 'node',
    2 => 'overlay',
    3 => 'path',
    4 => 'system',
    5 => 'taxonomy',
    6 => 'user',
    7 => 'views',
  );
  $export['themekey_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_paths';
  $strongarm->value = array(
    0 => array(
      'path' => 'node/#/revisions/#/view',
      'callbacks' => array(),
      'wildcards' => array(
        1 => 'node:nid',
        3 => 'node:vid',
      ),
      'weight' => 10,
      'fit' => 21,
    ),
    1 => array(
      'path' => 'taxonomy/term/#',
      'callbacks' => array(),
      'wildcards' => array(
        2 => 'taxonomy:tid',
      ),
      'weight' => 1,
      'fit' => 6,
    ),
    2 => array(
      'path' => 'user/#/edit',
      'callbacks' => array(),
      'wildcards' => array(
        1 => 'profile:uid',
      ),
      'weight' => 2,
      'fit' => 5,
    ),
    3 => array(
      'path' => 'node/#',
      'callbacks' => array(),
      'wildcards' => array(
        1 => 'node:nid',
      ),
      'weight' => 1,
      'fit' => 2,
    ),
    4 => array(
      'path' => 'user/#',
      'callbacks' => array(),
      'wildcards' => array(
        1 => 'profile:uid',
      ),
      'weight' => 1,
      'fit' => 2,
    ),
  );
  $export['themekey_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_path_case_sensitive';
  $strongarm->value = 0;
  $export['themekey_path_case_sensitive'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_properties';
  $strongarm->value = array(
    'drupal:base_path' => 'drupal:base_path',
    'drupal:get_q' => 'drupal:get_q',
    'drupal:is_front_page' => 'drupal:is_front_page',
    'drupal:path' => 'drupal:path',
    'drupal:path:wildcard' => 'drupal:path:wildcard',
    'drupal:path_is_admin' => 'drupal:path_is_admin',
    'node:body_format' => 'node:body_format',
    'node:body_summary' => 'node:body_summary',
    'node:body_value' => 'node:body_value',
    'node:changed' => 'node:changed',
    'node:changed_date' => 'node:changed_date',
    'node:changed_date_time' => 'node:changed_date_time',
    'node:created' => 'node:created',
    'node:created_date' => 'node:created_date',
    'node:created_date_time' => 'node:created_date_time',
    'node:field_background_image_alt' => 'node:field_background_image_alt',
    'node:field_background_image_fid' => 'node:field_background_image_fid',
    'node:field_background_image_height' => 'node:field_background_image_height',
    'node:field_background_image_title' => 'node:field_background_image_title',
    'node:field_background_image_width' => 'node:field_background_image_width',
    'node:field_call_to_action_attributes' => 'node:field_call_to_action_attributes',
    'node:field_call_to_action_title' => 'node:field_call_to_action_title',
    'node:field_call_to_action_url' => 'node:field_call_to_action_url',
    'node:field_hero_primary_text_format' => 'node:field_hero_primary_text_format',
    'node:field_hero_primary_text_value' => 'node:field_hero_primary_text_value',
    'node:field_hero_secondary_text_format' => 'node:field_hero_secondary_text_format',
    'node:field_hero_secondary_text_value' => 'node:field_hero_secondary_text_value',
    'node:field_icon_image_alt' => 'node:field_icon_image_alt',
    'node:field_icon_image_fid' => 'node:field_icon_image_fid',
    'node:field_icon_image_height' => 'node:field_icon_image_height',
    'node:field_icon_image_title' => 'node:field_icon_image_title',
    'node:field_icon_image_width' => 'node:field_icon_image_width',
    'node:field_news_body_format' => 'node:field_news_body_format',
    'node:field_news_body_summary' => 'node:field_news_body_summary',
    'node:field_news_body_value' => 'node:field_news_body_value',
    'node:field_news_main_image_alt' => 'node:field_news_main_image_alt',
    'node:field_news_main_image_fid' => 'node:field_news_main_image_fid',
    'node:field_news_main_image_height' => 'node:field_news_main_image_height',
    'node:field_news_main_image_title' => 'node:field_news_main_image_title',
    'node:field_news_main_image_width' => 'node:field_news_main_image_width',
    'node:field_small_blurb_format' => 'node:field_small_blurb_format',
    'node:field_small_blurb_value' => 'node:field_small_blurb_value',
    'node:field_tags_tid' => 'node:field_tags_tid',
    'node:language' => 'node:language',
    'node:nid' => 'node:nid',
    'node:promote' => 'node:promote',
    'node:sticky' => 'node:sticky',
    'node:title' => 'node:title',
    'node:type' => 'node:type',
    'node:uid' => 'node:uid',
    'node:vid' => 'node:vid',
    'overlay:mode' => 'overlay:mode',
    'path:node_alias' => 'path:node_alias',
    'system:cookie' => 'system:cookie',
    'system:date' => 'system:date',
    'system:date_time' => 'system:date_time',
    'system:day_of_month' => 'system:day_of_month',
    'system:day_of_week' => 'system:day_of_week',
    'system:dummy' => 'system:dummy',
    'system:host' => 'system:host',
    'system:http_header' => 'system:http_header',
    'system:https' => 'system:https',
    'system:month' => 'system:month',
    'system:post' => 'system:post',
    'system:query_param' => 'system:query_param',
    'system:query_string' => 'system:query_string',
    'system:random' => 'system:random',
    'system:referer' => 'system:referer',
    'system:remote_ip' => 'system:remote_ip',
    'system:server_ip' => 'system:server_ip',
    'system:server_name' => 'system:server_name',
    'system:server_port' => 'system:server_port',
    'system:session' => 'system:session',
    'system:time' => 'system:time',
    'system:user_agent' => 'system:user_agent',
    'system:user_browser' => 'system:user_browser',
    'system:user_browser_simplified' => 'system:user_browser_simplified',
    'system:user_os' => 'system:user_os',
    'system:user_os_simplified' => 'system:user_os_simplified',
    'taxonomy:name' => 'taxonomy:name',
    'taxonomy:tid' => 'taxonomy:tid',
    'taxonomy:tid_and_childs' => 'taxonomy:tid_and_childs',
    'taxonomy:vid' => 'taxonomy:vid',
    'user:hostname' => 'user:hostname',
    'user:language' => 'user:language',
    'user:name' => 'user:name',
    'user:role' => 'user:role',
    'user:uid' => 'user:uid',
    'views:human_name' => 'views:human_name',
    'views:machine_name' => 'views:machine_name',
    'views:vid' => 'views:vid',
  );
  $export['themekey_properties'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_theme_maintain';
  $strongarm->value = 1;
  $export['themekey_theme_maintain'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_theme_maintain_anonymous';
  $strongarm->value = 1;
  $export['themekey_theme_maintain_anonymous'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_new_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'default_logo' => 0,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'mothership_poorthemers_helper' => 0,
    'mothership_rebuild_registry' => 1,
    'mothership_test' => 0,
    'mothership_mediaquery_indicator' => 0,
    'mothership_script_place_footer' => 1,
    'mothership_js_onefile' => 0,
    'mothership_js_jquery_latest' => 0,
    'mothership_js_jquerycdn' => 0,
    'mothership_js_jquerycdn_version' => '0',
    'mothership_respondjs' => 0,
    'mothership_modernizr' => 0,
    'mothership_selectivizr' => 0,
    'mothership_js_nuke_module' => 0,
    'mothership_js_nuke_module_contrib' => 0,
    'mothership_js_nuke_misc' => 0,
    'mothership_js_freeform' => '',
    'mothership_css_onefile' => 0,
    'mothership_css_reset' => 0,
    'mothership_css_reset_html5' => 0,
    'mothership_css_normalize' => 1,
    'mothership_css_layout' => 0,
    'mothership_css_default' => 0,
    'mothership_css_mothershipstyles' => 0,
    'mothership_css_nuke_theme' => 0,
    'mothership_css_nuke_admin' => 0,
    'mothership_css_nuke_module_contrib' => 0,
    'mothership_css_nuke_module_all' => 0,
    'mothership_css_nuke_book' => 0,
    'mothership_css_nuke_systemtoolbar' => 0,
    'mothership_css_nuke_system_message' => 0,
    'mothership_css_nuke_system_menus' => 1,
    'mothership_css_nuke_system_theme' => 0,
    'mothership_css_freeform' => '',
    'mothership_classes_body_html' => 1,
    'mothership_classes_body_loggedin' => 1,
    'mothership_classes_body_front' => 0,
    'mothership_classes_body_layout' => 0,
    'mothership_classes_body_toolbar' => 0,
    'mothership_classes_body_pagenode' => 1,
    'mothership_classes_body_nodetype' => 0,
    'mothership_classes_body_path' => 0,
    'mothership_classes_body_path_first' => 0,
    'mothership_classes_body_status' => 0,
    'mothership_classes_body_freeform' => '',
    'mothership_region_wrapper' => 1,
    'mothership_classes_region' => 1,
    'mothership_classes_region_freeform' => '',
    'mothership_classes_block' => 1,
    'mothership_classes_block_id' => 1,
    'mothership_classes_block_id_as_class' => 0,
    'mothership_classes_block_contentdiv' => 1,
    'mothership_classes_block_freeform' => '',
    'mothership_classes_node' => 0,
    'mothership_classes_node_state' => 0,
    'mothership_classes_node_id' => 0,
    'mothership_classes_node_freeform' => '',
    'mothership_classes_node_links_inline' => 0,
    'mothership_classes_node_links_links' => 0,
    'mothership_classes_field_field' => 0,
    'mothership_classes_field_name' => 1,
    'mothership_classes_field_type' => 0,
    'mothership_classes_field_label' => 1,
    'mothership_classes_field_freeform' => '',
    'mothership_classes_form_container_wrapper' => 0,
    'mothership_classes_form_container_type' => 0,
    'mothership_classes_form_container_name' => 0,
    'mothership_classes_form_container_widget' => 0,
    'mothership_classes_form_container_id' => 0,
    'mothership_classes_form_wrapper_formitem' => 1,
    'mothership_classes_form_wrapper_formtype' => 1,
    'mothership_classes_form_wrapper_formname' => 1,
    'mothership_classes_form_freeform' => '',
    'mothership_classes_form_label' => 1,
    'mothership_classes_form_input' => 1,
    'mothership_form_required' => 1,
    'mothership_classes_form_description' => 1,
    'mothership_classes_form_placeholder_label' => 0,
    'mothership_classes_form_placeholder_link' => '',
    'mothership_classes_form_placeholder_email' => '',
    'mothership_classes_menu_items_mlid' => 1,
    'mothership_classes_menu_wrapper' => 1,
    'mothership_classes_menu_items_firstlast' => 1,
    'mothership_classes_menu_items_active' => 0,
    'mothership_classes_menu_collapsed' => 0,
    'mothership_classes_menu_leaf' => 1,
    'mothership_classes_view' => 1,
    'mothership_classes_view_name' => 1,
    'mothership_classes_view_view_id' => 0,
    'mothership_classes_view_row' => 1,
    'mothership_classes_view_row_count' => 1,
    'mothership_classes_view_row_first_last' => 1,
    'mothership_classes_view_row_rename' => 0,
    'panels_seperator' => 1,
    'mothership_classes_state' => 0,
    'mothership_404' => 0,
    'mothership_frontpage_default_message' => 1,
    'mothership_content_block_wrapper' => 1,
    'mothership_goodies_login' => 0,
    'mothership_mobile' => 1,
    'mothership_viewport' => 1,
    'mothership_viewport_maximumscale' => 0,
  );
  $export['theme_new_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_refills2_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'mothership_poorthemers_helper' => 0,
    'mothership_rebuild_registry' => 1,
    'mothership_test' => 0,
    'mothership_mediaquery_indicator' => 0,
    'mothership_script_place_footer' => 1,
    'mothership_js_onefile' => 0,
    'mothership_js_jquery_latest' => 0,
    'mothership_js_jquerycdn' => 0,
    'mothership_js_jquerycdn_version' => '0',
    'mothership_respondjs' => 0,
    'mothership_modernizr' => 0,
    'mothership_selectivizr' => 0,
    'mothership_js_nuke_module' => 0,
    'mothership_js_nuke_module_contrib' => 0,
    'mothership_js_nuke_misc' => 0,
    'mothership_js_freeform' => '',
    'mothership_css_onefile' => 0,
    'mothership_css_reset' => 0,
    'mothership_css_reset_html5' => 0,
    'mothership_css_normalize' => 1,
    'mothership_css_layout' => 0,
    'mothership_css_default' => 0,
    'mothership_css_mothershipstyles' => 0,
    'mothership_css_nuke_theme' => 0,
    'mothership_css_nuke_admin' => 0,
    'mothership_css_nuke_module_contrib' => 0,
    'mothership_css_nuke_module_all' => 0,
    'mothership_css_nuke_book' => 0,
    'mothership_css_nuke_systemtoolbar' => 0,
    'mothership_css_nuke_system_message' => 0,
    'mothership_css_nuke_system_menus' => 1,
    'mothership_css_nuke_system_theme' => 0,
    'mothership_css_freeform' => '',
    'mothership_classes_body_html' => 1,
    'mothership_classes_body_loggedin' => 1,
    'mothership_classes_body_front' => 0,
    'mothership_classes_body_layout' => 0,
    'mothership_classes_body_toolbar' => 0,
    'mothership_classes_body_pagenode' => 1,
    'mothership_classes_body_nodetype' => 0,
    'mothership_classes_body_path' => 0,
    'mothership_classes_body_path_first' => 0,
    'mothership_classes_body_status' => 0,
    'mothership_classes_body_freeform' => '',
    'mothership_region_wrapper' => 1,
    'mothership_classes_region' => 1,
    'mothership_classes_region_freeform' => '',
    'mothership_classes_block' => 1,
    'mothership_classes_block_id' => 1,
    'mothership_classes_block_id_as_class' => 0,
    'mothership_classes_block_contentdiv' => 1,
    'mothership_classes_block_freeform' => '',
    'mothership_classes_node' => 0,
    'mothership_classes_node_state' => 0,
    'mothership_classes_node_id' => 0,
    'mothership_classes_node_freeform' => '',
    'mothership_classes_node_links_inline' => 0,
    'mothership_classes_node_links_links' => 0,
    'mothership_classes_field_field' => 0,
    'mothership_classes_field_name' => 1,
    'mothership_classes_field_type' => 0,
    'mothership_classes_field_label' => 1,
    'mothership_classes_field_freeform' => '',
    'mothership_classes_form_container_wrapper' => 0,
    'mothership_classes_form_container_type' => 0,
    'mothership_classes_form_container_name' => 0,
    'mothership_classes_form_container_widget' => 0,
    'mothership_classes_form_container_id' => 0,
    'mothership_classes_form_wrapper_formitem' => 1,
    'mothership_classes_form_wrapper_formtype' => 1,
    'mothership_classes_form_wrapper_formname' => 1,
    'mothership_classes_form_freeform' => '',
    'mothership_classes_form_label' => 1,
    'mothership_classes_form_input' => 1,
    'mothership_form_required' => 1,
    'mothership_classes_form_description' => 1,
    'mothership_classes_form_placeholder_label' => 0,
    'mothership_classes_form_placeholder_link' => '',
    'mothership_classes_form_placeholder_email' => '',
    'mothership_classes_menu_items_mlid' => 1,
    'mothership_classes_menu_wrapper' => 1,
    'mothership_classes_menu_items_firstlast' => 1,
    'mothership_classes_menu_items_active' => 0,
    'mothership_classes_menu_collapsed' => 0,
    'mothership_classes_menu_leaf' => 1,
    'mothership_classes_view' => 1,
    'mothership_classes_view_name' => 1,
    'mothership_classes_view_view_id' => 0,
    'mothership_classes_view_row' => 1,
    'mothership_classes_view_row_count' => 1,
    'mothership_classes_view_row_first_last' => 1,
    'mothership_classes_view_row_rename' => 0,
    'panels_seperator' => 1,
    'mothership_classes_state' => 0,
    'mothership_404' => 0,
    'mothership_frontpage_default_message' => 1,
    'mothership_content_block_wrapper' => 1,
    'mothership_goodies_login' => 0,
    'mothership_mobile' => 1,
    'mothership_viewport' => 1,
    'mothership_viewport_maximumscale' => 0,
  );
  $export['theme_refills2_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_refills3_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'mothership_poorthemers_helper' => 0,
    'mothership_rebuild_registry' => 1,
    'mothership_test' => 0,
    'mothership_mediaquery_indicator' => 0,
    'mothership_script_place_footer' => 1,
    'mothership_js_onefile' => 0,
    'mothership_js_jquery_latest' => 0,
    'mothership_js_jquerycdn' => 0,
    'mothership_js_jquerycdn_version' => '0',
    'mothership_respondjs' => 0,
    'mothership_modernizr' => 0,
    'mothership_selectivizr' => 0,
    'mothership_js_nuke_module' => 0,
    'mothership_js_nuke_module_contrib' => 0,
    'mothership_js_nuke_misc' => 0,
    'mothership_js_freeform' => '',
    'mothership_css_onefile' => 0,
    'mothership_css_reset' => 0,
    'mothership_css_reset_html5' => 0,
    'mothership_css_normalize' => 1,
    'mothership_css_layout' => 0,
    'mothership_css_default' => 0,
    'mothership_css_mothershipstyles' => 0,
    'mothership_css_nuke_theme' => 0,
    'mothership_css_nuke_admin' => 0,
    'mothership_css_nuke_module_contrib' => 0,
    'mothership_css_nuke_module_all' => 0,
    'mothership_css_nuke_book' => 0,
    'mothership_css_nuke_systemtoolbar' => 0,
    'mothership_css_nuke_system_message' => 0,
    'mothership_css_nuke_system_menus' => 1,
    'mothership_css_nuke_system_theme' => 0,
    'mothership_css_freeform' => '',
    'mothership_classes_body_html' => 1,
    'mothership_classes_body_loggedin' => 1,
    'mothership_classes_body_front' => 0,
    'mothership_classes_body_layout' => 0,
    'mothership_classes_body_toolbar' => 0,
    'mothership_classes_body_pagenode' => 1,
    'mothership_classes_body_nodetype' => 0,
    'mothership_classes_body_path' => 0,
    'mothership_classes_body_path_first' => 0,
    'mothership_classes_body_status' => 0,
    'mothership_classes_body_freeform' => '',
    'mothership_region_wrapper' => 1,
    'mothership_classes_region' => 1,
    'mothership_classes_region_freeform' => '',
    'mothership_classes_block' => 1,
    'mothership_classes_block_id' => 1,
    'mothership_classes_block_id_as_class' => 0,
    'mothership_classes_block_contentdiv' => 1,
    'mothership_classes_block_freeform' => '',
    'mothership_classes_node' => 0,
    'mothership_classes_node_state' => 0,
    'mothership_classes_node_id' => 0,
    'mothership_classes_node_freeform' => '',
    'mothership_classes_node_links_inline' => 0,
    'mothership_classes_node_links_links' => 0,
    'mothership_classes_field_field' => 0,
    'mothership_classes_field_name' => 1,
    'mothership_classes_field_type' => 0,
    'mothership_classes_field_label' => 1,
    'mothership_classes_field_freeform' => '',
    'mothership_classes_form_container_wrapper' => 0,
    'mothership_classes_form_container_type' => 0,
    'mothership_classes_form_container_name' => 0,
    'mothership_classes_form_container_widget' => 0,
    'mothership_classes_form_container_id' => 0,
    'mothership_classes_form_wrapper_formitem' => 1,
    'mothership_classes_form_wrapper_formtype' => 1,
    'mothership_classes_form_wrapper_formname' => 1,
    'mothership_classes_form_freeform' => '',
    'mothership_classes_form_label' => 1,
    'mothership_classes_form_input' => 1,
    'mothership_form_required' => 1,
    'mothership_classes_form_description' => 1,
    'mothership_classes_form_placeholder_label' => 0,
    'mothership_classes_form_placeholder_link' => '',
    'mothership_classes_form_placeholder_email' => '',
    'mothership_classes_menu_items_mlid' => 1,
    'mothership_classes_menu_wrapper' => 1,
    'mothership_classes_menu_items_firstlast' => 1,
    'mothership_classes_menu_items_active' => 0,
    'mothership_classes_menu_collapsed' => 0,
    'mothership_classes_menu_leaf' => 1,
    'mothership_classes_view' => 1,
    'mothership_classes_view_name' => 1,
    'mothership_classes_view_view_id' => 0,
    'mothership_classes_view_row' => 1,
    'mothership_classes_view_row_count' => 1,
    'mothership_classes_view_row_first_last' => 1,
    'mothership_classes_view_row_rename' => 0,
    'panels_seperator' => 1,
    'mothership_classes_state' => 0,
    'mothership_404' => 0,
    'mothership_frontpage_default_message' => 1,
    'mothership_content_block_wrapper' => 1,
    'mothership_goodies_login' => 0,
    'mothership_mobile' => 1,
    'mothership_viewport' => 1,
    'mothership_viewport_maximumscale' => 0,
  );
  $export['theme_refills3_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_refills4_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'mothership_poorthemers_helper' => 0,
    'mothership_rebuild_registry' => 1,
    'mothership_test' => 0,
    'mothership_mediaquery_indicator' => 0,
    'mothership_script_place_footer' => 1,
    'mothership_js_onefile' => 0,
    'mothership_js_jquery_latest' => 0,
    'mothership_js_jquerycdn' => 0,
    'mothership_js_jquerycdn_version' => '0',
    'mothership_respondjs' => 0,
    'mothership_modernizr' => 0,
    'mothership_selectivizr' => 0,
    'mothership_js_nuke_module' => 0,
    'mothership_js_nuke_module_contrib' => 0,
    'mothership_js_nuke_misc' => 0,
    'mothership_js_freeform' => '',
    'mothership_css_onefile' => 0,
    'mothership_css_reset' => 0,
    'mothership_css_reset_html5' => 0,
    'mothership_css_normalize' => 1,
    'mothership_css_layout' => 0,
    'mothership_css_default' => 0,
    'mothership_css_mothershipstyles' => 0,
    'mothership_css_nuke_theme' => 0,
    'mothership_css_nuke_admin' => 0,
    'mothership_css_nuke_module_contrib' => 0,
    'mothership_css_nuke_module_all' => 0,
    'mothership_css_nuke_book' => 0,
    'mothership_css_nuke_systemtoolbar' => 0,
    'mothership_css_nuke_system_message' => 0,
    'mothership_css_nuke_system_menus' => 1,
    'mothership_css_nuke_system_theme' => 0,
    'mothership_css_freeform' => '',
    'mothership_classes_body_html' => 1,
    'mothership_classes_body_loggedin' => 1,
    'mothership_classes_body_front' => 0,
    'mothership_classes_body_layout' => 0,
    'mothership_classes_body_toolbar' => 0,
    'mothership_classes_body_pagenode' => 1,
    'mothership_classes_body_nodetype' => 0,
    'mothership_classes_body_path' => 0,
    'mothership_classes_body_path_first' => 0,
    'mothership_classes_body_status' => 0,
    'mothership_classes_body_freeform' => '',
    'mothership_region_wrapper' => 1,
    'mothership_classes_region' => 1,
    'mothership_classes_region_freeform' => '',
    'mothership_classes_block' => 1,
    'mothership_classes_block_id' => 1,
    'mothership_classes_block_id_as_class' => 0,
    'mothership_classes_block_contentdiv' => 1,
    'mothership_classes_block_freeform' => '',
    'mothership_classes_node' => 0,
    'mothership_classes_node_state' => 0,
    'mothership_classes_node_id' => 0,
    'mothership_classes_node_freeform' => '',
    'mothership_classes_node_links_inline' => 0,
    'mothership_classes_node_links_links' => 0,
    'mothership_classes_field_field' => 0,
    'mothership_classes_field_name' => 1,
    'mothership_classes_field_type' => 0,
    'mothership_classes_field_label' => 1,
    'mothership_classes_field_freeform' => '',
    'mothership_classes_form_container_wrapper' => 0,
    'mothership_classes_form_container_type' => 0,
    'mothership_classes_form_container_name' => 0,
    'mothership_classes_form_container_widget' => 0,
    'mothership_classes_form_container_id' => 0,
    'mothership_classes_form_wrapper_formitem' => 1,
    'mothership_classes_form_wrapper_formtype' => 1,
    'mothership_classes_form_wrapper_formname' => 1,
    'mothership_classes_form_freeform' => '',
    'mothership_classes_form_label' => 1,
    'mothership_classes_form_input' => 1,
    'mothership_form_required' => 1,
    'mothership_classes_form_description' => 1,
    'mothership_classes_form_placeholder_label' => 0,
    'mothership_classes_form_placeholder_link' => '',
    'mothership_classes_form_placeholder_email' => '',
    'mothership_classes_menu_items_mlid' => 1,
    'mothership_classes_menu_wrapper' => 1,
    'mothership_classes_menu_items_firstlast' => 1,
    'mothership_classes_menu_items_active' => 0,
    'mothership_classes_menu_collapsed' => 0,
    'mothership_classes_menu_leaf' => 1,
    'mothership_classes_view' => 1,
    'mothership_classes_view_name' => 1,
    'mothership_classes_view_view_id' => 0,
    'mothership_classes_view_row' => 1,
    'mothership_classes_view_row_count' => 1,
    'mothership_classes_view_row_first_last' => 1,
    'mothership_classes_view_row_rename' => 0,
    'panels_seperator' => 1,
    'mothership_classes_state' => 0,
    'mothership_404' => 0,
    'mothership_frontpage_default_message' => 1,
    'mothership_content_block_wrapper' => 1,
    'mothership_goodies_login' => 0,
    'mothership_mobile' => 1,
    'mothership_viewport' => 1,
    'mothership_viewport_maximumscale' => 0,
  );
  $export['theme_refills4_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_refills_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'mothership_poorthemers_helper' => 0,
    'mothership_rebuild_registry' => 1,
    'mothership_test' => 0,
    'mothership_mediaquery_indicator' => 0,
    'mothership_script_place_footer' => 1,
    'mothership_js_onefile' => 0,
    'mothership_js_jquery_latest' => 0,
    'mothership_js_jquerycdn' => 0,
    'mothership_js_jquerycdn_version' => '0',
    'mothership_respondjs' => 0,
    'mothership_modernizr' => 0,
    'mothership_selectivizr' => 0,
    'mothership_js_nuke_module' => 0,
    'mothership_js_nuke_module_contrib' => 0,
    'mothership_js_nuke_misc' => 0,
    'mothership_js_freeform' => '',
    'mothership_css_onefile' => 0,
    'mothership_css_reset' => 0,
    'mothership_css_reset_html5' => 0,
    'mothership_css_normalize' => 1,
    'mothership_css_layout' => 0,
    'mothership_css_default' => 0,
    'mothership_css_mothershipstyles' => 0,
    'mothership_css_nuke_theme' => 0,
    'mothership_css_nuke_admin' => 0,
    'mothership_css_nuke_module_contrib' => 0,
    'mothership_css_nuke_module_all' => 0,
    'mothership_css_nuke_book' => 0,
    'mothership_css_nuke_systemtoolbar' => 0,
    'mothership_css_nuke_system_message' => 0,
    'mothership_css_nuke_system_menus' => 1,
    'mothership_css_nuke_system_theme' => 0,
    'mothership_css_freeform' => '',
    'mothership_classes_body_html' => 1,
    'mothership_classes_body_loggedin' => 1,
    'mothership_classes_body_front' => 0,
    'mothership_classes_body_layout' => 0,
    'mothership_classes_body_toolbar' => 0,
    'mothership_classes_body_pagenode' => 1,
    'mothership_classes_body_nodetype' => 0,
    'mothership_classes_body_path' => 0,
    'mothership_classes_body_path_first' => 0,
    'mothership_classes_body_status' => 0,
    'mothership_classes_body_freeform' => '',
    'mothership_region_wrapper' => 1,
    'mothership_classes_region' => 1,
    'mothership_classes_region_freeform' => '',
    'mothership_classes_block' => 1,
    'mothership_classes_block_id' => 0,
    'mothership_classes_block_id_as_class' => 0,
    'mothership_classes_block_contentdiv' => 1,
    'mothership_classes_block_freeform' => '',
    'mothership_classes_node' => 0,
    'mothership_classes_node_state' => 0,
    'mothership_classes_node_id' => 0,
    'mothership_classes_node_freeform' => '',
    'mothership_classes_node_links_inline' => 0,
    'mothership_classes_node_links_links' => 0,
    'mothership_classes_field_field' => 0,
    'mothership_classes_field_name' => 1,
    'mothership_classes_field_type' => 0,
    'mothership_classes_field_label' => 1,
    'mothership_classes_field_freeform' => '',
    'mothership_classes_form_container_wrapper' => 0,
    'mothership_classes_form_container_type' => 0,
    'mothership_classes_form_container_name' => 0,
    'mothership_classes_form_container_widget' => 0,
    'mothership_classes_form_container_id' => 0,
    'mothership_classes_form_wrapper_formitem' => 1,
    'mothership_classes_form_wrapper_formtype' => 1,
    'mothership_classes_form_wrapper_formname' => 1,
    'mothership_classes_form_freeform' => '',
    'mothership_classes_form_label' => 1,
    'mothership_classes_form_input' => 1,
    'mothership_form_required' => 1,
    'mothership_classes_form_description' => 1,
    'mothership_classes_form_placeholder_label' => 0,
    'mothership_classes_form_placeholder_link' => '',
    'mothership_classes_form_placeholder_email' => '',
    'mothership_classes_menu_items_mlid' => 1,
    'mothership_classes_menu_wrapper' => 1,
    'mothership_classes_menu_items_firstlast' => 1,
    'mothership_classes_menu_items_active' => 0,
    'mothership_classes_menu_collapsed' => 0,
    'mothership_classes_menu_leaf' => 1,
    'mothership_classes_view' => 1,
    'mothership_classes_view_name' => 1,
    'mothership_classes_view_view_id' => 0,
    'mothership_classes_view_row' => 1,
    'mothership_classes_view_row_count' => 1,
    'mothership_classes_view_row_first_last' => 1,
    'mothership_classes_view_row_rename' => 0,
    'panels_seperator' => 1,
    'mothership_classes_state' => 0,
    'mothership_404' => 0,
    'mothership_frontpage_default_message' => 1,
    'mothership_content_block_wrapper' => 1,
    'mothership_goodies_login' => 0,
    'mothership_mobile' => 1,
    'mothership_viewport' => 1,
    'mothership_viewport_maximumscale' => 0,
  );
  $export['theme_refills_settings'] = $strongarm;

  return $export;
}
