
def print_crkbd_layer(layer_name):
    print(f"""[{layer_name}] = LAYOUT_WRAPPER_CRKBD(
        __{layer_name}_L1__ ,       __{layer_name}_R1__ ,
        __{layer_name}_L2__ ,       __{layer_name}_R2__ ,
        __{layer_name}_L3__ ,       __{layer_name}_R3__ ,
        __{layer_name}_L_3THUMB__ , __{layer_name}_R_3THUMB__),""")

def print_layer_template(layer_name):
    print(f"""
// {layer_name}
// ============
          
#define __{layer_name}_L0__  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define __{layer_name}_L1__  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define __{layer_name}_L2__  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define __{layer_name}_L3__  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS

#define __{layer_name}_R0__  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define __{layer_name}_R1__  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define __{layer_name}_R2__  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
#define __{layer_name}_R3__  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS

#define __{layer_name}_L_2THUMB__  KC_TRNS, KC_TRNS
#define __{layer_name}_R_2THUMB__  KC_TRNS, KC_TRNS
#define __{layer_name}_L_3THUMB__  KC_TRNS, KC_TRNS, KC_TRNS
#define __{layer_name}_R_3THUMB__  KC_TRNS, KC_TRNS, KC_TRNS
        """)

layer_names = [
    'BASE_BROWSER',
    'BASE_SHELL',
    'BASE_VSCODE',
    'KEYNAV_DEFAULT',
    'KEYNAV_SHELL',
    'KEYSEL_DEFAULT',
    'DESKNAV_DEFAULT',
    'APPNAV_BROWSER',
    'APPNAV_SHELL',
    'APPNAV_VSCODE',
    'SYMBOLS',
    'GAME'
]

if True:
    for layer_name in layer_names:
        print_crkbd_layer(layer_name)

if False:
    print_layer_template('GAME')

