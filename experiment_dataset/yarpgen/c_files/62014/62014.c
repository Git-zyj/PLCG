/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_14 = ((~(arr_2 [i_0] [i_0])));
        var_15 = (arr_2 [2] [i_0]);
        arr_3 [i_0] [11] = ((-7570318090866038420 + 9223372036854775807) << (((-7172 + 7181) - 7)));
        arr_4 [0] |= (((((((-7155 ? 2914610072 : 1380357226))) && 86)) ? 7172 : ((((((2914610070 ? var_11 : (arr_2 [i_0] [i_0])))) && (arr_1 [14]))))));
        var_16 = (arr_2 [3] [3]);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_17 = (arr_5 [i_1]);
        arr_9 [8] &= ((((((arr_1 [10]) ^ 0))) ? (arr_1 [8]) : (((arr_1 [2]) ? (arr_1 [4]) : (arr_1 [8])))));
        var_18 += 7178;
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
            {
                arr_18 [i_2] [i_4] [i_4 + 2] = (((arr_17 [6] [6] [6]) | (arr_0 [i_2] [i_2])));
                arr_19 [i_2] [i_3] [i_4] = (arr_17 [i_4 + 2] [i_4 + 1] [i_4 - 1]);
            }
            for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
            {
                arr_22 [4] [i_3] [i_2] = 18446744073709551615;
                arr_23 [i_2] [i_2] [i_3] [i_2] &= (~-7159);
            }

            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                var_19 = (arr_1 [i_3]);

                for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                {
                    arr_29 [3] [3] [i_6] = (arr_1 [i_3]);
                    arr_30 [i_6 - 1] [i_6 - 1] [i_6] [9] = ((((~(arr_2 [i_2] [1])))) ? (arr_25 [i_6] [i_2] [i_6] [i_2]) : (arr_2 [1] [i_7]));
                    arr_31 [i_7] [i_7] [i_7] [i_7] [i_7] = (((arr_13 [i_6 - 1]) ? (arr_13 [i_6 - 1]) : var_11));
                    var_20 -= (((!var_7) ? (arr_26 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6]) : (arr_16 [i_2] [i_2] [i_2] [i_3])));
                    arr_32 [i_2] [i_2] [i_3] [0] [i_2] [i_7] |= ((-(((arr_17 [i_2] [i_2] [i_2]) ? 2446593978 : (arr_6 [i_3])))));
                }
                for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                {
                    var_21 *= arr_25 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6];

                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        arr_37 [i_2] [i_2] [i_2] [i_2] [i_2] [13] = 264168621;
                        var_22 = (max(var_22, (arr_6 [i_3])));
                    }
                }
                var_23 = (min(var_23, (((((~(arr_12 [1]))) & (((-7156 + 2147483647) >> (((arr_14 [i_6 - 1]) + 7774055490754850350)))))))));
                var_24 *= (arr_10 [i_2] [i_6]);
            }
        }
        for (int i_10 = 1; i_10 < 12;i_10 += 1)
        {
            arr_40 [i_2] [i_2] = (min((((arr_10 [i_2] [i_10]) ? (((arr_17 [i_2] [i_10 + 3] [i_2]) & var_11)) : (((((arr_10 [i_2] [i_10]) < (arr_8 [12]))))))), (arr_15 [i_10 + 2])));
            arr_41 [13] [7] |= (((max((max(2147483647, (arr_38 [i_2]))), (arr_13 [i_10 + 1])))) ? -65535 : ((var_2 ? (arr_17 [i_10 - 1] [i_10] [i_2]) : (((arr_24 [i_10] [i_10] [9] [13]) << (((arr_39 [i_2]) - 9839819690271006690)))))));
        }
        var_25 = (min(var_25, (((((((((arr_21 [i_2] [i_2] [i_2] [i_2]) ? var_8 : (arr_7 [i_2]))) + (((min((arr_6 [0]), (arr_6 [10])))))))) ^ (((min(var_7, (arr_13 [i_2]))) / -1)))))));
    }
    var_26 = var_3;

    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        var_27 = (min(var_27, ((min(-6761882553321995322, 19)))));
        arr_44 [i_11] [i_11] = ((-(((arr_43 [i_11]) << (arr_43 [i_11])))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 23;i_13 += 1)
            {
                {
                    var_28 = (17 % 5869100653665634047);
                    var_29 = (max(var_29, ((((((max((arr_48 [i_11] [i_13]), var_4)) < (arr_45 [i_11] [i_13]))) ? (((((var_7 << (((arr_46 [i_11]) - 6583434010200110591))))) ? ((max((arr_47 [i_11] [i_11] [i_11]), (arr_47 [i_12] [i_12] [i_12])))) : (min(var_8, (arr_49 [i_13] [1] [1]))))) : 32)))));
                    var_30 = (min(var_30, (arr_47 [i_11] [i_12] [i_11])));
                    var_31 = ((((max(var_9, var_3))) < (arr_43 [i_11])));
                    var_32 *= (min(-7150, ((var_1 ? (arr_46 [i_12]) : (arr_46 [i_11])))));
                }
            }
        }
    }
    #pragma endscop
}
