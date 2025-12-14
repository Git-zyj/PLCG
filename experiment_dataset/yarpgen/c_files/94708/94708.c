/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 = (min(-32758, ((((var_7 ? var_7 : var_13))))));
    var_17 = (min(var_4, (76 != -28413)));
    var_18 = (max(var_18, ((((!65514) && var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_2] = (arr_3 [i_2] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [3] [5] [i_1] [3] [i_4] = ((var_0 ? -1777738504 : var_10));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_4] = ((((var_13 ? var_11 : 65514)) > ((4294967295 ? var_5 : ((min((arr_2 [i_0]), 8191)))))));
                                var_19 = ((((max((min(var_14, var_8)), var_7))) ? ((0 ? (arr_6 [i_2] [i_1]) : ((~(arr_11 [1] [i_1] [i_2] [i_2] [i_1] [i_4]))))) : (min((arr_13 [i_1] [i_2] [i_3 + 2] [i_3] [i_3 - 1]), (arr_11 [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1] [i_3] [i_3 + 1])))));
                                var_20 = var_8;
                            }
                        }
                    }
                }
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_26 [i_0] [i_1] [i_5 - 1] [i_6] [1] [8] = -1709661874;
                                var_21 = (((((arr_5 [i_1] [5]) < (!-13539))) ? ((var_6 ? (arr_13 [7] [7] [i_7] [i_5 - 1] [i_0]) : 65522)) : -26600));
                                arr_27 [1] [1] [i_7] = 25227;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_22 = (min(var_22, var_8));
                                var_23 += 79030956;
                                var_24 = 18446744073709551607;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 11;i_11 += 1)
                        {
                            {
                                arr_39 [i_0] [i_1] [i_10] [1] [i_11] = var_2;
                                arr_40 [i_5] = ((((((max(400646031, var_4)) << ((4169768787 ? (arr_31 [2] [i_5]) : var_2))))) >= -2320839966613186464));
                                arr_41 [i_0] [i_1] [i_5] [i_5] [i_10] [i_11] = (min(((min(12288, var_5))), -109152794149937079));
                                var_25 = var_11;
                                arr_42 [1] [i_11] [i_11] [i_10] [i_11] = 5;
                            }
                        }
                    }
                    arr_43 [i_0] [i_0] [i_0] = (max((((((max((arr_2 [i_1]), (arr_25 [i_0] [i_1] [i_5 - 1] [i_0] [i_1])))) ? (max(65522, var_11)) : 0))), (((((max(44170, (arr_21 [i_0] [i_1]))))) + (arr_18 [i_5] [i_5 - 1] [i_5] [i_5])))));
                }
                var_26 = (1938034477 && (-2147483647 - 1));
                var_27 = (-2147483647 - 1);
            }
        }
    }
    #pragma endscop
}
