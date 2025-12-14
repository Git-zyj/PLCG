/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (((((~((var_7 ? var_0 : var_1))))) ? (((~((7 ? var_4 : var_4))))) : ((var_6 ? var_1 : var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = (arr_1 [i_1]);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        arr_11 [i_1] = (arr_0 [i_2]);
                        var_11 = (min(var_11, (((20751011 || (arr_0 [i_3 + 1]))))));
                    }
                    for (int i_4 = 4; i_4 < 11;i_4 += 1)
                    {
                        var_12 = (~(arr_9 [i_4 - 2] [i_4 - 2] [6] [i_4 + 1]));
                        var_13 = (max(var_13, ((((-32767 - 1) + 5)))));
                        var_14 = (min(var_14, (((arr_6 [i_0] [i_0] [i_0] [i_0]) ? (arr_6 [i_0] [i_0] [i_0] [7]) : (arr_3 [i_4] [i_1] [6])))));
                    }
                    var_15 = arr_4 [i_0] [i_0] [i_0];
                    var_16 = (max(var_16, ((((arr_12 [i_0] [i_1] [i_2] [i_0] [i_0]) ? ((32756 ? (arr_12 [i_0] [i_0] [i_0] [1] [i_2]) : 139)) : ((((arr_8 [i_0] [4] [i_0] [i_1] [i_0] [9]) ? 3991494172 : 201))))))));
                }
                var_17 = (arr_4 [i_1] [2] [i_1]);
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_21 [0] [i_6] [i_7] [i_1] [i_0] |= (((arr_4 [i_6] [i_0] [i_0]) ? ((((~28) ? ((~(arr_3 [i_1] [i_5] [2]))) : 41))) : (((((-585151931298489730 ? -41869788 : 116))) ? (((arr_13 [i_0]) ? 6884620671950035255 : (arr_16 [i_5]))) : -28))));
                                var_18 = 93;
                                var_19 |= ((~((-((-(-32767 - 1)))))));
                                arr_22 [i_0] [i_1] [i_0] [i_6 - 3] [i_7] |= 2316526514;
                                arr_23 [i_1] = (arr_3 [11] [i_6 - 4] [i_7]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
