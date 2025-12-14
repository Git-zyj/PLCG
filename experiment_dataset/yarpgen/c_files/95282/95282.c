/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_0 + 70374881783371980);

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_1] [i_1] = 57459;
            arr_7 [i_1] = -5293351803495087370;
            var_21 = (var_17 ? (arr_3 [i_0]) : (((arr_0 [i_0 + 3] [i_1 + 1]) + -109)));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_22 ^= ((!(arr_4 [i_0 - 2] [i_0 - 2] [i_0 - 2])));
            arr_10 [i_0] [i_0 + 4] [i_2] = (((arr_5 [i_0]) ? (!5293351803495087370) : -220076582));
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_23 -= ((((arr_18 [i_0 + 3] [i_0 + 4] [i_6] [i_0 - 1] [i_0]) / (arr_14 [i_0 + 4] [i_3] [i_5] [i_6]))));
                            var_24 = 5293351803495087357;
                            arr_22 [i_6] [i_4] [i_4] [i_6] [i_6] = -51;
                        }
                    }
                }
            }
            arr_23 [i_3] = ((-6182005065735658674 ? ((63023 ? (arr_0 [i_0 + 3] [i_3]) : (arr_5 [i_0]))) : var_7));
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            arr_27 [i_0 + 3] = var_3;
            arr_28 [i_0] [i_0 + 2] [i_0] = ((-(arr_4 [2] [i_7] [2])));
            var_25 = (max(var_25, (arr_8 [i_0 + 4])));
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 11;i_10 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            var_26 = var_17;
                            var_27 -= 16127508882947749911;
                            var_28 = 80;
                        }
                        arr_38 [8] [i_8] [i_9 + 3] [0] [i_9 + 3] [i_10 - 1] = 57443;

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            var_29 = (~69);
                            var_30 = 249;
                            var_31 = (((arr_16 [i_0 + 4] [i_9 - 2]) <= (arr_16 [i_0 - 1] [i_9 + 3])));
                            var_32 = (arr_18 [i_10 - 1] [i_9 + 4] [i_12] [i_0 + 3] [i_0 + 3]);
                        }
                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            arr_44 [i_13] [0] [i_9 + 4] [i_9 + 4] [0] [i_9 + 4] = ((-5293351803495087388 ? -5293351803495087371 : 0));
                            arr_45 [i_0 + 2] [i_13] [i_13] = (arr_41 [i_0 + 2] [i_13] [i_8] [i_8] [i_9 - 2]);
                            var_33 = (max(var_33, -48));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            arr_50 [i_9] [2] [i_9 - 2] [i_10 + 1] [10] &= ((30 / (var_4 || 249)));
                            var_34 |= (var_19 || 1);
                            arr_51 [i_14] [13] [i_10 + 1] [i_14] = 16665;
                            var_35 *= (251 <= -80);
                        }
                    }
                }
            }
        }
        var_36 = (max(var_36, var_16));
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                {
                    var_37 ^= var_16;
                    arr_56 [i_0 + 1] [i_15] [i_15] [i_16] = 198;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_17 = 0; i_17 < 1;i_17 += 1)
    {
        for (int i_18 = 1; i_18 < 14;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                {
                    arr_65 [i_18] [i_19] = (arr_64 [i_18 + 1] [i_18 + 3] [i_19] [i_18 + 2]);

                    /* vectorizable */
                    for (int i_20 = 0; i_20 < 18;i_20 += 1)
                    {
                        var_38 += ((-16690 ? -7924045992867303024 : 5293351803495087365));
                        var_39 -= (((arr_66 [i_18 + 4] [i_18 + 3] [i_18 + 3]) ? (arr_66 [i_18 + 2] [i_18 + 2] [i_18 + 2]) : (arr_66 [i_18 + 1] [i_18 + 4] [i_18 + 3])));
                    }

                    for (int i_21 = 0; i_21 < 18;i_21 += 1)
                    {
                        var_40 -= (--2319235190761801705);
                        var_41 = (max((arr_64 [i_17] [13] [i_19] [i_19]), 0));
                        var_42 = (max(((((arr_63 [6] [i_18] [6]) >= (arr_63 [8] [i_17] [8])))), ((-5293351803495087363 ? 16127508882947749897 : 11648))));
                        var_43 = (max((arr_58 [8] [i_18]), 0));
                        var_44 = 84;
                    }
                }
            }
        }
    }
    var_45 = (max(var_45, var_15));
    var_46 += var_2;
    #pragma endscop
}
