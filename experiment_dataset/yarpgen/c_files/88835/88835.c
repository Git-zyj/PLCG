/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 *= var_5;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_20 = (((arr_3 [i_3] [i_2]) ? ((((arr_3 [i_3] [i_1]) ? (arr_6 [i_0] [i_1] [i_2] [i_3]) : (arr_6 [i_3] [i_2] [i_1] [i_0])))) : (min(((((arr_5 [i_3] [i_2] [0] [i_0]) ? (arr_3 [i_1] [13]) : 0))), (var_11 - 26)))));

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_21 = (~12575);
                            var_22 = var_10;
                        }
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 1;
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {
        var_23 *= var_12;

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_24 = (61 >= var_4);
            var_25 = (max(((((arr_9 [i_5] [i_5] [i_6] [i_5] [i_6] [i_6]) < (arr_9 [i_5] [13] [i_5] [i_6] [i_6] [i_6])))), ((~(arr_9 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))));
            arr_18 [i_6] = (!4488);
            arr_19 [5] = (arr_1 [i_5]);
        }
        var_26 = ((-(arr_7 [i_5])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
    {
        arr_22 [i_7] [i_7] = (!(~0));
        arr_23 [i_7] = ((((52961 ? (arr_7 [i_7]) : 1)) | 8160));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    arr_29 [i_7] = var_12;
                    var_27 = ((-(1 > 15998772787535636954)));
                }
            }
        }

        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            arr_32 [i_7] [i_10] = ((52 == ((((arr_16 [i_7] [i_7]) == (arr_31 [i_7]))))));
            var_28 = 1;
        }
    }

    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        arr_37 [i_11] [16] = ((4286792596012288223 && (arr_34 [i_11])));
        var_29 = var_16;
        var_30 = arr_33 [i_11];
    }
    for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
    {
        var_31 *= ((~(arr_10 [i_12] [i_12] [i_12] [i_12] [i_12] [0] [i_12])));
        arr_41 [i_12] |= ((57362 ? (arr_2 [i_12]) : var_7));
        var_32 = (min(var_7, var_17));
    }
    for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
    {
        arr_45 [i_13] = ((~(arr_34 [18])));
        var_33 |= (((57338 ^ var_1) == (((!(183 <= 1))))));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
    {
        var_34 *= ((94 ? 36702 : (arr_8 [i_14] [i_14] [i_14] [i_14])));

        for (int i_15 = 0; i_15 < 16;i_15 += 1)
        {
            var_35 |= -29193;
            var_36 = var_9;
        }
        for (int i_16 = 0; i_16 < 16;i_16 += 1)
        {
            arr_55 [i_14] [11] [i_16] = (((((arr_47 [i_16]) == var_3)) ? 41 : (arr_42 [i_14] [i_16])));
            var_37 = (max(var_37, ((((4563556567911720934 / 6091856005042561310) ? 1648645390 : (arr_46 [i_16]))))));
        }
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 16;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 16;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 16;i_19 += 1)
                {
                    {
                        var_38 = (arr_50 [i_14]);
                        var_39 |= (arr_38 [i_14] [i_17]);
                        var_40 = -205;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 16;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 16;i_21 += 1)
            {
                {
                    var_41 |= (arr_10 [3] [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]);

                    for (int i_22 = 0; i_22 < 16;i_22 += 1)
                    {
                        var_42 = (!(arr_36 [i_14]));
                        arr_70 [13] [5] [i_21] [i_22] = (((arr_9 [i_14] [i_14] [i_20] [i_20] [i_21] [i_22]) ? (arr_52 [i_14] [i_14]) : (arr_9 [i_14] [i_20] [i_20] [i_20] [i_21] [i_22])));

                        for (int i_23 = 0; i_23 < 16;i_23 += 1)
                        {
                            var_43 = (arr_8 [i_20] [i_21] [i_22] [14]);
                            var_44 = ((~(arr_63 [i_22] [i_20])));
                            arr_73 [i_23] [4] [i_21] [6] [i_14] = (17633 && (arr_44 [0]));
                        }
                        for (int i_24 = 0; i_24 < 16;i_24 += 1) /* same iter space */
                        {
                            arr_76 [i_14] [i_14] [i_14] [i_14] [i_14] = 13828;
                            var_45 *= (~17);
                            var_46 = ((((((arr_6 [i_14] [8] [i_21] [i_22]) ? var_16 : (arr_66 [i_24] [i_20] [i_21] [i_20])))) ? 1 : ((1 ? -16 : 78))));
                        }
                        for (int i_25 = 0; i_25 < 16;i_25 += 1) /* same iter space */
                        {
                            var_47 = (min(var_47, var_16));
                            arr_79 [i_14] [i_22] [i_21] [i_22] [i_25] = (((arr_51 [i_22] [i_22]) > (arr_51 [i_14] [i_20])));
                            var_48 = 161;
                        }
                        for (int i_26 = 0; i_26 < 16;i_26 += 1)
                        {
                            var_49 = (arr_0 [i_14]);
                            var_50 = (!1);
                            arr_82 [i_14] [i_21] [i_26] = (3297118740375124504 ? -18446744073709551615 : (!var_13));
                            var_51 = (arr_81 [i_26] [i_22] [i_21] [i_14] [i_20] [i_14]);
                            var_52 |= ((var_13 == (~0)));
                        }
                        var_53 = (max(var_53, -var_0));
                    }
                    for (int i_27 = 0; i_27 < 16;i_27 += 1)
                    {
                        var_54 = (arr_52 [i_14] [3]);
                        var_55 = (((arr_35 [i_21]) % (arr_57 [i_14] [i_27])));
                        var_56 *= 1;
                        var_57 |= var_16;
                    }
                    for (int i_28 = 0; i_28 < 16;i_28 += 1)
                    {

                        for (int i_29 = 0; i_29 < 16;i_29 += 1)
                        {
                            arr_91 [i_14] [i_20] [i_20] [i_21] [i_28] [i_29] = ((0 ? (-559510053257439495 > 1) : (arr_80 [i_21])));
                            arr_92 [i_29] [i_28] [i_21] [i_20] [i_14] = (arr_87 [i_21] [i_21] [i_21]);
                        }
                        arr_93 [i_14] [1] [i_14] [i_14] [1] = ((((5346268855229041678 - (arr_71 [i_28] [12] [i_21] [9] [i_14] [9]))) / var_5));
                    }
                }
            }
        }
    }
    var_58 = var_16;
    #pragma endscop
}
