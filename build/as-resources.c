#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.as"), aligned (8)))
#else
# define SECTION
#endif

#ifdef _MSC_VER
static const SECTION union { const guint8 data[1237]; const double alignment; void * const ptr;}  as_resource_data = { {
  0107, 0126, 0141, 0162, 0151, 0141, 0156, 0164, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 
  0030, 0000, 0000, 0000, 0344, 0000, 0000, 0000, 0000, 0000, 0000, 0050, 0007, 0000, 0000, 0000, 
  0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0000, 0002, 0000, 0000, 0000, 
  0003, 0000, 0000, 0000, 0004, 0000, 0000, 0000, 0006, 0000, 0000, 0000, 0301, 0221, 0175, 0260, 
  0005, 0000, 0000, 0000, 0344, 0000, 0000, 0000, 0011, 0000, 0166, 0000, 0360, 0000, 0000, 0000, 
  0322, 0002, 0000, 0000, 0324, 0265, 0002, 0000, 0377, 0377, 0377, 0377, 0322, 0002, 0000, 0000, 
  0001, 0000, 0114, 0000, 0324, 0002, 0000, 0000, 0330, 0002, 0000, 0000, 0302, 0257, 0211, 0013, 
  0001, 0000, 0000, 0000, 0330, 0002, 0000, 0000, 0004, 0000, 0114, 0000, 0334, 0002, 0000, 0000, 
  0340, 0002, 0000, 0000, 0006, 0043, 0124, 0320, 0004, 0000, 0000, 0000, 0340, 0002, 0000, 0000, 
  0015, 0000, 0114, 0000, 0360, 0002, 0000, 0000, 0364, 0002, 0000, 0000, 0224, 0135, 0334, 0227, 
  0002, 0000, 0000, 0000, 0364, 0002, 0000, 0000, 0007, 0000, 0114, 0000, 0374, 0002, 0000, 0000, 
  0000, 0003, 0000, 0000, 0131, 0160, 0205, 0374, 0003, 0000, 0000, 0000, 0000, 0003, 0000, 0000, 
  0012, 0000, 0114, 0000, 0014, 0003, 0000, 0000, 0024, 0003, 0000, 0000, 0320, 0363, 0126, 0230, 
  0005, 0000, 0000, 0000, 0024, 0003, 0000, 0000, 0016, 0000, 0166, 0000, 0050, 0003, 0000, 0000, 
  0324, 0004, 0000, 0000, 0163, 0164, 0171, 0154, 0145, 0056, 0143, 0163, 0163, 0000, 0000, 0000, 
  0074, 0006, 0000, 0000, 0001, 0000, 0000, 0000, 0170, 0332, 0315, 0124, 0313, 0156, 0203, 0060, 
  0020, 0074, 0227, 0257, 0100, 0352, 0045, 0101, 0345, 0131, 0221, 0007, 0234, 0373, 0041, 0006, 
  0033, 0260, 0142, 0154, 0144, 0234, 0220, 0050, 0352, 0277, 0327, 0200, 0011, 0230, 0070, 0122, 
  0325, 0123, 0345, 0004, 0211, 0361, 0172, 0166, 0146, 0167, 0215, 0047, 0130, 0131, 0022, 0224, 
  0100, 0314, 0067, 0104, 0360, 0355, 0335, 0172, 0313, 0031, 0141, 0074, 0261, 0337, 0343, 0143, 
  0277, 0122, 0353, 0333, 0262, 0074, 0025, 0225, 0127, 0050, 0077, 0041, 0150, 0313, 0250, 0214, 
  0161, 0210, 0270, 0073, 0005, 0177, 0305, 0375, 0112, 0045, 0016, 0362, 0123, 0311, 0331, 0231, 
  0302, 0045, 0252, 0302, 0062, 0042, 0167, 0227, 0214, 0075, 0123, 0015, 0170, 0211, 0251, 0113, 
  0120, 0041, 0022, 0373, 0263, 0271, 0246, 0023, 0171, 0142, 0007, 0303, 0233, 0111, 0320, 0234, 
  0306, 0255, 0031, 0034, 0170, 0174, 0147, 0001, 0252, 0063, 0274, 0314, 0300, 0046, 0212, 0343, 
  0017, 0173, 0176, 0004, 0336, 0161, 0267, 0333, 0246, 0216, 0257, 0213, 0355, 0052, 0054, 0320, 
  0110, 0136, 0060, 0136, 0003, 0221, 0261, 0253, 0244, 0241, 0002, 0121, 0321, 0323, 0067, 0000, 
  0102, 0114, 0113, 0127, 0260, 0046, 0261, 0303, 0121, 0331, 0204, 0145, 0114, 0010, 0126, 0117, 
  0360, 0232, 0242, 0271, 0145, 0147, 0271, 0117, 0355, 0027, 0305, 0065, 0305, 0046, 0040, 0027, 
  0370, 0062, 0370, 0322, 0052, 0132, 0034, 0372, 0145, 0254, 0350, 0203, 0346, 0365, 0241, 0111, 
  0357, 0130, 0353, 0110, 0067, 0301, 0161, 0131, 0315, 0250, 0352, 0057, 0007, 0020, 0237, 0333, 
  0207, 0141, 0275, 0061, 0253, 0031, 0170, 0244, 0321, 0072, 0252, 0370, 0024, 0246, 0045, 0321, 
  0315, 0123, 0160, 0171, 0121, 0147, 0075, 0256, 0025, 0322, 0333, 0123, 0144, 0144, 0356, 0210, 
  0051, 0021, 0001, 0031, 0042, 0075, 0101, 0041, 0273, 0353, 0166, 0150, 0224, 0264, 0013, 0202, 
  0124, 0101, 0005, 0250, 0061, 0271, 0045, 0166, 0315, 0050, 0153, 0033, 0220, 0253, 0261, 0030, 
  0174, 0272, 0015, 0226, 0127, 0200, 0273, 0163, 0113, 0225, 0263, 0101, 0305, 0247, 0146, 0166, 
  0022, 0241, 0243, 0143, 0131, 0302, 0300, 0124, 0027, 0205, 0256, 0262, 0301, 0245, 0333, 0211, 
  0364, 0240, 0235, 0137, 0116, 0345, 0052, 0217, 0061, 0215, 0251, 0307, 0261, 0002, 0145, 0211, 
  0053, 0000, 0131, 0047, 0343, 0074, 0211, 0251, 0147, 0377, 0037, 0256, 0123, 0040, 0257, 0320, 
  0370, 0363, 0302, 0150, 0073, 0212, 0345, 0050, 0227, 0327, 0144, 0234, 0204, 0366, 0376, 0233, 
  0011, 0010, 0237, 0345, 0107, 0053, 0357, 0163, 0211, 0225, 0320, 0016, 0103, 0121, 0115, 0303, 
  0147, 0356, 0364, 0213, 0151, 0066, 0016, 0276, 0056, 0150, 0157, 0030, 0151, 0301, 0001, 0225, 
  0003, 0300, 0245, 0267, 0101, 0230, 0357, 0374, 0305, 0152, 0364, 0337, 0254, 0056, 0262, 0207, 
  0167, 0153, 0365, 0261, 0100, 0060, 0213, 0212, 0275, 0332, 0216, 0326, 0237, 0222, 0043, 0200, 
  0061, 0212, 0373, 0135, 0307, 0377, 0001, 0114, 0101, 0370, 0347, 0000, 0050, 0165, 0165, 0141, 
  0171, 0051, 0057, 0000, 0002, 0000, 0000, 0000, 0143, 0157, 0155, 0057, 0004, 0000, 0000, 0000, 
  0152, 0145, 0171, 0163, 0157, 0156, 0146, 0154, 0157, 0162, 0145, 0163, 0057, 0000, 0000, 0000, 
  0005, 0000, 0000, 0000, 0147, 0151, 0164, 0150, 0165, 0142, 0057, 0000, 0003, 0000, 0000, 0000, 
  0154, 0151, 0147, 0150, 0164, 0156, 0151, 0156, 0147, 0057, 0000, 0000, 0006, 0000, 0000, 0000, 
  0000, 0000, 0000, 0000, 0163, 0164, 0171, 0154, 0145, 0055, 0144, 0141, 0162, 0153, 0056, 0143, 
  0163, 0163, 0000, 0000, 0000, 0000, 0000, 0000, 0100, 0005, 0000, 0000, 0001, 0000, 0000, 0000, 
  0170, 0332, 0225, 0123, 0333, 0216, 0203, 0040, 0020, 0175, 0136, 0277, 0202, 0144, 0137, 0332, 
  0244, 0030, 0057, 0151, 0263, 0321, 0257, 0101, 0101, 0045, 0125, 0060, 0210, 0265, 0115, 0263, 
  0377, 0276, 0250, 0120, 0305, 0342, 0146, 0327, 0133, 0342, 0141, 0230, 0071, 0147, 0346, 0340, 
  0113, 0136, 0226, 0065, 0111, 0060, 0025, 0207, 0132, 0212, 0343, 0323, 0373, 0310, 0171, 0315, 
  0105, 0002, 0076, 0161, 0074, 0336, 0251, 0007, 0324, 0225, 0241, 0374, 0132, 0012, 0336, 0063, 
  0254, 0026, 0342, 0351, 0112, 0275, 0157, 0317, 0363, 0365, 0366, 0274, 0042, 0371, 0225, 0140, 
  0240, 0266, 0147, 0134, 0140, 0042, 0240, 0311, 0022, 0341, 0361, 0116, 0025, 0276, 0116, 0361, 
  0102, 0165, 0230, 0050, 0263, 0103, 0164, 0076, 0237, 0200, 0371, 0034, 0327, 0351, 0307, 0264, 
  0015, 0022, 0045, 0145, 0260, 0046, 0205, 0114, 0100, 0334, 0336, 0123, 0123, 0051, 0001, 0301, 
  0364, 0367, 0057, 0332, 0313, 0002, 0154, 0070, 0236, 0012, 0354, 0306, 0026, 0134, 0064, 0110, 
  0146, 0374, 0256, 0064, 0061, 0111, 0230, 0034, 0243, 0133, 0204, 0061, 0145, 0045, 0224, 0274, 
  0115, 0100, 0070, 0063, 0060, 0130, 0306, 0245, 0344, 0215, 0201, 0267, 0051, 0332, 0107, 0326, 
  0253, 0165, 0006, 0236, 0226, 0372, 0113, 0170, 0002, 0363, 0173, 0334, 0337, 0223, 0240, 0134, 
  0322, 0333, 0073, 0335, 0155, 0073, 0207, 0212, 0112, 0262, 0111, 0263, 0277, 0311, 0360, 0236, 
  0173, 0033, 0331, 0142, 0004, 0055, 0253, 0005, 0325, 0303, 0025, 0010, 0323, 0276, 0173, 0011, 
  0267, 0007, 0261, 0147, 0000, 0153, 0202, 0072, 0237, 0306, 0254, 0042, 0266, 0170, 0206, 0156, 
  0073, 0375, 0266, 0343, 0072, 0251, 0264, 0275, 0105, 0106, 0356, 0311, 0270, 0012, 0325, 0050, 
  0043, 0365, 0230, 0240, 0120, 0123, 0206, 0003, 0231, 0051, 0135, 0202, 0040, 0325, 0120, 0201, 
  0032, 0132, 0077, 0022, 0320, 0160, 0306, 0273, 0026, 0345, 0272, 0301, 0223, 0116, 0330, 0122, 
  0345, 0177, 0001, 0227, 0321, 0152, 0145, 0023, 0213, 0330, 0022, 0153, 0110, 0330, 0350, 0334, 
  0226, 0060, 0160, 0365, 0105, 0243, 0277, 0072, 0172, 0105, 0003, 0257, 0333, 0140, 0252, 0175, 
  0131, 0211, 0327, 0266, 0335, 0020, 0160, 0326, 0167, 0015, 0377, 0254, 0101, 0325, 0373, 0012, 
  0141, 0076, 0250, 0070, 0137, 0141, 0372, 0073, 0276, 0312, 0327, 0350, 0020, 0234, 0200, 0176, 
  0374, 0060, 0322, 0336, 0026, 0044, 0127, 0347, 0150, 0266, 0110, 0367, 0374, 0273, 0065, 0054, 
  0372, 0313, 0020, 0147, 0355, 0113, 0357, 0065, 0321, 0201, 0142, 0131, 0031, 0127, 0272, 0055, 
  0260, 0143, 0163, 0347, 0211, 0160, 0172, 0365, 0007, 0214, 0356, 0245, 0153, 0000, 0050, 0165, 
  0165, 0141, 0171, 0051
} };
#else /* _MSC_VER */
static const SECTION union { const guint8 data[1237]; const double alignment; void * const ptr;}  as_resource_data = {
  "\107\126\141\162\151\141\156\164\000\000\000\000\000\000\000\000"
  "\030\000\000\000\344\000\000\000\000\000\000\050\007\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\002\000\000\000"
  "\003\000\000\000\004\000\000\000\006\000\000\000\301\221\175\260"
  "\005\000\000\000\344\000\000\000\011\000\166\000\360\000\000\000"
  "\322\002\000\000\324\265\002\000\377\377\377\377\322\002\000\000"
  "\001\000\114\000\324\002\000\000\330\002\000\000\302\257\211\013"
  "\001\000\000\000\330\002\000\000\004\000\114\000\334\002\000\000"
  "\340\002\000\000\006\043\124\320\004\000\000\000\340\002\000\000"
  "\015\000\114\000\360\002\000\000\364\002\000\000\224\135\334\227"
  "\002\000\000\000\364\002\000\000\007\000\114\000\374\002\000\000"
  "\000\003\000\000\131\160\205\374\003\000\000\000\000\003\000\000"
  "\012\000\114\000\014\003\000\000\024\003\000\000\320\363\126\230"
  "\005\000\000\000\024\003\000\000\016\000\166\000\050\003\000\000"
  "\324\004\000\000\163\164\171\154\145\056\143\163\163\000\000\000"
  "\074\006\000\000\001\000\000\000\170\332\315\124\313\156\203\060"
  "\020\074\227\257\100\352\045\101\345\131\221\007\234\373\041\006"
  "\033\260\142\154\144\234\220\050\352\277\327\200\011\230\070\122"
  "\325\123\345\004\211\361\172\166\146\167\215\047\130\131\022\224"
  "\100\314\067\104\360\355\335\172\313\031\141\074\261\337\343\143"
  "\277\122\353\333\262\074\025\225\127\050\077\041\150\313\250\214"
  "\161\210\270\073\005\177\305\375\112\045\016\362\123\311\331\231"
  "\302\045\252\302\062\042\167\227\214\075\123\015\170\211\251\113"
  "\120\041\022\373\263\271\246\023\171\142\007\303\233\111\320\234"
  "\306\255\031\034\170\174\147\001\252\063\274\314\300\046\212\343"
  "\017\173\176\004\336\161\267\333\246\216\257\213\355\052\054\320"
  "\110\136\060\136\003\221\261\253\244\241\002\121\321\323\067\000"
  "\102\114\113\127\260\046\261\303\121\331\204\145\114\010\126\117"
  "\360\232\242\271\145\147\271\117\355\027\305\065\305\046\040\027"
  "\370\062\370\322\052\132\034\372\145\254\350\203\346\365\241\111"
  "\357\130\353\110\067\301\161\131\315\250\352\057\007\020\237\333"
  "\207\141\275\061\253\031\170\244\321\072\252\370\024\246\045\321"
  "\315\123\160\171\121\147\075\256\025\322\333\123\144\144\356\210"
  "\051\021\001\031\042\075\101\041\273\353\166\150\224\264\013\202"
  "\124\101\005\250\061\271\045\166\315\050\153\033\220\253\261\030"
  "\174\272\015\226\127\200\273\163\113\225\263\101\305\247\146\166"
  "\022\241\243\143\131\302\300\124\027\205\256\262\301\245\333\211"
  "\364\240\235\137\116\345\052\217\061\215\251\307\261\002\145\211"
  "\053\000\131\047\343\074\211\251\147\377\037\256\123\040\257\320"
  "\370\363\302\150\073\212\345\050\227\327\144\234\204\366\376\233"
  "\011\010\237\345\107\053\357\163\211\225\320\016\103\121\115\303"
  "\147\356\364\213\151\066\016\276\056\150\157\030\151\301\001\225"
  "\003\300\245\267\101\230\357\374\305\152\364\337\254\056\262\207"
  "\167\153\365\261\100\060\213\212\275\332\216\326\237\222\043\200"
  "\061\212\373\135\307\377\001\114\101\370\347\000\050\165\165\141"
  "\171\051\057\000\002\000\000\000\143\157\155\057\004\000\000\000"
  "\152\145\171\163\157\156\146\154\157\162\145\163\057\000\000\000"
  "\005\000\000\000\147\151\164\150\165\142\057\000\003\000\000\000"
  "\154\151\147\150\164\156\151\156\147\057\000\000\006\000\000\000"
  "\000\000\000\000\163\164\171\154\145\055\144\141\162\153\056\143"
  "\163\163\000\000\000\000\000\000\100\005\000\000\001\000\000\000"
  "\170\332\225\123\333\216\203\040\020\175\136\277\202\144\137\332"
  "\244\030\057\151\263\321\257\101\101\045\125\060\210\265\115\263"
  "\377\276\250\120\305\342\146\327\133\342\141\230\071\147\346\340"
  "\113\136\226\065\111\060\025\207\132\212\343\323\373\310\171\315"
  "\105\002\076\161\074\336\251\007\324\225\241\374\132\012\336\063"
  "\254\026\342\351\112\275\157\317\363\365\366\274\042\371\225\140"
  "\240\266\147\134\140\042\240\311\022\341\361\116\025\276\116\361"
  "\102\165\230\050\263\103\164\076\237\200\371\034\327\351\307\264"
  "\015\022\045\145\260\046\205\114\100\334\336\123\123\051\001\301"
  "\364\367\057\332\313\002\154\070\236\012\354\306\026\134\064\110"
  "\146\374\256\064\061\111\230\034\243\133\204\061\145\045\224\274"
  "\115\100\070\063\060\130\306\245\344\215\201\267\051\332\107\326"
  "\253\165\006\236\226\372\113\170\002\363\173\334\337\223\240\134"
  "\322\333\073\335\155\073\207\212\112\262\111\263\277\311\360\236"
  "\173\033\331\142\004\055\253\005\325\303\025\010\323\276\173\011"
  "\267\007\261\147\000\153\202\072\237\306\254\042\266\170\206\156"
  "\073\375\266\343\072\251\264\275\105\106\356\311\270\012\325\050"
  "\043\365\230\240\120\123\206\003\231\051\135\202\040\325\120\201"
  "\032\132\077\022\320\160\306\273\026\345\272\301\223\116\330\122"
  "\345\177\001\227\321\152\145\023\213\330\022\153\110\330\350\334"
  "\226\060\160\365\105\243\277\072\172\105\003\257\333\140\252\175"
  "\131\211\327\266\335\020\160\326\167\015\377\254\101\325\373\012"
  "\141\076\250\070\137\141\372\073\276\312\327\350\020\234\200\176"
  "\374\060\322\336\026\044\127\347\150\266\110\367\374\273\065\054"
  "\372\313\020\147\355\113\357\065\321\201\142\131\031\127\272\055"
  "\260\143\163\347\211\160\172\365\007\214\356\245\153\000\050\165"
  "\165\141\171\051" };
#endif /* !_MSC_VER */

static GStaticResource static_resource = { as_resource_data.data, sizeof (as_resource_data.data) - 1 /* nul terminator */, NULL, NULL, NULL };

G_GNUC_INTERNAL
GResource *as_get_resource (void);
GResource *as_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}
/*
  If G_HAS_CONSTRUCTORS is true then the compiler support *both* constructors and
  destructors, in a usable way, including e.g. on library unload. If not you're on
  your own.

  Some compilers need #pragma to handle this, which does not work with macros,
  so the way you need to use this is (for constructors):

  #ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
  #pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(my_constructor)
  #endif
  G_DEFINE_CONSTRUCTOR(my_constructor)
  static void my_constructor(void) {
   ...
  }

*/

#ifndef __GTK_DOC_IGNORE__

#if  __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) static void __attribute__((constructor)) _func (void);
#define G_DEFINE_DESTRUCTOR(_func) static void __attribute__((destructor)) _func (void);

#elif defined (_MSC_VER) && (_MSC_VER >= 1500)
/* Visual studio 2008 and later has _Pragma */

#include <stdlib.h>

#define G_HAS_CONSTRUCTORS 1

/* We do some weird things to avoid the constructors being optimized
 * away on VS2015 if WholeProgramOptimization is enabled. First we
 * make a reference to the array from the wrapper to make sure its
 * references. Then we use a pragma to make sure the wrapper function
 * symbol is always included at the link stage. Also, the symbols
 * need to be extern (but not dllexport), even though they are not
 * really used from another object file.
 */

/* We need to account for differences between the mangling of symbols
 * for x86 and x64/ARM/ARM64 programs, as symbols on x86 are prefixed
 * with an underscore but symbols on x64/ARM/ARM64 are not.
 */
#ifdef _M_IX86
#define G_MSVC_SYMBOL_PREFIX "_"
#else
#define G_MSVC_SYMBOL_PREFIX ""
#endif

#define G_DEFINE_CONSTRUCTOR(_func) G_MSVC_CTOR (_func, G_MSVC_SYMBOL_PREFIX)
#define G_DEFINE_DESTRUCTOR(_func) G_MSVC_DTOR (_func, G_MSVC_SYMBOL_PREFIX)

#define G_MSVC_CTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _wrapper(void) { _func(); g_slist_find (NULL,  _array ## _func); return 0; } \
  __pragma(comment(linker,"/include:" _sym_prefix # _func "_wrapper")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _wrapper;

#define G_MSVC_DTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _constructor(void) { atexit (_func); g_slist_find (NULL,  _array ## _func); return 0; } \
   __pragma(comment(linker,"/include:" _sym_prefix # _func "_constructor")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _constructor;

#elif defined (_MSC_VER)

#define G_HAS_CONSTRUCTORS 1

/* Pre Visual studio 2008 must use #pragma section */
#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _wrapper(void) { _func(); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (*p)(void) = _func ## _wrapper;

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _constructor(void) { atexit (_func); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _constructor;

#elif defined(__SUNPRO_C)

/* This is not tested, but i believe it should work, based on:
 * http://opensource.apple.com/source/OpenSSL098/OpenSSL098-35/src/fips/fips_premain.c
 */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  init(_func)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void);

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  fini(_func)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void);

#else

/* constructors not supported for this compiler */

#endif

#endif /* __GTK_DOC_IGNORE__ */

#ifdef G_HAS_CONSTRUCTORS

#ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(resource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(resource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(resource_destructor)
#endif
G_DEFINE_DESTRUCTOR(resource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void resource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void resource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}
