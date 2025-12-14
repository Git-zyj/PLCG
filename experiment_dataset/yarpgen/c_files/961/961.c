/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_15 = ((-(((arr_1 [i_0]) ? var_8 : var_1))));
        arr_3 [i_0] [i_0] = ((((!(arr_1 [i_0]))) ? 114 : ((255 ? (arr_2 [i_0]) : 1744473571))));
        arr_4 [i_0 + 3] = ((2147483647 ? 1 : 1152912708513824768));
    }
    var_16 = ((((max(114466967, ((570924598193964087 ? -109 : -113))))) ? (((~(~255)))) : (min(2147483647, ((var_5 ? var_3 : -113))))));
    var_17 = ((((((3938 ? var_10 : var_5)) ? ((var_10 ? var_8 : 0)) : (!var_3)))));
    #pragma endscop
}
