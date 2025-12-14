/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] = (var_5 > var_11);
                            arr_14 [i_0] [i_1] [i_2] [i_1] [0] = ((34528 ? 9639 : 1025178171));
                            var_14 = (var_9 == var_4);
                        }
                        var_15 = var_4;
                        var_16 = (min(var_16, (((var_9 % 11) ? var_5 : var_13))));
                        arr_15 [i_1] = 4095;
                    }
                    var_17 = (var_0 + 31017);

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_19 [i_1] [i_1] [i_2] [i_5] = (12 || 30);

                        for (int i_6 = 1; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            var_18 = ((65535 == ((var_1 ? var_2 : -11576))));
                            var_19 = (var_2 ? var_10 : (~1130963812));
                        }
                        for (int i_7 = 1; i_7 < 19;i_7 += 1) /* same iter space */
                        {
                            var_20 = ((5564 ? 1 : 56));
                            arr_25 [i_1] [i_5] [i_2] [3] [i_1] = (var_10 ? var_12 : var_6);
                            arr_26 [i_1] [i_5] [i_5] [i_2] [4] [i_1] = ((var_13 ? var_0 : 3311140748));
                        }
                        var_21 = (min(var_21, (var_0 == -2365196907531088707)));
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_22 = (min(var_22, (((var_8 | ((((-17148 + 2147483647) >> (var_6 + 57)))))))));
                        arr_29 [i_0] [i_1] [i_1] [i_2] [i_8] [1] = (~var_13);

                        for (int i_9 = 2; i_9 < 21;i_9 += 1)
                        {
                            arr_33 [i_2] [i_9] [i_2] &= (var_9 != -117);
                            arr_34 [i_1] = (!var_12);
                            var_23 = (min(var_23, (((((11947 << (var_8 - 3718445903461963116))) >> (543837620 - 543837597))))));
                        }
                        var_24 = var_7;
                        var_25 = (min(var_25, ((((~527052704) ? (1532689736 < -5784) : var_8)))));
                    }
                    arr_35 [i_1] [i_1] [i_1] = ((~((29677 ? var_10 : var_6))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                {
                    var_26 = (max(var_26, (((var_3 ? 1496422683853076280 : -17148)))));
                    var_27 = (-11622 - 1482164076);
                }
            }
        }
        var_28 -= ((6207 >> ((((-8304 ? var_2 : var_0)) - 87))));
    }
    for (int i_12 = 2; i_12 < 21;i_12 += 1) /* same iter space */
    {
        var_29 -= ((56455 % (var_3 <= 4408873134464703177)));
        var_30 = var_4;
    }
    var_31 = ((((((max(17148, 14037870939244848438))) ? (((3 ? 53427 : 53431))) : 3174880113)) | ((((((var_9 ? (-32767 - 1) : var_3))) ? (max(1255587485, -1595680211)) : var_10)))));
    var_32 = -3;
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 19;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {
            {

                for (int i_15 = 2; i_15 < 18;i_15 += 1)
                {
                    var_33 = (max(var_33, (((53427 / (-2147483647 - 1))))));
                    arr_52 [i_13] [i_15] [i_14] [i_14] = (((((((min(((var_2 ? var_3 : var_6)), (((-2147483647 - 1) & -114)))) + 2147483647)) + 2147483647)) >> (var_12 - 53)));
                    arr_53 [i_13] [i_15] [i_15] = (min((3410783749 | var_5), (((((min(var_7, 40568))) != (min(var_9, 1023)))))));

                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 19;i_16 += 1)
                    {
                        var_34 -= ((-(-488252458 != 488252447)));
                        var_35 = (max(var_35, 46));
                        arr_56 [i_13] [i_15] [1] [i_15 - 2] [1] [i_16] = -var_7;
                    }
                    for (int i_17 = 1; i_17 < 17;i_17 += 1)
                    {
                        arr_59 [i_15] = ((31326 && (1967 != var_2)));
                        arr_60 [i_13] |= (max((((1 & (!var_12)))), (min(2523871315, -1595680211))));

                        /* vectorizable */
                        for (int i_18 = 1; i_18 < 18;i_18 += 1)
                        {
                            arr_65 [12] [i_14] [i_15 - 2] [i_15] [i_17 + 2] [i_18] = (10463524815073998088 && 1493365051);
                            var_36 -= (688495887 != 562185485);
                            var_37 += (var_1 == var_8);
                            var_38 = (min(var_38, (((var_5 ? var_4 : -1570506095388364786)))));
                        }
                    }
                }
                /* vectorizable */
                for (int i_19 = 0; i_19 < 19;i_19 += 1) /* same iter space */
                {
                    var_39 = (min(var_39, (((var_1 ? -24088 : 65535)))));
                    var_40 = (max(var_40, (-144294635 != var_7)));
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 19;i_20 += 1)
                    {
                        for (int i_21 = 4; i_21 < 16;i_21 += 1)
                        {
                            {
                                var_41 += 457070579;
                                arr_72 [i_13] [i_14] [i_19] [i_20] [i_21 + 2] = 42562;
                                arr_73 [i_13] [i_14] [i_14] [i_20] [i_14] = var_5;
                            }
                        }
                    }
                }
                for (int i_22 = 0; i_22 < 19;i_22 += 1) /* same iter space */
                {
                    var_42 = ((var_8 ? (((max((!3039998422), 0)))) : -9223372036854775790));
                    /* LoopNest 2 */
                    for (int i_23 = 2; i_23 < 18;i_23 += 1)
                    {
                        for (int i_24 = 1; i_24 < 15;i_24 += 1)
                        {
                            {
                                arr_81 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_13] |= 16;
                                var_43 ^= -7613974099660594965;
                                var_44 |= ((~(min(2801602244, (1493365051 - 231)))));
                            }
                        }
                    }
                    var_45 -= (((!var_5) < (var_8 != var_11)));
                }
                var_46 = (min((var_11 << 1), (~var_9)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_25 = 1; i_25 < 20;i_25 += 1)
    {
        for (int i_26 = 1; i_26 < 21;i_26 += 1)
        {
            for (int i_27 = 0; i_27 < 22;i_27 += 1)
            {
                {
                    var_47 = (min(var_47, 22973));
                    var_48 = ((((max(45549, 1158466280))) ? (var_3 << var_3) : ((13 ? 9750944239931158167 : var_1))));
                    var_49 = var_10;
                }
            }
        }
    }
    #pragma endscop
}
