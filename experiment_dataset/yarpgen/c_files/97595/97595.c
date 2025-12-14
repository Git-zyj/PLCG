/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 2776;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_19 += 12208680708278776150;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_20 += (max(32767, (((~(min(64, 352718409)))))));
            arr_5 [i_1] |= (min((((((arr_3 [i_0 + 2] [i_1]) + 2147483647)) >> (((arr_0 [i_0 + 1]) - 147)))), (min(((min(178, var_8))), (((arr_1 [i_0]) ? var_4 : -73))))));
        }

        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_8 [i_2] [i_0] [i_2] = arr_1 [i_0 - 1];
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_21 |= (arr_12 [i_0 + 2] [12] [2] [0] [i_0 + 2]);
                        var_22 += (((arr_2 [i_0 + 2]) ? -80 : var_5));
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
        {
            var_23 = ((((min(0, 167))) | (((arr_13 [i_0] [i_0 + 2] [i_0]) / (arr_2 [i_0 - 1])))));
            var_24 -= (max((min(0, 58)), (min(10916, 9223372036854775808))));

            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                var_25 = ((((~((min(var_17, (arr_0 [i_6])))))) | ((max((min(var_3, var_16)), (0 && 7116119004615475947))))));
                arr_17 [i_0 + 2] [i_0 + 2] [i_5] [i_6] = (148 < 10746508331002274054);
            }
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                var_26 &= ((((max(10746508331002274054, 1))) && ((min((min(5, -1)), 148)))));
                var_27 = (min(var_27, ((max((arr_11 [i_7] [i_0 + 2]), var_4)))));
            }
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_9 = 2; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_28 *= 18446744073709551591;
                            arr_32 [i_10] [i_10] [i_0] = (((!-20119) ? (~-24) : (max(((min(var_5, 0))), (max(var_5, 16197553228713945859))))));
                            arr_33 [i_9] [i_8] [i_8] [i_9] [i_10] [i_10 + 2] = 162;
                        }
                    }
                }
            }
            arr_34 [i_8] = (arr_18 [i_0 + 1] [i_0 + 2] [0]);
            var_29 += (max((43 / -911808986), (max((~var_8), (min(var_10, 1))))));
            var_30 = (var_0 + (min((arr_16 [i_0] [8] [i_8]), 85)));
        }
    }
    for (int i_12 = 0; i_12 < 18;i_12 += 1)
    {

        for (int i_13 = 1; i_13 < 17;i_13 += 1)
        {
            var_31 |= (arr_38 [i_12]);
            arr_43 [i_13] [i_13 + 1] = (!25);
        }
        for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
        {
            arr_47 [i_14] [6] [i_14] = var_15;
            var_32 = (min(1257436247, 22));
        }
        for (int i_15 = 0; i_15 < 18;i_15 += 1) /* same iter space */
        {
            var_33 = (min(3, (((arr_49 [i_15] [i_15]) ? (arr_49 [i_15] [i_15]) : (-9223372036854775807 - 1)))));
            var_34 *= ((((((arr_38 [i_15]) == (arr_45 [i_12])))) >> (3073332404287696201 - 60745)));
        }
        for (int i_16 = 0; i_16 < 18;i_16 += 1)
        {

            for (int i_17 = 0; i_17 < 18;i_17 += 1) /* same iter space */
            {
                arr_56 [i_12] [i_12] = -21;
                var_35 = (max(var_35, ((min((arr_37 [i_12]), 3073332404287696193)))));
                var_36 = (min(var_36, (((max(-1048769343, (17882 / 875896842)))))));
                var_37 = (min(var_37, 230));
                arr_57 [i_12] [i_16] [i_16] |= 0;
            }
            /* vectorizable */
            for (int i_18 = 0; i_18 < 18;i_18 += 1) /* same iter space */
            {
                arr_60 [i_12] [i_12] [i_12] = var_15;
                var_38 = 0;
                arr_61 [i_18] [i_16] [i_12] [i_12] = (arr_39 [i_12]);
                arr_62 [i_12] [i_12] [i_12] = (~3419070454);
            }
            var_39 = ((~(arr_42 [i_12] [i_12] [i_12])));
            var_40 = (min(var_40, -1));
        }
        var_41 = min(((((max(36026597995708416, 22)) < 1))), ((-(min(var_2, -26107)))));
    }
    for (int i_19 = 2; i_19 < 11;i_19 += 1)
    {
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 12;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 1;i_21 += 1)
            {
                {
                    arr_72 [i_20] [i_21] = (arr_63 [i_19 - 2] [i_19 + 1]);
                    var_42 = (~24);
                }
            }
        }
        var_43 += (arr_6 [i_19] [14] [i_19]);
        var_44 = 0;
    }
    for (int i_22 = 0; i_22 < 13;i_22 += 1)
    {
        arr_76 [i_22] = (-78 % 535399140);

        for (int i_23 = 2; i_23 < 12;i_23 += 1)
        {
            var_45 &= (((arr_3 [1] [i_23]) ? ((20086 >> (((((arr_40 [i_23] [i_22]) - 32760)) + 19532)))) : (arr_30 [i_23 + 1] [i_23 - 1] [i_22] [i_23 + 1])));
            var_46 = (min(var_46, (arr_45 [i_22])));
            var_47 *= ((((min(var_9, (arr_11 [i_22] [i_22]))))));
        }
        for (int i_24 = 0; i_24 < 13;i_24 += 1)
        {
            arr_83 [i_22] [i_22] = (arr_80 [i_22] [i_22]);
            arr_84 [i_22] = (max((min(61793, 5767895918334077847)), (((-(48 && 17593145457097107656))))));
        }
        arr_85 [i_22] |= (min((455506499 | 0), (arr_3 [i_22] [i_22])));
    }
    /* LoopNest 2 */
    for (int i_25 = 0; i_25 < 19;i_25 += 1)
    {
        for (int i_26 = 2; i_26 < 18;i_26 += 1)
        {
            {
                arr_91 [i_25] = max(((((arr_89 [i_26 - 2] [i_26 - 2]) >= (((min((arr_86 [i_26 - 1]), 1))))))), (min(0, -42)));
                arr_92 [i_25] [i_25] [i_25] = ((9398521349109643110 ? (-8 - 5905352942579462348) : (((max(241, 8))))));
                var_48 *= 1;
            }
        }
    }
    var_49 = min(133, (((!(((var_2 ? var_0 : 1)))))));
    #pragma endscop
}
