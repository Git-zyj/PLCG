/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((4294967295 ? (min((arr_3 [i_0] [i_1]), var_3)) : (((4294967295 ? (4294967295 & 14) : 3832595672865981710))))))));
                var_18 = (65499 ? (((arr_3 [i_0] [i_0]) / (arr_0 [i_0]))) : ((((((min(var_14, 243))) < 1)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_19 = var_12;
                            var_20 = (min((var_0 || var_3), 224));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                var_21 = (max(var_21, ((((arr_4 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 + 1]) * 5)))));
                                var_22 = ((var_4 ? (!var_8) : ((var_16 ? (arr_10 [i_4] [i_0] [i_3] [i_2] [i_0] [i_0]) : 13))));
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_0] [i_0] [i_2] = (((arr_12 [i_0] [i_1] [i_3 - 3] [i_1] [i_1]) ? var_4 : (arr_12 [i_0] [i_0] [i_3 + 1] [i_4] [i_4])));
                            }
                            for (int i_5 = 0; i_5 < 19;i_5 += 1)
                            {
                                var_23 = ((-(((((var_12 ? 243 : 4294967295))) ? (arr_15 [i_0] [i_1] [i_2] [i_5]) : (((0 >= (arr_15 [i_0] [i_1] [i_2] [i_3]))))))));
                                var_24 = (arr_0 [i_0]);
                                var_25 = (((((~(arr_8 [i_3 + 2] [i_3 - 3] [i_3 - 3] [i_3 - 2] [i_3 - 3])))) ? ((((!(arr_10 [i_3 - 2] [i_0] [i_0] [i_3] [15] [i_3]))))) : (((((var_0 ? (arr_2 [i_0] [i_1] [i_2]) : var_8))) & var_6))));
                                var_26 = (((((arr_7 [i_2] [i_3] [i_3] [i_3]) & 66))) ? (260046848 & 4294967273) : 4294967295);
                                arr_16 [i_5] [i_0] [i_2] [i_0] [i_0] = (min(65535, 2223602692));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = 65513;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            {
                var_28 = ((~(arr_11 [18] [18] [i_6] [0] [i_6])));
                var_29 = ((((-var_12 ? 22 : var_9)) | (arr_12 [i_6] [i_6] [i_6] [i_6] [i_6])));
                var_30 = ((-(((32767 ? 249 : -266488293)))));
            }
        }
    }

    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        var_31 = (arr_0 [i_8]);
        var_32 = ((((min((arr_0 [i_8]), (arr_3 [i_8] [i_8])))) || var_4));
        var_33 &= min(((min(-232810977, 48))), (28 & 26));
    }
    var_34 = var_7;
    #pragma endscop
}
