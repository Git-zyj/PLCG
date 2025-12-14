/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_10 = ((!50) ? -47 : -8224274923131554787);
        var_11 = 8224274923131554786;
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        var_12 = min(16373899305636392040, 4043813298);
        arr_5 [i_1] = 0;
        var_13 = (min(183, (min(8224274923131554786, 65526))));
    }
    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = (((min(0, (arr_0 [i_2 - 2])))));
        var_14 = (((min(var_4, 1))) ? ((var_8 ? -32638 : (arr_3 [i_2 - 1]))) : ((((arr_8 [i_2]) ? (arr_8 [i_2]) : (!2047)))));
        var_15 = (0 ? (max((arr_7 [i_2]), 1)) : (arr_4 [i_2]));
        var_16 = (var_8 ^ 1);
    }
    var_17 = (((4043813298 + (~var_9))));
    var_18 = (((((var_0 ? -4545098062114009468 : (((var_6 ? var_3 : 158)))))) || ((min((max(112, 5277315783534774311)), (((var_4 ? -49 : 32633))))))));
    #pragma endscop
}
