/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (((arr_0 [i_0]) && var_4));
        var_16 = (((arr_3 [i_0]) ? -1 : (arr_2 [i_0])));
    }
    var_17 = (min(var_17, ((max(var_2, (((((max(var_14, 0))) <= ((var_1 ? -7369086175107139754 : -7369086175107139754))))))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            {
                arr_8 [i_1] = (max((((((2081784928 ? var_12 : var_4))) ? ((((arr_4 [i_2]) ? 20367 : var_2))) : var_3)), (((65535 ? (arr_5 [i_1]) : var_13)))));
                arr_9 [i_1] = ((+(((arr_5 [i_2]) ? 13 : (arr_6 [i_1] [i_1] [i_2])))));
                var_18 = (max(var_18, (((((min(((max((arr_5 [i_2]), 4294967292))), (min(1, var_10))))) ? (~1) : (((((-741068115 ? (arr_5 [i_1]) : -1))) ? ((max(52181, var_2))) : (max((arr_5 [i_2]), (arr_6 [i_2] [2] [i_1]))))))))));
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_17 [i_1] [1] [i_3] [0] [i_5] = (((((min(65516, var_11)))) ? (((((((52193 ? 1 : 1))) > (146 * 13))))) : (max(var_14, (arr_7 [i_3])))));
                                var_19 = (max(var_19, ((((max(19, (max(0, (arr_15 [10] [i_2] [i_2] [i_2] [i_5] [i_2] [i_5]))))) == 65535)))));
                                var_20 = (min(-3254971598420078351, ((max((((-(arr_13 [i_5] [i_4] [i_3] [i_2] [i_1])))), (max(1997035522, (arr_12 [12] [12] [i_4] [1]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
