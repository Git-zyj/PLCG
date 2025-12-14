/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_13 += (((var_12 | var_3) ? var_4 : (min((arr_1 [i_0 + 1]), -1879316911925158342))));
        arr_4 [10] |= ((((arr_1 [i_0 - 2]) ? (arr_1 [i_0 - 2]) : var_11)));
        arr_5 [i_0 + 1] [i_0] = ((((((arr_3 [i_0] [i_0]) >= (arr_2 [11]))) ? (((arr_0 [i_0 + 1] [i_0]) ^ -110)) : (arr_3 [i_0 + 1] [i_0 - 2]))));
        arr_6 [20] [i_0] = (arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_14 = (!65525);
        arr_10 [i_1] = (((var_5 ? 113 : (arr_2 [i_1 - 1]))));
        arr_11 [i_1] = (arr_3 [14] [i_1 - 2]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_15 = (((arr_9 [i_1 - 2] [i_1 - 1]) + var_4));
                    var_16 = (arr_15 [i_1]);
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_17 = (max(((var_7 ? var_6 : (min((arr_19 [i_4]), (arr_20 [i_4]))))), (((((var_2 ? 65535 : 194))) ? (arr_12 [i_4] [13]) : ((255 ? (arr_16 [i_4] [i_4] [11] [i_4]) : var_1))))));
        var_18 = (((arr_18 [i_4]) ? ((((arr_18 [i_4]) < var_10))) : (~7893)));
        var_19 = (max((~var_7), var_0));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        arr_23 [6] &= ((var_11 ? ((-56 ? 65535 : var_9)) : (915634156 < -7466247626324291698)));
        var_20 = (arr_17 [i_5] [i_5] [i_5]);
    }
    var_21 += var_10;
    #pragma endscop
}
