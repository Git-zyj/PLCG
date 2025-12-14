/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~-1);

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_11 |= (((32325 < 4702850001057108278) ? (max(((9223372036854775807 ? -1 : 4610560118520545280)), var_8)) : (arr_7 [9])));
                    arr_8 [12] [i_1 - 3] [i_2] [i_1] = 8712550051875317149;
                }
            }
        }
        var_12 = (((arr_7 [i_0 - 2]) ? (-9279 >= 9223372036854775807) : (arr_3 [4] [i_0 - 1])));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_13 -= ((-var_9 <= (arr_1 [i_5])));
                                arr_17 [i_5] [i_3 - 1] = (~(arr_16 [i_0] [i_0] [7] [i_4 + 1] [i_5] [15]));
                                var_14 &= (~0);
                                var_15 = (min(var_15, 0));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                arr_23 [i_8] [i_8] = (min(((((arr_20 [i_3 + 1] [i_3] [i_3 - 1] [i_3 + 1] [i_3 - 1]) <= ((var_2 ? 9223372036854775807 : var_9))))), (((-1 != (arr_20 [i_8] [i_7] [i_4 + 1] [i_3] [1]))))));
                                arr_24 [i_8] [i_8] = 5824177305313383559;
                            }
                        }
                    }
                }
            }
        }
        var_16 = var_7;
    }
    var_17 = ((-(max(((var_3 ? 6242837337763641361 : var_0)), (~var_3)))));
    #pragma endscop
}
