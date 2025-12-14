/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (min(((5272 ? -98 : 14321)), var_6));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((!(((7680 * (arr_1 [i_0] [i_0]))))));
        var_15 = (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0 + 2]) : ((~(arr_0 [i_0 + 2])))));
        arr_3 [i_0] = ((-1583555010 ? 1507860163 : 18446744073709551615));
        var_16 &= (((((~(-1440563864117949792 & 1440563864117949792)))) ? ((1840394987 ? -1440563864117949802 : 5922171935846458410)) : 21069));
        var_17 = 1;
    }
    #pragma endscop
}
