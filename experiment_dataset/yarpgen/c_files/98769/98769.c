/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (var_2 - 7701667177566718731);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 += (!7701667177566718742);
        var_12 += (arr_0 [i_0]);
        var_13 ^= ((19055 || (!var_1)));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_14 = -7679953726091289858;
            var_15 = (max(var_15, (arr_7 [i_1] [i_1] [i_2])));
            var_16 = ((!(arr_5 [7] [i_2])));

            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                arr_11 [i_1] [i_1] = 1628434542160111435;
                var_17 = (var_9 % (arr_8 [0] [17] [8]));
            }
            for (int i_4 = 3; i_4 < 20;i_4 += 1) /* same iter space */
            {

                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    arr_18 [i_5] [11] [i_1] [i_1] [i_2] [2] = (((-2147483647 - 1) <= (arr_10 [i_4 - 1] [i_4 - 1] [i_4] [i_5])));
                    var_18 = (arr_10 [i_4 - 3] [i_4] [i_4] [i_4 - 1]);
                    var_19 *= 7701667177566718724;
                    var_20 = (((((arr_15 [i_2] [i_5]) ? (arr_9 [i_2] [i_4] [i_5]) : var_2))) ? var_6 : -933228470);
                }
                var_21 = (1628434542160111435 / var_5);
                var_22 = ((arr_3 [17]) ? (arr_17 [i_1] [i_2] [i_4] [i_2]) : (arr_3 [i_2]));
            }
            for (int i_6 = 3; i_6 < 20;i_6 += 1) /* same iter space */
            {
                var_23 = (1628434542160111428 && var_9);
                var_24 = (min(var_24, 0));
            }
        }

        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            var_25 = (min(var_25, (arr_20 [i_1] [2] [8])));
            var_26 ^= (0 ^ 952260137747667748);
            var_27 = (max(14628900471638523318, ((min(var_6, (arr_9 [i_1] [i_7] [0]))))));
            var_28 = min((~205), (arr_10 [i_1] [i_1] [i_1] [i_1]));
        }
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            var_29 = ((2675826733594281913 + ((((((5496126162136063476 ? 189 : 4831440228800728569))) ? var_8 : var_9)))));
            arr_25 [i_1] [i_8] [i_1] = var_3;
        }
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
    {
        var_30 = (-2147483647 - 1);
        var_31 = (min(var_31, ((min(var_5, (((~-19073) ? (max(-36, 1131889167)) : (arr_15 [17] [i_9]))))))));
        arr_30 [i_9] |= (arr_0 [i_9]);
        arr_31 [i_9] [18] = var_2;
    }
    for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                {
                    var_32 = ((((-3014799667314448466 / (max(0, -343132341))))) ? 11538714604101911318 : (~12004370240086764));
                    var_33 = (!11);

                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        var_34 = (arr_27 [i_13]);
                        var_35 = arr_29 [i_10];
                        var_36 = (min(var_36, (arr_3 [i_10])));
                    }
                    for (int i_14 = 2; i_14 < 17;i_14 += 1)
                    {
                        var_37 *= -23950;
                        var_38 = (min(((((min(-121, (arr_2 [i_10])))) ? 7 : 39)), (min(5425549108548995794, var_9))));
                        var_39 = (max(var_39, var_4));
                    }
                    arr_45 [i_10] [i_11] [i_11] [i_10] = (((arr_33 [i_10] [i_11]) ? 3163078129 : (arr_39 [i_10] [i_11])));
                }
            }
        }
        var_40 = var_6;
        var_41 &= var_9;
        var_42 += var_0;
        var_43 = (min(((~(arr_2 [17]))), (min((arr_43 [i_10] [i_10] [16] [i_10]), 3163078129))));
    }
    var_44 = (~0);
    var_45 = -1628434542160111435;
    var_46 = ((-(((((67 ? var_2 : 211))) ? var_0 : (var_9 || var_6)))));
    #pragma endscop
}
