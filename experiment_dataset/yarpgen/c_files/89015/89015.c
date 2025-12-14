/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -1376256468;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    var_18 = (((min(var_16, var_16))) ? (var_15 <= var_13) : (max(1364329349915874616, (arr_7 [i_2 + 1] [i_2 - 1] [i_2 + 1]))));
                    arr_8 [i_2] [1] [i_2] [3] = ((~((-1364329349915874614 ? 10821 : -65))));
                    var_19 = var_15;

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            var_20 = (arr_14 [i_2] [i_4]);
                            var_21 = var_10;
                        }
                        var_22 = ((((min((arr_0 [i_1] [i_2]), var_11))) ? ((((min(7389583386230119372, 1364329349915874610))) ? (arr_10 [i_0] [i_1] [i_2 + 2] [i_3]) : ((max(var_4, var_2))))) : 6614587813112446482));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_23 = ((-var_6 / ((var_0 ? (arr_1 [i_1]) : var_16))));
                            var_24 = 11;
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_25 = ((-5511054479566760280 ? (arr_15 [9] [5] [9] [i_3] [i_6]) : ((-(max(22754, (arr_0 [i_1] [i_3])))))));
                            var_26 = (~var_2);
                            arr_21 [i_0] [i_1] [i_2] = ((var_8 ? (arr_19 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) : (arr_0 [1] [i_6])));
                        }

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_27 = var_10;
                            arr_24 [i_1] [i_1] [7] [i_1] [i_1] [i_1] [i_1] = 1364329349915874616;
                        }
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_28 = (var_11 ^ var_12);
                        var_29 = var_12;
                        arr_27 [6] [i_2] [i_2 - 3] [1] [i_1] = var_9;
                        var_30 = var_1;
                        var_31 = (((((arr_23 [i_0] [i_1] [i_2] [i_0] [i_1]) ? 23800 : var_8))));
                    }
                    var_32 = (!var_9);
                }
                /* vectorizable */
                for (int i_9 = 3; i_9 < 11;i_9 += 1) /* same iter space */
                {
                    var_33 = var_4;
                    var_34 = var_5;
                }
                /* vectorizable */
                for (int i_10 = 3; i_10 < 11;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            arr_40 [6] [i_12] [i_1] [i_11] [i_0] [i_1] [i_1] = ((var_5 ? 14 : 22754));
                            arr_41 [i_0] [1] [i_12] [i_11] [i_12] = (arr_39 [i_10] [i_10] [1] [i_10 - 1] [i_10 - 3]);
                            var_35 = (arr_11 [3] [13] [3] [i_10 + 1]);
                            var_36 = ((var_2 ? (arr_17 [i_10 + 1] [i_10] [i_10] [4] [i_10] [i_10 - 1]) : var_12));
                        }
                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            var_37 = -1387804867;
                            arr_45 [i_0] [i_0] [5] [i_0] [11] = var_4;
                            var_38 = var_6;
                            arr_46 [i_0] [i_1] [7] [i_11] [i_13] = var_15;
                            var_39 = -65;
                        }
                        for (int i_14 = 0; i_14 < 14;i_14 += 1)
                        {
                            var_40 = ((var_5 ? (arr_18 [i_0] [i_1] [i_0] [i_10] [i_11] [i_0] [i_14]) : -var_10));
                            arr_49 [i_0] [i_14] [i_10] = var_12;
                            arr_50 [i_10] [i_1] [i_10] [i_11] [i_14] = (!var_9);
                        }
                        var_41 = (arr_9 [i_1] [i_10 + 3] [i_10] [i_1] [i_0]);
                    }
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        var_42 = var_6;

                        for (int i_16 = 0; i_16 < 14;i_16 += 1)
                        {
                            arr_56 [i_16] [i_10] [i_16] = var_15;
                            var_43 = (arr_31 [i_10 - 3]);
                            var_44 = 124;
                            arr_57 [i_0] [i_16] = var_0;
                        }
                    }
                    arr_58 [i_0] [i_0] [i_10] [i_10] = (~var_9);
                    var_45 = -4565566747159892711;
                    arr_59 [i_0] [i_1] = (arr_10 [i_10 - 1] [i_10 + 1] [i_10] [i_10 - 1]);
                }
                /* LoopNest 2 */
                for (int i_17 = 2; i_17 < 10;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 14;i_18 += 1)
                    {
                        {
                            arr_64 [i_0] [4] [i_0] [i_0] = ((((min((var_8 && 236), -4565566747159892711))) && var_4));
                            var_46 = (((~var_15) ? -778565726 : var_3));

                            for (int i_19 = 2; i_19 < 13;i_19 += 1)
                            {
                                arr_69 [0] [i_19] = ((1121026207943424240 ? -105 : -7781801274475336169));
                                var_47 = 1;
                                var_48 = (arr_6 [i_18]);
                                var_49 = (((((7781801274475336168 ? 2026 : (arr_9 [i_19 + 1] [i_19 - 1] [i_19] [i_19 + 1] [i_19 - 2])))) ? 1 : (((!(arr_9 [i_19 + 1] [i_19 - 2] [4] [i_19 - 1] [i_19 + 1]))))));
                            }

                            for (int i_20 = 2; i_20 < 12;i_20 += 1)
                            {
                                var_50 = var_10;
                                var_51 = (((max(1364329349915874625, 7781801274475336171)) & (((var_9 ? 1121026207943424240 : (~var_11))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
