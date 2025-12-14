/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 = (arr_2 [i_2] [i_4]);
                                var_19 = ((var_4 <= ((~((((arr_4 [15] [i_1]) >= var_17)))))));
                                var_20 = ((((((var_3 ? (arr_3 [i_0] [i_3]) : (arr_8 [i_2] [i_2 + 1] [i_4]))) - (((arr_9 [i_4] [5] [i_1 + 1] [i_0]) ? var_5 : (arr_1 [i_0]))))) + (var_17 ^ -var_4)));
                                arr_15 [i_0] [i_0] [i_2] [i_2] [0] = ((((!(arr_9 [i_0] [i_1] [i_2 + 1] [i_3])))));
                            }
                        }
                    }
                    var_21 = ((-(((9223372036854775807 ^ -666436170084749922) ? -1 : (((arr_5 [i_2] [i_1]) ? 0 : var_5))))));
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_22 ^= var_8;
                                arr_23 [i_0] [i_0] [6] [i_0] [0] [6] = (-(arr_10 [i_5]));
                            }
                        }
                    }
                    var_23 ^= arr_16 [i_0] [i_0] [i_0] [7];
                }
                arr_24 [i_0] [i_1] [i_1] = (max(var_13, var_13));
                var_24 = (max(var_24, ((((((arr_7 [i_1 + 3] [i_1 + 3] [i_1]) ? (arr_7 [i_1] [i_1 - 1] [i_1]) : (arr_7 [i_1 + 2] [i_1 + 3] [i_0])))) ? 3092631725 : (((arr_7 [i_1] [i_1 + 2] [i_0]) & (arr_7 [i_1] [i_1 + 3] [i_1])))))));
            }
        }
    }
    var_25 = var_9;
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            {
                arr_29 [i_8] [i_9] = min(4294967292, 0);
                var_26 ^= ((-1 ? 0 : 2903337390));
                var_27 ^= ((((1 < (min((arr_1 [8]), 18446744073709551593)))) ? (arr_26 [i_8] [i_9]) : (!57787)));
                var_28 = (arr_27 [i_8] [i_9]);
            }
        }
    }
    var_29 = ((((((!(((var_14 ? var_7 : var_11))))))) > (~var_9)));
    #pragma endscop
}
