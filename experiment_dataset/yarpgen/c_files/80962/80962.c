/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = 126;
        var_13 = (22731 / 1040187392);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_14 = -22731;
        var_15 = var_4;
        var_16 = ((((min(var_7, 1))) % 734855222));
        var_17 = (max(var_17, (var_3 - var_4)));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_18 = (((-276516470059265149 / var_10) == (((1 ? (~0) : ((var_0 ? var_8 : var_12)))))));
        var_19 += ((!(((((max(-22731, -22731))) ? ((0 ? 1 : var_11)) : (var_10 ^ -18012))))));
        var_20 -= -22719;
        arr_8 [i_2] [i_2] = (~(((-20641 + 2147483647) << (20641 - 20641))));
    }
    var_21 = ((((1 * (1121501860331520 / -20656)))) ? 1 : (152 / -951654839));
    var_22 = (min(((1 ? var_1 : -126)), 5897483886497378868));
    var_23 = 22729;
    var_24 = (max((((22731 ? (177 < 19069) : -64))), ((((3343312457 ? 7635443741985641996 : 0)) | (~var_7)))));
    #pragma endscop
}
