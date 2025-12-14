/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((var_6 ? ((-(arr_0 [i_1]))) : (var_12 | -1)))));
                arr_4 [i_0] [i_0] [i_0] = var_14;
                arr_5 [i_0] = ((~((((max((arr_0 [i_0]), var_16))) ^ (!1)))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, (~var_4)));
                                var_19 = (min(var_19, (((-((max(var_14, var_13))))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((max((!var_11), var_0)));
                                var_20 = (min(var_20, (arr_7 [i_3 + 2] [i_4 - 1] [i_4 - 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_3;
    var_22 = var_4;

    for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
    {
        var_23 = (((((arr_17 [i_5]) < -var_3)) ? (max(((max(1, 4671246601079039498))), (arr_19 [i_5 + 2]))) : (!18931)));

        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            arr_23 [i_6] = (max(-1, -1));
            arr_24 [i_5] [i_5] = (max(((2059749136975082616 ? -6851152272788156062 : 46604)), ((max((!58475), (!var_4))))));
            var_24 = (min(var_24, var_14));
        }
        for (int i_7 = 2; i_7 < 10;i_7 += 1)
        {
            arr_27 [i_5] [i_5] = ((max(1, -6135115461111032241)));
            var_25 += (((arr_11 [i_5 + 2] [i_5 + 2] [i_5 + 2]) ? (arr_11 [i_5 + 2] [i_7 + 1] [i_7 + 1]) : 1));
        }
    }
    for (int i_8 = 1; i_8 < 10;i_8 += 1) /* same iter space */
    {
        arr_31 [i_8] = ((var_10 - (((max(-1, var_3)) ^ var_16))));
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    arr_38 [i_8] [i_8] [i_10] [i_8] = ((-((((!var_3) || var_8)))));
                    var_26 &= (((arr_28 [i_8 - 1]) ? -var_11 : ((~(var_13 > var_15)))));
                }
            }
        }
    }
    var_27 = (min(var_27, ((((((((var_10 ? var_1 : var_13))) ? var_8 : var_6)) * (~0))))));
    #pragma endscop
}
