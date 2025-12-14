/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    var_17 = (var_1 ^ var_2);

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (max(((((max(var_5, (arr_3 [i_0])))) ? ((510526109335866165 ? var_8 : var_6)) : (~var_4))), (max((arr_0 [i_0]), 112))));
        var_18 -= ((!(-1 | 1)));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_19 -= (!var_2);
        var_20 = ((((((((var_7 ? -107 : var_0))) ? 158 : (arr_0 [4])))) & (~8506102486619786692)));
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] = ((((!((max(14845984852235108707, (arr_9 [i_2])))))) ? (((arr_11 [i_2 + 2] [i_2 + 1]) ? (((arr_11 [i_2] [10]) * var_9)) : -4)) : ((((var_13 > (arr_1 [14])))))));
        var_21 = (((1 - (arr_8 [i_2 - 1] [i_2 + 2]))));

        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            var_22 -= (((arr_10 [i_2]) < (((((max(var_7, var_3))) | (max(var_5, 4294967293)))))));
            arr_17 [i_2] = ((!(13235 << 0)));

            for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
            {
                var_23 = (max(var_23, (((+(((arr_14 [i_3] [i_4 - 1]) ? var_10 : (var_8 | var_4))))))));
                var_24 &= ((((((arr_12 [i_2 + 1] [6]) ? (arr_12 [i_2 - 1] [i_3]) : 10))) ? (((-24 + 2147483647) >> (160 - 147))) : (arr_12 [i_2 + 1] [i_3 - 1])));
                arr_20 [12] [i_4] [i_4 + 3] = (((arr_1 [12]) > (((arr_12 [i_3 - 1] [i_3 - 1]) ? var_13 : (arr_12 [i_3 + 1] [i_2])))));
            }
            for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
            {
                var_25 = ((-5206190325722155926 ? 4673326161699482683 : -3));

                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    arr_27 [i_2] [i_2] [i_5] = (!3219462368);
                    var_26 = (max(1232154713, (arr_7 [i_2 + 1])));
                    arr_28 [1] [1] [i_2] [i_5] = ((((max((arr_19 [i_5 + 2] [i_3 - 1]), (arr_21 [i_2 - 1] [i_2 - 1])))) ? (((arr_21 [i_2 + 2] [i_6]) * (arr_21 [i_2 + 2] [i_3]))) : (((arr_19 [i_5 - 1] [i_3 + 1]) ? var_0 : (arr_21 [i_2 + 2] [i_3])))));
                    var_27 = (!-4);
                    arr_29 [i_2] [i_2] [i_5] [i_5] [4] [i_6] = (arr_11 [i_2] [i_2]);
                }
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    var_28 = (-32645 == 30);
                    arr_32 [i_7] [i_5] [i_5] [i_5] [i_2] = (~-11);
                    var_29 = (arr_19 [i_2 + 3] [i_2 + 3]);
                    var_30 = ((+(((arr_26 [8] [i_3 + 1] [i_3] [i_3]) ? (arr_26 [i_3] [i_3 - 1] [i_3 - 1] [i_3]) : (arr_26 [i_3] [i_3 - 1] [i_3 - 1] [i_3])))));
                }
            }
            var_31 -= (((arr_14 [i_3 + 1] [i_2 + 3]) | (((((arr_11 [i_2] [14]) ? var_6 : var_6))))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            var_32 = (var_14 <= -230882298);
            var_33 = ((arr_10 [i_2 - 1]) / 1);
        }
    }
    for (int i_9 = 1; i_9 < 14;i_9 += 1) /* same iter space */
    {
        var_34 &= ((((arr_8 [i_9 - 1] [i_9 + 2]) | (arr_8 [i_9 + 3] [i_9 + 1]))));
        var_35 = var_13;
        var_36 = (((~(arr_34 [i_9] [8] [i_9 - 1]))));
    }
    #pragma endscop
}
