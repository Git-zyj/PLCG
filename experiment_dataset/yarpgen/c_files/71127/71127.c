/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (((((max(var_5, var_9))) ? (var_9 << var_0) : var_4)));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (!(((var_4 ? (arr_0 [i_0 - 1]) : -42))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_13 = var_9;
            var_14 = ((-((var_9 ? var_10 : (arr_3 [i_0 - 1] [i_0 - 1])))));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 15;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                var_15 = (((arr_4 [i_0 + 1]) ? (arr_0 [i_3]) : var_9));
                var_16 = var_5;
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_17 = (((var_10 ? var_11 : var_1)) <= -23);
                var_18 = var_0;
                var_19 = (~var_7);
            }
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_20 = (arr_4 [i_0 + 1]);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        {
                            arr_19 [i_6] [i_0] [i_0] = (arr_13 [i_0]);
                            var_21 = (arr_17 [i_0] [i_0]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            arr_27 [i_0] [i_2] [i_5] [i_5] [13] [10] = ((var_7 ? var_6 : (((var_8 ? var_1 : (arr_22 [i_0]))))));
                            var_22 = (min(var_22, ((((((var_11 ? var_1 : 1))) < -24)))));
                        }
                    }
                }
            }
            arr_28 [i_0] = ((arr_24 [i_2] [i_2 - 2] [i_0 + 1] [i_0] [i_0 + 1] [i_0]) << (((arr_24 [8] [i_2 - 1] [i_0 - 1] [i_0] [i_0] [8]) - 30032)));
            var_23 = ((-(arr_20 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1])));

            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                var_24 = (arr_20 [i_0] [i_0 - 1] [i_0] [i_0] [i_0]);

                for (int i_11 = 1; i_11 < 15;i_11 += 1) /* same iter space */
                {
                    var_25 = (!var_5);
                    var_26 += var_4;
                    arr_35 [i_0 + 1] [i_0] [i_10] = (var_1 | var_3);
                }
                for (int i_12 = 1; i_12 < 15;i_12 += 1) /* same iter space */
                {
                    var_27 = (max(var_27, var_9));
                    arr_38 [i_0] [i_0] [i_0] = -1;
                }
                for (int i_13 = 1; i_13 < 14;i_13 += 1)
                {
                    arr_43 [i_13] [i_0] [9] [2] [i_0] [i_0] = var_4;
                    arr_44 [i_0] [i_0] [i_0 - 1] = ((var_7 ? ((var_0 ? 1 : var_10)) : (arr_40 [i_0] [13] [i_2] [i_0])));
                }
            }
            for (int i_14 = 1; i_14 < 13;i_14 += 1) /* same iter space */
            {
                var_28 = var_11;

                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    arr_51 [i_0] [i_0] = ((var_9 ? (arr_20 [i_0] [14] [i_14 + 1] [i_0 - 1] [i_15]) : (arr_20 [i_0] [i_0] [i_14 - 1] [i_0 - 1] [i_14 - 1])));
                    var_29 = var_8;
                    arr_52 [i_0] [i_0] = arr_3 [i_2 - 1] [i_14 + 2];
                    var_30 = var_10;
                    arr_53 [i_0] [i_0] [i_14] = ((((var_4 ? var_5 : var_8))) ? ((((arr_13 [i_0]) ^ 10496))) : var_5);
                }
            }
            for (int i_16 = 1; i_16 < 13;i_16 += 1) /* same iter space */
            {
                var_31 += ((((var_4 ? 0 : var_11)) & 2147483647));
                var_32 = (((var_11 <= var_7) ? var_4 : (arr_50 [i_0] [0] [i_2 - 2] [i_0])));

                for (int i_17 = 2; i_17 < 13;i_17 += 1)
                {
                    var_33 = var_11;
                    arr_60 [i_0 - 1] [i_0] [i_16] [i_17] = (((arr_33 [11] [i_2]) != (((var_9 ? var_11 : var_11)))));
                    arr_61 [i_0] = var_11;
                }
                for (int i_18 = 0; i_18 < 16;i_18 += 1)
                {
                    arr_64 [i_0] = (~(10526 <= 2));
                    arr_65 [7] [7] [i_0] = (arr_16 [i_0 + 1] [i_2] [i_16] [i_18]);
                    arr_66 [i_18] [i_2] [i_16] [i_2] [i_16] |= -84;
                    var_34 = (var_2 ? var_2 : var_6);
                    var_35 = (max(var_35, ((((((arr_36 [i_18]) / var_3)) << (((arr_56 [i_16]) + 3112038541312041973)))))));
                }
            }
        }
    }
    for (int i_19 = 0; i_19 < 12;i_19 += 1)
    {
        var_36 -= (((((~(min(var_6, var_7))))) ? (max(((var_5 ? var_5 : 20988)), 10765478891879414723)) : (((-((var_1 + (arr_25 [5] [5] [i_19] [i_19] [i_19] [i_19]))))))));
        var_37 = ((((max((arr_36 [i_19]), -1))) ? ((((((var_0 ? var_3 : -20396))) != ((1 ? var_9 : var_10))))) : (((((var_8 ? var_2 : var_10)) > -23)))));
    }
    #pragma endscop
}
