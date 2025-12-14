/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((var_9 ? (((66 ? var_12 : var_11))) : var_5)) ^ ((((var_5 == (((0 ? 75 : 0)))))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_20 = ((((((arr_1 [i_0]) ? (((arr_1 [3]) ? (arr_1 [i_0]) : 1)) : ((-(arr_1 [i_0])))))) ? (((arr_0 [i_0 - 1]) ? (((arr_1 [i_0 - 1]) ? (arr_0 [i_0]) : 10864606303969204003)) : -3248416892)) : (arr_1 [11])));
        arr_2 [i_0] = ((-(((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1])))));
    }
    /* LoopNest 2 */
    for (int i_1 = 4; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                var_21 = (min(var_21, 0));
                var_22 = (min(var_22, (((((!((!(arr_6 [1] [i_1]))))) ? (((!1) ? ((22398 ? 10864606303969204015 : (arr_3 [0]))) : -2)) : ((~(((arr_7 [i_1 - 4] [0]) ? 7582137769740347612 : 10864606303969204008)))))))));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_23 = (((arr_8 [i_4]) % (((arr_3 [i_1]) ? ((243 ? (arr_3 [i_1]) : (arr_4 [i_3 - 1]))) : ((7582137769740347612 ? (arr_9 [i_1 - 4] [i_1]) : (arr_4 [i_3])))))));
                            var_24 -= (((((+(((arr_7 [1] [1]) ? 0 : (arr_8 [i_1])))))) ? ((((((-(arr_4 [i_1])))) ? (arr_9 [i_1 - 3] [14]) : (arr_9 [i_1] [1])))) : (max((max(7582137769740347597, (arr_5 [12] [1]))), ((-43 ? 0 : 10864606303969204021))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_21 [i_1] [i_2] [i_6] = ((~(((arr_14 [i_1]) ? 99 : (arr_14 [i_1])))));
                                arr_22 [i_7] [i_2] [i_1] [i_2] [1] = (arr_15 [i_1 - 1] [i_2] [i_5] [i_6]);
                                arr_23 [i_1] [i_2] [i_5] [i_1] [i_1] = (((10864606303969204015 ^ 45) | ((((arr_20 [i_1 - 4] [i_1] [i_1] [0] [i_2]) ? (arr_19 [i_7 + 1] [i_2] [i_5] [i_1 - 2] [1] [i_2] [i_2]) : (arr_19 [i_7 + 1] [i_2] [i_5] [i_1 - 3] [i_5] [i_1] [i_6]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
