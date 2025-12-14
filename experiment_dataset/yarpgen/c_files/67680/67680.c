/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((((1 ? 248 : 1))) ? (((1 ? 1 : 1))) : ((65535 ? 1 : 17957320739328180087))))) ? (max(var_14, var_12)) : (((((var_1 ? var_7 : var_4))) ? ((var_14 ? var_7 : var_13)) : var_11))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_19 = var_13;
        arr_4 [i_0] [i_0] = ((1 ? (max(var_3, 3822775282679742451)) : ((max(((var_11 ? var_14 : var_2)), (max(var_13, var_16)))))));
        arr_5 [i_0] = ((1 ? -28906 : 19704));
        var_20 = (max(-20028, ((var_8 ? -1153312440 : var_6))));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] [i_1 - 1] = ((~(((((var_13 ? var_0 : var_8))) ? ((var_10 ? var_2 : var_4)) : var_8))));
        arr_9 [i_1] = (((((var_12 ? var_8 : var_8))) ? -var_15 : (((((var_17 ? var_12 : var_10))) ? ((var_7 ? var_17 : var_8)) : ((var_11 ? var_1 : var_14))))));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 3; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_21 = (((((~var_5) ? ((var_8 ? var_12 : var_7)) : ((max(var_4, var_17)))))) ? ((~((var_2 ? var_7 : var_10)))) : ((var_17 ? var_16 : var_2)));
                            arr_20 [i_1 + 1] [i_2] [i_3] = ((var_4 ? (((max(var_13, var_7)))) : (((((65535 ? 31073 : 31091))) ? 1 : 16288))));
                            var_22 = (((((var_2 ? var_10 : var_17))) ? ((min(1, 1))) : 20027));
                        }
                    }
                }
            }
            arr_21 [i_2] [i_1] [i_2] = (((((var_11 ? var_7 : var_9))) ? ((var_14 ? var_13 : (max(-19715, 10977096518751689268)))) : 8730430919330074568));
            arr_22 [i_1] [i_2] [2] = ((((((var_11 ? var_3 : var_5)))) ? ((var_17 ? var_2 : var_3)) : var_9));
        }
    }
    for (int i_6 = 4; i_6 < 9;i_6 += 1)
    {
        var_23 = (min(var_6, (((((var_11 ? var_8 : var_0))) ? ((var_4 ? var_0 : var_16)) : (((var_9 ? var_3 : var_1)))))));
        arr_25 [i_6] = (max(128, -711164115));

        for (int i_7 = 3; i_7 < 12;i_7 += 1)
        {
            var_24 = ((((max(var_8, (max(var_2, var_14))))) ? (!var_17) : ((((max(1, 1)) ? (max(1541699520, 3202522172)) : 65520)))));

            /* vectorizable */
            for (int i_8 = 1; i_8 < 11;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_33 [i_9] [i_8] [1] [i_7] [i_6] = var_9;
                    var_25 = (min(var_25, (!var_6)));
                }
                arr_34 [i_6] [6] [i_8] = ((var_1 ? var_12 : ((var_8 ? var_8 : var_14))));
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {

                for (int i_11 = 2; i_11 < 10;i_11 += 1)
                {
                    var_26 = 34422;
                    arr_40 [i_11] = (((!var_8) ? var_9 : var_1));
                    var_27 = (var_1 ? var_6 : var_1);
                }
                for (int i_12 = 2; i_12 < 11;i_12 += 1)
                {
                    arr_45 [i_6] = ((((var_16 ? var_8 : var_5))) ? var_5 : ((var_3 ? var_13 : var_1)));
                    var_28 = var_5;
                    var_29 = (((((var_15 ? var_13 : var_5))) ? var_13 : var_2));
                    arr_46 [11] [i_7 - 1] [i_10] [i_12] = ((var_11 ? (!var_14) : ((0 ? 23766 : 52))));
                    var_30 = ((var_8 ? ((1 ? 1 : 10352)) : var_7));
                }
                for (int i_13 = 1; i_13 < 10;i_13 += 1)
                {

                    for (int i_14 = 1; i_14 < 1;i_14 += 1) /* same iter space */
                    {
                        arr_51 [1] [1] [i_14] [i_13] [i_13] [i_13 - 1] = ((((var_17 ? var_4 : var_1))) ? var_8 : ((var_5 ? var_17 : var_5)));
                        var_31 = var_10;
                        arr_52 [i_14] = (((((var_1 ? var_12 : var_4))) ? ((var_4 ? var_6 : var_0)) : var_3));
                    }
                    for (int i_15 = 1; i_15 < 1;i_15 += 1) /* same iter space */
                    {
                        var_32 = ((var_4 ? var_12 : var_0));
                        arr_56 [i_6] [11] [i_7 - 3] [i_10] [i_10] [i_15] = var_5;
                        var_33 = (((var_11 ? var_16 : var_14)));
                        var_34 ^= ((var_16 ? var_12 : var_1));
                        var_35 = ((var_2 ? var_12 : var_10));
                    }
                    var_36 = (((((var_6 ? var_9 : var_6))) ? var_6 : var_1));
                }
                for (int i_16 = 1; i_16 < 9;i_16 += 1)
                {
                    arr_61 [i_16] [i_6] [i_7 - 1] [i_6] = (!var_15);
                    arr_62 [i_6] [9] [i_6] [9] = ((var_17 ? (((var_7 ? var_8 : var_4))) : var_13));
                    arr_63 [i_6 + 1] = ((var_9 ? var_2 : var_2));
                }
                arr_64 [i_7] = var_17;
                var_37 = var_11;
                var_38 = var_13;
            }
            for (int i_17 = 0; i_17 < 13;i_17 += 1)
            {
                /* LoopNest 2 */
                for (int i_18 = 4; i_18 < 12;i_18 += 1)
                {
                    for (int i_19 = 2; i_19 < 12;i_19 += 1)
                    {
                        {
                            var_39 = (!var_3);
                            arr_74 [i_6] [i_17] [i_17] [i_18] [i_19] = (min(var_1, 1));
                        }
                    }
                }

                /* vectorizable */
                for (int i_20 = 3; i_20 < 12;i_20 += 1)
                {
                    arr_77 [i_6] [i_6 - 3] [i_17] = (~var_3);
                    arr_78 [i_6] [i_17] [i_7] [i_17] [i_17] [i_17] = var_17;
                    var_40 = (var_13 ? ((var_9 ? var_9 : var_9)) : var_12);
                }
                for (int i_21 = 0; i_21 < 0;i_21 += 1)
                {
                    arr_81 [i_21] [i_17] [10] [i_17] [i_6] = ((((min(-31060, 1))) ? -56 : ((var_9 ? 29 : 60))));
                    var_41 = (max(var_41, ((((~((var_17 ? var_12 : var_16))))))));
                    var_42 = ((((((var_3 ? var_7 : var_10)))) ? (max((!var_17), ((2003760922 ? 711164115 : var_1)))) : var_17));
                    var_43 = (((max(var_4, (~var_13)))) ? ((((max(-72, 1221641697))) ? 171 : 216)) : (max(((var_10 ? var_9 : var_9)), ((var_3 ? var_6 : var_8)))));
                }
                for (int i_22 = 1; i_22 < 1;i_22 += 1)
                {
                    arr_85 [i_6 - 2] [12] [12] [12] [i_22] [i_17] = ((~((((var_7 ? var_9 : var_11))))));

                    for (int i_23 = 0; i_23 < 13;i_23 += 1)
                    {
                        var_44 += ((-(((((var_7 ? var_10 : var_17))) ? ((var_1 ? var_12 : var_11)) : ((var_2 ? var_17 : var_4))))));
                        arr_89 [i_6] [i_6] [i_17] [i_17] [i_17] [i_23] = ((((((~var_9) ? ((var_6 ? var_14 : var_13)) : var_1))) ? (min(((var_12 ? var_7 : var_0)), ((max(var_7, var_17))))) : ((min(var_6, var_12)))));
                    }
                    var_45 = (max((((var_16 ? var_14 : var_4))), (((min(var_2, var_12))))));
                    var_46 = (((((var_2 ? var_8 : var_10))) ? (max(var_11, var_12)) : var_14));
                }

                for (int i_24 = 1; i_24 < 1;i_24 += 1)
                {
                    var_47 = 3153677328;
                    var_48 ^= max((((((var_2 ? var_5 : var_3))) ? 4084819103 : (((var_8 ? var_8 : var_9))))), ((min(((var_15 ? var_17 : var_9)), (!236)))));
                    arr_93 [i_17] = (max(29, ((var_5 ? 16709239383338510962 : 29545))));
                }
                for (int i_25 = 1; i_25 < 1;i_25 += 1)
                {
                    arr_97 [i_7] [i_17] = ((((max(var_9, var_4))) ? (max((~var_16), var_12)) : ((min(var_8, (!var_7))))));
                    arr_98 [i_6] [i_7] [i_17] = (max(var_1, ((var_9 ? var_15 : var_9))));
                    arr_99 [i_7] [3] [i_25] [i_17] = (min((((((var_11 ? var_5 : var_6))) ? var_10 : ((95 ? 48397 : 32767)))), 1));
                }
                /* vectorizable */
                for (int i_26 = 4; i_26 < 11;i_26 += 1) /* same iter space */
                {
                    var_49 = ((var_11 ? var_0 : var_15));
                    var_50 = (min(var_50, (((1 ? 116 : (-32767 - 1))))));
                    arr_103 [i_26] [i_17] [i_7 - 2] [i_17] [i_6] = var_2;
                }
                for (int i_27 = 4; i_27 < 11;i_27 += 1) /* same iter space */
                {
                    var_51 = min(((1 ? 12379385135927467085 : 29646)), ((max(var_1, var_14))));
                    var_52 = (min(var_16, (max((max(-1331692258, 0)), (max(var_14, var_13))))));
                }
                var_53 ^= (max((((((var_9 ? var_10 : var_4))) ? var_3 : ((var_12 ? var_13 : var_5)))), (!1751031041)));
                var_54 = ((((min(var_17, var_13))) ? ((var_16 ? var_4 : var_0)) : 1));
            }
            arr_108 [i_6 - 2] [i_6 - 2] = var_17;
            arr_109 [i_6] [i_7 - 3] [i_7] = (max((max(((max(var_5, var_8))), ((var_9 ? var_7 : var_17)))), ((((max(var_9, var_16))) ? ((0 ? -16913 : 42800)) : (max(var_15, var_11))))));
        }
        for (int i_28 = 0; i_28 < 0;i_28 += 1)
        {
            arr_112 [i_6] [i_6] [i_6] = ((((((29544 ? 0 : 1))) ? ((var_9 ? var_5 : var_4)) : var_6)));
            var_55 = (min(2147483647, 1));
            /* LoopNest 2 */
            for (int i_29 = 1; i_29 < 10;i_29 += 1)
            {
                for (int i_30 = 0; i_30 < 13;i_30 += 1)
                {
                    {
                        arr_117 [i_6] [1] [i_29] [i_30] = (((((((max(var_0, var_2))) ? (max(var_3, var_5)) : ((var_14 ? var_9 : var_1))))) ? (((((var_14 ? var_8 : var_14))) ? ((var_7 ? var_13 : var_16)) : ((var_12 ? var_13 : var_15)))) : ((-var_13 ? var_6 : ((var_0 ? var_6 : var_4))))));
                        var_56 = ((((((((var_4 ? var_7 : var_17))) ? var_17 : (((var_15 ? var_4 : var_4)))))) ? (((var_11 ? var_8 : var_6))) : (max(var_6, var_0))));

                        for (int i_31 = 1; i_31 < 12;i_31 += 1)
                        {
                            var_57 = var_13;
                            arr_120 [i_6] [5] [i_29] [i_30] [i_29] [1] [8] = ((((max((!var_6), var_11))) ? (((var_9 ? (!var_11) : var_4))) : ((~((95 ? 16153140541606229871 : 6041))))));
                        }
                        for (int i_32 = 0; i_32 < 13;i_32 += 1)
                        {
                            arr_123 [i_29] [i_28 + 1] [i_29] [6] [i_30] [i_28 + 1] = var_0;
                            var_58 = max(((var_5 ? var_13 : var_12)), var_17);
                            arr_124 [i_29] [i_29] [i_29] [i_29] [i_6 - 3] = ((var_2 ? (min(var_14, var_15)) : ((min(var_1, var_1)))));
                        }
                        /* vectorizable */
                        for (int i_33 = 1; i_33 < 12;i_33 += 1)
                        {
                            var_59 = ((var_1 ? var_1 : var_3));
                            arr_128 [i_29] [i_29] [i_29] [i_30] [i_30] = ((var_15 ? var_0 : var_9));
                        }
                        var_60 = ((((((((1085519860 ? 35989 : 18259900940266879284))) ? ((var_3 ? var_6 : var_13)) : 140))) ? ((min(var_7, (!var_14)))) : (min((min(var_5, var_3)), var_9))));
                    }
                }
            }
        }
        for (int i_34 = 0; i_34 < 1;i_34 += 1)
        {
            var_61 = ((min(((var_12 ? var_1 : var_10)), -var_16)));
            var_62 = ((((max((min(var_10, var_6)), var_9))) ? (!var_14) : ((2147483647 ? 1 : 210381356))));
            var_63 = (max(135, (max(255, 1))));

            for (int i_35 = 1; i_35 < 11;i_35 += 1)
            {
                var_64 = ((3587925527110545741 ? var_11 : var_13));
                arr_135 [i_6 - 2] [10] [i_35] = ((-15182 ? (((var_17 ? 34444 : -1751031042))) : 2011406419));
            }
        }
        arr_136 [i_6] = ((var_15 ? var_12 : ((var_4 ? var_6 : var_14))));
    }
    #pragma endscop
}
