/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (arr_2 [i_0]);
                var_18 = -1649240309;
                arr_5 [i_0] [i_0] [i_1] &= ((26 ? (((9223372036854775807 ? ((27760 ? var_11 : 1)) : (arr_0 [i_0] [i_1])))) : ((~(7001799017669440277 / -558198795186112483)))));
            }
        }
    }
    var_19 = var_1;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 10;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    arr_14 [i_4] [i_2] [6] [i_2] = (~110989117);
                    arr_15 [i_3] = ((12 < ((var_9 ? ((max(-27760, 15118))) : -248))));
                    var_20 += (((((-6579991524591994892 - ((min(var_6, var_4)))))) & (((arr_6 [i_3 - 1] [i_3 + 2]) - (arr_1 [i_3])))));
                }
                arr_16 [i_2] = (arr_8 [10] [3]);
                var_21 = (max(255, ((var_10 ? (~-13540) : -30479))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_22 = (min((min(((-27 ? (arr_12 [i_2] [i_3] [10]) : -27760)), (((65535 >= (arr_13 [i_2] [i_2] [8] [i_2])))))), (((((~(arr_7 [i_2]))) < ((max(20980, (arr_7 [11])))))))));
                                var_23 = (((!var_11) == (((!((((arr_7 [i_2]) ? 44580 : 2656690313))))))));
                            }
                        }
                    }
                }
                var_24 |= (((((arr_21 [i_2] [i_3] [i_3 - 1] [i_2] [i_3]) >> (((arr_21 [i_2] [i_2] [i_2] [10] [i_2]) - 1683205106))))) ? (((arr_23 [i_2] [i_3] [i_2] [i_3] [4]) ? (arr_23 [i_2] [6] [i_2] [6] [i_3]) : (arr_23 [i_2] [i_2] [i_2] [10] [i_3]))) : (arr_12 [i_2] [i_3] [11]));
            }
        }
    }
    #pragma endscop
}
