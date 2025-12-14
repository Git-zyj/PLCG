/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = ((((min(29276, (arr_1 [i_0])))) ? (arr_1 [i_0]) : (min(var_3, -29277))));
        var_18 = (((max(((var_12 ? (arr_0 [i_0] [i_0]) : var_3)), ((min(-29276, (arr_1 [i_0])))))) - ((min(-2602321185841952720, var_1)))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = min((((-(arr_0 [i_0] [i_1])))), ((var_4 + (max(var_16, -101)))));
            var_19 = (((((var_6 && (arr_2 [i_0])))) / ((max(29276, 39122)))));
            var_20 ^= (((var_6 > 29276) - -744713417));

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                arr_10 [i_0] [i_0] = ((1 >> (54097 - 54076)));
                var_21 |= ((!(((-1393735908 <= -29275) > 631952689))));
            }
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_22 = (~2308138135984477097);
                            arr_21 [i_0] [i_0] [i_3] [i_4] [i_3] = -3010;
                        }
                        var_23 = (((((1 ? 59 : var_6))) && 16368));
                        var_24 |= (arr_9 [i_1] [i_1]);
                    }
                }
            }
        }
        for (int i_6 = 3; i_6 < 19;i_6 += 1)
        {
            var_25 = (min(var_25, ((min((min((var_8 ^ -29257), (!var_7))), var_1)))));
            var_26 = ((((max(var_13, -29277))) == ((max(-29277, var_13)))));
            var_27 ^= (min(((((arr_19 [i_6] [i_6 - 3] [i_6 - 1] [i_6 + 2] [12] [i_6 - 2] [i_6 - 3]) ? var_10 : (arr_19 [i_6] [i_6 + 2] [i_6 + 1] [i_6 + 2] [i_6 - 3] [i_6 + 2] [i_6])))), (min(var_7, var_4))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 19;i_8 += 1)
                {
                    {
                        arr_30 [i_0] [i_0] [i_6] [i_6] [i_7] [i_8 + 2] = (arr_7 [i_0] [i_6] [i_8]);
                        var_28 = (max(var_28, (((((((!16380) ? (var_15 - 25269) : ((max(-17949, 40267)))))) ? (((max(-29280, var_13)))) : 2249134253)))));
                        var_29 = (min((max(var_11, (arr_3 [i_8] [i_8] [i_8 + 3]))), (arr_9 [i_0] [i_0])));
                    }
                }
            }
            arr_31 [i_0] [i_0] = (16380 & var_0);
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 18;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 20;i_12 += 1)
                        {
                            {
                                arr_45 [i_0] [i_9] [i_10] [i_12] [i_0] = ((~((108 ? 29260 : (min(-29286, 18446744073709551615))))));
                                var_30 = (min(var_30, (arr_24 [i_0] [i_0] [i_0])));
                                var_31 = ((((max((arr_15 [i_0] [i_9] [i_11] [i_9]), -38))) << ((((var_13 ? (-32767 - 1) : ((17377865820936417924 ? var_1 : var_6)))) + 32778))));
                                arr_46 [i_0] [i_0] [i_0] [i_0] [i_12] [i_0] = var_4;
                            }
                        }
                    }
                    arr_47 [i_0] [i_0] = ((!((max((min(var_10, var_7)), (var_10 >= var_4))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 21;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 1;i_14 += 1)
            {
                {
                    arr_53 [i_0] [i_0] [i_14] [i_14] = ((((max(-29280, 317769967))) + var_4));
                    arr_54 [i_14] [i_0] [i_0] [i_14] = min(((min(-29257, 16380))), (min(var_16, ((min((arr_14 [i_0] [i_0] [i_13] [10] [i_14]), 16380))))));
                    var_32 = (min((min(((min(var_7, -1393735907))), 841249648010356168)), -45));
                }
            }
        }
    }
    var_33 = ((((min(var_10, (min(var_10, var_10))))) / (~var_5)));
    var_34 = ((((((-(1393735908 | 43334))) + 2147483647)) >> (1 << 1)));
    #pragma endscop
}
