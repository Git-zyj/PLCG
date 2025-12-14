/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = ((-(((!((((arr_1 [i_0]) | var_3))))))));
        arr_2 [i_0] = (((8 != 342560139386032145) / ((((min((arr_0 [i_0]), (arr_1 [i_0]))) != ((-(arr_1 [i_0]))))))));

        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            var_18 = (((arr_1 [i_0]) >> (((!((((arr_1 [7]) ? var_14 : var_11))))))));
            var_19 = (((((1 ? (~var_0) : -var_1))) ? ((~(23471 > var_10))) : (((!(arr_0 [i_0]))))));
            var_20 = ((+((((arr_3 [i_0] [i_0]) > (arr_1 [i_1 - 2]))))));

            for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
            {
                arr_9 [i_0] = (((((var_15 ? (arr_5 [i_0] [0]) : (((arr_0 [i_0]) | var_2))))) ? ((max((max((arr_5 [i_0] [11]), 32)), (arr_3 [i_0] [i_0])))) : (arr_0 [i_0])));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_21 = ((((~(arr_4 [i_0] [i_0]))) | (arr_5 [i_0] [i_0])));
                    var_22 = (var_6 ? (arr_11 [i_2] [i_1] [i_2 - 1] [i_1 - 3] [i_0]) : ((((arr_6 [i_1] [i_1] [i_2] [i_0]) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : var_0))));
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    var_23 = ((10 ? 27 : -27335));
                    arr_16 [i_4] [i_0] = ((-(arr_0 [i_0])));
                }
            }
            for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
            {
                arr_20 [i_0] [i_0] [i_0] [9] = ((!(((-(((!(arr_0 [i_0])))))))));
                var_24 = (((((((~(arr_7 [i_0] [i_1] [i_1] [i_5])))) + 2147483647)) << ((((((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? 3353955936 : (arr_14 [i_0])))) ? ((var_6 ? var_8 : (arr_1 [12]))) : ((-99 ? (arr_18 [i_0]) : var_6)))) - 28703))));
                var_25 = (~var_13);
                var_26 &= ((((3353955933 ? ((-(arr_6 [i_0] [i_1 - 3] [i_1 + 1] [12]))) : -91)) >> (((arr_1 [i_1]) + 89))));
            }
            /* vectorizable */
            for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
            {
                var_27 += ((~(arr_14 [2])));
                arr_24 [i_0] [i_0] [i_0] [i_0] = (arr_14 [i_0]);
                var_28 = (min(var_28, ((((var_13 ^ var_12) ? (arr_5 [2] [2]) : (~var_3))))));

                for (int i_7 = 1; i_7 < 12;i_7 += 1) /* same iter space */
                {
                    arr_28 [i_0] [i_0] [i_0] [i_0] = (((-5056795343635684738 | 1) | (arr_23 [i_0])));
                    var_29 = (((arr_26 [i_0] [i_1] [5] [i_7 - 1] [i_1]) ^ ((~(arr_6 [i_0] [i_0] [12] [i_0])))));
                    var_30 += arr_1 [i_0];
                    var_31 += ((!((!(arr_27 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                }
                for (int i_8 = 1; i_8 < 12;i_8 += 1) /* same iter space */
                {
                    var_32 ^= (!(arr_8 [i_1 - 1] [i_6 - 1] [i_8 + 1] [i_8 - 1]));
                    var_33 = ((((((arr_22 [i_6 - 1] [i_0]) ? 214 : (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0])))) * ((var_11 ? var_9 : var_1))));
                }
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    var_34 = ((941011359 ? -27341 : ((var_5 >> (var_8 - 28697)))));
                    var_35 += ((((((arr_31 [12]) ? (arr_32 [2] [2] [i_1 + 2]) : (arr_34 [i_6 - 1] [i_6] [i_6] [i_6 - 1] [i_6] [6])))) == var_2));
                }
            }
            for (int i_10 = 1; i_10 < 12;i_10 += 1)
            {
                var_36 = (min(((min(7208196561165926341, 153))), var_10));
                var_37 = var_13;
                var_38 &= ((((min(0, -23))) ? ((min(((var_6 ? (arr_7 [i_10 + 1] [8] [i_10 - 1] [i_10 + 1]) : (arr_37 [i_10] [6] [6] [i_0]))), (~126)))) : (max(-892051094180389617, (((~(arr_15 [i_0] [i_0]))))))));
            }
        }
    }
    var_39 = var_0;
    #pragma endscop
}
