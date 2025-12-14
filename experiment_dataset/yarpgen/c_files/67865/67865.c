/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = ((14175369725749243235 ? 17975335684042704134 : 12288));
                                var_17 = ((min((arr_9 [i_2] [i_2] [i_2 - 1] [i_3 + 2] [i_3 + 2] [i_0 - 1]), (arr_9 [i_2] [i_2] [i_2 + 2] [i_3 + 2] [i_2] [i_0 - 1]))));
                            }
                        }
                    }
                    var_18 = (max(var_18, (((((!((max(var_11, -22394))))) ? ((((max(54652, 1))) ? (arr_9 [1] [10] [i_1] [i_1] [6] [i_2]) : 14175369725749243237)) : 17975335684042704134)))));
                }
            }
        }
    }
    var_19 = (((((((var_5 ? var_6 : var_13)) & var_4))) ? var_10 : var_8));

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_20 -= (~var_2);
        var_21 = (7422887567127608610 + -1);
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 12;i_8 += 1)
            {
                {
                    var_22 = (max(((((min((arr_17 [i_8 + 1]), (arr_17 [i_7])))) ? (arr_16 [i_8 + 1]) : 0)), ((var_1 ? (arr_4 [i_6] [i_6] [i_8]) : (arr_2 [i_7])))));
                    var_23 = ((1 ? 23783 : 0));
                    var_24 = (-1 > var_14);
                    var_25 = 54179;
                }
            }
        }
        var_26 = (max(3779584768, 4271374347960308379));
        var_27 = 1;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    var_28 = -1;
                    var_29 = (((((arr_22 [i_9] [3]) ? ((1 % (arr_15 [i_9] [i_10]))) : -1)) < 15412741655919790238));
                    var_30 = (~var_11);
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 0;i_11 += 1)
    {
        var_31 = (((~((min(1, 0))))) > (arr_25 [i_11 + 1] [18]));
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 0;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    {
                        var_32 = ((+(min((arr_36 [i_11 + 1] [i_11] [i_11 + 1] [i_14]), (((arr_36 [i_11] [i_11] [i_11] [i_11]) ? (arr_26 [i_12]) : var_8))))));
                        var_33 += (~1);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_15 = 2; i_15 < 20;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 21;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 18;i_17 += 1)
                {
                    {
                        var_34 = var_0;
                        var_35 = ((var_0 && (((-309144278 * (((min(0, -625)))))))));
                        var_36 = ((((1 && (~10602)))));
                        var_37 = ((~(!-844182009)));
                    }
                }
            }
        }
        var_38 = 28725;
    }
    /* vectorizable */
    for (int i_18 = 2; i_18 < 14;i_18 += 1)
    {
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                {
                    var_39 = var_8;
                    var_40 = (!14843);
                    var_41 *= ((var_14 ? ((var_4 ? (arr_47 [i_18] [1]) : var_1)) : (arr_45 [i_18] [i_19])));
                    var_42 = (arr_28 [i_18 + 1] [i_19]);
                }
            }
        }

        for (int i_21 = 4; i_21 < 13;i_21 += 1)
        {
            var_43 = ((16812931376951867976 ? 62914560 : 1));
            /* LoopNest 2 */
            for (int i_22 = 2; i_22 < 12;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 15;i_23 += 1)
                {
                    {
                        var_44 = (~14065354502437894853);
                        var_45 = -1;
                        var_46 = (~var_2);
                        var_47 = (((arr_54 [i_18]) ? (arr_30 [i_21 - 1] [i_18]) : (0 - 871145350)));
                        var_48 = (((arr_34 [i_22 - 1] [i_22 + 3] [i_22 + 3] [i_22 + 2] [i_22 + 3] [i_22]) & (arr_34 [i_22 + 1] [i_22 + 2] [i_22] [i_22 - 1] [i_22] [i_22 + 1])));
                    }
                }
            }
        }
        for (int i_24 = 0; i_24 < 1;i_24 += 1)
        {
            /* LoopNest 2 */
            for (int i_25 = 1; i_25 < 1;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 15;i_26 += 1)
                {
                    {
                        var_49 += (arr_34 [i_18] [10] [i_18] [10] [i_18] [i_18]);
                        var_50 = (min(var_50, 1));
                    }
                }
            }
            var_51 = (min(var_51, (((1 / (arr_27 [1]))))));
            var_52 = (~0);
        }
        for (int i_27 = 2; i_27 < 14;i_27 += 1)
        {
            var_53 = ((3842865677 ? (~1) : -8157));
            var_54 = (min(var_54, (~var_3)));
            /* LoopNest 2 */
            for (int i_28 = 2; i_28 < 12;i_28 += 1)
            {
                for (int i_29 = 3; i_29 < 13;i_29 += 1)
                {
                    {
                        var_55 = ((-26095 ? 1 : 7650075181161151035));
                        var_56 = ((arr_41 [i_18 - 2] [i_18 - 1] [i_18 - 2] [i_27 - 2]) ? 3341112215086911900 : var_7);
                    }
                }
            }
        }
    }
    var_57 = var_10;
    #pragma endscop
}
