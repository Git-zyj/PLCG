/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_0, (min(((var_5 ? 45904 : var_5)), var_7))));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0 + 1] [i_0] = (((((((var_10 >> (var_6 - 64480))) | var_8))) && ((max(17, (max(19632, 0)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_12 ^= ((var_6 | ((65535 ? (arr_7 [i_0 + 2] [i_0 - 1]) : (35603 < 30587)))));
                        arr_14 [i_2] [i_2] [i_2] [i_3] = (~65535);
                        arr_15 [i_0] [i_1] [6] [i_3] [i_1] [i_2] = ((~(arr_11 [3] [15] [i_3])));
                        arr_16 [i_2] [i_2] [i_2] = 34949;
                        arr_17 [i_3] [i_2] [i_2] [i_0 - 3] = var_1;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 14;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 14;i_7 += 1)
                        {
                            {
                                arr_32 [i_6] = ((65535 * (max(var_9, ((var_0 & (arr_0 [14])))))));
                                var_13 = max(46295, (min((arr_3 [i_6] [i_5 + 1]), 11165)));
                                var_14 = min((min((arr_22 [i_5 - 1] [i_5 + 2] [0]), (arr_22 [i_5 + 2] [i_5 - 1] [5]))), (((var_1 > (arr_22 [i_5 + 2] [i_5 + 1] [i_5 - 1])))));
                            }
                        }
                    }
                    arr_33 [i_5] = ((+(max(-0, ((((arr_21 [i_0] [i_4]) || var_3)))))));
                }
            }
        }
    }
    #pragma endscop
}
