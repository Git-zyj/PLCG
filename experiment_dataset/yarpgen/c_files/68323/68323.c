/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_11, (((!(var_18 * var_1))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (min(((((min(0, 97))) ? (((arr_2 [i_0] [1]) ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) : (arr_1 [i_0] [i_0]))), (210 || 435337705)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_21 = ((~(arr_6 [i_4] [i_0])));
                            var_22 = (min(var_22, (4294967295 & 210)));
                            arr_19 [i_1] = (arr_10 [i_0] [i_1] [i_2] [i_3]);
                        }
                    }
                }
            }
            arr_20 [i_1] [i_1] = 118;
            var_23 = (((arr_11 [i_0] [i_1] [i_1] [i_1] [i_0]) ? (var_13 || 127) : ((var_11 ? (arr_0 [8]) : var_9))));

            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_24 = (arr_16 [i_5] [1] [i_5] [i_5] [i_5] [i_5] [1]);

                for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    var_25 &= (arr_17 [4] [i_6 - 1]);
                    arr_28 [i_1] = var_2;
                }
                for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    var_26 = (arr_8 [i_0] [i_0] [i_7]);
                    var_27 *= (var_2 && var_10);
                    arr_31 [i_1] [i_1] [i_1] [i_1] = (arr_30 [i_7 - 1] [i_7] [i_7] [i_7 - 1]);
                }
                var_28 = (-(arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] [i_5]));
                arr_32 [i_1] [i_5] [i_1] [i_1] = (((2350612747 & 90) < (arr_22 [i_0])));
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_29 = (((arr_25 [i_8] [i_1] [i_8] [i_8] [i_8]) >= (arr_18 [i_0] [i_1] [i_0] [i_0] [i_0])));
                var_30 = (arr_7 [i_8] [i_0]);
                arr_35 [i_8] [i_8] [i_1] [i_1] = (arr_9 [i_8] [i_1] [i_8]);
                arr_36 [i_1] [i_1] [i_8] = (!122);
                var_31 = ((~(arr_34 [i_1] [i_1] [i_1])));
            }
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
        {

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        {
                            var_32 = (max(var_32, (arr_30 [8] [i_10] [i_11] [i_12])));
                            var_33 = (((57 ? var_18 : var_6)));
                            var_34 = (min(var_34, ((((arr_24 [i_10] [i_11 - 1]) && 248)))));
                            var_35 = (max(var_35, (((var_9 ? ((((arr_9 [i_9] [i_11] [i_11]) < (arr_26 [i_10] [13] [i_10] [i_10])))) : (arr_29 [i_0] [i_9] [1] [i_11 + 1]))))));
                            var_36 = (((arr_42 [i_0] [i_10] [i_11 - 1]) && (arr_42 [i_0] [i_10] [i_12])));
                        }
                    }
                }
                arr_48 [i_10] [i_9] [i_10] = ((-(arr_40 [i_10])));
                arr_49 [i_10] [i_9] [i_10] [i_10] = ((arr_34 [i_10] [i_9] [i_10]) ? 248 : 15);

                for (int i_13 = 0; i_13 < 16;i_13 += 1)
                {
                    var_37 = var_8;
                    var_38 = (arr_47 [i_0] [i_0] [i_10] [i_9] [i_10]);
                    arr_53 [i_10] [0] [i_10] = (arr_22 [i_0]);
                }
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    arr_56 [i_10] [6] [i_10] = (arr_51 [i_14] [i_10] [1] [i_9] [1]);
                    arr_57 [i_0] [i_9] [i_10] [i_10] [i_10] = var_2;
                }
                for (int i_15 = 0; i_15 < 16;i_15 += 1)
                {
                    var_39 = (min(var_39, ((((((arr_7 [i_0] [i_0]) / (arr_2 [14] [14])))) ? (arr_6 [i_0] [i_15]) : (((arr_10 [i_0] [i_9] [i_0] [i_0]) ? (arr_33 [i_0] [i_0] [i_0]) : var_16))))));
                    arr_60 [i_0] [i_10] [i_10] [i_10] [i_10] [i_0] = (arr_22 [i_9]);
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 16;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 16;i_17 += 1)
                    {
                        {
                            arr_66 [i_10] [i_0] [i_10] [i_9] [i_0] [i_10] = (((((arr_63 [i_0] [i_0] [i_0] [i_0] [i_0]) ? 24 : (arr_63 [i_0] [i_9] [i_10] [i_9] [i_17])))) && var_11);
                            var_40 = (3636474275 * ((((arr_24 [i_9] [i_9]) | (arr_47 [i_17] [i_16] [i_9] [i_9] [1])))));
                            arr_67 [i_0] [i_0] [1] [i_16] [i_10] [i_17] [i_17] = (arr_41 [i_0] [i_10] [i_16] [i_10]);
                        }
                    }
                }
            }
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                var_41 = (~var_17);
                arr_70 [i_9] = (((arr_55 [i_0] [i_0] [i_9] [i_0]) / (arr_58 [i_0] [i_0])));
                var_42 = (max(var_42, (arr_58 [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 16;i_19 += 1)
                {
                    for (int i_20 = 1; i_20 < 13;i_20 += 1)
                    {
                        {
                            var_43 = ((arr_24 [i_20 - 1] [i_20 + 1]) ? (arr_63 [i_20 + 1] [i_20 + 1] [i_20 + 1] [i_20 + 1] [i_20 + 1]) : var_12);
                            var_44 = (((((arr_63 [i_20 - 1] [i_0] [i_0] [i_0] [i_0]) ^ var_2)) != ((~(arr_5 [i_19] [i_19])))));
                        }
                    }
                }
            }
            for (int i_21 = 0; i_21 < 1;i_21 += 1)
            {
                arr_80 [i_0] [i_9] [i_21] = (((arr_33 [9] [i_9] [i_21]) ? ((var_10 * (arr_23 [i_0] [i_9] [i_0] [i_0]))) : ((1 ? (arr_23 [i_0] [i_0] [i_9] [i_21]) : (arr_58 [i_0] [i_21])))));
                var_45 |= (3201592133 >= 11);
                arr_81 [1] [1] [i_21] = (((((223 ? var_1 : var_6))) ? 17 : ((var_0 ? 1 : var_5))));
                var_46 -= arr_76 [i_0] [i_0] [6] [i_0] [i_0] [6] [i_0];
                arr_82 [i_9] [i_0] = var_4;
            }
            arr_83 [i_0] [i_9] [i_9] = ((-(((var_19 < (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        }
        for (int i_22 = 4; i_22 < 15;i_22 += 1)
        {
            arr_86 [i_0] [i_0] = arr_10 [i_0] [i_0] [i_0] [i_22 - 3];
            arr_87 [i_0] = (arr_16 [i_22] [14] [10] [i_22] [i_0] [i_0] [i_0]);
        }
        arr_88 [i_0] = ((146 ? 1 : 4294967294));
        var_47 = (min(var_47, ((max(((min((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])))), (min((arr_38 [i_0] [i_0]), (arr_73 [i_0] [i_0] [i_0] [i_0]))))))));
    }
    var_48 = (min(((max((min(394364290, -1400490986)), 97))), ((var_3 ? (var_2 & var_18) : (max(var_14, var_5))))));
    #pragma endscop
}
