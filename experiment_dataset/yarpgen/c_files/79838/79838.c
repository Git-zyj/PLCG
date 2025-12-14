/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((8321 ? 0 : var_8))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 -= (arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] &= (arr_4 [i_0] [i_0]);
                    arr_9 [i_0] [i_1] [i_2] [i_0] = 8;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_15 ^= (arr_3 [i_0] [i_0] [i_0]);
                        var_16 ^= 0;

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            arr_17 [i_0] [i_4] = (((arr_11 [i_0] [i_0]) != (arr_14 [i_0] [i_1] [i_2] [i_2] [i_4])));
                            arr_18 [i_3] [i_3] [i_4] [i_3] [i_1] [i_4] [i_4] = (0 & -3397518432967971319);
                            arr_19 [i_0] [i_0] [i_2] [i_0] [i_3] [i_4] = (arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1]);
                            var_17 = (((((-155290615 ? 60160 : (arr_1 [i_0])))) ? -0 : -0));
                        }

                        for (int i_5 = 2; i_5 < 19;i_5 += 1)
                        {
                            var_18 = (arr_3 [i_3] [i_3] [i_3]);
                            var_19 = (arr_11 [i_1] [i_1]);
                        }
                    }
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_3 [i_0] [i_6 + 2] [i_2]);
                        var_20 = arr_24 [i_1] [i_1] [13] [i_2] [i_2] [i_0];
                        var_21 = (arr_6 [2] [2] [i_2] [i_6]);
                        var_22 = var_8;
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_23 = (((var_7 ? (arr_6 [i_7] [0] [i_1] [i_0]) : (arr_22 [i_2] [i_2] [i_2]))));
                        arr_29 [i_7] [i_2] [i_1] [i_0] = ((2147483645 ? 0 : (2072988515 >= 1)));
                        arr_30 [i_0] [i_0] [i_2] [i_7] [3] = (arr_13 [i_0] [i_0] [i_0]);
                        var_24 = (arr_28 [i_0] [i_0] [i_0] [i_7]);
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_25 = 1;
                        var_26 = 15872136040667061572;
                    }
                    arr_33 [i_0] [i_0] [i_0] [7] &= ((((((((~(arr_5 [i_0] [14] [i_1])))) ? var_1 : ((~(arr_1 [i_0])))))) ? ((~(~15))) : var_1));
                    arr_34 [i_2] [i_0] [i_0] = (arr_3 [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {

        for (int i_10 = 1; i_10 < 20;i_10 += 1)
        {
            var_27 -= (arr_23 [i_9] [i_9] [i_9] [i_10]);
            arr_40 [i_10 + 1] [i_10] [i_9] = ((-(((arr_32 [i_9]) ? ((var_5 + (arr_24 [i_10 - 1] [i_10 - 1] [i_10] [i_10 - 1] [18] [i_10 - 1]))) : (arr_36 [i_9])))));
        }
        for (int i_11 = 2; i_11 < 19;i_11 += 1)
        {
            var_28 = 65507;
            var_29 = (((arr_4 [i_9] [i_11]) ? var_4 : (arr_37 [i_9] [i_11 - 1])));
        }
        var_30 = (arr_27 [i_9] [i_9] [i_9] [i_9]);
    }
    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {
        var_31 = (arr_25 [i_12] [i_12] [i_12]);
        arr_46 [i_12] [i_12] = 524287;
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 20;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 18;i_15 += 1)
                {
                    {
                        arr_55 [i_12] [i_13] [i_14] [i_13] = (+-5997851702196022269);
                        var_32 = (max(var_32, (((((((((arr_32 [i_14]) ? (arr_39 [i_15]) : (arr_39 [i_15]))) << ((((-(arr_42 [i_12] [i_15]))) - 614432804))))) ? (((arr_24 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]) ? (arr_42 [i_13] [i_12]) : (((arr_22 [i_12] [i_12] [i_12]) % 9223372036854775807)))) : (arr_5 [i_12] [i_12] [i_12]))))));
                        arr_56 [i_12] [i_15 + 2] [i_15] = (arr_0 [i_12] [i_12]);
                    }
                }
            }
        }
    }
    var_33 = ((+((((1125897759358976 ^ -609772839) && 18446744073709551615)))));
    #pragma endscop
}
