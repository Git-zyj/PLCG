/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 -= (85 - -112);
        var_15 = -85;
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            arr_6 [i_1] [i_1] [i_1] = var_11;
            var_16 |= (((arr_4 [i_1 + 2] [2]) + (arr_4 [i_1] [18])));
            var_17 = (((-(arr_3 [i_1] [i_1]))) % (arr_3 [i_1 - 1] [i_1]));
            arr_7 [i_1] [i_1] [i_1] = (((((arr_2 [i_1]) / 511)) * ((((arr_4 [1] [i_1]) / (arr_3 [i_1 - 1] [i_1]))))));
        }
        var_18 = (max(((((max((arr_4 [i_1] [i_1]), (arr_2 [i_1]))) != (((max((arr_5 [i_1 + 3] [i_1]), 86))))))), ((var_5 ? (((!(arr_2 [i_1])))) : (!var_10)))));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                arr_13 [i_3] = (min(((((max((arr_11 [i_4]), (arr_3 [i_3] [i_3]))) < (((arr_10 [i_3]) ? (arr_12 [i_3]) : (arr_4 [i_3] [i_3])))))), (((arr_12 [i_3]) ? (arr_3 [i_3] [i_3]) : var_11))));
                var_19 ^= (((((-101 ? var_10 : ((((arr_11 [i_4]) ? (arr_3 [i_3] [10]) : -1)))))) ? (2404493408009493612 / -86) : ((min(1, ((-1 ? var_3 : (arr_0 [i_3]))))))));
            }
        }
    }
    #pragma endscop
}
