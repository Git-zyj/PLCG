/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~(max(((var_5 ? 106 : var_0)), var_1)));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_2 [10] = min(-118, 49);
        arr_3 [i_0] = (arr_0 [i_0 + 1]);
        var_13 = ((((((127 ? var_6 : 67)))) ? ((106 ? 223 : 1920435552)) : ((((~(arr_1 [i_0] [i_0])))))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_1] = 232;
            var_14 = ((arr_1 [i_0] [i_0]) / (arr_1 [i_0] [i_0]));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_15 |= ((106 ? var_4 : -var_10));

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                arr_12 [i_0] = (var_4 != var_9);
                arr_13 [i_0] = (((82 >> (48 - 31))));
            }
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                var_16 = (((((arr_8 [i_0] [5]) << (((arr_16 [i_0] [i_0] [1]) - 7))))) ? var_11 : -16);
                arr_17 [i_0 + 1] [i_0 + 1] [i_4] = (((0 + var_11) ? ((var_3 ? (arr_9 [13] [i_0]) : var_1)) : (((arr_10 [7] [7]) ? -657762312 : var_0))));
            }
            for (int i_5 = 3; i_5 < 13;i_5 += 1)
            {
                var_17 = var_5;
                arr_22 [i_0] [i_2] [i_2] [i_5 - 2] = -106;
                var_18 = var_11;
                var_19 -= (arr_18 [i_0 - 1] [i_2] [i_5] [i_0 - 1]);

                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    arr_25 [i_0] [i_0] [i_2] [i_5] [i_2] = (((var_3 + 2147483647) << 0));
                    var_20 = (-11 | 109);

                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        arr_28 [i_0] [i_0] [i_0 - 2] [i_0] [1] [i_0] [7] = (((59 / (arr_0 [i_0]))));
                        arr_29 [i_0] [i_0] [i_0] [i_2] [i_0] [3] [i_7] = (arr_16 [i_0] [i_0] [i_5 - 1]);
                        arr_30 [i_0] [4] [i_5] [i_6] [i_0] [i_7] [5] = (((((arr_11 [i_6 - 1] [i_6 - 1] [i_5] [i_0]) + 2147483647)) << (((var_1 + 82) - 9))));
                        arr_31 [i_0] [i_0] [i_5] = ((var_8 ? (arr_21 [i_0 + 1] [i_5 - 1] [i_6 + 1] [i_7 + 2]) : (arr_21 [i_0 + 3] [i_5 - 2] [i_6 + 1] [i_7 - 1])));
                        var_21 = ((var_4 ? (((arr_15 [i_7 + 1]) ? (arr_5 [i_2]) : var_11)) : (0 && 2)));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            arr_34 [4] = ((var_5 ? var_0 : (arr_10 [i_0 + 2] [i_8 - 1])));
            var_22 = (max(var_22, (((var_1 & (18 && var_5))))));
            var_23 = -122;
            var_24 = (max(var_24, 6));
        }
        /* vectorizable */
        for (int i_9 = 2; i_9 < 13;i_9 += 1)
        {
            var_25 = var_0;
            arr_38 [i_9] = (((var_6 ^ 190) || (arr_20 [i_9 - 2] [i_0 + 2] [i_0 + 1])));
            var_26 = arr_26 [i_0];
        }
        var_27 = (((((arr_16 [i_0 - 2] [i_0 + 3] [i_0 + 1]) ? (arr_16 [i_0 + 3] [i_0 - 2] [i_0 - 1]) : var_9)) >= (((arr_16 [i_0 + 3] [i_0 + 1] [i_0 - 1]) ^ (arr_16 [i_0 - 1] [i_0 + 1] [i_0 + 3])))));
    }
    var_28 = -784553414;

    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {

        /* vectorizable */
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            arr_44 [17] [i_10] [i_10] = ((21 ? (arr_40 [i_10]) : (arr_40 [i_10])));
            var_29 += (arr_39 [i_11]);
            var_30 = (218 != -108);
        }
        var_31 ^= ((((max(var_4, 16)))) ? (max(((93 ? (arr_41 [i_10] [i_10]) : 69)), ((~(arr_39 [20]))))) : (min((arr_40 [10]), ((-106 ? var_4 : (arr_40 [12]))))));
        var_32 = (((arr_41 [i_10] [i_10]) < (arr_40 [i_10])));
    }
    for (int i_12 = 0; i_12 < 12;i_12 += 1)
    {
        var_33 -= -106;
        var_34 = ((~(~246)));
        var_35 = (((((((((arr_19 [i_12]) / var_10))) ? (arr_16 [i_12] [i_12] [i_12]) : -var_3))) ? (arr_23 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]) : var_9));
        arr_47 [i_12] = max((((arr_33 [i_12] [i_12] [i_12]) + var_2)), (((arr_45 [i_12] [i_12]) ? -108 : (arr_45 [i_12] [i_12]))));
    }
    #pragma endscop
}
