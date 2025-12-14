/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_8;
    var_14 = var_6;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = (((((arr_0 [i_0] [i_0]) + 9223372036854775807)) << (((((min((arr_3 [i_0]), var_7)) + 6035101754590808739)) - 6))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (max(628951766495349681, ((((((arr_6 [i_0] [i_0] [i_0]) ? (arr_5 [5] [i_1] [i_2 - 1]) : var_5))) ? (arr_3 [i_1]) : (!-8847140042654512792)))));
                    arr_11 [i_0] = (max(-12168, (max(-12175, (arr_9 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1])))));
                    var_16 = var_10;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_17 = (~6436699802088188432);
                                arr_18 [i_0] [i_0] [i_0] [i_0] = ((~(arr_16 [i_4] [i_0] [i_0] [i_2 - 1])));
                                arr_19 [i_0] [i_1] [i_2 - 1] [i_3] [1] = ((~((((min(-12168, 12168))) ? ((18385 ? -12169 : 12171)) : ((max(12168, 12154)))))));
                            }
                        }
                    }
                    var_18 += ((var_7 < (max(((11878330715369580707 ? -12185 : 6923602534486722355)), (((~(-2147483647 - 1))))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 22;i_7 += 1)
                {
                    {
                        var_19 = 151;

                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 19;i_8 += 1)
                        {
                            var_20 += (5894220398568269412 + -1);
                            var_21 += -13516;
                        }
                        var_22 ^= (((arr_15 [i_0] [i_0] [i_0] [i_5] [i_5] [i_6] [i_7]) + (arr_26 [i_6])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
