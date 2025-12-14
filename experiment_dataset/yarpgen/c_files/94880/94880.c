/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = var_14;
                arr_5 [i_0] [i_0] [i_1] = (arr_2 [i_0 + 2] [i_0]);
            }
        }
    }
    var_17 = (max(var_17, (((var_4 ? ((((536870848 ? 1 : 21)) | var_2)) : ((((var_11 == (((536870868 ? -536870869 : 9223372036854775804))))))))))));
    var_18 = (max(var_18, var_15));
    var_19 = ((var_2 - (max(4294967295, var_14))));

    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_20 = arr_7 [i_2];
        var_21 = (max((((7 ? (arr_6 [i_2] [i_2]) : var_13))), 1099511496704));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = (var_13 ? (arr_8 [i_3]) : (((arr_6 [i_3] [i_3]) ? var_11 : var_5)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_22 = ((((arr_15 [9] [i_3] [i_4] [i_5]) - var_7)));
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_23 = (((arr_16 [i_7] [i_4] [i_5]) & (arr_16 [i_3] [i_4] [i_5])));
                                var_24 = (((15 + 1) ? (arr_10 [i_5]) : ((-(arr_19 [i_3] [i_3] [i_3] [i_4] [i_5] [i_6] [i_7])))));
                            }
                        }
                    }
                }
            }
        }
        var_25 *= ((var_6 ? (arr_12 [i_3] [i_3]) : var_12));
    }
    #pragma endscop
}
