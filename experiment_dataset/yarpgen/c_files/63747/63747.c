/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [2] [i_0] = ((-(((((var_1 ? (arr_3 [21] [i_0]) : 22))) ? (((arr_4 [i_0]) % (arr_4 [i_0]))) : (!1023)))));
                var_17 = (max(var_17, (~248)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_17 [i_2] [i_2] [i_6] [i_2] [i_6] = ((+(((arr_12 [i_6]) >> (56 - 31)))));
                                arr_18 [i_4] [i_4] [11] [i_4] [1] [i_2] = (0 << ((max(4, -17))));
                                arr_19 [i_2] = (max((arr_14 [i_6] [i_5] [1] [i_3] [i_2]), ((max((arr_14 [i_2] [i_2] [i_2] [i_2] [i_2]), (arr_14 [i_2] [i_3] [i_3] [1] [i_3]))))));
                                var_18 = (max(var_18, (((((((arr_1 [0]) - var_7))) ? (arr_15 [10] [17] [i_3] [i_3] [10]) : ((max((arr_6 [i_6]), (arr_10 [i_2] [4] [i_5] [4])))))))));
                            }
                        }
                    }
                }
                var_19 = arr_2 [i_2];
                arr_20 [i_2] = ((65535 ? (min((max(22, (arr_7 [i_3]))), (arr_14 [i_3] [i_3] [1] [7] [i_2]))) : (((~((max((arr_15 [i_3] [i_3] [i_2] [i_2] [i_2]), (arr_12 [i_2])))))))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_20 = (~5);
                            var_21 ^= (max(((((arr_2 [1]) ? ((1 ? 22 : 6)) : ((33414 ? 496 : 16777215))))), var_1));
                            arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] = var_16;
                            var_22 = (arr_24 [i_8 - 1] [i_8 + 2] [i_8 - 2] [i_8]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 13;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {
                var_23 = ((~(arr_16 [i_9 - 1] [14] [i_9 - 1] [i_9 - 1] [i_9 + 1])));
                var_24 = (-(((arr_6 [i_9 + 1]) ? 11199 : (arr_6 [i_9 + 1]))));
                arr_31 [i_9] = var_14;
            }
        }
    }
    var_25 = ((var_6 ? var_12 : (((((var_15 << (177 - 157)))) | (((-9223372036854775807 - 1) ? var_0 : -9223372036854775776))))));
    #pragma endscop
}
