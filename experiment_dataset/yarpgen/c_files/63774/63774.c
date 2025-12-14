/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_17 = var_3;
            var_18 -= ((((var_14 <= (arr_3 [i_1]))) ? ((var_12 ? var_16 : var_11)) : (((1 ? (arr_2 [i_0]) : var_2)))));
        }
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            var_19 = ((((var_2 ? (arr_2 [i_2]) : var_1))) ? (((65521 > (arr_1 [i_2 - 1] [i_0])))) : (((arr_0 [i_0]) ? 1 : var_3)));
            var_20 += (arr_0 [i_0]);
            arr_9 [i_0] [i_2 + 1] = var_9;
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        var_21 *= 1;
                        arr_19 [i_3] = (arr_1 [i_4 - 1] [i_4 - 1]);
                        arr_20 [i_5] [i_4] [i_3] [i_0] = ((-(arr_3 [i_5])));
                    }
                }
            }
            arr_21 [i_0] |= 1;
            arr_22 [i_0] [i_0] = (((~0) ? var_7 : (arr_6 [i_0])));
        }
        arr_23 [i_0] [i_0] = var_10;
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
    {
        arr_27 [i_6] [i_6] &= (arr_12 [i_6] [2] [i_6]);
        var_22 = (max(var_22, ((max((((arr_7 [i_6] [i_6] [i_6]) ? (arr_7 [i_6] [i_6] [i_6]) : (arr_24 [i_6] [i_6]))), ((var_0 ? var_13 : (arr_13 [i_6]))))))));
    }
    var_23 = ((2118724174 ? (!var_11) : -1));
    #pragma endscop
}
