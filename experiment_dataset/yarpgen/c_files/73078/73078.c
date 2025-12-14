/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0]);
        arr_4 [i_0] = (((4922 ? 99 : var_5)));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] = (((60614 > 1967810915) == -1967810922));
                    var_18 = -2147483640;
                    arr_11 [i_0] [4] = ((-1967810922 ? (arr_5 [3] [7] [3]) : var_1));
                    var_19 = (((((var_1 == (arr_2 [i_2])))) * var_6));
                }
            }
        }
        var_20 = (min(var_20, 23956));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 2; i_5 < 14;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_21 = (-((((min(60203, var_7))) ? 60203 : ((max((arr_20 [i_3] [i_3] [i_5 + 1] [11]), 60612))))));
                            arr_24 [i_3] [i_4] [i_4] [i_3] [i_6] [i_4] [13] = (((arr_19 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) < (min((!-918266340), 168233186))));
                        }
                    }
                }
                var_22 = ((87 ? 1916901591 : 60217));
            }
            /* vectorizable */
            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        {
                            var_23 = 60199;
                            arr_33 [i_3] [i_8] [i_8] = 4921;
                            var_24 += (arr_27 [i_3] [i_4] [i_4]);
                        }
                    }
                }
                var_25 = (max(var_25, (((~((0 ? (arr_14 [i_3] [i_3]) : -120)))))));
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                arr_36 [i_3] [i_3] [i_3] [i_3] = (((-127 - 1) == 30017));
                var_26 = (max(var_26, ((((-127 - 1) ? (~10) : (!60203))))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        {
                            arr_44 [i_3] [i_3] [i_3] [i_12] [i_3] [i_13] = (~5332);
                            var_27 = ((!(9624 / var_16)));
                            arr_45 [i_3] = ((((-7928533411810365526 ? var_3 : (-127 - 1)))) ? 150 : (~34));
                            var_28 += (((arr_34 [i_4] [i_13] [10]) == (arr_34 [i_13] [i_13] [i_13])));
                        }
                    }
                }
            }
            arr_46 [6] [i_3] = (min(((max(65527, -61))), (((arr_18 [i_3] [i_3]) ? 207 : var_14))));
            arr_47 [i_3] [i_3] = ((max((min(1916901591, 31474)), var_1)));
            arr_48 [i_3] [i_3] = (((4671 - ((var_12 ? (arr_40 [i_3]) : (-127 - 1))))));
        }
        for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
        {
            var_29 = (max(var_29, ((min(var_17, (var_12 / var_4))))));
            var_30 += ((!(arr_28 [i_3] [i_3] [i_14] [i_14])));
            var_31 = ((!((((4923 ? -34 : 60612))))));
        }
        for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
        {
            arr_53 [i_3] = var_17;
            var_32 *= (((43 >> (((((arr_31 [i_3] [2] [i_15] [i_15]) << (((arr_22 [12] [i_3] [i_3] [i_3] [i_15]) - 167)))) - 133930996)))));
            var_33 = -59;
            var_34 = 30;
            var_35 ^= (5337 - 5333);
        }
        var_36 = (((-8400230507626888394 / 5357) ? (max(var_11, (arr_21 [i_3] [i_3] [i_3] [i_3] [i_3]))) : -101));
        var_37 = 60203;
        var_38 += (((min((arr_43 [i_3] [i_3]), 918266339)) % (~47885)));
        arr_54 [i_3] [i_3] = (max(2, 21893));
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 25;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 25;i_17 += 1)
        {
            {

                /* vectorizable */
                for (int i_18 = 0; i_18 < 25;i_18 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 25;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 25;i_20 += 1)
                        {
                            {
                                var_39 = ((var_10 ? 4910 : 32765));
                                var_40 = ((var_15 ? (arr_55 [i_16] [i_18]) : -17598));
                                var_41 |= (((arr_60 [i_16] [i_19] [22] [i_16]) ? var_4 : 1434567558));
                            }
                        }
                    }
                    var_42 = 57298;
                    var_43 = var_5;
                    arr_68 [20] [23] [23] = (((((-2147483647 - 1) || -30)) || 8191));
                    var_44 = (max(var_44, (((((15 ? (arr_67 [i_16] [i_16] [i_16] [i_16]) : (arr_61 [7] [i_16]))) >> (var_11 - 4265555805602504324))))));
                }
                var_45 = ((-2 ? 31487 : 4923));
                var_46 -= (arr_62 [i_16]);
                /* LoopNest 2 */
                for (int i_21 = 1; i_21 < 23;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 25;i_22 += 1)
                    {
                        {
                            arr_74 [i_21] [20] [i_21] [i_22] = (!40310);
                            var_47 = (max(var_47, ((max(-22535, ((~(((!(-127 - 1)))))))))));
                        }
                    }
                }
                arr_75 [2] = (((((((min(28, 61417))) <= var_10))) >> (-3975 != 23)));
            }
        }
    }
    #pragma endscop
}
