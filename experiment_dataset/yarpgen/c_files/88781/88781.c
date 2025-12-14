/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((max(((min(8, -18386))), 3221225472))) ? (max(var_6, ((19 ? 7 : -32757)))) : 81));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        var_16 = 104;
                        var_17 = 247;
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 17;i_5 += 1)
                        {
                            var_18 = 67108832;
                            arr_16 [i_0] [i_1] [i_2] [i_2 - 2] [i_2] [9] = ((37 ? 17 : var_2));
                        }
                        arr_17 [i_2] [i_1] [i_1] [i_2] = 4;
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_20 [i_2] [i_1] [i_2 - 1] [i_6] = ((0 ? ((max(9, 3))) : ((max(63, var_8)))));

                        for (int i_7 = 1; i_7 < 14;i_7 += 1)
                        {
                            var_19 = var_7;
                            var_20 = (min(var_8, (((((115 ? var_8 : 35))) ? 213 : var_2))));
                            var_21 = (max(var_10, (max(((4294967295 ? 31900 : 57)), ((min(65, 20996)))))));
                        }
                        for (int i_8 = 2; i_8 < 17;i_8 += 1)
                        {
                            var_22 = (min(var_22, ((min((min((max(1475927098, -72)), (min(var_2, 393216)))), ((var_2 ? (min(var_6, 2013265920)) : (((max(46, var_12)))))))))));
                            var_23 = var_10;
                        }
                    }
                    for (int i_9 = 1; i_9 < 16;i_9 += 1)
                    {

                        for (int i_10 = 1; i_10 < 15;i_10 += 1)
                        {
                            var_24 *= ((((((max(var_10, 2798586840))) ? ((min(var_10, 87))) : ((min(83, var_3)))))) ? (max(((3174126375 ? 2877405223 : 76)), var_4)) : var_12);
                            var_25 = max(7, ((max(-1, (min(-110, -6))))));
                            arr_31 [i_0] [i_9] [i_2] [i_2] = (max(((((min(var_12, (-127 - 1)))) ? (((2145386496 ? var_9 : var_12))) : (max(var_13, 255)))), (min((min(var_13, 469762048)), (((8191 ? var_6 : 11)))))));
                        }
                        arr_32 [i_0] [i_1] [i_2] [1] = var_9;

                        for (int i_11 = 1; i_11 < 17;i_11 += 1)
                        {
                            var_26 = max((min(var_13, 30790)), 2708616801);
                            var_27 = var_0;
                            arr_36 [i_2] [11] [i_2] [11] [i_11] [i_0] [8] = var_9;
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 18;i_13 += 1)
                        {
                            {
                                arr_42 [7] [i_2] [i_2] [i_2] [i_2] = max(var_6, ((var_9 ? (min(var_12, var_13)) : var_10)));
                                var_28 = (max(((min(var_3, 127))), (min(((var_6 ? 108 : 3710673282)), ((max(var_2, var_11)))))));
                            }
                        }
                    }

                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        arr_45 [i_2] [i_2] [i_2] [i_2] [i_2] = (max((min(((var_5 ? 0 : var_10)), var_8)), var_10));
                        arr_46 [i_0] [13] [i_2] [i_14] [i_14] [13] = (max((min((min(var_13, var_7)), (max(var_1, var_9)))), var_12));
                        var_29 = (max((max(((min(127, -88))), (min(4, var_11)))), -6348));
                        arr_47 [i_2] [i_2] = (min(52, var_1));
                        arr_48 [i_2] = (min(-107, ((var_11 ? ((var_11 ? var_13 : var_5)) : (((min(var_6, var_10))))))));
                    }
                    for (int i_15 = 1; i_15 < 17;i_15 += 1)
                    {
                        var_30 = var_8;
                        var_31 = (min((((((max(var_0, 190575286))) ? ((-99 ? var_3 : -2)) : var_10))), ((var_8 ? (min(98037416, var_7)) : 207))));
                        arr_51 [i_15] [13] [i_2] [i_1] [i_0] = max(((var_5 ? (min(948809085, 7)) : ((31 ? 2221091477 : -21021)))), 4394);
                    }
                    arr_52 [i_0] [6] [i_2] |= -19;
                    var_32 += (min(255, (max(((max(var_3, var_11))), (min(var_13, 153))))));
                }
                arr_53 [i_0] = ((((min(16449, (min(var_3, var_2))))) ? var_3 : ((17264 ? (((255 ? -594 : var_6))) : var_13))));
                var_33 = var_3;
            }
        }
    }
    #pragma endscop
}
