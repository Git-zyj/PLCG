/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_9 [i_0] [i_2] = ((arr_0 [i_0]) ? (arr_0 [i_2]) : var_12);
                    arr_10 [i_0] [i_1] [9] = ((~(arr_3 [i_1] [i_1] [i_0])));
                }
                arr_11 [21] [i_0] [i_0] = (max(((var_0 ? (arr_5 [i_0]) : (arr_4 [i_1]))), ((((arr_3 [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [i_0] [i_0]) : var_5)))));
            }
        }
    }
    var_13 = (min((var_5 != var_4), var_9));

    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 12;i_5 += 1)
            {
                {
                    arr_22 [8] [i_4] [i_4] [i_5] &= (~(min(var_12, (max((arr_16 [i_3] [i_4] [8]), var_10)))));

                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        var_14 = (max(var_14, (~var_10)));
                        var_15 = ((((min(var_2, (max((arr_23 [i_3] [i_5] [i_5] [i_6]), var_4))))) ? ((65535 ? 26398 : -2923549298271951471)) : (!-28030)));
                        var_16 = (arr_6 [i_5 + 1] [i_5 - 1] [i_5 + 3] [i_5 - 3]);
                    }
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        arr_27 [i_3] [i_4] [i_5] [i_5] [i_7] = (((min((((var_3 || (arr_3 [11] [11] [11])))), ((26398 ? 9223372036854775807 : 4095))))) ? (((((var_1 ? 21108 : var_9))) ? ((max((arr_25 [i_7 - 1] [i_7 - 1] [i_5] [5] [i_4] [i_4]), var_4))) : (min((arr_15 [i_7 + 1]), var_0)))) : (((((((arr_19 [i_3] [11] [i_5 + 2] [i_5]) ? var_10 : (arr_2 [4] [4]))) > (max(var_0, var_10)))))));
                        var_17 = (!-16384);
                        arr_28 [i_5] [i_5] [i_4] [i_5] = (~((max((!var_10), (min(var_5, var_3))))));
                        var_18 = (min(var_10, (arr_5 [i_3])));
                    }
                }
            }
        }
        arr_29 [i_3] = var_9;

        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            arr_33 [i_3] [i_3] [5] = (max((((-(max((arr_12 [i_3]), (arr_1 [i_3] [i_3])))))), ((26398 ? 134217727 : -9128290468300315375))));
            arr_34 [i_8] [10] = (min(((((min(var_8, 2))) ? 32737 : (-134217728 && var_12))), (-32767 - 1)));
        }
    }
    var_19 = (max(var_19, ((((min(((min(var_7, var_9))), var_2))) ? (65535 == 21108) : var_12))));
    #pragma endscop
}
