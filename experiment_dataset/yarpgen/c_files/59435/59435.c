/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = (min(var_17, (min(((((arr_1 [i_0]) ? 32 : -0))), (arr_0 [i_0] [i_0])))));
        arr_2 [i_0] = ((((((max(var_14, var_16))) < (!255))) ? (max(var_15, 0)) : var_16));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_5 [i_1] = ((~(((var_4 > (-9223372036854775807 - 1))))));
        var_18 = 1;
        var_19 = (max((((max(-9223372036854775807, 39371)))), (((arr_4 [i_1]) ? var_12 : var_16))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_20 = ((-(((arr_6 [19]) + (arr_4 [i_2])))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_21 = (((arr_6 [i_4 - 2]) ? (arr_14 [i_5] [20] [i_2] [i_4 - 2]) : var_10));
                            arr_18 [i_4] [i_4] [i_4] [i_4] [i_4 - 1] [i_4 - 1] = ((9223372036854775807 == (-9223372036854775800 % 237)));
                        }
                        for (int i_7 = 2; i_7 < 20;i_7 += 1)
                        {
                            arr_21 [i_3] [i_3] = (!var_13);
                            var_22 = var_1;
                            arr_22 [i_2] [i_3] [17] [i_5] [i_7] = ((+(((arr_19 [2] [13] [19]) ? var_2 : (arr_10 [i_2] [i_3] [i_7])))));
                        }
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] = ((var_4 ? (arr_11 [i_4] [i_4 - 1] [i_4] [i_4 - 2]) : (arr_11 [i_4 - 2] [i_4 - 2] [i_4 - 1] [i_4 - 1])));
                            var_23 = (((arr_23 [i_3] [4] [i_4 + 1] [i_4 + 1] [i_4 - 1]) ? var_9 : (((arr_15 [i_2] [i_2] [16] [i_5]) & 4294967295))));
                            var_24 = (!4);
                            var_25 = ((arr_11 [i_4 + 1] [i_4 - 2] [i_4 + 1] [i_4 - 1]) ? (arr_11 [i_4 - 2] [i_4 - 1] [i_4 + 1] [i_4 - 2]) : (arr_11 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 + 1]));
                        }
                        var_26 = (9 > 4);
                    }
                }
            }
        }
    }
    var_27 = ((!(((((min(394806283, 11058))) ? (min(126318862, var_10)) : (3126302020 > var_3))))));
    var_28 = ((-(~var_12)));
    var_29 = ((!(((11 ? 7 : 85)))));
    #pragma endscop
}
