/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_3] [i_2] = (((((-(-127 - 1)))) ? (((((arr_5 [9] [i_2] [i_2] [i_0 + 1]) + 2147483647)) << (var_12 - 1347557069))) : var_7));
                                var_21 = (((max(var_8, var_11)) >= (-127 - 1)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_22 = (!var_4);
                                var_23 = (min(var_23, var_1));
                                var_24 = (arr_19 [i_6] [i_2] [15] [i_1] [i_2] [12]);
                                arr_21 [13] [i_2] [i_2] [i_5] [i_6 + 2] = (min(((((((var_2 ? 54787 : 51018))) ? var_5 : 126))), (min((max(var_2, var_1)), (var_19 - var_15)))));
                                var_25 = (max((arr_16 [i_2 + 1] [i_2 - 1] [13]), ((((max(105, var_7))) ? -var_10 : (arr_6 [5] [i_2] [6] [6])))));
                            }
                        }
                    }
                    arr_22 [i_2] [i_1] = var_1;
                    var_26 = (min(var_26, 54787));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 14;i_9 += 1)
            {
                {
                    arr_31 [i_8] [i_8] [i_8] [i_8] = (min(-var_9, (arr_26 [i_9] [i_8])));
                    arr_32 [i_9] [i_7] [i_7] |= (var_1 < var_16);
                    arr_33 [i_8] [10] [1] [i_8] = var_18;
                    var_27 = (max(var_27, ((max(var_18, ((max((((0 ? -109 : var_15))), (arr_9 [i_7] [i_7 - 2] [i_7 + 2] [i_9 - 1] [i_7] [i_9])))))))));
                }
            }
        }
    }
    var_28 = ((!((!((max(var_19, var_9)))))));
    #pragma endscop
}
