/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= ((var_11 * (var_2 <= var_5)));
    var_17 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = ((1 * ((-6742 ? (arr_3 [i_0 + 1]) : 549755813887))));
                var_19 = ((-6736 ? ((~(arr_6 [i_1]))) : (((1 ? -6742 : 1159188139)))));
                arr_7 [4] [i_1] [i_1] = ((-((var_3 + (0 * 1159188125)))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = ((((331374884 / (arr_12 [i_0 - 1]))) * (((((var_4 ? (arr_14 [7] [i_1]) : 1159188142)))))));
                                arr_15 [i_1] = ((78 ? -15669 : 1096717953));
                            }
                        }
                    }
                }
                var_21 = ((-(max(var_6, (arr_1 [i_0 - 1])))));
            }
        }
    }
    #pragma endscop
}
