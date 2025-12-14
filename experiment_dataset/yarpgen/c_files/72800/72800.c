/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = ((1016 ? -9223372036854775785 : var_7));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                            {
                                var_16 = 18446744073709550614;
                                var_17 ^= (872351378 ^ var_1);
                                var_18 = -9223372036854775807;
                            }
                            for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                            {
                                var_19 = ((var_12 ? (max(var_10, (max((arr_10 [i_0] [i_0] [i_5] [i_3] [i_0] [i_3]), 1)))) : ((((var_11 < (((min(20997, 0))))))))));
                                var_20 = (max(var_20, ((max(((-(min(var_8, var_1)))), (-15311 & 1))))));
                                var_21 = (min(var_21, ((min(((1 ? 1458412190 : (arr_5 [i_2 + 1] [i_1 - 1] [i_0] [i_0]))), 218)))));
                            }
                            for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                            {
                                var_22 = ((((((((1458412190 ? -1458412183 : 1004882753))) ? 111 : -1458412193))) <= var_11));
                                var_23 = -20997;
                            }
                            for (int i_7 = 2; i_7 < 15;i_7 += 1)
                            {
                                var_24 = -9223372036854775785;
                                var_25 = ((var_12 ? ((min(871108416, (max(var_5, 1493464836))))) : ((-5354734769849723644 ? (-127 - 1) : ((var_12 & (arr_8 [i_0] [i_0] [i_0] [i_3])))))));
                            }
                            var_26 = ((!((min(-1876360132520529817, -1339510625)))));
                            var_27 |= (((((min(-28, 9068)))) & var_13));
                        }
                    }
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        var_28 = (arr_17 [i_8] [i_8]);

        for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
        {
            var_29 = (min(var_29, (((2130 ? (arr_19 [8] [8]) : 1328523156)))));
            var_30 = (min(var_30, (min((((((arr_19 [i_9] [i_8]) / var_2)))), ((((max((-2147483647 - 1), 9223372036854775807))) ? (min((arr_20 [14]), var_3)) : (max(var_13, var_11))))))));
        }
        for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
        {
            var_31 = (max(811889122, -9223372036854775788));
            var_32 = var_6;
        }
        for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
        {
            var_33 = -4981331856187409904;
            var_34 = (((((1 % 102) / 6898708851249529573))) ? (min(var_13, (((6898708851249529577 ? 28 : -15))))) : (!19797));

            for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
            {

                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    var_35 = ((var_1 ? (((((var_7 << (var_1 - 4060414016)))) ? (min(0, 7374977036109784317)) : 2066524494)) : 2066524494));
                    var_36 = (max(var_36, ((var_7 - (((~(arr_21 [i_8] [i_12] [i_12]))))))));
                    var_37 = (max((min(((var_8 ? var_13 : var_4)), ((max(170, var_7))))), ((((max((arr_18 [3]), var_0))) ? (((max(-72, (arr_21 [i_13] [7] [18]))))) : var_13))));
                    var_38 = ((((((-4990205677980186483 ? 18 : 4990205677980186483)) & (~-22)))) ? ((var_0 ? var_13 : 56431)) : (((7374977036109784317 - -2147483645) ? (arr_18 [i_13]) : -7374977036109784306)));
                }
                var_39 = (-9223372036854775807 - 1);
                var_40 = (((max(var_9, 9223372036854775806)) >= (((max(39527, var_3))))));
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 18;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        {
                            var_41 = var_5;
                            var_42 |= 1;
                        }
                    }
                }
            }
            for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
            {
                var_43 = ((((((min(102, var_4))))) ? ((4990205677980186482 ? ((min(39749, 0))) : ((5354734769849723646 ? -4586101163968043493 : var_1)))) : var_11));
                var_44 = max(2839051261, 4862352679065704978);
                var_45 &= 5354734769849723643;
            }
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 19;i_17 += 1) /* same iter space */
        {
            var_46 = ((var_9 <= (arr_22 [i_8] [i_17])));
            var_47 = (var_9 & -7374977036109784317);
            var_48 = (((885625063 + 18030) | ((85 ? 1 : 21))));
        }
        var_49 = (((((var_4 ? -867568463 : var_10))) - var_1));

        for (int i_18 = 0; i_18 < 19;i_18 += 1)
        {
            var_50 = 1;
            var_51 = (((arr_33 [i_8] [i_18]) & 1369730687));
        }
        /* vectorizable */
        for (int i_19 = 0; i_19 < 0;i_19 += 1)
        {
            var_52 |= ((2562455649 ? (var_9 / 19174) : (!var_9)));
            var_53 = var_3;
            var_54 = (max(var_54, (-12 * var_3)));
        }
    }
    for (int i_20 = 2; i_20 < 19;i_20 += 1)
    {
        var_55 |= (min(18, 15));
        /* LoopNest 3 */
        for (int i_21 = 0; i_21 < 21;i_21 += 1)
        {
            for (int i_22 = 2; i_22 < 20;i_22 += 1)
            {
                for (int i_23 = 1; i_23 < 19;i_23 += 1)
                {
                    {
                        var_56 = 22;
                        var_57 = -9420;
                    }
                }
            }
        }
    }
    #pragma endscop
}
