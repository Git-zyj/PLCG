/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_17 = (arr_6 [i_2 - 1] [i_1]);
                        var_18 = arr_0 [i_0 - 1] [i_0];
                    }
                }
            }
        }
        arr_10 [i_0] = (((arr_7 [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 1]) | var_13));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_19 = var_2;
        arr_14 [i_4] = (((((min((arr_13 [i_4]), (arr_11 [i_4])))) ? (((-(arr_13 [1])))) : var_2)));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    {
                        var_20 = (min(var_20, ((((arr_12 [i_5] [20]) < var_15)))));
                        arr_26 [i_6] [i_6 + 2] [i_6] [i_6] [i_5] [4] = (((arr_16 [i_6 + 2]) ? (arr_16 [i_6 - 2]) : (arr_12 [i_6 - 1] [i_6 + 2])));
                        var_21 = (((var_11 ? var_4 : (arr_17 [i_5] [i_6] [i_5]))));
                        arr_27 [i_6] = 65;
                    }
                }
            }
        }
        var_22 = (min(var_22, ((((arr_15 [i_5]) ? (arr_20 [i_5]) : (arr_16 [i_5]))))));
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 13;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {
                arr_34 [i_9] = (max(((((arr_16 [i_9 + 2]) && (arr_16 [i_9 + 2])))), (min((arr_16 [i_9 - 1]), (arr_12 [i_9 + 2] [i_10])))));
                var_23 += (arr_17 [i_9] [i_9] [i_9]);
            }
        }
    }
    var_24 = ((var_10 ^ ((max(var_1, -18844)))));
    var_25 = var_13;
    #pragma endscop
}
