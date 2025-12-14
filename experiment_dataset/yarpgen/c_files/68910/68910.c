/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (!var_8);

                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    arr_10 [i_0 - 1] [i_0 + 1] [1] [1] = (!249);

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        arr_13 [i_3 + 1] [12] [18] [i_1] = ((!((min((arr_3 [2] [i_1]), var_18)))));
                        arr_14 [20] [i_1] [i_2 - 1] [i_0 - 1] [i_1] = ((!(~629991025)));
                        var_21 = (min(var_21, ((max((((min((arr_0 [5]), 44)))), (arr_3 [4] [i_3 + 1]))))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_22 = -var_11;
                            var_23 = var_4;
                            var_24 = (~var_16);
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_25 = 33;
                            arr_20 [i_2 + 1] [13] [i_2 + 1] [19] [i_2 + 1] = (~var_5);
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            arr_24 [0] = var_7;
                            arr_25 [i_6] [i_3 + 1] [1] [i_1] [i_0 - 1] = (+-629991028);
                            var_26 = (min((!var_18), -629991037));
                            var_27 = (max(var_27, var_18));
                            var_28 = (arr_17 [i_0 - 1] [8] [i_2 + 4] [i_6] [1] [10] [i_6]);
                        }
                        for (int i_7 = 4; i_7 < 21;i_7 += 1)
                        {
                            var_29 &= ((!(!7838)));
                            arr_30 [9] [18] [21] = 6893259953503758195;
                        }
                        var_30 = ((max(-629991042, -629991028)));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_31 = (!(arr_31 [i_0 - 1] [i_0 - 1] [i_1] [16]));
                        var_32 = 158;
                        arr_34 [i_8] [4] [18] [i_2 + 1] [10] [9] = ((min((min((arr_18 [i_0 - 1] [19] [i_1] [16] [7] [i_2 - 1] [19]), var_0)), -var_1)));
                    }
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        var_33 = (!(!120));
                        arr_39 [18] = (((~(-32767 - 1))));
                    }
                }
                /* vectorizable */
                for (int i_10 = 3; i_10 < 21;i_10 += 1)
                {

                    for (int i_11 = 3; i_11 < 19;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 23;i_12 += 1)
                        {
                            var_34 = (max(var_34, (!-9461)));
                            var_35 = (arr_19 [i_1] [i_10 - 1] [i_11 + 4]);
                            var_36 = var_14;
                            arr_50 [i_10 + 2] [3] [i_11 - 1] = ((!(arr_38 [i_0 + 1] [i_1] [i_10 + 1] [i_11 + 1] [22])));
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            var_37 = (max(var_37, var_0));
                            arr_54 [2] [5] [i_11 + 3] = ((!(!815358902)));
                            arr_55 [i_0 - 1] [15] [i_1] [7] [15] = ((~(arr_35 [i_1])));
                            arr_56 [3] [0] [i_1] [i_1] [i_1] = 198;
                            var_38 = 5;
                        }
                        var_39 = (!-629991010);
                        arr_57 [14] [12] [i_1] [i_10 + 2] = 35564;
                    }

                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        var_40 = (max(var_40, (arr_23 [2] [i_0 - 1] [1] [1])));

                        for (int i_15 = 2; i_15 < 21;i_15 += 1)
                        {
                            var_41 = 63681;
                            var_42 |= ((~(arr_37 [13] [22] [i_14] [i_1])));
                            arr_62 [i_1] [i_1] &= 130;
                        }
                        for (int i_16 = 0; i_16 < 23;i_16 += 1)
                        {
                            arr_65 [i_0 - 1] [8] [i_1] [i_1] [1] [9] [i_16] = (arr_18 [7] [17] [3] [i_10 + 2] [i_10 - 3] [14] [18]);
                            arr_66 [1] [0] &= (~0);
                        }
                        for (int i_17 = 0; i_17 < 23;i_17 += 1)
                        {
                            arr_69 [19] [i_14] [i_10 - 3] [i_0 + 1] = (!9461);
                            arr_70 [10] [1] [i_1] [i_17] [22] [1] = ((~(~var_8)));
                        }
                        var_43 = 103;
                    }
                    for (int i_18 = 4; i_18 < 22;i_18 += 1)
                    {
                        var_44 = (arr_68 [i_0 - 1] [1] [i_0 - 1] [12] [22]);
                        arr_73 [13] [14] [4] [i_18 - 4] = var_13;
                        var_45 = ((-(~var_8)));
                    }
                }
                for (int i_19 = 0; i_19 < 23;i_19 += 1)
                {
                    var_46 = (((-(arr_12 [8] [8] [4] [16]))));
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 23;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 23;i_21 += 1)
                        {
                            {
                                var_47 = (~-1833);
                                var_48 = (min(var_48, (((+(min(((min((arr_4 [i_19] [i_1]), (arr_11 [19] [i_20] [i_19] [0] [i_1] [12])))), 6483970134342782187)))))));
                                arr_80 [20] [1] [22] [3] [i_21] = ((!(((-(arr_4 [i_0 + 1] [i_0 - 1]))))));
                            }
                        }
                    }
                }
                var_49 = ((-(!var_3)));
            }
        }
    }
    #pragma endscop
}
