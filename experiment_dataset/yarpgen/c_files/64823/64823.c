/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 15;
    var_11 = (((-var_8 > 1071644672) <= (var_0 < var_4)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 -= ((var_4 ? ((((arr_1 [12]) < (arr_2 [i_0] [i_0])))) : (arr_1 [14])));
        var_13 = ((((3822866480 ? 3123484087 : (arr_1 [i_0]))) <= (((~(arr_1 [i_0]))))));
        var_14 = ((arr_0 [i_0]) == (arr_2 [i_0] [i_0]));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        var_15 = (!var_7);

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_16 = (max(var_16, ((((((((~(arr_5 [i_1])))) ? (((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_4 [i_1 + 1]))) : (((min(1, (arr_3 [i_1])))))))) && (arr_2 [i_1 + 1] [i_2])))));
            var_17 = (max((((((var_9 ? (arr_6 [i_1] [i_2] [i_2]) : var_0))) / var_3)), (((var_2 / (519764900 * 3822866472))))));
            arr_7 [i_1] [i_2] = (((arr_5 [i_1 + 1]) && (arr_4 [i_1])));
            var_18 = (arr_0 [i_2]);
        }
    }
    for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3 + 1] = (arr_2 [i_3] [i_3 + 1]);
        var_19 = ((arr_6 [i_3] [i_3] [i_3]) * ((((min(var_3, 50))) ? (((arr_1 [6]) ? (arr_5 [i_3]) : (arr_3 [i_3]))) : (((var_7 ? (arr_8 [i_3 + 1] [i_3 + 1]) : 1))))));
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    var_20 = var_7;
                    var_21 += ((((((arr_3 [i_5]) ? (max((arr_2 [i_5] [i_4 - 3]), 2414391222)) : (!-49)))) && (((-(arr_5 [i_3]))))));
                    var_22 = var_0;
                    var_23 = (max(var_23, (((((((arr_5 [i_3 + 1]) + (arr_4 [i_4])))) ? (((((((arr_1 [i_5]) / var_0)) < ((var_0 ? (arr_13 [i_5]) : (arr_8 [i_3] [i_3]))))))) : (((((var_8 ? var_0 : (arr_17 [i_4] [i_3])))) ? (arr_17 [i_4] [i_5]) : (arr_17 [i_5] [i_4]))))))));
                }
            }
        }
    }
    #pragma endscop
}
