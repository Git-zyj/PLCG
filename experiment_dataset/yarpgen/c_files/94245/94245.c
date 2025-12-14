/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_14 = (max((max((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0 + 2] [i_0 - 3]) : 7)), var_3)), 2));
        var_15 ^= (max(((~(arr_2 [12] [i_0]))), -56));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_16 ^= ((~(max(((max(var_5, 5))), (arr_3 [i_1 + 1] [2])))));
        var_17 ^= var_0;
        arr_5 [i_1 + 1] [i_1 - 1] = ((!(((var_6 - (-8 != var_6))))));
        var_18 ^= (max(0, 9827915168185122296));
    }
    var_19 ^= (((~(var_1 & -8509))));
    var_20 = ((!(((max(10, var_3))))));

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_21 ^= (~var_5);
        var_22 = 1;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        var_23 = ((!(0 ^ 2157096763)));
                        var_24 = 215;
                        var_25 = (arr_6 [i_2] [i_5]);
                        arr_16 [i_2] [i_2] [i_2] [i_2] = ((-((var_12 ? var_0 : var_5))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_22 [i_6] [i_6] [i_6] [i_6] = ((!(((arr_20 [i_7 - 1] [i_7 - 3] [i_7 + 1] [i_7 + 1] [i_7]) && var_11))));
                                arr_23 [i_7] [i_3] [i_4] [i_6] [i_3] = var_7;
                                arr_24 [i_2] [i_3] [0] [i_6] [i_7] = var_11;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 19;i_9 += 1)
                        {
                            {
                                arr_32 [i_8] [i_3] [10] [i_8] [i_9] = 3076184300;
                                var_26 = ((18446744073709551592 ? (max(var_5, (~8618828905524429308))) : 1));
                            }
                        }
                    }
                }
            }
        }
        arr_33 [i_2] = (var_1 + var_5);
    }
    #pragma endscop
}
