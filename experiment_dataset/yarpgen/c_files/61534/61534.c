/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_20 |= ((((~(var_3 * var_10))) | var_6));
                            var_21 = (max(var_21, ((min((arr_6 [i_1] [i_2] [i_3]), (arr_6 [i_3 - 2] [i_3 + 1] [i_3 + 1]))))));
                        }
                    }
                }
                var_22 = 0;
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = (min(((((~(arr_12 [i_0] [i_0] [i_0]))) | ((var_3 | (arr_2 [i_0] [i_0]))))), ((~(~32767)))));
                                var_23 = min((min((min(var_11, (arr_15 [i_1] [i_4 - 2] [i_4 - 2] [13]))), ((max(var_9, var_3))))), ((((arr_13 [i_4 - 1] [i_4] [i_5 + 1] [i_5 + 1]) == var_2))));
                            }
                        }
                    }
                }
                var_24 = (((((181 + (arr_2 [i_1] [i_0])))) / var_1));
                arr_21 [i_0] [i_1] = (((~32759) % ((var_19 ? (max((arr_2 [i_0] [i_1]), (arr_17 [i_0] [i_0] [i_1] [i_0] [i_1]))) : var_6))));
            }
        }
    }
    var_25 = ((var_2 ? ((((max(var_10, -32764))) ? ((min(var_17, var_13))) : ((min(var_7, var_16))))) : 0));
    #pragma endscop
}
