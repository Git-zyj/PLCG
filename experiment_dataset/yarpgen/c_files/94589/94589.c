/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_10 = (max(((max((arr_0 [i_0]), (arr_0 [i_0])))), ((var_0 ? (arr_0 [i_0]) : var_1))));
            arr_6 [i_0] = -14;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_11 = (((arr_7 [i_2] [i_0]) != 89));
            arr_10 [i_0] = ((min((166 ^ var_4), ((min((arr_2 [i_2] [i_2]), 1))))) == (((!var_1) * (!var_9))));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            arr_13 [i_0] [i_0] = ((268402688 == 0) ? (((-(arr_9 [i_0])))) : (167 % 17761879959490730052));
            var_12 = (max(var_12, 1));
            arr_14 [i_0] = ((((((var_7 != (arr_1 [i_0]))))) - (arr_12 [i_0] [i_3])));
            arr_15 [i_0] = (min((arr_5 [i_0]), var_4));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                arr_22 [i_0] [i_0] [i_0] [i_0] = (arr_19 [i_5]);

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_13 = (min(var_13, ((((arr_2 [i_0] [i_0]) ? 60 : (arr_2 [i_0] [i_0]))))));
                    var_14 &= ((60 ? 14 : 1));
                    var_15 = (max(var_15, ((((arr_4 [1] [i_4] [i_5]) - (arr_4 [1] [i_5] [i_5]))))));
                }
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    arr_27 [1] [i_0] [i_0] [i_0] [i_0] [i_0] = var_1;
                    var_16 = (arr_3 [i_0] [i_4]);
                }
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    var_17 = (arr_0 [i_0]);
                    var_18 = (arr_1 [i_0]);
                    var_19 = (arr_24 [i_0] [i_4] [i_4] [i_5] [i_8]);
                }
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    var_20 = var_5;
                    var_21 = (((arr_9 [i_0]) < var_6));
                    var_22 = (max(var_22, ((((1 >> 0) % (arr_19 [i_5]))))));
                }
                var_23 = ((18322951441279382791 == (((18446744073709551615 ? 7551529586951464463 : -126)))));
                var_24 += (((arr_25 [8]) ? (arr_25 [18]) : (arr_25 [16])));
                var_25 *= ((-7551529586951464463 ? var_7 : (arr_3 [6] [i_0])));
            }
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    var_26 += (arr_31 [17] [i_4] [i_10] [i_10] [i_10] [i_4]);
                    arr_37 [i_0] [i_0] [11] = ((35730 ? 13259970991116276986 : (arr_19 [i_0])));
                    var_27 += (((0 * 1) < (0 || 4294967295)));
                    arr_38 [i_0] = (arr_9 [i_0]);
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    arr_41 [i_10] [i_4] [2] [i_4] [i_4] |= -7551529586951464463;

                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        arr_45 [i_0] [i_4] [i_10] [i_12] [i_13] = (arr_43 [11] [i_12] [i_10] [i_4] [i_0]);
                        var_28 = (((arr_19 [i_0]) <= 4294967295));
                        arr_46 [i_0] [i_0] = (((arr_18 [i_0] [i_0] [i_0]) ? (((1 ? -7551529586951464464 : 4294967295))) : (arr_1 [i_0])));
                        var_29 -= (arr_2 [i_0] [i_13]);
                        var_30 += (arr_17 [i_12] [i_4]);
                    }
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        var_31 = -8192;
                        arr_49 [i_10] |= (-48 * 0);
                        var_32 = (1 * var_5);
                    }
                    arr_50 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_3 [i_0] [i_0]) && (arr_3 [i_0] [17])));
                }
                var_33 += (((arr_11 [i_10] [3] [i_10]) == 0));
                arr_51 [i_0] [i_0] [i_0] = (i_0 % 2 == 0) ? (((1 % (((var_2 > (arr_1 [i_0]))))))) : (((1 * (((var_2 > (arr_1 [i_0])))))));
            }
            var_34 = (arr_3 [i_0] [i_4]);
        }
        var_35 = (min(var_35, ((((((((max(1, 18014398509465600))) ? (max((arr_48 [i_0] [i_0]), (arr_0 [14]))) : (arr_17 [i_0] [i_0])))) ? (((!(arr_19 [i_0])))) : (1 <= 27775))))));
    }
    for (int i_15 = 0; i_15 < 12;i_15 += 1)
    {
        var_36 = var_4;
        arr_54 [i_15] = (~1);
        var_37 = var_1;
        var_38 = (((((arr_52 [i_15]) && (arr_52 [i_15]))) ? (((4294967295 ? 27521 : 414733925))) : (((arr_52 [i_15]) % (arr_52 [i_15])))));
    }
    var_39 &= var_7;
    #pragma endscop
}
