/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((~(max(((var_15 ? var_10 : (-2147483647 - 1))), ((var_16 ? var_15 : var_16))))));
    var_19 = 17102433516809492886;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_20 = (~1);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_2] = ((min(var_9, (((-7994 ? var_13 : 464075720))))));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_14 [i_1] [i_0] = (max(((max(var_16, ((((arr_7 [i_0]) ? 1442971244 : var_1)))))), ((var_7 ? (((var_17 ? 12050 : 1145599158))) : var_2))));

                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            var_21 = (max(var_21, 0));
                            var_22 = ((1 ? (((((max(var_5, 2815666660))) ? var_0 : (max(var_9, var_5))))) : (max(var_10, var_2))));
                            var_23 = max(var_12, 254);
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_24 = (!118);
                            arr_20 [i_1] [i_0] [i_0] = (((((((~(arr_16 [i_0])))) ? ((3035709709 ? (arr_2 [i_0]) : 105)) : (~var_0))) & var_4));
                        }
                        for (int i_6 = 3; i_6 < 18;i_6 += 1)
                        {
                            var_25 = (+((var_1 ^ ((var_9 ? (arr_5 [6] [i_2]) : var_16)))));
                            var_26 = (((-(arr_2 [i_0]))));
                        }
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_27 = (arr_19 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] [i_3]);
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((-(arr_23 [i_0] [i_0] [i_0] [i_0])));
                        }
                    }
                    for (int i_8 = 3; i_8 < 19;i_8 += 1)
                    {
                        var_28 = ((-(max(var_2, var_0))));
                        arr_30 [i_1] [i_0] [i_2] [i_8] [i_2] = (max((arr_10 [i_0] [i_1] [i_0] [i_8]), (max(var_12, ((max(var_15, var_16)))))));
                        var_29 = ((((arr_1 [i_0 + 1] [i_0]) ? (((var_15 + 2147483647) << 1)) : var_7)));

                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_30 += -1;
                            var_31 = ((-((((max(var_9, var_4))) ? var_5 : (((max((arr_28 [i_0] [i_1] [i_2] [i_8] [i_9]), var_1))))))));
                        }
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            arr_39 [i_0] [i_0] [i_10] = (((var_2 ? (((max(-15, var_1)))) : (((var_8 + 9223372036854775807) << (var_16 - 10827))))));
                            arr_40 [i_0] [i_1] [i_2] [i_0] [i_1] [i_10] = (((((((var_10 << (var_2 - 6635694286860150121)))))) ^ ((var_7 ? (max((arr_10 [i_0] [i_1] [i_2] [i_8]), var_5)) : ((145 ? var_17 : 3324944726))))));
                            var_32 = (((var_10 || (arr_33 [i_0 + 1] [i_8 - 3] [i_1] [i_0] [i_0] [i_2] [i_2]))));
                        }
                    }
                    for (int i_11 = 1; i_11 < 18;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
                        {
                            arr_47 [i_0] [i_0] [i_0] [i_0] [i_12] = var_5;
                            var_33 = (max((var_15 == var_6), -var_16));
                        }
                        for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
                        {
                            var_34 = (max((~var_9), (((max(var_14, var_7))))));
                            arr_51 [i_0] [i_1] [i_1] [i_1] [i_11] [i_13] = ((((max((arr_33 [i_2] [i_2] [i_2] [i_0 - 1] [i_2] [i_11 + 2] [i_2]), var_17))) ? var_10 : (((((1024997155 ? 6204235521306218411 : 1)) <= (~var_8))))));
                        }
                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            var_35 = (((11515082102562288620 || -84) > 4294967295));
                            var_36 = var_12;
                            var_37 = var_6;
                        }
                        var_38 ^= 255;

                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] [i_15] [i_15] = var_5;
                            var_39 = (max(((53485 ? -580789541 : 24557)), ((((min(0, 4294967295))) - (max((arr_5 [i_11] [i_15]), (arr_52 [i_2] [i_2] [i_15] [i_11 + 1])))))));
                            var_40 = ((~((((var_14 >> (-27 + 50)))))));
                            var_41 = (max((max(((max((arr_53 [i_0] [i_11] [i_2] [i_11 + 1] [i_1]), (arr_15 [10] [10] [i_2] [i_1] [i_2])))), (arr_44 [i_11 - 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0] [i_0]))), 2418209469));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 2; i_16 < 19;i_16 += 1)
                    {
                        for (int i_17 = 2; i_17 < 19;i_17 += 1)
                        {
                            {
                                arr_62 [i_0 + 1] [i_1] [i_2] [i_2] [i_0] = ((!(((51774 + (arr_61 [i_16 - 2] [i_17 - 1] [i_17] [i_17 - 1] [i_17]))))));
                                var_42 = ((!(((1977754132452001361 + (arr_25 [i_16 - 2] [i_16 - 1] [i_16 + 1] [i_16 + 1]))))));
                                var_43 = ((~(arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                                arr_63 [i_0] [i_16] = var_6;
                            }
                        }
                    }
                }
            }
        }
        var_44 = (max(var_44, ((max((~1), ((var_3 * (max((arr_34 [i_0] [10] [i_0] [i_0]), (arr_24 [i_0] [i_0] [i_0] [i_0 - 1] [i_0]))))))))));
    }
    for (int i_18 = 0; i_18 < 1;i_18 += 1)
    {
        var_45 = var_12;
        var_46 = (((((0 ? 61531 : (min(714465562, var_3))))) ? 1616964473656877383 : -114));
    }
    for (int i_19 = 2; i_19 < 19;i_19 += 1)
    {
        var_47 = (max(((max((arr_67 [i_19 + 1]), var_9))), 5329586293536497483));
        var_48 = var_15;
        var_49 = (min(var_49, (((((max((arr_67 [i_19]), (arr_66 [i_19]))) - var_16))))));
    }
    var_50 = (max(var_6, (max((max(var_10, var_14)), var_13))));
    #pragma endscop
}
