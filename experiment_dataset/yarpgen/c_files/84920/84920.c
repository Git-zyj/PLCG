/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_10 = (min((18173 - 127), 45793));
                    arr_8 [i_0] [9] = ((var_9 != (((arr_1 [i_0] [8]) << ((min(0, 1)))))));
                    var_11 = ((var_1 ^ (max((var_3 + 1), (arr_6 [12] [i_1] [i_2])))));
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_15 [i_4] = (((arr_13 [i_4]) ? var_2 : 21985));
                                var_12 = (arr_6 [i_0] [i_0] [i_4]);
                                arr_16 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4] [i_1] = (((!8517827293208183587) && 193));
                                arr_17 [i_4] [i_4] [i_3] [i_4] [13] [i_3 + 2] = (((arr_14 [i_3 - 1] [i_3 + 2] [i_4] [i_3 - 3]) ? (arr_3 [i_1]) : (arr_4 [1] [i_1] [1])));
                            }
                        }
                    }
                    var_13 = arr_5 [19] [i_1] [i_1];
                    var_14 = (((((var_1 ? (arr_11 [i_0] [i_0] [i_1] [i_3]) : var_4))) ? 159131260 : var_4));

                    for (int i_6 = 3; i_6 < 21;i_6 += 1)
                    {
                        var_15 = (+(((arr_0 [i_0]) ? 63 : (arr_4 [i_0] [i_0] [i_0]))));
                        arr_20 [i_0] = ((~(arr_5 [i_6 + 1] [i_3 - 1] [i_3 - 1])));
                        arr_21 [i_0] [i_0] [i_0] = ((!((((arr_2 [i_0] [i_3 + 1]) ? (arr_7 [i_0] [i_1] [i_0] [2]) : (arr_13 [i_1]))))));
                        arr_22 [i_6] = (((!-32) ? ((((arr_5 [i_0] [i_0] [i_0]) ? (arr_6 [i_3 - 2] [i_1] [i_0]) : (arr_13 [i_1])))) : (arr_18 [i_3 - 1] [i_3] [13] [i_6 + 1] [i_6 - 3] [i_6 - 2])));
                    }
                }
                var_16 = ((((((var_3 * 255) | (!4135836064)))) ? (((0 | ((max(53, var_3)))))) : ((((((arr_1 [i_0] [i_0]) ? var_7 : 1))) ? (((58623 ? (arr_12 [0] [6] [i_0] [i_1] [i_1] [i_1]) : 21))) : (((arr_6 [i_0] [i_0] [i_0]) ? 18446744073709551604 : var_4))))));
                var_17 = ((((31 ? -17 : 55)) * (!-42)));
                var_18 = arr_9 [i_0] [i_1] [i_1];
            }
        }
    }
    var_19 = (max(17, var_4));
    var_20 = var_0;
    #pragma endscop
}
