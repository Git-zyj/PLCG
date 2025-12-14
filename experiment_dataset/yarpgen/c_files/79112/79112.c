/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            arr_14 [i_1 - 1] [6] = (-22804 * 32767);
                            var_12 = (min(var_12, (arr_13 [i_0] [9] [i_2])));
                            var_13 = (min(var_13, ((((arr_1 [i_4 + 1] [i_0 + 1]) ? (arr_1 [i_2] [i_4 - 1]) : (arr_1 [i_0 - 2] [i_4]))))));
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_5] [i_1 + 1] [i_2] [i_3] [i_5] = (((((-(arr_0 [1])))) ? (arr_12 [i_0] [i_0 - 2] [i_1 - 1]) : (((arr_8 [i_2] [i_2] [i_1] [i_3] [i_5] [i_2]) ? (arr_9 [i_0] [i_0] [i_2]) : (arr_16 [i_0] [i_0] [9] [i_2] [12] [12] [i_5])))));
                            arr_18 [1] [8] [i_3] [i_5] |= ((!(arr_4 [i_1] [10] [10] [i_5])));
                            var_14 -= ((((((arr_2 [i_1]) / (arr_7 [12])))) ? ((22804 ? -32767 : -124)) : (((arr_10 [i_0] [i_0]) ? (arr_9 [i_0] [i_5] [12]) : (arr_5 [i_0])))));
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            var_15 += (((~(arr_16 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0] [7]))));
                            var_16 = (arr_16 [i_6] [i_1 + 1] [6] [i_2] [i_1 + 1] [i_1] [i_0]);
                            arr_23 [i_3] [12] [i_2] [i_3] [i_3] [i_0] &= (((arr_7 [i_1]) / ((((arr_16 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1]) * (arr_9 [i_0] [i_0] [i_6]))))));
                            arr_24 [i_0] [i_1] [i_0] [11] [i_0] [i_6] = ((!(~0)));
                        }
                        arr_25 [i_1] [i_0] = ((~((~(arr_22 [i_2] [i_2] [i_2] [i_3] [i_0] [i_3])))));
                    }
                    arr_26 [i_0] [i_1] = (((arr_21 [i_2] [1] [i_1] [i_0]) * (~-112)));
                }
            }
        }
    }
    var_17 = var_0;
    #pragma endscop
}
