/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((((((var_0 ? (var_1 - var_4) : (((min(var_8, -17417))))))) ? ((var_2 ? (var_10 / var_12) : var_13)) : -67)))));
    var_15 = ((((max(-84, var_6))) * (((var_12 + (min(var_13, var_0)))))));
    var_16 += ((-5537439701529572589 + (58387 < -3103768620612631717)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_17 ^= (min(var_11, ((var_6 ? ((var_0 ? var_1 : (arr_3 [i_0] [i_0]))) : (~var_5)))));
            var_18 ^= (arr_3 [i_0] [i_0]);
            var_19 &= (min(var_3, (arr_1 [i_1])));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_20 = (max(var_20, ((((arr_4 [i_0] [i_2] [i_2]) - ((var_0 + (arr_4 [1] [i_0] [i_0]))))))));
            arr_7 [i_0] = ((((arr_1 [i_0]) ? ((max(38516, 2472628778))) : var_2)));
            var_21 = ((253 ? (!-2472628778) : ((((arr_3 [i_2] [i_0]) != var_7)))));
            arr_8 [i_0] [i_2] = (min((arr_0 [i_2] [i_0]), (((min((arr_4 [i_2] [i_0] [i_0]), (arr_3 [i_0] [i_0]))) - (arr_3 [i_0] [i_0])))));
        }
        var_22 = 5840665710328970194;
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_23 ^= ((!(((((((arr_10 [i_3]) ^ var_7))) ? (~var_13) : -6)))));
        var_24 = min((((((min((arr_1 [i_3]), (arr_5 [i_3] [i_3])))) <= (var_1 < var_12)))), (!-8));
        var_25 = (max(var_25, (((-67 ? var_13 : (((-(arr_1 [i_3])))))))));
        var_26 |= (arr_5 [i_3] [i_3]);
    }
    #pragma endscop
}
