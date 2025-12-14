/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_13 ? var_15 : (((max(37, var_3)) * var_10))));
    var_21 = ((var_10 ? 51571 : ((~(~51587)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_22 = (max(var_22, (arr_2 [0])));
        var_23 = ((((((arr_2 [4]) ^ (arr_2 [0])))) ? (13982 != -var_18) : -var_9));
        var_24 = (((-(var_13 == var_11))));
        var_25 = (((~var_0) & (arr_2 [i_0])));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_26 *= (((--13960) == -var_8));
        var_27 = ((-(((arr_1 [2]) ? (arr_1 [4]) : (arr_1 [14])))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_28 = (((((var_12 ? (((arr_4 [i_2]) - 1)) : (arr_3 [8] [8])))) < -3776));
        arr_8 [i_2] [i_2] = var_1;

        for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
        {
            arr_11 [2] = var_6;
            var_29 = (arr_0 [14] [i_3]);
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
        {
            var_30 = ((((((arr_2 [i_4]) * (arr_10 [i_4])))) ? ((-(arr_2 [i_4]))) : (((arr_2 [i_4]) * (arr_10 [i_2])))));
            var_31 = (((255 ? 3391559847 : (arr_5 [i_2]))));
            var_32 = ((((((-var_0 | (-127 - 1))) + 2147483647)) << (var_9 - 9658727322061927187)));
        }
        for (int i_5 = 4; i_5 < 6;i_5 += 1)
        {
            var_33 = var_7;

            for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
            {
                arr_20 [i_2] [i_5] [6] = var_4;
                var_34 = var_18;
            }
            for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
            {
                var_35 = ((((var_16 ? ((49 ? var_6 : var_9)) : ((min(3308351480, (arr_9 [i_2] [2])))))) * (((-(((arr_10 [i_2]) ? (arr_4 [1]) : (arr_5 [i_5]))))))));
                var_36 = ((-(-var_10 >= -var_5)));
                arr_23 [8] [i_2] [i_2] [i_7] = var_10;
                var_37 = (((((-((var_4 ? 178 : (arr_13 [i_2] [0])))))) != ((var_9 - (((var_8 ? var_13 : var_14)))))));
            }
            for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
            {
                arr_27 [i_8] [i_2] = ((2048 ? ((((max(var_8, (arr_14 [i_5] [i_8])))) ? (arr_24 [i_5 - 3] [i_5 + 2]) : var_15)) : (arr_14 [i_5] [i_8])));
                var_38 = ((-((51553 ? -20 : (arr_2 [14])))));
            }
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                var_39 = (max((~var_10), (min((arr_18 [i_5 + 4] [i_5 + 4] [i_9]), (var_10 / var_16)))));
                var_40 = (arr_6 [7]);
                var_41 = ((-(max(986615815, (13983 == 5549746117461042735)))));
                var_42 = var_5;
            }
        }
    }
    #pragma endscop
}
