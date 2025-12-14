/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!((!(var_1 || var_8)))));
    var_14 |= var_5;
    var_15 = var_0;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 |= 6;
        var_17 = (~var_8);
        var_18 &= (((!((((-127 - 1) ? (arr_2 [18]) : var_9))))));
        arr_3 [i_0] = (max((~var_11), (1024 >= var_3)));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_19 = (~(arr_0 [i_1]));
        var_20 ^= ((~(arr_1 [i_1])));
        var_21 = max(-var_1, (arr_0 [i_1]));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_22 += (arr_4 [i_2]);
        var_23 = (min(((min(26672, 0))), (min((arr_10 [i_2] [i_2]), (arr_5 [i_2])))));
    }
    #pragma endscop
}
