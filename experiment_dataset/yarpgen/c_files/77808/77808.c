/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_15 = 5;
            arr_6 [i_1] = 16425;
            var_16 = 22;
            arr_7 [i_1] [i_0] = 0;
        }
        for (int i_2 = 4; i_2 < 20;i_2 += 1)
        {
            arr_11 [i_0] = 5;
            var_17 = (max(var_17, 204));
            var_18 = 191;
            var_19 = 204;
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_14 [i_0] = 1463016943;
            var_20 = (max(var_20, 3246918934));
        }
        for (int i_4 = 4; i_4 < 21;i_4 += 1)
        {
            var_21 |= 1048048364;
            arr_19 [i_0] [i_0] [i_4 - 4] |= 121;
            var_22 = 0;
            var_23 |= 52;
        }

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_24 |= -1463016944;
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 21;i_8 += 1)
                    {
                        {
                            arr_28 [i_5] |= 249;
                            arr_29 [i_0] [i_7] [i_6] [i_7] [i_7] [i_8] = 207;
                            arr_30 [i_7] [i_7] = 1;
                            arr_31 [i_5] [i_7] [i_6] [i_7] [i_0] = 230;
                        }
                    }
                }
            }
            var_25 = 2147483647;
        }
        for (int i_9 = 1; i_9 < 20;i_9 += 1)
        {
            var_26 = 251;
            arr_34 [0] |= 3246918933;
            var_27 &= 2147483647;
        }
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            var_28 = 977182175;
            arr_37 [i_0] [i_10] = 1463016953;
            arr_38 [1] = 487831208;
            var_29 = 106;
            var_30 = 148;
        }
        var_31 = 105;
        arr_39 [i_0] |= 4095;
    }
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        var_32 = (max((min(var_14, var_12)), ((max(1, 18)))));
        arr_43 [10] |= max(((min(var_13, (arr_21 [i_11] [i_11])))), (max(487831208, 2025577018)));
    }

    for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
    {
        var_33 = (max((max(((max(var_14, (arr_25 [0] [i_12] [i_12] [i_12] [i_12])))), (arr_8 [i_12] [i_12] [i_12]))), ((min(((max(-32766, (arr_23 [i_12] [9] [9])))), (min((arr_24 [i_12] [i_12] [i_12] [i_12]), var_10)))))));
        arr_47 [i_12] = (max((max(1, (max(240, 2467743608)))), ((max((min(1, 1)), var_11)))));
    }
    for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
    {
        arr_51 [i_13] [i_13] = (min((max(1102010189, 242)), (min(108, -1463016959))));

        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {
            var_34 = (min((max((max(120, 14165787612284043000)), var_5)), (min((arr_44 [i_13] [i_13]), 4280956461425508608))));
            var_35 = (min(var_35, ((min((min(3280227257, 3312116095)), ((max(var_12, (arr_12 [i_13])))))))));
            var_36 |= (max((max(11252720446586035837, var_14)), ((min(148, 107)))));
        }
        /* vectorizable */
        for (int i_15 = 2; i_15 < 18;i_15 += 1)
        {
            var_37 = 32754;
            arr_56 [i_13] [i_15 + 1] [i_13] = 30;
            arr_57 [i_15 + 3] [i_13] = -6520335698381609167;
            arr_58 [i_13] [17] = 1;
        }
        for (int i_16 = 1; i_16 < 1;i_16 += 1)
        {

            /* vectorizable */
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                arr_65 [7] [i_16] [i_16] [i_16] = -31364;

                for (int i_18 = 1; i_18 < 19;i_18 += 1)
                {
                    var_38 = (max(var_38, -1));
                    var_39 ^= 119;
                }
                for (int i_19 = 0; i_19 < 21;i_19 += 1)
                {

                    for (int i_20 = 0; i_20 < 21;i_20 += 1)
                    {
                        var_40 = (min(var_40, 136));
                        var_41 = 3440109762;
                        arr_73 [i_16] = 14;
                    }
                    for (int i_21 = 3; i_21 < 19;i_21 += 1)
                    {
                        arr_77 [i_13] [i_16] [i_17] [i_13] [i_19] [i_16] |= 150;
                        var_42 = 255;
                        arr_78 [i_17] [i_19] [i_16] = 224;
                    }
                    var_43 = 3584;
                    var_44 = 18001;
                    arr_79 [i_13] [i_16] [12] [10] [i_16] = 1;
                }
                for (int i_22 = 0; i_22 < 21;i_22 += 1)
                {
                    var_45 = 19;
                    var_46 = 1;
                    var_47 = 1;
                }
                arr_82 [i_13] [i_16] = 97;
                arr_83 [7] [i_16] [i_16] [i_13] = -45840306;
                arr_84 [i_13] [i_13] [i_16] = 75;
            }
            for (int i_23 = 1; i_23 < 1;i_23 += 1)
            {
                var_48 = (max(var_48, ((max((min(7877124509546945908, (arr_59 [i_16 - 1] [i_23 - 1]))), ((max((arr_59 [i_16 - 1] [i_23 - 1]), (arr_59 [i_16 - 1] [i_23 - 1])))))))));
                arr_87 [i_16] [i_16 - 1] [i_16 - 1] = (max(((max(var_13, (arr_10 [i_23 - 1] [i_16 - 1] [i_23])))), (min((arr_26 [i_23 - 1] [i_16 - 1] [i_23] [i_13] [i_16]), (arr_10 [i_23 - 1] [i_16 - 1] [i_23])))));

                for (int i_24 = 0; i_24 < 21;i_24 += 1)
                {
                    var_49 = (min(((max(41250, (arr_27 [i_16] [17] [i_23 - 1] [i_23 - 1] [i_24])))), (max(26172, -5))));
                    arr_90 [i_13] [i_16] [i_23 - 1] [i_24] = (max(((max((max(87, var_1)), (arr_2 [i_16] [i_16])))), (max((arr_35 [i_16 - 1] [i_23 - 1]), 1))));
                }
            }
            arr_91 [i_16] = (min(((max(var_7, 13))), (min(1, 2147483636))));
            var_50 = (max((max(var_4, 14165787612284042991)), ((min(1, var_0)))));
            var_51 = (max((max((arr_44 [i_16 - 1] [i_16 - 1]), 182)), ((max(86, var_5)))));
            var_52 = max(((max(var_0, var_8))), (max(-12197, (arr_4 [i_16]))));
        }
        for (int i_25 = 2; i_25 < 20;i_25 += 1)
        {
            var_53 = (max((max(1, 3007743910539907764)), 1));
            var_54 = (min((max((arr_44 [1] [i_25 + 1]), var_4)), ((max(75, var_8)))));
            /* LoopNest 3 */
            for (int i_26 = 0; i_26 < 1;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 21;i_27 += 1)
                {
                    for (int i_28 = 3; i_28 < 19;i_28 += 1)
                    {
                        {
                            var_55 = (max(var_55, ((min((max(var_3, var_6)), ((min(var_7, var_1))))))));
                            arr_102 [i_28] = (min((min((arr_15 [i_25] [i_25] [i_25 + 1]), 1)), ((min((arr_80 [i_28]), 71)))));
                        }
                    }
                }
            }
            var_56 &= (max(((min(var_12, (arr_44 [i_25 + 1] [i_25])))), (min(1244661849, var_3))));
        }
    }
    var_57 = (max(((max((max(910902894, var_1)), var_11))), var_6));
    #pragma endscop
}
