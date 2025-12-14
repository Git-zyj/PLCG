/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    var_18 = (!var_3);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_1 + 3] [i_1] = ((-(arr_1 [i_1 + 2])));
            var_19 = ((arr_5 [i_1]) ? var_14 : (arr_5 [i_1]));
            var_20 = (max(var_20, ((((arr_1 [i_1 - 1]) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 - 1]))))));
        }

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_11 [1] [i_2] [i_2] = (~-32355);
            var_21 = ((50088 ? var_4 : (~15447)));
            var_22 = ((!(((50088 ? -8 : 9926)))));
        }

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_23 = (arr_5 [i_0]);
            arr_15 [i_0] [i_3] = (1 || 3790657129880831076);
        }

        for (int i_4 = 3; i_4 < 21;i_4 += 1)
        {
            arr_18 [i_0] [i_4] = arr_12 [i_0] [i_0] [i_4];
            arr_19 [i_0] [i_4] [i_4] = var_9;
            var_24 = (max(var_24, (((((((arr_2 [i_0]) ? var_5 : 18446744073709551615))) ? (45731 | 1) : var_12)))));
        }
        arr_20 [6] = (((((59498 ? var_4 : var_11))) ? (((arr_7 [i_0] [i_0]) ? 2147483644 : 50092)) : ((var_10 ? 64645 : 1))));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_23 [i_5] = ((!((min(1, 0)))));
        var_25 = (min(var_25, (((-1 ? (((((var_3 ? (arr_9 [i_5] [i_5]) : (arr_10 [24]))) & (max(var_1, (arr_13 [i_5] [i_5])))))) : ((var_7 ? ((min(var_13, (arr_7 [i_5] [i_5])))) : 314975538)))))));

        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {

            /* vectorizable */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                arr_30 [i_7] [i_6] [i_5] = (arr_8 [i_7]);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 11;i_9 += 1)
                    {
                        {
                            var_26 = (arr_12 [i_5] [i_5] [i_5]);
                            arr_37 [i_8] [i_6] [i_7] [i_8] [i_7] = ((((((arr_21 [i_5]) ? var_1 : (arr_25 [i_5])))) ? (arr_32 [i_5] [i_6] [i_6] [i_9 - 1]) : (arr_17 [i_5] [i_5] [i_5])));
                            var_27 = (((var_10 ? 1820479440 : var_9)));
                            var_28 = var_6;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        {
                            arr_43 [i_11] [i_7] [i_11] = (arr_17 [i_5] [i_6] [i_7]);
                            arr_44 [i_5] [i_5] [i_5] [i_11] [i_11] = ((((arr_0 [i_5] [i_5]) || (arr_25 [i_7]))));
                        }
                    }
                }
            }
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                var_29 = ((~(((((arr_1 [i_5]) + 9223372036854775807)) << (7981 - 7981)))));
                var_30 = (max(var_30, (!-1611923489)));
                var_31 = (15454 < 33808);
                arr_48 [9] [i_6] [9] = (max(65535, 3839));
                var_32 = (arr_4 [i_5]);
            }
            arr_49 [i_5] = var_5;
            var_33 = (arr_21 [i_5]);
        }
        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            var_34 = arr_41 [i_13];
            var_35 = 1;
        }
    }
    #pragma endscop
}
