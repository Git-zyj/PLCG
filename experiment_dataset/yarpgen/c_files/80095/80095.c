/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0 + 1] = ((~(arr_1 [i_0 - 2])));
                var_20 = (max((arr_3 [i_0 + 1] [i_1 - 2]), var_9));
                arr_5 [i_0] [21] [21] &= (((((min((max((arr_3 [1] [i_1 + 2]), var_5)), ((min(1, 65533))))) + 2147483647)) << (13704 - 13704)));

                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    arr_8 [i_0] [i_0 + 1] [16] = ((1 - ((-1 ? (((arr_6 [i_1] [i_1]) * (arr_2 [i_0] [i_0 - 1] [i_0]))) : -var_18))));
                    var_21 = (arr_6 [i_1] [i_1]);
                    var_22 -= ((((max(243, var_6))) ? ((-(arr_7 [i_2 - 1] [i_2 + 2] [i_2 - 2]))) : (arr_7 [i_2] [i_2] [i_2 - 2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_23 = var_11;
                                var_24 |= ((max(-32754, 16591)));
                            }
                        }
                    }
                    var_25 = var_19;
                }
                for (int i_5 = 3; i_5 < 21;i_5 += 1)
                {
                    arr_19 [i_0] [i_0] = ((-8564 == (max(1, 1))));
                    var_26 = ((+(((228 * 18) / (var_9 / 1)))));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_27 = (max(var_27, ((min(((((max(-19123, 0))) ? (min(var_8, (arr_0 [i_6]))) : var_18)), (~76))))));
                                arr_24 [i_5] [i_5] = ((((var_14 ? var_12 : -var_2)) >= 53915));
                            }
                        }
                    }
                    arr_25 [i_5] [i_1] = (max((max(var_9, ((((arr_21 [i_0] [i_1] [i_1] [4] [i_5]) - 1))))), (((max(1690208871, 1))))));
                }
            }
        }
    }
    var_28 &= ((((((max(15, 1)) + var_18))) ? 1 : ((var_2 ? ((53912 ? var_7 : var_17)) : (var_18 >= var_5)))));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 0;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 20;i_9 += 1)
        {
            {
                arr_32 [i_9 + 2] [i_9 + 4] = ((max(((8953 ? var_7 : (arr_29 [14] [7] [i_9]))), (max((arr_26 [16]), 9865)))) ^ (arr_31 [i_8] [i_9]));
                var_29 += (((((arr_31 [i_9 + 2] [i_9 + 1]) ? var_9 : var_4)) + -var_0));
                var_30 -= 9865;
            }
        }
    }
    #pragma endscop
}
