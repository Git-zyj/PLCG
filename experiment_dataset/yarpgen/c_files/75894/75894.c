/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_17 ^= ((((var_11 << ((((max((arr_2 [i_0] [i_1] [i_1 + 1]), (arr_3 [i_0] [i_0] [0])))) - 8393)))) | var_8));
                var_18 *= (((((1 ? 1 : -125))) ? (((((min((arr_1 [13]), var_0))) && ((min((arr_0 [i_0]), (arr_2 [i_0] [1] [i_0]))))))) : ((((min((arr_1 [i_0]), -124)) < (((~(arr_3 [i_0] [2] [6])))))))));
                arr_4 [i_0] [i_0] = ((+(((((var_13 ? (arr_3 [i_0] [i_0] [i_0]) : (arr_2 [6] [i_1 + 2] [i_1 - 1]))) >= (201 >> 0))))));
                arr_5 [i_0] [i_0] = (((arr_3 [i_0] [i_0] [i_0]) + ((max(-125, 119)))));
            }
        }
    }
    var_19 = var_5;

    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        var_20 = (max(var_20, ((((((var_6 % (~-98)))) ? ((max(((-(arr_3 [i_2 + 3] [i_2 + 3] [i_2]))), (arr_3 [i_2 - 2] [i_2 - 2] [i_2])))) : (arr_1 [i_2]))))));
        arr_8 [0] = (arr_6 [i_2] [i_2]);
        arr_9 [i_2] = (((arr_7 [i_2 + 3]) >> ((((arr_0 [14]) < (arr_6 [i_2] [i_2 + 3]))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_21 = (((arr_10 [1]) << (((arr_10 [i_3]) - 162))));
        var_22 += var_16;
        var_23 -= ((((((arr_10 [i_3]) | (arr_11 [15])))) ? var_2 : (arr_10 [i_3])));
        arr_12 [i_3] = var_9;
    }
    #pragma endscop
}
