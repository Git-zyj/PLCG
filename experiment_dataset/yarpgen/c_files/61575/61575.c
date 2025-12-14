/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (((((min(var_8, var_8)))) ? (((((493567196 ? 16833386618545882489 : 4294967292))) ? ((-52 ? 111 : 3801400099)) : var_3)) : var_6));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_13 = (max((arr_3 [i_0] [i_1]), var_0));
                    var_14 |= (((-(min(3801400099, 4636666348815008068)))));
                }
            }
        }
        arr_8 [6] &= 0;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        var_15 = ((((min((arr_3 [i_0] [i_0]), (arr_3 [6] [i_0])))) <= (((arr_9 [i_4] [i_3] [i_0]) ? (arr_9 [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_4])))));
                        var_16 = ((~(min((min(3801400099, (arr_6 [3] [i_5] [i_0] [3]))), (((32767 ? 0 : (arr_14 [0]))))))));
                        var_17 = ((((((arr_5 [i_4] [i_3] [i_4]) ? -6946268697011519389 : var_2))) && (arr_5 [12] [i_3] [i_4])));
                    }
                }
            }
        }
        arr_15 [i_0] = 6946268697011519388;
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                {
                    var_18 = (arr_10 [i_6] [i_7] [2]);
                    var_19 = (i_7 % 2 == zero) ? ((((min(var_0, var_8)) | ((max((0 & 9), (((arr_1 [8] [8]) << (((arr_6 [1] [i_7] [i_7] [i_6]) - 8816382179154405854)))))))))) : ((((min(var_0, var_8)) | ((max((0 & 9), (((arr_1 [8] [8]) << (((((arr_6 [1] [i_7] [i_7] [i_6]) + 8816382179154405854)) - 4708183033208854916))))))))));
                }
            }
        }
        var_20 = ((9 == (!0)));
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
    {
        var_21 = (max(var_21, ((min(((17 | ((max(var_10, var_8))))), 0)))));
        var_22 = (arr_23 [i_9] [i_9] [0] [i_9]);
        var_23 = (max(((min(((((arr_10 [i_9] [i_9] [i_9]) == 7742151695366408735))), 78))), ((58034 / (arr_0 [i_9])))));
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                {
                    arr_32 [i_9] [i_9] [6] = (arr_4 [0] [i_10 - 3]);
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 9;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            {
                                var_24 = (((min((arr_31 [i_10] [i_10 - 2]), var_4)) / ((((arr_11 [i_9] [i_9] [i_9] [i_13]) / 17)))));
                                var_25 = 108;
                            }
                        }
                    }

                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        arr_41 [i_14] [i_14] [10] [i_14] = -17;
                        var_26 = ((!((min(-2681709316659028482, 244)))));
                        var_27 = (((~1613357455163669127) ? -var_2 : (arr_38 [i_10] [i_10] [i_11] [i_9] [i_11] [i_10])));
                        var_28 ^= (((((((arr_28 [i_10 - 2] [i_10 - 2] [i_11]) != var_1)))) * ((7502 / (arr_28 [i_10 - 3] [i_10 - 3] [i_10])))));
                    }
                }
            }
        }
    }
    var_29 = ((((min(var_0, var_9))) == (((2037684240976458373 ? 81 : -var_11)))));
    #pragma endscop
}
