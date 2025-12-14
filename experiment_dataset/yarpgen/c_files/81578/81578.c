/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((((!-4151769052286245819) ^ (((arr_0 [i_0] [i_0]) * 30299)))) | ((~(((arr_0 [i_0] [i_0]) / var_1))))));
        arr_3 [i_0] = ((((var_8 + 2147483647) << (30300 - 30300))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_11 &= 254;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_12 [i_1] [i_1] [i_3] [i_1] = -1;
                        var_12 = ((var_8 ? ((min(-32746, 47))) : 249));
                        var_13 = (42621 / 7053);
                    }
                }
            }
        }
        var_14 = (min(var_14, (6011416026241585935 != 46811)));
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        arr_15 [i_5] [i_5] = ((94 != (((arr_14 [i_5]) ? ((max(252, 128))) : ((var_10 ? 60826 : (arr_14 [i_5])))))));
        arr_16 [i_5] = var_9;
    }
    for (int i_6 = 3; i_6 < 15;i_6 += 1)
    {
        arr_21 [i_6] = (arr_14 [i_6]);
        var_15 = (((var_10 / 11070) ? -206958044 : (max((min(12666584386803971255, (arr_0 [i_6] [i_6]))), 109))));

        for (int i_7 = 3; i_7 < 15;i_7 += 1)
        {
            arr_24 [14] [i_6] [i_7] = ((((arr_13 [i_6 - 3] [i_6]) ? 24962 : (arr_23 [i_6 + 1] [i_6] [i_7 - 2]))));
            arr_25 [i_6] [i_6] = (((!17173) ? (min((2099289355 - 12546), (1062649040 > var_8))) : (((arr_22 [i_6 - 2] [i_6]) ? (arr_22 [0] [i_6]) : (arr_22 [i_7 - 2] [i_6])))));
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            {
                arr_31 [i_9] [i_9] [i_9] = (max(((3618141481581807833 ? 47 : ((-(arr_29 [i_8] [i_8]))))), 56276));
                var_16 = (max(var_16, var_3));
                var_17 = ((85 ? 2 : 7));
            }
        }
    }
    #pragma endscop
}
