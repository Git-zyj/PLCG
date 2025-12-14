/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_7);

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_19 = (min(var_19, (((var_5 <= (var_12 == var_1))))));

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_20 ^= (arr_4 [2] [i_1 - 1]);

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                var_21 ^= (var_9 << var_11);

                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_22 = ((((var_13 && (arr_7 [i_1 - 1] [i_1 + 1] [4] [i_1 + 1])))));
                    var_23 = (max(var_23, var_13));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_24 += (var_17 / var_3);
                        var_25 = -659510486;
                    }
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_26 = (min(var_2, (((((var_7 ? var_10 : var_17)) < ((((arr_3 [i_0] [5]) ? var_9 : (arr_5 [i_0] [i_1] [i_2])))))))));
                    var_27 *= (min(var_11, (arr_5 [i_1 + 1] [4] [10])));
                }
                arr_18 [i_0] [i_0] [i_2] = (arr_12 [i_0] [i_0] [i_0] [i_1] [i_2] [i_1] [i_0]);
            }
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                var_28 += (+-21);

                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    var_29 = ((!((((((var_3 ? var_0 : var_15))) ? (((214 < (arr_0 [i_0])))) : (var_16 >= var_1))))));
                    var_30 = 659510488;
                    var_31 = ((((((!(((120 ? var_10 : var_17))))))) * (((arr_3 [i_1 - 1] [i_1 - 1]) ? (0 * 9223372036854775807) : -234))));
                }
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {

                    for (int i_9 = 1; i_9 < 11;i_9 += 1)
                    {
                        var_32 = ((!((max((arr_29 [6] [i_1 - 1] [i_6 - 1] [7] [i_9 + 1]), (arr_13 [i_1 - 1] [i_6 + 1] [i_6] [7] [i_0] [i_9 - 1] [8]))))));
                        var_33 *= (!var_1);
                    }
                    arr_30 [i_0] [i_0] [i_1 - 1] [i_6 - 1] [i_0] = ((-(min(var_10, var_2))));
                    var_34 = (min(var_7, ((((!-1879986752) <= ((max(var_4, var_6))))))));
                    arr_31 [0] [i_1] |= ((((min(91, 11963190399081444788) ^ -var_8))));
                }
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    arr_35 [i_0] = ((var_9 < (min((max((arr_34 [i_0] [i_0] [4] [i_0] [i_6 - 1] [i_10]), var_15)), 144))));
                    arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] = ((-(((max(var_7, (arr_11 [i_0] [i_6 - 1] [i_0])))))));
                }
            }
            for (int i_11 = 2; i_11 < 10;i_11 += 1)
            {
                var_35 ^= ((-234 < ((-1948627265 ? var_15 : (((21 ? 659510507 : 234)))))));

                for (int i_12 = 2; i_12 < 10;i_12 += 1)
                {
                    var_36 += (((((((var_9 - var_15) < (arr_15 [i_12 - 1] [i_12 + 2] [i_11 - 1] [6] [i_1 + 1]))))) < ((-8110196581883589562 ? var_3 : (!var_9)))));
                    var_37 = (max(var_37, (((+((((((((arr_27 [i_12]) > var_8)))) > (arr_5 [i_11 + 1] [i_11 - 1] [i_11 - 2])))))))));
                }
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    arr_46 [i_0] [i_13] = var_15;
                    var_38 = (max(var_38, (var_7 < -659510467)));
                    arr_47 [10] [i_1] [i_13] [i_13] [i_11] [i_1 - 1] &= ((var_5 ^ (arr_23 [i_0] [2])));
                    arr_48 [i_0] [0] [i_0] [i_0] [i_0] [i_0] = max((!var_15), var_3);
                }
                arr_49 [i_0] [i_1 - 1] [i_11 - 2] [i_1 - 1] = (arr_21 [i_11 - 1] [i_11] [7] [i_1] [i_0]);
            }
            var_39 = (min(var_39, (((((var_13 | (((~(arr_32 [i_0] [i_0] [i_0] [2] [2])))))) ^ (0 | 659510487))))));
        }
        var_40 = (max(((min(-var_12, (11 > var_7)))), (((120 & 59440) ? -8110196581883589582 : var_15))));
    }
    for (int i_14 = 0; i_14 < 12;i_14 += 1) /* same iter space */
    {
        var_41 = (((min((var_14 == var_9), -var_3)) % var_3));
        arr_54 [i_14] = ((((~(arr_16 [i_14] [i_14] [i_14] [i_14]))) & ((~(arr_16 [3] [i_14] [i_14] [i_14])))));
        var_42 = (((((!var_5) ? -var_4 : (((!(arr_0 [i_14])))))) >= ((-var_16 ? (((arr_45 [i_14]) % (arr_45 [i_14]))) : -var_12))));
    }
    for (int i_15 = 0; i_15 < 24;i_15 += 1)
    {
        var_43 -= (!var_6);
        var_44 = (min(((((var_3 % var_15) > ((max(var_12, var_2)))))), (max(((3091212098514655146 ? var_14 : var_9)), ((21 ? var_8 : (arr_55 [i_15])))))));
        var_45 = (max(var_45, (((var_4 >= (min((max(var_7, var_12)), var_12)))))));
        var_46 -= var_12;
    }
    #pragma endscop
}
