/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_13 = var_2;
            var_14 = ((((var_9 ? (((-4 ? var_8 : 0))) : (~-9223372036854775798))) != (arr_0 [i_0 + 1] [i_0 + 1])));

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_15 = (((var_10 ? (arr_6 [i_2]) : ((63 ? 31898 : (arr_2 [i_0]))))));
                var_16 = 192;
            }
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                var_17 = (((((var_5 ? 8673366761396788187 : 63))) ? ((min(var_4, var_8))) : (arr_4 [i_0 - 1] [i_1] [i_0 + 2])));

                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_18 = (((min((~var_7), -12602)) < (((var_8 != -1441188102900802714) + 457263496))));
                    var_19 = ((14 | 61988) ? (max(3547, 2021819945)) : ((((arr_2 [i_0 - 1]) != 4))));
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                {
                    var_20 = 1758467656;
                    var_21 &= (min(-1975365547, 0));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                {
                    var_22 = var_10;
                    arr_18 [19] [i_0 + 2] [i_6] [i_6] = var_1;
                    arr_19 [i_6] [i_6] [i_6] [i_6] [i_1] [i_0 + 2] = (~(arr_12 [i_0 + 1] [i_0 + 1]));
                }
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                var_23 = ((4125437807 ? var_4 : (arr_8 [i_0 + 1] [i_1])));
                var_24 = (arr_11 [i_7] [12]);
            }
            for (int i_8 = 2; i_8 < 21;i_8 += 1)
            {
                var_25 = (((21 && 31) && (((1 ? 19 : (arr_24 [i_1] [14] [i_8 + 1] [i_8 - 1]))))));
                arr_25 [i_8] [i_1] [i_1] [i_0] = var_1;
            }
            arr_26 [i_1] = (max(((max(169529489, 1))), (arr_7 [i_0] [i_0 + 2])));
        }
        var_26 = ((var_6 < (((max(21338, (var_4 < 13534089187110833907)))))));
        var_27 = 2107320582;
        var_28 |= ((var_3 ? (((arr_4 [i_0 + 1] [i_0 - 1] [i_0 - 1]) + (arr_17 [1] [i_0 - 1]))) : 241));
    }
    for (int i_9 = 2; i_9 < 16;i_9 += 1)
    {
        var_29 = ((((min(((511 ? (arr_11 [i_9 - 2] [i_9]) : 18446744073709551611)), var_4))) && (((var_0 ? (arr_16 [i_9] [i_9] [i_9] [i_9 - 1] [i_9]) : (arr_24 [i_9 - 1] [i_9 - 1] [i_9 - 2] [i_9 - 1]))))));
        var_30 = ((((max((arr_6 [i_9]), 1))) != ((~(var_11 / 28976)))));
        var_31 = -153164093;
        var_32 = -1010;
    }
    var_33 = ((var_4 | ((max(31000, 67)))));
    var_34 -= (min(((((18446744073709551597 || 7919073211927367608) < (var_11 + -854537031125255249)))), var_5));
    var_35 = ((~((~(4294967295 != 61990)))));
    #pragma endscop
}
