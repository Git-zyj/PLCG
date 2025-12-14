/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (((min(var_1, (arr_1 [i_0])))));
        var_11 = (max(var_11, ((((max(((var_10 ? (arr_1 [i_0]) : 192)), (arr_0 [i_0 + 3] [i_0]))) >> (max((arr_0 [i_0] [i_0]), (0 & var_9))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 23;i_3 += 1)
                {
                    {
                        var_12 = ((((((min(var_3, -25978))) ? (arr_6 [i_1]) : 24551)) < (((((arr_3 [i_1] [i_1]) ? var_8 : (arr_7 [i_0] [i_1] [i_2] [i_1])))))));
                        var_13 = var_10;
                        var_14 = min((min((arr_6 [i_1]), (arr_7 [i_1] [i_1] [i_2] [i_0 - 2]))), 32647);
                        var_15 = (((~var_2) ? (min(-31398, (min(var_5, (arr_5 [i_1] [i_0 + 2] [i_2]))))) : ((max((var_2 / var_6), (arr_3 [i_1] [i_1]))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        var_16 = (min(-var_6, ((min(1, (min(var_2, var_6)))))));
        arr_14 [i_4] = (~4186112);
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    {
                        arr_25 [19] [i_7] [i_6] [i_7] = (arr_8 [i_7]);
                        arr_26 [i_7] [i_7] [i_7] [i_7 - 1] = (min(((25977 ? ((min((arr_23 [17] [i_7]), var_9))) : ((min((arr_20 [i_4 - 1] [i_5] [i_6]), var_0))))), ((min((!var_4), (arr_11 [i_5] [i_6]))))));
                    }
                }
            }
        }
        arr_27 [21] = ((!(arr_8 [1])));
    }

    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {

        /* vectorizable */
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            arr_32 [i_8] = var_6;
            var_17 = 1214189623559931160;
            arr_33 [i_8] [i_9] = var_4;
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_11 = 3; i_11 < 19;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    {
                        var_18 = ((-((1 ? ((min(64265, var_7))) : (arr_7 [i_11] [i_8] [i_11] [i_11 - 3])))));
                        var_19 = (min((min((min(var_5, var_2)), (arr_40 [i_8] [i_10] [i_11] [i_12] [i_12]))), (((var_10 || (!var_7))))));
                    }
                }
            }
            arr_41 [i_8] [i_10] = var_6;
            var_20 += (((arr_38 [i_8] [8] [i_10] [1]) ? (var_5 != var_4) : var_1));

            for (int i_13 = 2; i_13 < 19;i_13 += 1)
            {
                arr_45 [i_8] [i_8] = ((-((var_9 / (arr_1 [i_8])))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 4; i_15 < 19;i_15 += 1)
                    {
                        {
                            var_21 = (((-(arr_9 [i_15] [i_15 + 1] [16] [i_15 - 1] [i_15 + 1] [i_8]))));
                            var_22 = var_1;
                        }
                    }
                }

                /* vectorizable */
                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    arr_54 [i_8] [i_8] [8] [i_8] [i_8] [i_8] = var_8;

                    for (int i_17 = 0; i_17 < 20;i_17 += 1)
                    {
                        var_23 = (min(var_23, (var_0 > -4730)));
                        var_24 &= ((arr_48 [i_16] [i_10] [i_10] [i_10]) ? (var_3 == 1) : var_8);
                        var_25 = ((1 ? var_1 : (arr_46 [i_13] [i_8] [i_8] [i_13 + 1])));
                    }
                    for (int i_18 = 0; i_18 < 20;i_18 += 1)
                    {
                        arr_59 [8] [i_8] [i_13] = (arr_57 [i_8] [i_10] [i_8] [i_16] [i_18]);
                        arr_60 [i_8] [i_8] [i_13] [2] [i_16] |= var_7;
                        arr_61 [i_16] |= (~var_5);
                    }
                    arr_62 [13] [13] [i_13] [i_13] [i_8] = ((var_1 ? (arr_11 [i_8] [i_13]) : (~var_6)));
                }
            }
            arr_63 [i_8] = 7946;
        }
        /* vectorizable */
        for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
        {
            var_26 = (min(var_26, -var_3));
            var_27 = (max(var_27, (arr_1 [i_8])));
            var_28 = var_8;
            var_29 = (max(var_29, -var_2));
            arr_66 [i_8] = ((+((1 ? (arr_20 [i_8] [i_19] [i_8]) : 1214189623559931160))));
        }
        var_30 = var_10;
        var_31 |= var_4;
    }
    for (int i_20 = 0; i_20 < 12;i_20 += 1)
    {
        var_32 = (arr_64 [i_20]);
        arr_70 [i_20] = var_1;
        var_33 = var_2;
    }
    /* LoopNest 3 */
    for (int i_21 = 0; i_21 < 23;i_21 += 1)
    {
        for (int i_22 = 0; i_22 < 1;i_22 += 1)
        {
            for (int i_23 = 1; i_23 < 21;i_23 += 1)
            {
                {
                    var_34 = -15652;

                    for (int i_24 = 0; i_24 < 23;i_24 += 1)
                    {
                        arr_80 [i_21] [i_23] [20] = ((!(!-5509)));
                        var_35 = (max(var_35, (arr_8 [1])));

                        for (int i_25 = 1; i_25 < 19;i_25 += 1)
                        {
                            var_36 = ((((((arr_75 [i_23 + 2] [i_24] [i_25 + 1]) ? 25977 : (arr_77 [i_23] [i_22] [i_23] [i_23])))) ? ((min((arr_73 [i_23 + 2]), var_6))) : (~var_7)));
                            arr_84 [i_23] [i_22] [i_23] [i_24] [i_25] = (((~(~15969))));
                        }
                        arr_85 [19] [i_23] [i_22] [i_24] = (min(var_3, (min((1 & var_8), (((var_0 ? 248 : (arr_9 [i_21] [15] [i_23] [i_24] [i_22] [i_23]))))))));
                    }
                    arr_86 [10] [i_22] [10] [16] &= var_8;
                }
            }
        }
    }
    #pragma endscop
}
