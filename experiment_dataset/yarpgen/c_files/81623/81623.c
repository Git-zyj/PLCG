/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_15 = ((max(var_14, ((max(var_6, 63116419))))));
                            var_16 = ((max((arr_1 [i_3]), (9 | 121232644))));
                            arr_10 [i_0] [i_0] [i_0] = ((((((arr_7 [i_0 - 1] [i_1] [i_3 + 3]) ? ((((arr_6 [i_0] [i_1] [i_2] [i_3]) ? (arr_6 [i_0] [i_1] [i_1] [i_3]) : var_6))) : (max(var_1, 4294967295))))) ? ((((arr_8 [i_0] [i_0] [i_0 - 3] [i_3 - 2]) / (arr_0 [i_0 - 3])))) : (~4294967291)));
                            var_17 = ((((((var_11 + 9223372036854775807) << (((-121232653 + 121232663) - 5)))) | (1899394393 > 112))));
                        }
                    }
                }
                arr_11 [i_0] [i_1] = var_7;
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_6] [i_0] [i_0] [i_0] [i_6] = ((((max((arr_3 [i_4]), 0))) ? (arr_13 [i_5] [i_4 - 1] [i_1] [i_0]) : (max(var_14, var_7))));
                                var_18 = (((((var_8 ? var_11 : 4294967287))) > ((var_8 * (!91)))));
                            }
                        }
                    }
                }
                arr_21 [i_0] [i_0] [i_1] = ((!((max((arr_8 [i_0] [i_0] [i_0] [i_0]), 0)))));
            }
        }
    }
    var_19 = var_13;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 7;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            arr_36 [i_7] [i_7] [i_7] [i_10] [i_7] [i_7] = ((-((~(!1)))));
                            arr_37 [i_7] [i_7] [i_7] [i_10] = 3107323021078025481;
                        }
                    }
                }
                var_20 = ((!(((var_6 << (((var_5 + 79) - 31)))))));
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 9;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 9;i_12 += 1)
                    {
                        {
                            var_21 = ((max((max(var_12, 106), ((min(var_14, var_13)))))));
                            var_22 = (max(var_22, var_0));
                        }
                    }
                }
            }
        }
    }
    var_23 = (!var_5);
    #pragma endscop
}
