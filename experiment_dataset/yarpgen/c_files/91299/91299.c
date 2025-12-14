/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
        {
            var_12 += var_2;
            var_13 = (arr_4 [i_0]);
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
        {
            arr_7 [i_2] [i_2] = (max((((1048320 ? var_10 : (arr_1 [1] [i_2])))), (max(3677502366, -13))));
            arr_8 [i_2] [i_2] = (((arr_0 [i_2]) ? ((var_6 << (((arr_3 [i_0]) + 7995)))) : var_8));
            var_14 = max((max((((var_1 ? var_7 : var_6))), 206311)), ((24881 ? 3807061986 : (((max((arr_2 [i_0]), 255)))))));
        }

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_15 -= (((((var_7 ? ((206311 | (arr_0 [i_0]))) : 237))) & var_3));

            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                var_16 = var_11;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_6] [11] = (((~0) && ((max(14, 4294760975)))));
                            arr_22 [i_5] [i_6] = var_0;
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
            {
                var_17 = (arr_15 [i_0] [1] [i_3] [1] [16]);
                var_18 = ((1832539338 ? 1 : 0));
                arr_25 [i_0] [12] [i_3] [i_7] = (4294760984 >= 27526);
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
            {
                var_19 = (max(var_19, var_7));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        {
                            arr_36 [i_0] [i_0] [i_3] [i_8] [i_0] [i_10 - 1] = var_5;
                            var_20 = (~var_9);
                            arr_37 [i_0] [i_0] [i_8] [i_9] [i_9] [i_8] = ((8721 ? 2251799813554176 : 35417));
                            arr_38 [i_0] [4] [12] [i_0] [i_9] [i_9] [i_8] = var_5;
                        }
                    }
                }

                for (int i_11 = 2; i_11 < 15;i_11 += 1)
                {
                    arr_41 [i_8] [i_8] = (((-2147483647 - 1) ? ((var_0 ? var_4 : var_4)) : (arr_12 [i_11 + 2] [i_11 + 1])));

                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        arr_44 [i_0] [i_8] [i_8] = (!11969904761934241308);
                        var_21 = var_10;
                        var_22 = -137;
                    }
                    arr_45 [9] [9] [i_0] [i_8] = (!28);
                    arr_46 [i_0] [i_0] [9] [i_8] = 7727386047052984936;
                    var_23 += (((arr_17 [i_3] [i_8] [i_3] [1] [i_11 + 1]) ? (arr_35 [i_11 - 1] [i_11 - 1] [8] [i_11 - 1] [i_11]) : (arr_19 [10] [1] [i_11 + 1])));
                }
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    var_24 = var_1;

                    for (int i_14 = 1; i_14 < 15;i_14 += 1) /* same iter space */
                    {
                        var_25 = (max(var_25, (~8796093021696)));
                        arr_51 [i_0] [i_3] [i_8] [i_0] [i_14] = ((arr_17 [i_0] [7] [9] [i_13] [i_14 + 1]) >> var_10);
                        arr_52 [i_8] [i_8] [i_8] [i_13] [i_13] [i_8] = var_10;
                        var_26 = 137;
                        arr_53 [i_8] = ((~(arr_15 [i_14 + 2] [16] [i_14 - 1] [9] [1])));
                    }
                    for (int i_15 = 1; i_15 < 15;i_15 += 1) /* same iter space */
                    {
                        var_27 = (((arr_0 [i_3]) <= 1));
                        arr_56 [i_8] [i_8] [2] [i_8] [i_3] [i_8] [i_0] = 0;
                        arr_57 [i_8] [0] [i_8] [i_8] [i_3] [i_3] [i_0] = (((arr_9 [i_15 + 1] [i_3]) && var_9));
                        arr_58 [i_8] = (arr_29 [i_0] [i_3] [i_0] [i_13] [i_13] [2]);
                    }
                    for (int i_16 = 1; i_16 < 15;i_16 += 1) /* same iter space */
                    {
                        var_28 = (((((4294760984 ? 1 : var_1))) ? ((((var_4 + 2147483647) << (56800 - 56800)))) : var_11));
                        arr_61 [i_0] [1] [6] &= (4294967295 != 81);
                    }
                    arr_62 [i_0] [i_3] [i_8] [i_3] [1] [i_13] = (((0 <= -945077812) && (7727386047052984927 != var_4)));
                    var_29 = (var_6 == var_1);
                }
            }
            var_30 = (min(var_30, (((arr_26 [i_0] [i_0] [i_0] [i_0]) - (arr_30 [i_3] [i_3] [i_3] [i_3])))));
        }
        var_31 = (min(var_31, ((var_2 ? (127 % -1628173817) : 32212254720))));
    }
    /* vectorizable */
    for (int i_17 = 2; i_17 < 10;i_17 += 1)
    {
        var_32 = (min(var_32, (((var_6 ? ((15 ? -1229171451 : 4177784109485584473)) : (arr_39 [i_17] [12] [i_17] [i_17]))))));
        arr_65 [i_17] [i_17] = (~1);
        arr_66 [i_17 + 1] [4] = var_8;
    }
    var_33 = var_3;
    var_34 = var_5;
    var_35 = var_2;
    #pragma endscop
}
