/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (var_9 % var_3)));
    var_13 -= var_9;
    var_14 = (min((min(6378968123751854678, var_9)), (1 > -32765)));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_15 = ((((arr_1 [i_0]) ? -32745 : (((32765 && (arr_0 [i_0] [i_0])))))));
        var_16 -= (((arr_1 [i_0]) > -32763));
        var_17 = var_2;

        /* vectorizable */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_18 |= (arr_3 [i_1] [i_0]);

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                var_19 = arr_4 [i_0 + 1] [i_1 - 1] [i_2];

                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    arr_9 [i_0] [i_0] [i_2] [i_2] [i_3] = (arr_5 [i_3] [i_3] [i_3] [i_3 + 1]);
                    var_20 = (min(var_20, 2023050605));
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_21 = (((arr_11 [9] [i_1] [i_1] [i_4] [i_2]) ? (((arr_12 [i_4] [i_1] [i_1] [i_4]) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (arr_3 [i_0] [i_4]))) : (~-27)));
                    var_22 = var_8;
                    var_23 = (max(var_23, (arr_8 [i_4] [i_4])));
                }
                var_24 = (max(var_24, (!var_0)));
                var_25 = 58;
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_26 &= ((var_4 / (~var_10)));
        arr_15 [i_5] = (((var_3 - 0) ? (arr_14 [i_5]) : var_4));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_27 = 1;
        arr_20 [i_6] [i_6] = (min((~var_8), ((min(((2147483647 ? (arr_17 [i_6]) : (arr_18 [i_6]))), (arr_19 [16]))))));
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        var_28 = ((((max((arr_10 [i_7] [i_7] [5] [i_7]), ((~(arr_14 [i_7])))))) + (min(((1 ? 30576 : (arr_2 [i_7]))), (arr_11 [i_7] [i_7] [i_7] [i_7] [i_7])))));

        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            var_29 = var_6;

            for (int i_9 = 4; i_9 < 9;i_9 += 1)
            {
                var_30 -= (arr_0 [i_8] [i_8]);
                arr_28 [i_7] [i_7] [9] [i_7] = (min((arr_14 [i_7]), (max((8191 >> 1), 2147483647))));
                var_31 = (((~0) || ((min((min((arr_5 [i_7] [i_7] [i_7] [i_9]), var_7)), (((1 | (arr_21 [i_9])))))))));
                var_32 &= -2147483647;
                var_33 = ((((arr_4 [i_7] [i_8] [i_9]) ? (min(-8357437096602734719, -27)) : (!var_4))));
            }
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                var_34 = (max((((2023050605 - (arr_18 [i_8])))), -1));

                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    var_35 -= ((~(((((arr_32 [i_8] [4]) | (arr_8 [i_7] [i_7]))) & var_10))));
                    arr_35 [i_7] [i_7] [i_10] [i_7] [i_7] = (~7317598806888188521);
                    var_36 = (arr_27 [i_8] [i_8]);
                }
            }
            var_37 -= 1;
        }
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            arr_38 [i_7] = ((~((~(arr_0 [i_7] [i_12])))));
            var_38 = (max(2047, (((((min(-4702004301330959909, (arr_16 [i_7] [i_7]))) + 9223372036854775807)) << (((32765 & var_8) - 10488))))));
        }
        arr_39 [i_7] = (!var_5);
    }
    #pragma endscop
}
