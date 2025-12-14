/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 |= (arr_2 [i_0] [i_1] [i_2]);
                    var_17 = (arr_9 [i_1] [i_1] [i_2]);
                    var_18 -= (arr_5 [10] [i_1] [10]);
                    var_19 = (min(var_19, (arr_2 [i_0] [i_1 + 2] [i_1 - 2])));
                }
            }
        }
        arr_10 [i_0] = ((+(((arr_3 [i_0]) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_9 [6] [i_0] [6])))));
        var_20 = ((+(((arr_2 [i_0] [5] [i_0]) ? (arr_9 [4] [i_0] [i_0]) : (arr_8 [i_0] [i_0])))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_21 = ((((((((arr_12 [i_3]) >> (((arr_12 [i_3]) - 15777712440280120861)))) >> (((arr_13 [i_3] [i_3]) + 15644))))) ? (min((arr_13 [i_3] [7]), (arr_11 [i_3]))) : (arr_12 [i_3])));
        var_22 *= ((!((((arr_11 [i_3]) ? (arr_14 [i_3]) : (arr_14 [i_3]))))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] = ((!((((-(arr_15 [i_4] [i_4])))))));
        arr_19 [i_4] = (arr_13 [i_4] [i_4]);
        arr_20 [i_4] = (arr_16 [i_4]);
    }
    var_23 = -var_2;
    #pragma endscop
}
