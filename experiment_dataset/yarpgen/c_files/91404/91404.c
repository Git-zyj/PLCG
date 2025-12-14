/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 255;

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_12 = var_10;
                        arr_9 [i_0 - 3] [i_2] [i_2 - 1] [i_0 - 3] = (max(((min(((max(var_9, var_8))), (min(9223372036854775807, 174))))), (((arr_6 [i_2 + 4] [i_0 - 3] [i_1 - 1]) ? ((min(-9223372036854775792, (arr_7 [i_0 - 1] [i_0 + 4] [12] [i_0 + 3] [i_0 - 1] [i_0 + 3])))) : 18446744073709551611))));
                        arr_10 [i_2] [i_3] = (((((~(arr_6 [i_0] [i_1] [i_3])))) ? ((((arr_4 [i_1]) ? ((-(arr_0 [i_2 - 1]))) : ((var_1 ^ (arr_3 [i_0])))))) : (arr_1 [2] [2])));
                    }
                }
            }
        }
        var_13 = (((((~(arr_4 [i_0 - 1])))) ? (arr_1 [i_0] [i_0 - 3]) : (((0 >> ((((max((-127 - 1), (arr_7 [i_0 + 2] [11] [6] [11] [14] [i_0])))) - 65392)))))));
        arr_11 [i_0 + 2] = (max(var_10, (((!(((-(arr_1 [i_0 + 4] [12])))))))));
        arr_12 [7] = (((min(var_0, (arr_0 [i_0 + 4]))) + (91 <= 7023)));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        arr_17 [i_4] = ((((min((arr_8 [i_4]), ((~(arr_14 [i_4])))))) ? (~var_10) : (((min((arr_14 [2]), 174)) | var_0))));
        var_14 = min((max(((-6860919666582665285 ? -9223372036854775807 : var_2)), (((arr_6 [i_4] [i_4] [13]) ? (arr_13 [i_4] [i_4]) : 9223372036854775807)))), ((min((arr_13 [i_4] [i_4]), (arr_13 [i_4] [i_4])))));
        var_15 = var_5;

        for (int i_5 = 4; i_5 < 12;i_5 += 1)
        {
            var_16 = var_0;
            var_17 = ((var_0 && ((!((min((arr_15 [i_4] [i_4]), (arr_3 [i_5 - 3]))))))));
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_18 = (((~((62871 / (arr_15 [i_4] [5]))))));
            var_19 = ((var_5 ? ((((arr_4 [i_6]) && var_9))) : ((((!(arr_0 [1]))) ? ((min(var_10, (arr_18 [i_4])))) : (((-31885 + 2147483647) << (((arr_8 [6]) - 139))))))));

            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                arr_27 [i_4] = var_8;
                var_20 = (((arr_22 [i_4] [i_6] [i_7]) ? (arr_24 [i_4] [i_6]) : (((((arr_20 [10] [i_6]) + 2147483647)) >> (1623393279 - 1623393278)))));
                var_21 = (arr_21 [i_6] [i_7]);
            }
            var_22 = (max(var_22, (((~((~(((arr_26 [i_4]) ? 40222 : var_3)))))))));
            var_23 = (min(var_23, ((min(-18446744073709551594, (((!(23 <= -28280)))))))));
        }

        /* vectorizable */
        for (int i_8 = 2; i_8 < 11;i_8 += 1) /* same iter space */
        {
            var_24 = (arr_0 [i_4]);
            var_25 = var_7;
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    {
                        arr_38 [i_8] [1] = (~(arr_32 [i_10 - 1] [i_10 - 1] [i_10 - 1] [6]));
                        arr_39 [i_4] [i_8 - 1] [1] [i_10] [i_8 + 1] [2] = (arr_3 [i_4]);
                        var_26 = (((arr_20 [10] [i_8 - 2]) >= (arr_20 [i_4] [i_8 - 1])));
                    }
                }
            }
        }
        for (int i_11 = 2; i_11 < 11;i_11 += 1) /* same iter space */
        {
            arr_44 [i_4] [i_4] = ((((min(var_5, (min((arr_1 [i_4] [i_4]), (arr_36 [6] [1] [1])))))) || (((16737 ^ (arr_20 [i_4] [i_4]))))));
            arr_45 [i_4] = ((~(min(4294967295, 23))));
        }
    }
    var_27 = (~0);
    #pragma endscop
}
