/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = (~var_1);
        arr_3 [i_0] [i_0] = 1023;
        var_19 -= var_10;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_20 -= arr_0 [i_1] [i_1];
        arr_6 [10] [10] = (min((arr_1 [i_1]), (arr_4 [7] [i_1])));
        var_21 *= 5993;
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        arr_9 [i_2] = -5994;
        var_22 = ((+(((((arr_7 [i_2 + 1] [i_2]) ? var_2 : (arr_8 [i_2]))) >> (24961 - 24956)))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_23 = (min(var_23, ((min((((((4852237903073723264 && (arr_0 [16] [i_3])))) % -5994)), var_13)))));
        arr_12 [9] [i_3] = -0;
    }
    #pragma endscop
}
