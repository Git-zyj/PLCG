/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= -12;
    var_21 = ((~((((((min(var_5, var_16)))) == (max(var_12, var_4)))))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_22 = (min(var_22, 4));
                    var_23 = (min((((((arr_3 [1] [i_0]) & 33554400)) / (~var_18))), (arr_8 [i_0 + 1])));
                    var_24 = (max(var_24, (-12 < 0)));
                    var_25 = (min(var_25, ((((arr_1 [4]) ? (max((arr_2 [i_0] [i_0 - 1]), (arr_2 [i_0] [i_0 - 1]))) : -782698422)))));
                }
            }
        }

        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
            {
                var_26 = (min(var_26, 2204635464));
                arr_13 [i_0] = var_18;
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
            {
                arr_17 [i_0] [i_5] = 3122537909;
                var_27 = (min(var_27, ((((arr_7 [i_0] [8] [i_3] [i_5]) < var_4)))));
            }
            for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
            {
                arr_21 [i_0] [i_0] [i_0] [i_6] = ((4294967295 ? (max(-1177968137872489446, 3568818867667192852)) : (arr_6 [i_0] [6] [i_3] [i_0])));
                var_28 = min(((((((22459 ? (arr_3 [i_0] [i_0]) : (arr_9 [i_0 + 1])))) ? var_5 : (arr_16 [i_6] [i_3] [i_0])))), (min(14117, -1633995282)));

                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    arr_24 [i_0] [i_3] [i_6] [i_7] = ((var_15 ? (0 && 24) : var_7));
                    arr_25 [i_6] [14] [i_6] [i_7 + 1] &= ((!var_7) - 1177076797);
                }
            }
            var_29 = (min(var_29, ((max(((~(var_13 | 26776))), 29296)))));
            arr_26 [i_0] = min(0, (14892491790639814757 < 8489324857924577421));
            arr_27 [i_0] [i_3] [i_0] = (max((max((var_7 * 6783401993909590380), (var_3 * 9708029094635158661))), ((min(4619563297450140491, 16259)))));
            var_30 = (((min(117, 1172429387))));
        }
        var_31 = (max(var_31, (((((-4 / ((max(28, 112))))) << (((((((arr_10 [i_0] [i_0] [0]) ? var_9 : var_4)))) - 175)))))));
    }
    for (int i_8 = 1; i_8 < 20;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    arr_37 [i_8 + 1] [i_8] [i_10] [i_10] = (max(128, 18446744073709551615));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 18;i_12 += 1)
                        {
                            {
                                var_32 = var_0;
                                arr_43 [i_12] [i_11] [i_8] [i_9] [i_8] = max((arr_30 [i_10]), ((-(min((arr_38 [i_10] [i_8]), var_14)))));
                            }
                        }
                    }
                    arr_44 [i_8] [i_9] [i_10] = ((-(max((arr_0 [i_8 + 1] [i_8 + 1]), (arr_0 [i_9] [i_8 + 1])))));
                }
            }
        }
        var_33 = (max(var_33, (((((min(0, 29360128))) < ((max(789140571, 0))))))));
    }
    for (int i_13 = 1; i_13 < 20;i_13 += 1) /* same iter space */
    {
        var_34 = max((((((min(var_13, var_10)))) ^ (max(869759309, var_15)))), ((-(min(11, (arr_22 [1] [i_13 - 1] [17] [i_13]))))));
        var_35 *= ((((min(var_2, var_18) + (var_16 + 2048)))));
        arr_47 [i_13] = var_9;
    }
    #pragma endscop
}
