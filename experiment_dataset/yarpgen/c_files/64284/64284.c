/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_8;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_12 = ((~((-(((arr_1 [i_0]) ? var_9 : (arr_3 [i_0] [i_2] [i_3])))))));
                        arr_11 [i_0] [i_1] [i_2] = ((((((((~(arr_0 [i_2])))) ? (arr_4 [i_2] [i_1]) : (arr_9 [i_0] [i_0] [i_0])))) ? 4088 : (((!var_2) ? var_2 : (max(144097595889811456, 10))))));
                        var_13 -= var_1;
                    }
                }
            }
        }
        var_14 = ((arr_10 [i_0] [i_0] [13] [18] [13]) ? var_3 : var_4);
    }
    var_15 = ((-1663441390 ? var_2 : 0));
    var_16 *= ((~(!var_1)));
    /* LoopNest 2 */
    for (int i_4 = 4; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 11;i_5 += 1)
        {
            {

                for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                {
                    var_17 = (arr_17 [8] [i_5 - 2]);

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_18 = (min(var_18, ((((arr_10 [i_7] [i_7] [i_6] [2] [2]) ? var_9 : -var_4)))));
                            var_19 = (min(var_19, (((((min((arr_1 [i_4 - 2]), (arr_1 [i_4 + 2])))) >= var_6)))));
                        }
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            arr_29 [10] [8] [i_4] [8] [i_9] [i_9] = ((-((-((var_5 ? (arr_14 [i_7]) : var_3))))));
                            arr_30 [i_5] [i_6] [i_7] = ((((max((arr_19 [2]), (arr_8 [i_4] [15] [i_4 - 1] [i_4 - 1])))) ? (max((!var_2), (min((arr_12 [i_9]), var_10)))) : (~var_7)));
                        }
                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            var_20 -= ((~(arr_8 [i_5 - 3] [i_5] [i_5 + 2] [i_5 + 2])));
                            var_21 = ((-(((~(arr_21 [i_4] [i_5] [i_5] [i_5] [i_10]))))));
                            var_22 *= var_0;
                            arr_34 [i_4] [i_5] [i_5] [i_6] [i_7] [i_10] = (((arr_27 [i_10] [i_5]) ? (~-3608457213906083160) : ((((!(arr_28 [i_4] [i_5] [i_6] [i_6] [6] [i_10] [i_10])))))));
                        }
                        var_23 = (max(0, (arr_7 [i_4] [i_5] [i_6] [i_7])));
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            {
                                arr_40 [i_12] [i_5] [i_6] [i_5] [i_4] = (arr_12 [i_6]);
                                arr_41 [i_4] [i_5] [1] = var_1;
                                arr_42 [i_11] [i_11] [i_5] [i_5] = max((min(var_8, (arr_16 [2]))), -1311030200);
                            }
                        }
                    }
                    var_24 = -12;
                    arr_43 [i_6] = (((~7) ? (arr_10 [i_4 - 1] [i_5] [i_5 - 1] [i_6] [9]) : (arr_14 [i_4])));
                }
                for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
                {
                    var_25 = (min((max(((var_8 ? var_5 : var_9)), ((17644111324375289761 ? 1099511627768 : 536870911)))), (((var_3 ? (((arr_17 [i_4] [i_5]) ? -1099511627768 : (arr_13 [i_4]))) : -var_3)))));
                    var_26 = min((max(1099511627790, (~7848846398240846692))), ((max((arr_18 [i_5] [i_13]), (35 << 0)))));
                    var_27 = (min((((!((max(1147643276, (arr_15 [i_4]))))))), (min((arr_35 [i_5] [i_5 + 1]), (((-(arr_10 [i_4] [i_4] [i_4] [i_4] [11]))))))));
                    var_28 = (max(var_28, (((((arr_5 [i_4 + 2]) + 9223372036854775807)) << (((((min(var_9, (arr_5 [i_4 - 3]))) + 4331568248818997854)) - 48))))));
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 13;i_14 += 1) /* same iter space */
                {
                    var_29 = (arr_12 [i_4]);
                    var_30 -= 127;
                    var_31 *= -1099511627774;
                    arr_50 [i_4] [4] [1] [i_4] = var_7;
                }
                for (int i_15 = 1; i_15 < 12;i_15 += 1)
                {
                    var_32 ^= ((-((max((arr_20 [6] [i_5] [7] [i_5]), (arr_7 [i_4] [i_5] [i_15] [i_15]))))));
                    var_33 = (max(0, (!127)));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        for (int i_17 = 2; i_17 < 10;i_17 += 1)
                        {
                            {
                                arr_57 [i_15] [7] [i_15] [i_17] [2] = (arr_7 [i_5] [i_5 + 1] [i_15] [15]);
                                arr_58 [i_4] [11] = ((((arr_25 [i_5] [i_5] [i_15]) ? ((max((arr_56 [i_4] [i_5] [i_15] [i_16] [2]), var_7))) : var_8)));
                            }
                        }
                    }
                    var_34 ^= (arr_51 [i_15]);
                }
                var_35 = 253;
                arr_59 [i_4] = ((+(((arr_22 [i_4] [i_4] [i_4 - 3]) ? -var_8 : var_3))));

                for (int i_18 = 4; i_18 < 11;i_18 += 1) /* same iter space */
                {
                    var_36 = (max(var_36, var_4));
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 13;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 13;i_20 += 1)
                        {
                            {
                                arr_67 [i_4] [i_5] [i_18] [5] [8] [3] [3] = (((-0 ? var_5 : var_6)));
                                var_37 = (min(var_37, (((-((47889 ? var_4 : (arr_13 [6]))))))));
                                var_38 *= ((!(((var_5 ? (arr_25 [i_4] [i_19] [i_20]) : (max(1027633876, 46324)))))));
                            }
                        }
                    }
                }
                for (int i_21 = 4; i_21 < 11;i_21 += 1) /* same iter space */
                {
                    var_39 = (((arr_18 [i_4] [i_4 + 1]) ? (((4231119291 ? -11191 : 0))) : ((~(arr_18 [i_4] [i_4 - 2])))));
                    /* LoopNest 2 */
                    for (int i_22 = 1; i_22 < 11;i_22 += 1)
                    {
                        for (int i_23 = 4; i_23 < 10;i_23 += 1)
                        {
                            {
                                var_40 = var_4;
                                var_41 = (max(var_41, (arr_75 [9] [i_21] [1] [i_22] [4])));
                                var_42 ^= var_8;
                            }
                        }
                    }
                }
                var_43 = -4095;
            }
        }
    }
    #pragma endscop
}
