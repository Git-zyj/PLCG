/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= ((max((max(-1315174664, 5654), 1577777442856407948))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_4] [i_3] [i_1] [i_1] [i_1] [1] [9] = (min(((((arr_8 [i_2] [i_3] [i_2] [1] [i_0]) <= 1))), (arr_7 [i_0] [i_2 + 1] [i_3] [i_1])));
                            var_18 ^= (min((min((arr_4 [i_0] [3] [i_4]), (arr_5 [i_2 + 1] [i_4] [i_2 + 1] [2]))), (max(1577777442856407944, (arr_1 [i_2 - 1])))));
                            arr_15 [3] [1] [i_2] [i_1] [14] [i_3] [11] = 1577777442856407944;
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_5] [14] = (arr_16 [i_0] [i_0] [i_0] [i_1] [i_2 + 1] [i_3] [i_5]);
                            var_19 = (min((arr_11 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 1]), (arr_11 [i_2 - 1] [i_2 + 1] [1] [i_2 - 1] [i_2 + 1])));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_20 = ((-1577777442856407945 + 9223372036854775807) >> (((((min((arr_21 [i_0] [i_1] [i_1] [i_3]), (arr_4 [i_0] [i_0] [1])))) || (arr_21 [i_2] [8] [i_2] [8])))));
                            var_21 *= ((var_7 ? -1577777442856407945 : ((((((max((arr_2 [i_3] [i_1] [i_0]), var_9))) || var_16))))));
                            arr_24 [i_1] [i_1] [8] = (((arr_4 [i_3] [i_1] [i_1]) ? (arr_4 [i_1] [i_1] [i_3]) : 1));
                            arr_25 [4] [i_1] [i_2] [i_2] [i_1] [i_1] [i_0] = 26;
                        }
                        arr_26 [i_1] [i_0] [i_0] [i_1] [4] = (((((-(((arr_11 [i_0] [i_1] [i_2] [1] [i_0]) - (arr_11 [i_2] [8] [i_2] [i_2] [1])))))) ? (arr_6 [i_2]) : ((((!(arr_2 [i_1] [i_2] [i_2]))) ? ((-8919505336723846659 ? var_11 : 22547)) : (85 || 1577777442856407962)))));
                        var_22 = -1577777442856407927;
                        arr_27 [i_0] [i_1] [i_0] [i_0] = ((!(arr_6 [i_0])));
                    }
                }
            }
        }
        var_23 ^= (((!((min(244, (arr_11 [i_0] [1] [i_0] [1] [i_0])))))));
        var_24 = 63;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_25 = (((arr_10 [1] [i_7] [i_7] [i_7] [i_7]) ? (arr_10 [2] [2] [2] [i_7] [2]) : (arr_13 [i_7] [i_7] [i_7] [i_7] [i_7])));
        var_26 -= ((1577777442856407938 <= (arr_17 [i_7] [i_7] [i_7] [i_7] [i_7])));
        var_27 = (arr_29 [i_7] [i_7]);
        var_28 = (((arr_23 [i_7] [i_7] [i_7] [i_7]) ? (arr_22 [i_7] [i_7] [i_7] [6] [i_7]) : var_1));
        var_29 ^= (((arr_3 [i_7] [2]) | (arr_3 [i_7] [1])));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        arr_35 [i_8] = (((arr_1 [i_8]) > 48));
        var_30 = (((((((max(var_3, 1))) ? ((((var_15 > (arr_10 [i_8] [1] [i_8] [i_8] [i_8]))))) : (arr_13 [i_8] [i_8] [i_8] [i_8] [i_8])))) || (arr_18 [8] [i_8])));
    }
    var_31 = var_7;
    var_32 = ((118 ? (1 / var_7) : ((2 ? (249 + var_12) : ((var_5 ? var_3 : var_16))))));
    var_33 = (((!1577777442856407938) >> (((var_11 / var_14) + 6993215769122739))));
    #pragma endscop
}
