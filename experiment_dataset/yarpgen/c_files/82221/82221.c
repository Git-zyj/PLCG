/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0 + 2] = ((-(var_5 < var_13)));
        var_20 &= arr_3 [i_0];
        var_21 |= (((-(1941594115 <= 1776386025))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_22 ^= ((-1652965773 - ((-(arr_13 [i_3] [13] [11] [i_3] [i_3])))));
                            arr_16 [i_1] [i_1] [i_3] [i_1] = arr_15 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_5];
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_23 ^= arr_7 [i_3] [i_4 - 2];
                            arr_19 [i_6] [i_4 + 1] [i_1] [i_1] [i_1] = (-(arr_12 [i_1] [i_2] [i_4 - 2] [i_2] [i_3] [i_2 + 1]));
                            var_24 = (max(var_24, 4294967270));
                            var_25 = (((arr_1 [i_1 - 2]) ? var_7 : var_1));
                        }
                        arr_20 [i_1] [i_2 - 2] [i_3] [i_4 - 1] = 4294967292;
                        var_26 ^= (((arr_7 [i_1 + 1] [i_2 - 1]) ? (arr_7 [i_1 + 1] [i_2 + 1]) : (arr_7 [i_1 + 1] [i_2 - 1])));
                        var_27 *= 524287;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                {
                    var_28 &= ((~(arr_9 [i_1 + 1])));
                    var_29 = (-2147483647 - 1);
                    arr_26 [i_1] [i_1] |= 63;
                    var_30 = (max(var_30, ((((((arr_15 [i_1 - 1] [i_7] [i_8] [i_1 - 1] [i_7]) ? 3878529940 : 765290662))) ? (arr_11 [i_1] [i_1] [i_1] [i_1 - 1]) : var_16))));
                    var_31 = -1416335927;
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        arr_30 [i_9] = ((-(0 <= 1536152078)));

        for (int i_10 = 1; i_10 < 12;i_10 += 1)
        {
            var_32 = (-((-(min(2353373181, 1192930525)))));
            var_33 |= var_7;
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 11;i_12 += 1)
                {
                    {
                        arr_41 [11] [9] [i_11] [i_12] = (-2147483647 - 1);
                        var_34 ^= ((((((arr_17 [i_10] [i_10] [i_10] [i_10] [i_10 + 1] [i_10 + 1] [i_12 + 2]) || (var_6 & 2147483640)))) >> (((!(arr_12 [i_9] [i_9] [i_9] [i_12] [i_10] [i_10 + 1]))))));
                        arr_42 [6] [i_10] [i_10] [9] = (-(((arr_14 [i_10 + 1] [i_12 - 1] [i_12 + 1]) ^ (arr_29 [i_10 + 1]))));
                    }
                }
            }
        }
        arr_43 [i_9] = (-2071521399 ? ((((var_9 >= (min(1484108464, 2048)))))) : (min(var_11, var_9)));
        var_35 *= (-162986504 ? ((-(((arr_29 [i_9]) + var_2)))) : (!16777215));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 13;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 13;i_14 += 1)
            {
                {
                    var_36 = var_18;
                    arr_49 [i_14] [i_14] [i_14] [i_9] = ((10883693 && (((-(arr_23 [i_9] [i_9] [i_9]))))));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 13;i_16 += 1)
                        {
                            {
                                var_37 = (min((max(2981912968, (max(var_2, (arr_29 [i_9]))))), (min(467350495, var_14))));
                                arr_55 [i_14] [9] [i_15] [i_16] = ((639010403 ? (((((1073741823 >> (-1313453342 + 1313453349))) + 1313453342))) : (((((var_14 / (arr_39 [i_9] [i_15] [i_9] [i_15] [i_9] [i_16])))) ? (2147483623 * var_4) : (3263179225 * var_1)))));
                            }
                        }
                    }
                    var_38 *= (arr_38 [i_9]);
                }
            }
        }
    }
    var_39 = var_17;
    var_40 = 134217727;
    var_41 |= (!var_15);
    #pragma endscop
}
