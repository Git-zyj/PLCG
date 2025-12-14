/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    var_14 = var_4;
    var_15 += (min((((var_5 && (~var_5)))), var_4));

    for (int i_0 = 2; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_16 += ((((((!var_7) && ((min((arr_0 [i_0]), var_5))))))) > (((((arr_0 [i_0 + 1]) ? var_2 : var_7)) % (max((arr_2 [i_0]), 9033925620364645193)))));
        var_17 = (((((arr_0 [i_0]) ? (arr_1 [0]) : (((arr_1 [5]) ? -32749 : 127)))) - (arr_2 [i_0 - 2])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        var_18 += ((-var_5 ? (((var_3 > (arr_8 [i_2] [i_3])))) : (-2147483647 - 1)));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_19 = (arr_1 [i_0 - 2]);
                            var_20 = (min(var_20, ((((var_2 + 9223372036854775807) << ((((arr_2 [i_3 - 1]) || (arr_2 [i_3 - 1])))))))));
                            var_21 = (((arr_3 [i_0 + 1] [i_4]) ? 32357 : ((var_10 ? (arr_1 [i_2]) : var_6))));
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_16 [i_1] = (arr_1 [6]);
                            arr_17 [i_5] [i_1] [0] [i_1] [0] = (((arr_11 [i_1] [i_3] [i_3 - 1] [i_3 - 2] [i_3 - 2]) ? (arr_4 [i_1] [i_1]) : (arr_2 [i_1])));
                            var_22 = (((((-4177005240674264844 ? (arr_8 [i_1] [i_1]) : (arr_7 [i_0] [i_1] [9] [i_3 - 1] [i_5])))) ? (arr_9 [i_1] [i_5] [i_2] [i_2] [i_3 + 1]) : (arr_13 [i_0 + 2] [i_0 + 2] [i_0] [i_1] [i_0] [i_0 + 1])));
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        arr_20 [9] [i_1] [9] [i_1] [i_0] = (((arr_3 [i_0 - 1] [i_0 - 1]) / (arr_3 [i_0 - 2] [i_0 + 2])));
                        var_23 ^= (~var_6);
                        arr_21 [i_0] [i_1] [i_2] [i_0] = ((((arr_3 [i_0] [i_0]) >> (var_3 - 169))) << (((((arr_19 [i_1] [8] [i_1] [i_1] [i_1] [i_1]) ? (arr_14 [i_0] [i_0]) : (arr_1 [i_0]))) - 1976983206594843825)));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        arr_26 [5] [i_1] [i_2] [2] [3] [i_7] = var_10;
                        var_24 = (min(var_24, (((max(((var_7 ? var_1 : (arr_14 [7] [i_7]))), (arr_2 [i_0 - 1])))))));
                    }

                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_25 = ((-127 - 1) ? -5828515840082544954 : 18014398509481983);
                            var_26 = (min(var_26, (((+(((!((((arr_18 [i_1] [i_1] [i_1] [9]) ? (arr_32 [i_9] [i_9] [i_1] [8] [i_1] [i_1]) : (arr_31 [i_9] [i_2] [i_2] [i_2] [i_2] [4] [3]))))))))))));
                        }
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            var_27 |= (arr_5 [i_0 - 1]);
                            var_28 = (min(var_28, (!2932)));
                            var_29 -= (arr_2 [3]);
                            var_30 = (min(var_30, ((((((-(arr_4 [2] [i_0 + 1])))) ? (arr_30 [i_0 + 2] [i_0 - 1] [2] [i_0 - 2]) : -var_7)))));
                            var_31 ^= (max(((var_2 ? (arr_15 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0] [2]) : (arr_19 [6] [i_0 - 2] [i_0 - 2] [i_0 - 2] [2] [i_0 - 2]))), (var_4 && var_4)));
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            arr_40 [i_11] [1] [i_2] [1] [i_0] |= ((-(max((arr_31 [i_0 - 2] [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0]), var_1))));
                            arr_41 [i_0] [i_0] [i_1] [4] [i_8] [i_8] [1] &= (((max((arr_38 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_8] [1]), (arr_15 [i_0] [i_0 + 2] [i_2] [i_0] [i_11] [6]))) > (((-(((arr_8 [i_2] [8]) | var_11)))))));
                        }
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            arr_46 [5] [i_1] [5] [2] [i_1] [i_0 - 2] = ((+(((arr_5 [i_0 - 1]) / (arr_3 [i_0 - 1] [i_0])))));
                            var_32 = (max(var_32, (arr_15 [i_12] [i_12] [i_12] [2] [i_12] [8])));
                        }
                        arr_47 [i_1] = var_2;
                    }
                }
            }
        }
    }
    for (int i_13 = 2; i_13 < 8;i_13 += 1) /* same iter space */
    {
        var_33 = max((min((arr_48 [i_13 + 1]), (arr_48 [i_13 + 1]))), (max((arr_48 [i_13 - 2]), (arr_48 [i_13 - 1]))));
        var_34 = ((((-(arr_27 [i_13 - 1] [i_13] [i_13] [i_13 + 2] [i_13 + 2] [2]))) / 123));
    }
    #pragma endscop
}
