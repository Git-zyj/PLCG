/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = (arr_2 [i_0]);
        var_15 = ((((-(arr_1 [i_0]))) + var_8));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        {
                            var_16 = ((~(arr_3 [i_0])));
                            arr_15 [i_0] [i_1] [13] [i_0] = ((((((arr_7 [5] [5] [i_1] [5]) + 2147483647)) << (459028317 - 459028317))));
                        }
                    }
                }
            }
            var_17 ^= ((4033057915 <= ((((var_7 > (arr_10 [i_0] [1] [i_1] [i_0] [i_1] [12])))))));
            arr_16 [i_0] &= (var_4 % 241);
            arr_17 [i_1] [i_1] = var_13;
        }
        arr_18 [13] [i_0] = (((14 <= 261909380) ? ((var_8 ? (arr_3 [i_0]) : var_8)) : (arr_9 [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 18;i_5 += 1)
    {
        arr_21 [14] &= (-6416399138193184141 + 9161634448486077692);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 17;i_7 += 1)
            {
                {
                    var_18 = (arr_20 [i_7 - 1]);
                    arr_29 [i_7 + 1] [i_5] [i_5] [1] = var_7;
                    var_19 += (var_5 > var_10);
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        arr_34 [i_8] [i_8] = (((arr_22 [i_8] [i_8]) ? ((((var_3 && (arr_23 [i_8]))))) : 261909380));
        var_20 = (221 != ((((((~(arr_22 [i_8] [i_8])))) && ((((arr_30 [i_8]) ^ (arr_25 [i_8] [20] [i_8] [i_8]))))))));
        arr_35 [12] [i_8] &= ((((((((arr_26 [i_8]) | (arr_32 [i_8]))) >> ((var_11 / (arr_31 [8])))))) ? (((!(arr_19 [i_8] [20])))) : var_12));
        var_21 = ((((((!((((arr_26 [i_8]) ? var_11 : var_4))))))) / (((261909380 / var_6) ? (4033057916 != -123) : ((var_7 & (arr_24 [i_8] [i_8] [i_8])))))));
    }
    for (int i_9 = 2; i_9 < 11;i_9 += 1)
    {
        arr_40 [i_9] [4] = var_13;
        arr_41 [i_9] = ((((min((arr_11 [2]), (26122 + var_4)))) || (arr_36 [5])));
    }
    var_22 = (min(var_22, ((max((((var_7 - var_2) + (4033057918 + var_1))), (((((var_7 ? var_6 : var_3)) | ((min(var_0, 14)))))))))));
    var_23 = var_6;

    /* vectorizable */
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        arr_45 [i_10] [12] = ((~(arr_19 [i_10] [10])));
        arr_46 [i_10] &= ((((var_13 ? (arr_27 [i_10] [i_10] [i_10] [20]) : (arr_25 [i_10] [i_10] [i_10] [i_10]))) - (((var_8 - (arr_22 [6] [6]))))));
    }
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        var_24 = var_8;
        var_25 ^= arr_31 [i_11];
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 11;i_12 += 1)
    {
        arr_51 [i_12] = ((((var_13 ? var_11 : 6416399138193184115)) != var_3));
        var_26 = (min(var_26, ((((arr_36 [i_12]) ? 261909377 : (arr_38 [i_12]))))));
        arr_52 [i_12] &= 255;
    }
    #pragma endscop
}
