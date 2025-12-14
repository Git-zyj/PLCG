/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, 39));
    var_15 = (max(var_15, ((min(((~((max(22, -23))))), -22)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = -47;
        arr_2 [i_0] = ((-(((arr_1 [i_0]) ? (((-127 - 1) - var_9)) : (arr_0 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_5 [6] &= arr_3 [i_1];
        arr_6 [i_1] [i_1] = ((var_5 ? (arr_3 [16]) : (arr_3 [i_1])));
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        var_17 = (i_2 % 2 == zero) ? (((((-(arr_8 [i_2]))) << ((((((min((arr_10 [i_2]), -35))) ? (arr_9 [i_2]) : (77 != -1))) + 37))))) : (((((((-(arr_8 [i_2]))) + 2147483647)) << ((((((((min((arr_10 [i_2]), -35))) ? (arr_9 [i_2]) : (77 != -1))) + 37)) - 8)))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            arr_20 [18] [i_4 - 1] [i_5] [i_5] |= ((((max(((-56 ? (arr_15 [13] [0] [6]) : (arr_16 [i_2] [16] [i_4] [i_4] [16]))), ((var_8 ? var_2 : (arr_17 [i_2 + 1] [i_3] [i_3] [6] [i_4 - 1] [i_5])))))) ? ((~(~var_11))) : (((((~var_4) + 2147483647)) << (!51)))));
                            arr_21 [i_2] [i_3] = -3;
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_18 &= (121 | 48);
                            var_19 = (min(var_19, (((+((min((arr_12 [i_4 + 1]), (arr_12 [i_4 + 1])))))))));
                            var_20 = ((64 * (min((~-34), (((arr_16 [i_2] [i_2] [i_2 + 1] [i_2] [i_2]) ? var_13 : 53))))));
                            var_21 = ((((~(arr_7 [i_4 - 1] [i_4 - 1]))) ^ ((min((min(var_4, var_5)), -78)))));
                            arr_24 [12] [10] [12] [i_2] [12] [i_4] = ((var_5 ? var_11 : (min(-var_5, -8))));
                        }
                        var_22 += (min((min((-100 * -97), ((var_5 ? -57 : var_0)))), (((((arr_17 [i_2 + 1] [i_2] [i_3] [16] [i_4] [i_5]) != 114)) ? (arr_22 [20] [20] [20] [i_5] [0] [2]) : ((var_9 ? 31 : 64))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                {
                    var_23 = ((((var_4 < ((min(113, var_7))))) ? var_12 : -74));
                    arr_32 [i_2 + 1] [i_8] [i_2] [i_8] = (min(-50, (((((-31 ? (arr_19 [i_2] [i_9] [i_2] [10] [i_9] [i_2 + 3]) : -30))) ? var_10 : (!var_2)))));
                }
            }
        }
        var_24 = ((-112 + (((((arr_13 [i_2] [4] [i_2]) ? 51 : (arr_27 [i_2] [i_2] [i_2])))))));
    }
    for (int i_10 = 4; i_10 < 16;i_10 += 1)
    {
        var_25 = (min(var_25, (min((min((arr_34 [i_10 + 3]), (arr_34 [i_10 + 4]))), (((!(arr_34 [i_10 + 4]))))))));
        var_26 &= max(var_8, var_5);
        var_27 = 31;
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 16;i_11 += 1)
    {
        for (int i_12 = 3; i_12 < 13;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                {
                    var_28 = (max(var_28, (((-((~((max(var_13, var_13))))))))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 13;i_15 += 1)
                        {
                            {
                                var_29 = ((!(((var_1 ? -89 : (arr_30 [14] [14] [i_13] [2]))))));
                                var_30 = arr_33 [i_13] [i_15];
                            }
                        }
                    }
                    var_31 -= arr_51 [i_11] [i_12 - 3] [i_11] [i_11] [i_13] [i_11] [i_11];
                    var_32 = (((min(var_12, ((var_11 ? -71 : var_10)))) / ((+((max((arr_17 [i_11] [8] [2] [i_11] [i_11] [8]), (arr_42 [i_13] [i_11] [i_11] [i_11]))))))));
                    var_33 = (min(var_33, var_12));
                }
            }
        }
    }
    var_34 = ((((min(((var_9 ? var_10 : var_3)), ((min(var_12, -45)))))) ? (((var_11 != -8) ^ ((min(45, var_6))))) : -27));
    #pragma endscop
}
