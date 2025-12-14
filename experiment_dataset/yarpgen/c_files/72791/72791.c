/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (min(-5401876109220992824, 1876866919));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [1] [i_1] = var_11;
            var_16 = (min(var_16, -54));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {
            arr_8 [i_2] [i_2] = (max(-54, 46));
            arr_9 [i_2] = (min(var_1, -54));
            arr_10 [5] [i_2] [5] = 1;
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
        {
            arr_14 [i_0] [i_3] [i_0] = var_6;

            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                arr_17 [i_0] = var_2;

                /* vectorizable */
                for (int i_5 = 3; i_5 < 19;i_5 += 1)
                {
                    arr_21 [i_0] [i_0] [i_3] [i_4] [i_5] [i_5] = -47;
                    arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 1;

                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        arr_25 [i_0] [i_0] &= var_10;
                        var_17 = 511;
                        var_18 = -54;
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_19 += 112;
                        var_20 += 15796073638317775281;
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        arr_31 [13] [13] [i_4] [i_4] [i_4] [i_4] [2] = 65535;
                        var_21 = 54;
                        arr_32 [14] = 1;
                        arr_33 [i_0] [i_0] = var_12;
                    }
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        var_22 -= 2650670435391776334;
                        var_23 = 0;
                        arr_38 [i_0] [i_3] [i_4] [i_5] = 182128657;
                    }
                    arr_39 [i_0] [i_3] = var_0;
                    var_24 = 65024;
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_25 = (max(var_25, 121280257));
                    var_26 += 0;
                }
                for (int i_11 = 1; i_11 < 20;i_11 += 1) /* same iter space */
                {
                    var_27 = 11388140790320233992;
                    var_28 = 17808129818857078895;
                    var_29 = (max((min(65014, var_12)), -77));
                }
                for (int i_12 = 1; i_12 < 20;i_12 += 1) /* same iter space */
                {
                    arr_48 [i_3] = (max(511, (max(53, 65027))));
                    arr_49 [i_0] [i_3] [i_3] = 0;

                    for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
                    {
                        var_30 = var_4;
                        var_31 = 17279;
                        arr_52 [1] [i_4] = (max(1423848121, 1));
                        arr_53 [i_13] [i_12] [14] [i_3] [i_0] [i_0] = (max(64994, 1614));
                    }
                    for (int i_14 = 0; i_14 < 22;i_14 += 1) /* same iter space */
                    {
                        arr_56 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 1726393902;
                        arr_57 [14] [14] [i_4] [i_12] [i_12] = (min(-689765816, (max(4294967295, (max(2110804806, 483676973))))));
                    }

                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        arr_60 [1] [i_3] [14] [i_12] [20] = (min(65027, var_10));
                        arr_61 [i_15] [i_3] [i_0] [i_3] [i_0] = (min((min(65025, (min(65013, 4262794890)))), -22207));
                    }
                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        var_32 = (max(var_32, 32512));
                        var_33 |= 1;
                        var_34 = (min(var_6, (min(65027, (max(-1726393902, 0))))));
                    }
                }
            }
            arr_65 [i_3] [i_3] [i_0] = 12478787008174965353;
        }
        arr_66 [14] [i_0] = (max((max(33554431, 32512)), -1726393903));
        var_35 -= 268435456;
    }
    for (int i_17 = 0; i_17 < 11;i_17 += 1) /* same iter space */
    {
        var_36 = 5967957065534586234;

        for (int i_18 = 0; i_18 < 11;i_18 += 1)
        {
            arr_72 [i_17] = -10;
            var_37 = 0;
            var_38 = 4213776621;
        }
        for (int i_19 = 0; i_19 < 11;i_19 += 1) /* same iter space */
        {
            var_39 = var_14;
            var_40 += 1726393906;
            var_41 ^= (min(65025, 2625891654));
        }
        /* vectorizable */
        for (int i_20 = 0; i_20 < 11;i_20 += 1) /* same iter space */
        {

            for (int i_21 = 1; i_21 < 10;i_21 += 1)
            {
                var_42 = 0;

                for (int i_22 = 0; i_22 < 11;i_22 += 1)
                {
                    arr_83 [i_17] [i_22] = var_5;
                    arr_84 [i_17] [i_22] [i_21] [i_22] = 70;
                }
                for (int i_23 = 1; i_23 < 10;i_23 += 1)
                {
                    var_43 = 509;
                    arr_87 [i_17] [i_17] [i_21 - 1] [i_17] [i_21] = var_12;
                }
            }
            var_44 = 18014398509481983;
        }
        for (int i_24 = 0; i_24 < 11;i_24 += 1) /* same iter space */
        {
            arr_90 [i_24] = (min((min(var_13, 638614254852472724)), 0));
            var_45 &= -3097330983552426951;
            /* LoopNest 2 */
            for (int i_25 = 0; i_25 < 11;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 11;i_26 += 1)
                {
                    {
                        var_46 = 2093056;
                        arr_97 [i_24] [i_24] = (max(((max(var_4, 2564397264624234296))), (max(1127599933, 5967957065534586273))));
                        var_47 = (max(var_47, -17));
                        arr_98 [i_24] = (-9223372036854775807 - 1);
                    }
                }
            }
        }
        var_48 = (min(0, -1691213627));
        var_49 = (min(1, 37));
        arr_99 [i_17] &= (max(18446744073709551615, (max(14793, var_10))));
    }
    for (int i_27 = 0; i_27 < 11;i_27 += 1) /* same iter space */
    {
        var_50 = (min(var_50, var_0));
        var_51 = max(((min(8, 1))), -1624339216);
    }
    var_52 &= var_13;
    #pragma endscop
}
