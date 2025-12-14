/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_6;
    var_15 = (max((3711476023 - 3711476030), (583491252 / 1829757676)));
    var_16 = (min(((((var_5 <= var_8) * (var_3 > var_6)))), (min(var_11, (var_6 / 4788512989515663159)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_17 = (max(var_17, (((!(((var_4 ? var_7 : 3711476044))))))));

            for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 8;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_4 ? var_11 : 1845056731));
                            var_18 -= (!583491255);
                            var_19 = (((var_5 >= var_4) << (var_2 - 29)));
                            arr_14 [4] [i_0] [i_2] [i_3] [0] = (var_11 >> (var_12 + 1019035698));
                        }
                    }
                }
                arr_15 [i_0] [i_0] = ((var_13 ? 18014398505287680 : 32758));
                var_20 |= var_2;
            }
            for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    var_21 = (min(var_21, ((var_5 ? var_11 : (!var_3)))));
                    var_22 *= (!583491251);
                }
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    var_23 -= ((var_12 ? var_8 : 583491267));
                    arr_28 [i_0] [i_0] = -var_8;
                    var_24 = (min(var_24, (var_6 && 1418991503)));
                }
                for (int i_8 = 3; i_8 < 9;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        var_25 = (((arr_3 [i_0]) ? var_8 : var_9));
                        arr_33 [i_0] [i_1] [i_0] [1] [i_1] = (!var_10);
                    }
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        var_26 -= (arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [2] [i_0]);
                        var_27 = (min(var_27, (((-18014398505287666 ? -18014398505287680 : 3711476044)))));
                        arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((~var_7) ? (((arr_21 [i_0] [i_1] [i_1] [i_10]) | (arr_3 [1]))) : var_7));
                        var_28 = (max(var_28, (((((90 >= (arr_20 [1] [i_8] [7] [7] [7]))) && var_11)))));
                    }
                    arr_38 [i_0] [i_0] [i_0] [i_0] = var_4;
                    arr_39 [7] [7] [7] [9] [i_0] [i_0] = ((2449910564 ? ((-3139391713274337814 ? 78 : var_11)) : (!var_12)));
                }
                var_29 = (max(var_29, -22309));
            }
            for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
            {
                var_30 ^= (((arr_1 [i_1]) ? -var_3 : (arr_11 [i_11] [i_11] [i_0] [i_0] [i_0] [i_0])));

                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    var_31 = (max(var_31, -57));
                    arr_46 [i_0] [4] |= (((((var_11 | (arr_1 [i_0])))) && var_13));
                    arr_47 [i_0] [i_1] [i_0] [i_12] = (!var_4);
                }
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    var_32 = (((arr_36 [i_0] [2] [i_11] [i_13] [i_11] [i_1]) | (arr_17 [i_0] [i_0] [i_0])));
                    arr_51 [i_0] [i_0] [i_0] [i_0] = (!var_4);
                }
            }
        }
        arr_52 [i_0] = arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
        arr_53 [i_0] = var_1;
    }
    for (int i_14 = 2; i_14 < 10;i_14 += 1)
    {
        arr_56 [i_14] = (min((max(var_5, var_2)), (((583491294 >= (((var_13 >> (var_0 + 1681028603)))))))));
        var_33 ^= (((var_2 ? var_3 : 496)) % (var_10 || var_7));
        var_34 = max((min(var_11, ((var_1 ? var_13 : -1829757676)))), (min((max(var_6, var_11)), var_13)));
        var_35 = (min(((16894369224328750063 ? 583491266 : (-32767 - 1)), -var_12)));
    }
    for (int i_15 = 0; i_15 < 25;i_15 += 1)
    {
        var_36 = (((max(var_2, var_9))) ? (min(-var_5, -124)) : (max(((-1 ? 650312325 : var_0)), -var_11)));

        /* vectorizable */
        for (int i_16 = 2; i_16 < 22;i_16 += 1)
        {
            var_37 ^= (18014398505287702 / 992);
            arr_62 [i_16] [i_15] = (var_10 & -18014398505287709);
        }
        for (int i_17 = 3; i_17 < 22;i_17 += 1)
        {
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 25;i_18 += 1)
            {
                for (int i_19 = 1; i_19 < 1;i_19 += 1)
                {
                    {
                        var_38 ^= ((min(((max(0, var_4))), -var_5)));
                        arr_70 [i_19] [i_17] [i_17] [i_15] = ((1418991518 > (((-var_3 ? (min(var_1, var_4)) : -var_8)))));
                        var_39 = (min(var_39, ((min((((var_9 ? var_7 : var_5))), -3711476042)))));
                        arr_71 [i_15] [i_15] [i_15] [i_15] [i_15] [i_17] = var_13;
                    }
                }
            }
            arr_72 [i_17] = ((-((var_10 ? -1138508741 : var_4))));
            /* LoopNest 2 */
            for (int i_20 = 2; i_20 < 23;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 25;i_21 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_22 = 2; i_22 < 21;i_22 += 1)
                        {
                            var_40 |= (((arr_74 [i_22] [i_17 + 3]) > var_10));
                            arr_81 [i_22 + 2] [16] [i_17] [i_15] [i_15] = (~18014398505287663);
                            var_41 -= (var_0 ^ var_2);
                        }
                        arr_82 [i_17] [i_21] [i_17] [i_17] [i_17] [i_17] = -31;
                    }
                }
            }
        }
        for (int i_23 = 2; i_23 < 23;i_23 += 1)
        {
            /* LoopNest 2 */
            for (int i_24 = 0; i_24 < 25;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 25;i_25 += 1)
                {
                    {
                        arr_91 [16] [i_23 - 1] [16] [i_23 - 1] [10] = (min((arr_58 [i_23 - 1] [i_23 + 2]), (((((var_4 ? var_1 : -642305232)) <= (min(var_0, var_9)))))));

                        for (int i_26 = 0; i_26 < 25;i_26 += 1)
                        {
                            arr_95 [i_15] [i_15] [i_15] [i_15] [i_15] = ((-(max(var_5, var_13))));
                            arr_96 [i_15] [i_15] [i_15] [i_25] [i_26] = var_12;
                            arr_97 [i_15] = ((((((arr_74 [i_24] [i_23]) >> (var_3 + 92)))) & (((arr_74 [i_23] [i_23]) ? 18446744073709551601 : 147))));
                        }
                        var_42 = (!var_12);
                    }
                }
            }
            arr_98 [i_15] [i_15] = (max((((arr_86 [i_23 - 2] [i_23 + 1]) ? var_4 : (arr_86 [i_23 + 2] [i_23 - 2]))), (((!(arr_68 [i_15] [i_23 - 1] [20] [i_15] [i_15]))))));
            var_43 = (min(var_43, var_7));
        }
    }
    #pragma endscop
}
