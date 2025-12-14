/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0 + 1] [i_1 + 1] = max(((1 ? var_8 : 4207769405)), (arr_3 [i_1]));
                arr_7 [i_0] [i_1] [i_1 + 1] = 87197899;
                arr_8 [i_0 + 1] = (((((5909558307963004569 ? (arr_3 [i_1 - 1]) : (arr_3 [i_1 + 1])))) ? ((-((4207769405 ? (arr_3 [i_1]) : (arr_1 [i_0 + 1]))))) : ((((max(var_12, var_13))) | (arr_0 [i_0 - 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_20 |= 2040;
                            var_21 = (max(var_21, (((-(arr_3 [i_0 + 2]))))));
                            var_22 += ((5909558307963004569 ? -20724 : 9485));
                            arr_13 [i_3] [i_3] [i_3] [9] [1] = ((var_0 < (((max((arr_10 [i_0 + 1] [7] [i_1 + 1] [i_1 + 1]), var_14))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_23 = ((var_5 - var_5) / (min(-87197890, (max(var_14, var_1)))));
                            var_24 = (max(var_24, ((!(arr_11 [i_5] [1] [4] [i_4] [i_5])))));
                        }
                    }
                }
            }
        }
    }
    var_25 = (max(var_25, (((((~((1048320 ? 1 : 15396277899834554095)))) <= var_17)))));
    var_26 = (min(var_26, var_6));
    #pragma endscop
}
