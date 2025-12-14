/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (((((((max((arr_0 [i_0] [i_0]), var_10))) && (((var_2 ? (arr_0 [i_0] [i_0]) : var_3)))))) >> ((var_8 ? (16 & -95) : ((var_12 ? (arr_0 [i_0] [i_0]) : var_11))))));
        var_14 = (min((((min((arr_0 [2] [i_0]), 34762)))), (((arr_1 [i_0]) ? 5 : (arr_1 [i_0])))));
        arr_3 [i_0] = (max(var_11, (-9223372036854775807 - 1)));
        arr_4 [i_0] = ((34084860461056 ? 32767 : -1411582225290332882));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_15 = (max(-2548013862852175636, ((max(34762, 15)))));
            var_16 = (~var_11);
            var_17 = ((-3 ? 65525 : -9223372036854775804));
            var_18 = var_11;
            var_19 = ((((arr_6 [i_0] [i_0]) % (((((arr_7 [i_1]) + 2147483647)) << (((arr_1 [i_0]) - 5446967560767559756)))))));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_20 ^= (((max((((arr_5 [i_2] [i_2] [i_2]) ? (arr_8 [i_0] [16] [i_0]) : var_3)), -9)) < ((min((((!(arr_1 [i_2])))), ((var_8 ? 41168 : var_7)))))));
            /* LoopNest 2 */
            for (int i_3 = 4; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        var_21 += (arr_1 [i_4]);

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_22 = ((-((max((arr_13 [i_3 - 1] [i_3 + 2] [i_3 - 3] [i_3 - 1]), (arr_11 [i_0] [i_3 + 2] [i_3 - 1] [i_3 - 3]))))));
                            var_23 = 9223372036854775807;
                            var_24 = (((arr_7 [i_3 + 1]) ? (229 && 7334934810043815962) : (min((arr_9 [i_0]), (~var_4)))));
                        }
                        for (int i_6 = 2; i_6 < 23;i_6 += 1)
                        {
                            var_25 = ((-(max(var_4, (((arr_5 [i_0] [i_0] [i_3 + 2]) % var_7))))));
                            var_26 = (max((arr_6 [i_2] [i_6]), (max(32, 32))));
                            var_27 = var_13;
                            var_28 = 19184;
                            arr_19 [i_0] [i_2] [i_3] [i_4] [i_6] = var_10;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_29 = ((((((arr_0 [i_7] [i_4]) ? (arr_5 [13] [13] [i_7]) : var_4))) ? -var_2 : (arr_14 [i_2] [i_0] [i_3 - 2] [i_3 + 1] [12] [i_3] [i_7])));
                            var_30 = (arr_23 [i_3 - 4] [i_3] [i_3 + 2] [i_3] [i_0]);
                            var_31 = (var_6 && var_1);
                        }
                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            arr_26 [i_3 - 3] [19] [i_3 + 1] [i_0] [19] [i_3 + 1] [i_3] = 88;
                            var_32 ^= -19184;
                        }
                        arr_27 [i_0] [i_2] [i_4] [i_4] |= (arr_23 [i_3] [16] [i_3] [i_3] [i_4]);
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            var_33 = (arr_21 [2] [i_0] [i_0] [3] [i_0] [i_0] [i_0]);
            var_34 = ((11916204209030581791 ? (arr_0 [21] [i_9]) : var_1));
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            arr_32 [i_0] [i_0] = (((((((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) / var_4)) / 28672)) > -1411582225290332882));
            var_35 = (max(var_35, (arr_12 [i_0] [i_0] [19] [19])));
            var_36 = 576460752303423487;
        }
    }
    for (int i_11 = 2; i_11 < 13;i_11 += 1) /* same iter space */
    {
        arr_35 [14] |= (max(576460752303423487, 3584));
        arr_36 [2] [2] |= (((max(-4142389214716902008, var_2)) <= ((1062 ? 4 : -576460752303423488))));
        var_37 += ((+(min((((-4453030682478730603 ? (arr_20 [0]) : -1))), 11916204209030581791))));
    }
    for (int i_12 = 2; i_12 < 13;i_12 += 1) /* same iter space */
    {
        var_38 |= ((((max((arr_1 [i_12 + 2]), (arr_1 [i_12 - 1])))) ? 32 : (arr_17 [i_12] [i_12 + 2])));
        var_39 = 8935141660703064064;
        arr_39 [i_12] = ((var_3 ? ((6530539864678969827 | (46 - 26172))) : (min((((!(arr_14 [i_12 - 1] [20] [i_12 - 1] [i_12] [i_12] [i_12 - 1] [i_12])))), (8160 & var_5)))));
    }
    for (int i_13 = 2; i_13 < 13;i_13 += 1) /* same iter space */
    {
        var_40 |= (max((min(var_12, var_3)), ((min(210, ((var_3 ? 0 : 26938)))))));
        var_41 += ((max((arr_11 [0] [6] [i_13] [6]), (arr_7 [i_13 + 4]))));
    }
    var_42 ^= ((((10 * 32764) ? (min(var_6, var_11)) : var_2)));

    /* vectorizable */
    for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
    {
        var_43 = (min(var_43, (arr_8 [i_14] [i_14] [i_14])));
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 16;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 16;i_16 += 1)
            {
                {
                    var_44 = (min(var_44, (((-(arr_5 [i_14] [i_15] [i_16]))))));
                    var_45 = ((-26105 ? (arr_42 [i_14]) : (arr_47 [i_14] [i_15] [i_14] [i_14])));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 16;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 16;i_18 += 1)
                        {
                            {
                                var_46 = ((-var_3 ? (arr_31 [i_15]) : (!var_1)));
                                var_47 |= (((arr_44 [12] [i_15] [12]) ? var_1 : (arr_44 [i_17] [i_15] [i_14])));
                            }
                        }
                    }
                    arr_54 [i_15] [i_15] = (arr_42 [i_14]);
                }
            }
        }
    }
    for (int i_19 = 0; i_19 < 16;i_19 += 1) /* same iter space */
    {
        var_48 = (((arr_56 [i_19]) ? (max((arr_45 [i_19] [i_19] [i_19]), var_0)) : -var_4));
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 16;i_20 += 1)
        {
            for (int i_21 = 2; i_21 < 15;i_21 += 1)
            {
                {
                    arr_62 [i_19] [i_21] = 0;
                    var_49 = (arr_58 [i_19] [i_19] [i_19]);
                }
            }
        }
        var_50 = ((var_8 ? (min(32755, (((arr_34 [i_19] [i_19]) / 32747)))) : 65535));
    }
    for (int i_22 = 0; i_22 < 16;i_22 += 1) /* same iter space */
    {
        var_51 = (min(var_51, (((var_7 ? (((max(0, 1065)))) : ((var_1 ? var_3 : (arr_12 [18] [i_22] [i_22] [i_22]))))))));
        arr_67 [1] [14] = ((137438953408 >> (-26938 + 26979)));
    }
    var_52 = var_8;
    #pragma endscop
}
