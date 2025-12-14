/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 -= ((arr_3 [i_1] [i_0]) ? ((min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])))) : 255);
                var_18 = (min(var_18, ((((((((-(arr_4 [i_0] [i_1] [i_1])))))) * (min(0, ((max(var_3, 0))))))))));
                var_19 = (max(var_19, (((~((-(arr_3 [i_0] [i_0]))))))));
            }
        }
    }
    var_20 = (((((var_8 || var_2) >> (((min(0, var_0)) + 1326771189))))) ? (((var_6 < (max(-33, 2495562768189026699))))) : var_13);
    var_21 = 53665;

    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        var_22 ^= (min((((((!(arr_5 [i_2]))) ? (arr_5 [i_2]) : 1))), (min((arr_6 [i_2 + 1]), 33225))));
        var_23 ^= ((var_11 + (((var_14 - 1) ? (var_1 ^ var_8) : (((arr_5 [i_2]) & 46161))))));
    }
    #pragma endscop
}
