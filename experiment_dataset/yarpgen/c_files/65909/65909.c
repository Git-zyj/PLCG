/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 ^= (max((((-(arr_0 [i_0])))), ((((((arr_0 [i_0]) || 1))) << 1092307737091159119))));
        arr_2 [i_0] = ((~((~((min((arr_0 [12]), 16)))))));
        arr_3 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_19 = (max(var_19, (max(((min(1221215127, (arr_0 [i_1])))), ((((arr_5 [i_1]) >> (arr_1 [i_1] [i_1]))))))));
        arr_6 [i_1] = 3073752168;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_11 [i_2] = ((-(((((((arr_9 [i_2]) ? 4294966784 : (arr_5 [i_2])))) && (var_7 || 1))))));
        var_20 *= min((((1 >> (((arr_10 [i_2]) + 751114162))))), (min((arr_7 [i_2]), ((max(700941123, (arr_5 [i_2])))))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_21 = (((((((((arr_19 [i_2] [i_2] [i_5] [6] [3] [i_6]) <= var_12)) && (((arr_13 [i_2] [i_2] [i_4]) < (arr_12 [i_2] [i_3 + 3]))))))) | (max((arr_19 [i_3 + 1] [i_3 + 1] [i_3 + 1] [8] [i_3 + 1] [i_6]), (max((arr_0 [1]), (arr_8 [i_3])))))));
                                var_22 = (min(var_22, ((min((((~((((arr_15 [6] [1] [6] [i_2]) != (arr_12 [i_5] [i_6]))))))), (min(2122345644, 4294966784)))))));
                            }
                        }
                    }
                    var_23 = (max((((-(arr_9 [i_3 + 3])))), (~1048575)));
                    var_24 = ((-(((arr_15 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_4]) ? (arr_20 [i_3 + 2] [11] [11] [i_3 - 1] [i_3 - 1]) : (arr_20 [i_3 + 2] [i_3 + 2] [i_4] [i_4] [i_2])))));
                    var_25 = (max(var_25, ((((~(arr_21 [i_2] [i_3] [i_2] [i_3 + 3] [i_2]))) - (min((arr_10 [i_4]), (arr_21 [i_2] [i_3] [i_4] [i_3 - 1] [i_2])))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 8;i_7 += 1)
    {
        var_26 = (39 == (arr_22 [i_7 + 1]));
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 9;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 9;i_10 += 1)
                {
                    {
                        var_27 = ((!(arr_17 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_10])));
                        var_28 = (((-(arr_21 [i_7] [i_7] [i_7] [i_7] [1]))));
                        var_29 = (arr_30 [1] [9] [7] [i_9] [1] [2]);
                    }
                }
            }
        }
        var_30 |= ((((((arr_30 [i_7] [2] [i_7 - 1] [i_7] [i_7 - 1] [1]) - var_4))) ? ((((1 <= (arr_27 [i_7] [1] [i_7]))))) : (((arr_25 [8] [i_7] [6]) ? var_9 : 4160749568))));
        arr_32 [i_7] = ((!(arr_31 [i_7 + 1] [2] [i_7 + 1] [i_7])));
        var_31 += ((-(~0)));
    }
    var_32 = (((max((max(var_10, 1221215128)), var_10)) - (max(((1 ? var_15 : var_16)), 239))));
    var_33 = var_9;
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            {
                                var_34 = (arr_36 [i_13]);
                                arr_45 [i_11] [i_11] [i_11] [14] [i_15] = ((arr_35 [i_11]) ^ (arr_35 [i_11]));
                                arr_46 [16] [i_12] [i_14] [i_15] &= (min((((((min((arr_42 [i_11] [i_11] [i_13] [i_15] [i_15]), 1822622978))) || (((~(arr_39 [3] [11] [11]))))))), (((arr_34 [i_13]) / var_13))));
                                arr_47 [i_14] = (min((((-(arr_44 [i_11] [i_11] [i_14] [i_14] [1] [i_15] [i_15])))), ((~(arr_36 [i_11])))));
                                var_35 ^= (max(((((1 ? (arr_34 [i_15]) : 3793060190)))), (+-80)));
                            }
                        }
                    }
                    var_36 = (min((((arr_40 [i_11]) ? (arr_40 [i_13]) : (arr_40 [i_11]))), ((max((var_0 < 1), (arr_33 [i_11] [i_13]))))));
                    arr_48 [i_13] [1] = ((-((~(4293918734 || 1)))));
                }
            }
        }
    }
    #pragma endscop
}
