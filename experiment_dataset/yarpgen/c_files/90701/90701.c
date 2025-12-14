/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 32767;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] |= ((((!(arr_4 [i_0] [i_0]))) ? (arr_4 [i_0] [i_0]) : (15072723632525439733 >= -35)));
                var_17 |= 2934763612;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_18 ^= ((~(max((arr_5 [i_3] [i_1 - 1] [i_0]), -44))));
                            var_19 = var_9;

                            for (int i_4 = 0; i_4 < 22;i_4 += 1)
                            {
                                arr_17 [i_0] [i_1] [i_0] [i_0] = (arr_15 [i_0] [i_0] [i_2] [i_3] [i_3] [i_0]);
                                arr_18 [i_1] = (!((((arr_13 [i_1 + 2] [i_1]) ? (arr_13 [i_1 - 1] [i_1]) : -4))));
                                var_20 |= ((~((76 ? -121 : (min(var_4, 1360203683))))));
                            }
                            for (int i_5 = 0; i_5 < 22;i_5 += 1)
                            {
                                var_21 ^= (~(arr_20 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1]));
                                arr_22 [i_3] [i_0] [i_2] [i_5] [i_5] [i_0] [i_0] |= (((((var_8 > ((((arr_21 [i_5] [i_3] [i_2] [i_1] [i_1] [i_0]) <= var_14)))))) | (((!(arr_19 [i_0]))))));
                            }
                            var_22 = (max(var_22, (arr_2 [i_3])));
                            var_23 = ((((arr_2 [i_2]) && 1)));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 4; i_7 < 9;i_7 += 1)
        {
            {
                arr_27 [i_7] = -7776;
                arr_28 [i_7] = (max((~2205514986), ((~(((arr_9 [i_7] [i_6] [i_6] [i_6]) ? var_13 : (arr_3 [i_6])))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 4; i_9 < 9;i_9 += 1)
                    {
                        {
                            arr_33 [i_6] [i_6] [i_7] [i_9] = (arr_29 [i_8] [i_8] [i_8] [i_8]);
                            arr_34 [i_7] [i_7] [i_7] [i_7] [i_9] = ((~((max(var_7, (arr_21 [i_9] [i_7 - 1] [i_9] [i_9 - 3] [i_9] [i_7 - 1]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
