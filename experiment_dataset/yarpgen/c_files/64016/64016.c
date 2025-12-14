/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_4 % var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, (((((max((arr_4 [i_0] [i_1] [i_0] [i_0]), 231))) ? (min(((max(-14675, (arr_7 [i_0])))), (((arr_0 [i_1]) ? 268435455 : (arr_5 [i_0] [2] [i_2] [i_0]))))) : (~1489765145))))));
                                var_16 = (max(var_16, ((((-(var_3 + var_1)))))));
                                arr_11 [i_0] [i_0] [i_1] [i_0] [i_3] [i_4] = max((max(1489765139, (var_9 % 1489765139))), ((-92 ? 1916901873 : 1)));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_17 = ((~(arr_5 [0] [i_1] [i_1] [i_5])));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_18 = (min(var_18, ((((max((arr_12 [9] [i_5] [i_5] [i_7]), (~90))) >> ((((min(246, var_0))) - 219)))))));
                                arr_22 [i_0] [i_1] [i_1] [i_1] [i_0] [i_7] = (min((((max((arr_18 [i_0] [i_0] [i_5] [i_6] [i_7] [i_6] [i_5]), var_11)) ? 0 : (((arr_15 [i_0] [i_0] [i_0] [i_1]) ? 0 : 32756)))), ((-((min(var_12, (arr_5 [i_0] [i_0] [i_1] [i_6]))))))));
                                var_19 = (min((min(0, ((var_1 ? 1916901873 : 466054660108662383)))), ((((var_4 ? var_7 : var_9))))));
                            }
                        }
                    }
                    var_20 ^= ((((209 >> (3560017057870632804 - 3560017057870632777))) - 1));
                    var_21 = (min(var_21, (((~(min((max((arr_17 [i_0] [i_1] [15] [i_1]), var_12)), (12951 % 34703))))))));
                    arr_23 [i_1] = (((arr_21 [i_1]) | ((var_11 ^ (max(var_9, 61100540387072057))))));
                }

                for (int i_8 = 2; i_8 < 15;i_8 += 1)
                {
                    var_22 = var_10;

                    for (int i_9 = 1; i_9 < 14;i_9 += 1)
                    {
                        arr_29 [i_1] = var_1;
                        arr_30 [i_0] [i_1] [i_8] [i_9] [1] [i_1] = 17681;
                    }
                    var_23 |= (max((((~(arr_6 [i_0] [i_0] [1] [i_8])))), (((-(arr_20 [i_8 - 1] [i_8 - 1] [i_8] [i_0] [4] [i_8] [i_8]))))));
                }
                arr_31 [i_1] [i_1] [i_1] = ((((min(((0 ? 65535 : var_10)), ((min((arr_15 [i_0] [i_1] [i_1] [i_1]), var_10)))))) ? (arr_14 [i_1] [i_1]) : (((4294967295 ? var_2 : (arr_0 [i_0]))))));
            }
        }
    }
    #pragma endscop
}
