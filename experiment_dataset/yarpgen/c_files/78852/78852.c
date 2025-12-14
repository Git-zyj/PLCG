/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_13 += (((arr_0 [i_0]) ? (1 + var_8) : ((var_12 ? var_8 : (min(var_10, var_2))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_14 = var_12;
                        var_15 = var_9;
                        var_16 -= ((~((var_4 ? (min(var_10, (arr_2 [i_3 + 1]))) : 0))));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {

                        for (int i_5 = 2; i_5 < 13;i_5 += 1)
                        {
                            var_17 = (arr_20 [i_4] [i_4] [i_4] [i_4] [i_4]);
                            var_18 = (((arr_20 [i_5 + 2] [i_5 + 2] [i_5 - 2] [i_5 - 2] [i_2 + 1]) * var_9));
                            var_19 = var_0;
                        }
                        for (int i_6 = 3; i_6 < 13;i_6 += 1)
                        {
                            var_20 = ((160 ? (805306368 == 4294967295) : -8828));
                            var_21 = ((var_11 != (var_7 != var_9)));
                        }
                        var_22 = (max(var_22, ((min((((arr_13 [i_0]) - var_10)), var_4)))));
                        var_23 = min(((((arr_20 [i_2 - 1] [i_2 + 3] [i_2 + 2] [i_2 + 3] [i_2 + 2]) ? (arr_18 [i_2 - 1] [i_2] [i_2 + 1] [i_2 + 2] [i_2 + 1] [i_2 + 2]) : 8823))), var_9);
                        var_24 = (min(var_6, (((var_7 ? var_12 : (arr_18 [i_0] [i_1] [i_4] [i_4] [i_2 + 1] [i_0]))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            var_25 = (max(var_25, var_0));
                            var_26 = ((((var_2 ? var_10 : var_2)) != (((var_7 ? var_4 : var_9)))));
                        }
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            var_27 -= (((((var_11 ? var_2 : (arr_8 [i_1] [i_7] [i_1])))) ? ((4294967289 ? var_6 : var_6)) : ((((arr_30 [i_0]) ? var_0 : var_11)))));
                            var_28 = -805306380;
                            var_29 = (var_6 ? var_10 : var_4);
                        }
                        var_30 = ((var_1 + (arr_20 [i_2 + 3] [i_2 + 3] [i_2 + 1] [i_2 + 2] [i_7])));

                        for (int i_10 = 2; i_10 < 14;i_10 += 1) /* same iter space */
                        {
                            var_31 -= ((arr_5 [i_1] [i_7] [i_10 - 2]) ? var_1 : var_1);
                            var_32 = 805306367;
                        }
                        for (int i_11 = 2; i_11 < 14;i_11 += 1) /* same iter space */
                        {
                            var_33 *= ((((8828 ? 805306367 : 262143)) != var_4));
                            var_34 = ((var_6 ? var_11 : (arr_27 [i_0] [i_0] [i_0] [i_0] [i_2 + 3])));
                        }
                        for (int i_12 = 2; i_12 < 14;i_12 += 1) /* same iter space */
                        {
                            var_35 = (var_4 != var_0);
                            var_36 = ((-5348983372646996726 / (arr_35 [i_12 + 1] [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_12 + 1])));
                        }
                        for (int i_13 = 2; i_13 < 14;i_13 += 1) /* same iter space */
                        {
                            var_37 += (-8828 > 729197826867737413);
                            var_38 = 1;
                            var_39 = (var_3 ? var_10 : (arr_28 [i_2 + 3] [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2 - 1]));
                            var_40 = -805306366;
                        }
                    }
                    for (int i_14 = 3; i_14 < 14;i_14 += 1)
                    {

                        for (int i_15 = 0; i_15 < 15;i_15 += 1)
                        {
                            var_41 = (((var_3 > var_9) ? (~1447789445) : ((~(~4159314402)))));
                            var_42 = (((((arr_2 [i_15]) >= (arr_2 [i_14 + 1]))) ? (arr_2 [i_0]) : (var_10 + var_7)));
                            var_43 -= (min((((arr_35 [i_0] [i_1] [i_1] [i_14 - 3] [i_14 - 3]) ? ((((arr_20 [i_0] [i_1] [i_2 + 2] [i_0] [i_15]) != var_11))) : (min(134, 805306357)))), ((((!98) != ((max(var_2, var_9))))))));
                        }
                        for (int i_16 = 1; i_16 < 14;i_16 += 1)
                        {
                            var_44 = min(var_2, (((((0 ? 2147483647 : var_12))) ? (((4294967284 || (-9223372036854775807 - 1)))) : 2096640)));
                            var_45 += ((var_4 ? ((max((arr_26 [i_0]), var_2))) : ((((arr_26 [i_14 - 2]) < var_10)))));
                            var_46 = (max(((((((arr_16 [i_2] [i_16]) ? (arr_4 [i_0] [i_2] [i_14 + 1]) : (arr_10 [i_1] [i_14 + 1])))) ? var_0 : var_4)), ((8827 ? 241 : -805306380))));
                        }
                        var_47 = min((((arr_24 [i_2 - 1] [i_2 - 1] [i_2 + 3] [i_2 - 1] [i_14] [i_1]) & (arr_24 [i_2 + 2] [i_14 - 3] [i_14 - 2] [i_14 - 3] [i_14 - 1] [i_1]))), ((max((arr_24 [i_2 + 3] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_1]), var_3))));

                        for (int i_17 = 0; i_17 < 15;i_17 += 1)
                        {
                            var_48 = ((((arr_43 [i_14 - 3] [i_14 + 1] [i_14 - 1] [i_1]) ? var_8 : var_6)));
                            var_49 = var_4;
                            var_50 += ((var_3 ? ((max(var_1, (max(19, var_5))))) : ((((arr_25 [i_0] [i_1] [i_2 + 1] [i_17]) != (var_5 > 223))))));
                            var_51 += (max(((((var_4 < 236) ? (arr_2 [i_2 + 3]) : ((var_1 ? var_12 : var_4))))), (max(1863887631, ((min(var_0, var_5)))))));
                        }
                        var_52 = (((arr_18 [i_0] [i_0] [i_1] [i_0] [i_1] [i_14 - 3]) ? (((805306363 >> (((~var_0) + 137054190))))) : ((var_6 ? var_7 : var_6))));
                    }
                    var_53 = ((var_2 ? ((min(var_6, var_5))) : (var_0 < var_9)));
                }
            }
        }
    }
    for (int i_18 = 0; i_18 < 15;i_18 += 1) /* same iter space */
    {
        var_54 = (((max((((arr_49 [i_18] [i_18] [i_18] [i_18] [i_18]) & var_12)), (var_2 == var_0))) * 0));

        for (int i_19 = 0; i_19 < 15;i_19 += 1)
        {
            var_55 = ((var_0 / (484528742 || 171)));

            for (int i_20 = 3; i_20 < 13;i_20 += 1)
            {
                var_56 = (min((((242 == 2096640) / (arr_13 [i_19]))), ((((arr_17 [i_20 - 1] [i_20 - 1] [i_18] [i_20 - 3] [i_20 - 1]) ? (((max(var_5, var_2)))) : 0)))));
                var_57 = (min(var_57, var_0));
                /* LoopNest 2 */
                for (int i_21 = 1; i_21 < 12;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 1;i_22 += 1)
                    {
                        {
                            var_58 = (max(var_58, (-64 & 249)));
                            var_59 = -805306346;
                            var_60 = var_3;
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_23 = 2; i_23 < 14;i_23 += 1)
            {
                var_61 = (((((var_4 ? var_2 : var_7))) ? (-8827 != 7569556388217254549) : var_3));
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 15;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 15;i_25 += 1)
                    {
                        {
                            var_62 = (max(var_62, var_6));
                            var_63 = (max(var_63, (114 / 1)));
                        }
                    }
                }
            }
            var_64 = (((min((arr_36 [i_18] [i_18] [i_18] [i_18]), (arr_36 [i_18] [i_19] [i_19] [i_19]))) > (((-75452393 ? 0 : -22805)))));
        }
        for (int i_26 = 0; i_26 < 15;i_26 += 1)
        {

            for (int i_27 = 1; i_27 < 11;i_27 += 1)
            {
                var_65 = var_2;
                var_66 = 10877187685492297067;
            }
            var_67 = (((max((arr_57 [i_26] [i_26] [i_18]), (arr_52 [i_18] [i_26] [i_26] [i_26] [i_18]))) != ((((arr_52 [i_18] [i_18] [i_26] [i_26] [i_26]) ? var_5 : (arr_52 [i_18] [i_26] [i_26] [i_26] [i_18]))))));
        }
    }
    var_68 = var_11;
    var_69 = ((var_8 & (max((min(var_1, var_0)), (var_0 / var_1)))));
    #pragma endscop
}
