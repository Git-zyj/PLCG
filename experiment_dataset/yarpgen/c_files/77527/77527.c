/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (+-18296);
    var_12 = (max(var_12, var_2));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_13 = ((!(arr_2 [i_0 - 3])));
        var_14 = (!465042765);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_15 = (min(var_15, (((-((max(((((arr_1 [i_1] [i_1]) < var_5))), (max(var_8, -18313))))))))));
        var_16 = (((max(var_1, ((max(var_0, 1))))) % -var_2));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 12;i_4 += 1)
            {
                {
                    var_17 = ((-(arr_15 [i_3])));
                    var_18 = ((!((max((arr_11 [i_3]), (arr_11 [i_3]))))));

                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        var_19 = (((arr_16 [i_4 - 3] [i_4] [i_5 - 2] [i_5 - 1] [i_5] [i_4 - 3]) * (arr_16 [i_4 - 3] [i_4 - 3] [i_5 - 2] [i_5 - 1] [i_4 - 3] [i_5 - 2])));

                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            var_20 = (min(var_20, (((min((!2934507431852102023), var_7))))));
                            var_21 -= var_10;
                        }
                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            arr_23 [i_2] [i_4] [i_4 - 1] [i_2] [i_7] [i_4 - 1] [i_4] = (var_8 > 18301);
                            var_22 = -2934507431852102048;
                        }
                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 10;i_8 += 1) /* same iter space */
                        {
                            var_23 = (min(var_23, (((arr_24 [i_4 - 1] [i_5 - 3]) ? var_1 : var_4))));
                            var_24 = -7851549403199805443;
                            arr_28 [i_4] = 2934507431852102020;
                        }
                        var_25 = ((((((22817 == (arr_20 [i_4])))) | (((var_9 <= (arr_26 [i_2] [i_2] [i_2] [i_4 - 3] [i_4] [i_2])))))) < ((min((1816858560 && -685076030), (18305 || var_6)))));
                        var_26 = ((((((min(var_5, -1898963628))) ? (~-5800539689829847229) : (~-2934507431852102030))) ^ var_2));
                    }
                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 12;i_9 += 1)
                    {
                        var_27 = (((arr_25 [i_9 + 2] [i_9 + 2] [i_9 + 1] [i_4 + 1] [i_4 - 3] [i_4 - 2]) && var_1));
                        var_28 = (((arr_27 [i_2] [i_2] [i_9 - 1] [i_2] [i_4 - 1]) ? (arr_27 [i_9] [i_3] [i_9 - 1] [i_9] [i_4 - 1]) : var_9));
                    }
                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            var_29 = (arr_33 [i_3] [i_4] [i_3] [i_11]);
                            var_30 = ((((((!(arr_1 [i_3] [i_3]))))) | (max(var_1, ((-2490347651812015140 ? (arr_9 [i_4] [i_10] [i_4]) : var_8))))));
                            var_31 = ((!((var_5 > ((var_6 ? 16652808214322684335 : 638))))));
                            var_32 += (arr_16 [i_2] [i_2] [i_2] [i_2] [i_10] [i_2]);
                            var_33 = (min(var_33, (min(((((min(var_3, (arr_8 [i_2] [i_3])))) + (arr_20 [i_2]))), (((+(((var_1 + 9223372036854775807) << (((-2934507431852102043 + 2934507431852102097) - 54)))))))))));
                        }
                        var_34 = (((max(var_6, (arr_20 [i_4])))));
                        var_35 = (max(((((~101) < ((min((arr_12 [i_2] [i_2] [i_2] [i_10 - 1]), (arr_16 [i_2] [i_3] [i_3] [i_3] [i_4] [i_10]))))))), var_5));

                        for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
                        {
                            var_36 = (((((-(arr_32 [i_4] [i_4] [i_4])))) ? ((((((var_5 <= (arr_32 [i_2] [i_4] [i_4])))) >= ((max((arr_15 [i_2]), (arr_10 [i_10]))))))) : -16685));
                            var_37 = ((((1 ? ((71 ? var_3 : (arr_11 [i_2]))) : (arr_11 [i_4]))) >= ((max((arr_40 [i_4] [i_4]), ((((arr_31 [i_2] [i_3] [i_2] [i_10] [i_2] [i_10]) && var_9))))))));
                        }
                        for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
                        {
                            var_38 *= (arr_9 [i_4] [i_2] [i_4]);
                            var_39 = (((((arr_21 [i_2] [i_4 - 2] [i_4] [i_3] [i_13] [i_10 + 2] [i_2]) ^ (arr_21 [i_2] [i_4 - 2] [i_4 - 2] [i_10] [i_2] [i_10 + 2] [i_10 + 2]))) >= 18283));
                            arr_45 [i_2] [i_3] [i_4] [i_4] [i_4] [i_3] [i_13] = ((-4366 & ((((arr_12 [i_2] [i_3] [i_4] [i_13]) < (arr_26 [i_2] [i_2] [i_4] [i_4] [i_2] [i_2]))))));
                            var_40 = (((+(max((arr_22 [i_2] [i_2] [i_2] [i_4 - 2] [i_13]), var_4)))) + (((min(-16680, 14593)))));
                        }
                        for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
                        {
                            var_41 = (max(var_41, (((((max(var_1, (arr_21 [i_2] [i_2] [i_3] [i_4 + 2] [i_4] [i_10] [i_14])))) <= (((~(arr_32 [i_2] [i_3] [i_2])))))))));
                            var_42 *= (arr_24 [i_3] [i_14]);
                        }
                    }
                }
            }
        }

        for (int i_15 = 2; i_15 < 13;i_15 += 1)
        {
            var_43 = var_2;

            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 14;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 14;i_18 += 1)
                    {
                        {
                            var_44 = (min(var_44, (arr_20 [i_16])));
                            var_45 = (max((-40 * 3426028143), ((((max(var_6, var_7)))))));
                            var_46 = -112;
                        }
                    }
                }
                var_47 = ((arr_5 [i_15 + 1]) <= (((((max(16977178387516486822, (arr_25 [i_2] [i_2] [i_15] [i_15] [i_15] [i_15]))) > -6025209336493646073)))));
            }
        }
        var_48 += (max((arr_3 [i_2]), (arr_34 [i_2])));
    }
    #pragma endscop
}
