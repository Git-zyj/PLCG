/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                var_20 ^= (((arr_0 [i_1 - 3]) / (arr_0 [i_0])));

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    arr_6 [i_0] [i_0] = (arr_4 [i_0] [i_0] [i_0]);
                    arr_7 [0] [i_1] [i_1] = (10747135590187391201 ^ var_19);
                    var_21 = ((var_10 ? ((142 ? 10747135590187391201 : 116)) : 9223372036854775803));
                    var_22 = var_19;
                }
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] = 10747135590187391201;
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((+(min((arr_8 [i_1 + 3] [i_1 + 1] [i_5 + 1]), ((1203397505 ? (arr_13 [i_0] [i_0] [11] [i_0] [i_5]) : -608642673))))));
                                var_23 = (((arr_5 [i_0] [i_1 + 3]) % (arr_3 [i_1 + 1] [i_1 + 2] [i_1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = var_7;
    var_25 = var_4;
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            {
                var_26 = (max((min((arr_17 [i_6 + 2] [i_6 + 3]), var_5)), var_17));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        {
                            var_27 = (max(var_27, -9223372036854775789));
                            arr_26 [i_8] [i_8] [8] [1] = (arr_1 [i_6] [i_9]);
                            var_28 = (min((((~18446744073709551600) ? ((var_6 ? (arr_19 [i_6]) : (arr_10 [i_6 + 1] [i_6 + 1] [i_6]))) : var_1)), ((min(-0, 24375)))));
                        }
                    }
                }
            }
        }
    }

    for (int i_10 = 1; i_10 < 20;i_10 += 1)
    {
        var_29 = (max(var_29, ((((((32764 + 10747135590187391201) < (10747135590187391204 && 2593414220))) ? 114 : ((+(min((arr_27 [i_10 - 1]), (arr_27 [i_10]))))))))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 19;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 23;i_14 += 1)
                        {
                            {
                                var_30 = (max(var_30, (arr_37 [i_10] [i_10] [10] [i_10] [i_10 - 1] [i_10] [i_10 - 1])));
                                var_31 = (!(((((min(-9223372036854775804, 9223372036854775807))) ? (arr_30 [i_10]) : var_10))));
                                arr_40 [i_10] = var_1;
                            }
                        }
                    }
                    arr_41 [i_10] [i_10] [i_10] [i_12] = var_16;
                }
            }
        }
    }
    #pragma endscop
}
