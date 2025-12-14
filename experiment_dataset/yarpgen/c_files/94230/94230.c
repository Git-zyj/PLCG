/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 = (arr_2 [i_0]);
        arr_3 [i_0] [i_0] = 6;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_12 *= 128;
                        arr_12 [i_0] [i_1 - 1] [i_1] [5] = min(var_7, 11497);
                        arr_13 [i_1] [10] [i_1] [i_2] [i_1] [10] = ((-(arr_1 [i_1 + 1] [i_1 - 1])));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    {
                        var_13 = (((arr_8 [5] [5] [i_6 + 1]) && ((min((!1479624022), (max(255, var_2)))))));
                        arr_20 [12] [i_5] [i_5] [i_5] = (max((((((((arr_10 [i_4] [i_4]) && (arr_6 [i_0] [i_4] [i_5] [i_6 + 1])))) * (var_5 * var_4)))), -var_1));
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        arr_23 [i_7] [i_7] = (max((6863059825419598987 == var_1), ((-(arr_21 [i_7] [i_7])))));

        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            arr_27 [i_7] [i_8] = -var_4;
            var_14 = (min((arr_21 [i_8] [i_7]), (max(11583684248289952629, (arr_21 [i_7] [i_7])))));
        }
        for (int i_9 = 4; i_9 < 13;i_9 += 1)
        {
            var_15 = (min(var_15, ((((((arr_29 [i_9] [14]) ? ((255 ? var_5 : (arr_26 [i_9]))) : ((var_8 ? (arr_25 [i_7] [14] [i_9 - 1]) : 106))))) ? 168 : (var_7 & 0)))));
            arr_30 [i_7] [2] = ((((max(-18446744073709551600, (~37)))) ? -3 : (!135)));
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        arr_35 [i_10] &= (arr_33 [i_10]);
        var_16 = ((var_2 ? -115 : (arr_32 [i_10] [i_10])));
    }
    var_17 = (115 / 245);

    /* vectorizable */
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        var_18 ^= ((-(arr_36 [16] [i_11])));
        var_19 = ((((40 ^ (arr_37 [i_11]))) != (arr_37 [i_11])));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 22;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 19;i_15 += 1)
                        {
                            {
                                arr_49 [i_11] [i_12] [i_13] [16] [i_15] = (((arr_45 [12] [21] [i_12] [i_11]) ? (1 < -115) : var_9));
                                arr_50 [i_11] [i_15] [i_13] [i_14] [i_13] = ((!(((16256 ? (arr_39 [i_14]) : (arr_45 [i_15] [i_14] [i_13] [i_11]))))));
                                var_20 = ((((arr_43 [15] [1] [13] [10]) / -16645)));
                                arr_51 [i_11] [i_13 - 1] [i_15] [i_15 + 2] = ((((arr_40 [7] [i_12] [i_13 + 1]) ? 16775 : 28311)));
                            }
                        }
                    }
                    arr_52 [i_11] [i_12] [i_12] [i_13 - 1] = 511;
                    arr_53 [i_13] [i_12] [i_11] [i_11] = ((11583684248289952638 ? (arr_47 [i_13 + 1] [i_12] [i_13 + 1] [i_13 + 1] [i_12] [i_13]) : -27));
                    var_21 = (arr_47 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]);
                }
            }
        }
    }
    #pragma endscop
}
