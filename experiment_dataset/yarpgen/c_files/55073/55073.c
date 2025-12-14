/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((241 + -6172) ? (var_11 > var_6) : var_1))) ? var_12 : (((32767 * var_9) ? 1 : (min(var_15, var_14))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((var_0 <= (min((((32767 ? -22392 : var_8))), var_5))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_17 = (max(var_17, -115));
                        var_18 = ((1 % (arr_11 [i_1 - 1] [9] [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                        arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] = ((-18903 ? 14 : 117));
                    }
                }
            }

            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                var_19 -= (((arr_1 [i_0]) ? (arr_7 [i_4] [i_0] [i_4] [17]) : (var_15 & var_11)));
                var_20 = (min(var_20, (arr_14 [i_0] [12] [i_0])));
                var_21 = var_10;
            }
            for (int i_5 = 3; i_5 < 23;i_5 += 1)
            {
                var_22 = (var_15 <= var_7);
                var_23 = -29060;
                var_24 &= var_12;
                var_25 = (((arr_21 [i_1] [i_1 - 1]) ? var_13 : (arr_17 [i_0] [i_1 - 1])));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_26 = var_2;
                var_27 = ((122 * ((var_11 * (arr_1 [i_0])))));
                var_28 = (max(var_28, ((((arr_0 [i_0] [i_1 - 1]) ? (arr_0 [i_0] [i_1 - 1]) : 0)))));
                var_29 = (((arr_22 [i_6] [i_1 - 1] [i_0] [i_0]) | -25010));
                var_30 = (1212 || 0);
            }
            var_31 *= 191576629726834207;
            var_32 |= 156;
            var_33 = var_12;
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
        {
            var_34 &= var_2;

            for (int i_8 = 1; i_8 < 23;i_8 += 1)
            {
                var_35 = ((var_9 ? ((((arr_21 [i_0] [i_0]) ? var_13 : var_1))) : var_15));
                var_36 += -8823650144901862339;
            }
            var_37 = ((((~(arr_10 [i_0] [i_0] [i_0] [i_7]))) > 3));
            var_38 = (((arr_8 [i_7 - 1] [i_7 - 1] [i_7 - 1]) || (arr_18 [i_7 - 1] [i_7 - 1] [i_7 - 1])));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_31 [i_9] [i_9] [13] = ((var_11 ? ((58 ? var_13 : -45)) : (~1)));
            var_39 = ((-(((arr_25 [i_0] [i_9]) ? (arr_25 [i_0] [i_0]) : (arr_25 [i_0] [i_0])))));
            var_40 = max((((((var_3 ? var_2 : var_10)) >= var_6))), (arr_19 [i_9]));
            var_41 |= ((((-(arr_30 [i_9] [i_0]))) | (arr_18 [i_0] [i_9] [i_0])));
        }
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            var_42 = (-((((min(var_10, var_8))) ? (((max(var_2, var_13)))) : ((13174449669892302822 ? 4294967295 : 9223372036854775807)))));
            var_43 = (((9223372036854775807 >> (4294967277 - 4294967245))) + ((max(1, ((4294967292 ? -24 : -55))))));
        }
        var_44 = ((-(min(var_13, -var_15))));
        var_45 = (((((arr_7 [i_0] [i_0] [i_0] [i_0]) + (arr_14 [i_0] [i_0] [i_0]))) + (((arr_23 [i_0] [i_0] [i_0] [i_0]) ? (arr_27 [20] [12] [i_0] [i_0]) : (arr_4 [13] [i_0])))));
    }
    var_46 = ((((min(var_0, (min(var_12, 1670602542828205686))))) ? (((3 + ((min(var_1, var_13)))))) : (var_10 - var_14)));
    var_47 = (min(var_47, (((((var_10 ? 4294967282 : (var_0 <= 4294967284))) - ((-(var_13 ^ var_8))))))));
    var_48 = (max(var_48, var_3));
    #pragma endscop
}
