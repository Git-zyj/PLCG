/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = ((~(~var_0)));
        arr_2 [i_0] [i_0] = ((!(7 || var_8)));
        var_19 = ((((((!var_12) ? (((!(arr_0 [2])))) : var_9))) ? ((max((((arr_1 [i_0] [i_0]) || 248)), 1))) : (((((arr_1 [i_0] [i_0]) || (arr_1 [i_0] [i_0])))))));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_20 *= var_1;
            var_21 = ((-(arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 1])));
            var_22 = (min(var_22, var_4));
            var_23 = (max(((((((-55 + 2147483647) >> (var_13 + 1764)))) ? 4707925959662510744 : var_11)), (((((var_4 ? var_15 : 7)) > (((((arr_4 [i_1] [i_2]) < 48)))))))));
        }
        for (int i_3 = 2; i_3 < 6;i_3 += 1)
        {
            var_24 = (((((-(~var_5)))) ? ((((-13 >= (arr_11 [i_1 + 2]))))) : (max((var_2 - var_6), (7 > var_8)))));
            var_25 = ((((((((arr_9 [0] [8] [8]) ? var_8 : var_8))) < var_7)) ? (((((7 ? (-127 - 1) : var_13))) ? ((-77 ? 3 : 13)) : (-90 % var_12))) : var_11));
            var_26 = ((((((((var_15 ? 69 : var_8)) >= 1)))) / (max((var_5 || 38562), (min((arr_0 [i_3]), var_13))))));
            var_27 = (max(var_27, (((-(151 / 26))))));
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_28 = ((!(((((((arr_3 [i_1]) ? var_12 : var_1))) ? (!var_15) : 1554415538141493806)))));
            var_29 ^= ((!(((arr_9 [4] [i_4] [i_4]) > 86))));
            var_30 -= ((((((var_12 ? (arr_1 [i_4] [i_1]) : var_9)) >= ((((!(arr_1 [i_1] [i_1]))))))) && ((-var_12 <= (((arr_9 [i_1] [i_1] [i_1]) ? 21 : (arr_4 [8] [8])))))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_16 [i_1] = (!19123);

            for (int i_6 = 4; i_6 < 9;i_6 += 1)
            {
                var_31 ^= ((~(arr_13 [i_1 + 1] [i_6 - 2])));
                var_32 = (max(var_32, var_12));
            }
            arr_19 [4] [4] &= ((((38565 == ((35538 ? var_4 : 6)))) ? (((!(arr_14 [i_1 - 1])))) : (((arr_9 [i_1 - 1] [5] [i_1 + 1]) ? -var_0 : var_3))));
        }
        var_33 = 61451;

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_34 = 63531;
            arr_23 [i_1] [i_1] [i_1] = (~240);
        }
        for (int i_8 = 2; i_8 < 9;i_8 += 1)
        {
            arr_26 [i_1] = (var_16 >= -81);
            var_35 += 14599;
        }
        var_36 -= ((((((((var_17 ? var_8 : 74))) ? ((var_7 ? var_10 : var_0)) : (7 < 0)))) ? (!7901867591090271763) : (((var_0 != (var_17 - var_8))))));
    }
    var_37 = ((9223372036854775807 ? (!var_14) : var_17));
    #pragma endscop
}
