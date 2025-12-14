/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_13 ? (~var_14) : ((((!var_8) ? 1968438736 : var_4)))));
    var_16 = var_13;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((-(arr_2 [i_0 + 1])))) ? ((((((arr_0 [i_0 + 1]) / (arr_2 [i_0])))) ? ((var_11 / (arr_1 [i_0] [i_0 - 1]))) : var_6)) : (((min((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1])))))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            arr_8 [i_1] = ((1679262348 ? -1497818598 : -1497818598));
            arr_9 [0] [i_0 + 1] = var_13;

            /* vectorizable */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                var_17 = 65535;
                arr_12 [6] [i_2] = ((-(arr_1 [i_0 + 1] [i_0 + 1])));
                var_18 = (min(var_18, ((((arr_6 [i_0] [14] [i_0]) != ((8589934336 ? var_10 : (arr_1 [i_1] [i_2]))))))));
                arr_13 [i_2] [i_1] [i_2] [i_1] = 244036688;
            }
            var_19 = var_3;
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {
            arr_16 [i_0] = (arr_11 [i_0] [i_0] [i_0] [i_3]);
            arr_17 [i_0] = var_8;
        }
        var_20 = (arr_5 [i_0]);
    }

    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        var_21 ^= (1497818611 ? -1497818604 : (arr_19 [i_4] [i_4]));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    arr_25 [i_4] = ((((max((min((arr_18 [i_5] [i_6]), (arr_24 [i_4] [i_5] [i_5] [i_6]))), (((1497818592 >> (5935832877184119845 - 5935832877184119837))))))) ? var_7 : (~1497818603)));
                    arr_26 [i_6] [i_5] = var_11;
                    arr_27 [i_4 + 2] [i_5] [i_6] = 0;

                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        arr_30 [i_4] = (((((arr_21 [i_4] [i_4 + 1] [i_4]) ? var_8 : var_5)) << (((arr_21 [i_7 + 1] [i_5] [i_4 - 1]) - 19))));
                        var_22 = (max(var_22, var_2));

                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            var_23 = ((var_4 / (arr_28 [i_4 - 1] [i_5])));
                            arr_35 [i_4] [i_5] [i_6] [i_7 - 1] [i_8] = ((!(arr_31 [i_4] [i_5] [i_5] [i_7] [i_7 - 1] [i_7] [i_7])));
                            arr_36 [i_4 + 2] [i_4 + 2] [i_6] [i_4] [10] [i_5] = (((arr_28 [i_4 + 1] [i_4 + 1]) ? (arr_32 [i_4 - 1] [i_5] [i_6] [i_7 + 1] [i_8]) : (arr_28 [i_4 + 2] [5])));
                        }
                        var_24 = ((arr_29 [i_7 - 1] [i_7 + 1] [i_4 + 2] [i_4 + 2]) ? 1497818604 : var_9);
                    }
                }
            }
        }
    }
    #pragma endscop
}
