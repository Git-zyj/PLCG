/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~(((((var_11 ? var_12 : var_1))) ? (var_4 | var_2) : var_13))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((!(arr_0 [i_0 - 1] [i_0 + 1]))) ? (!var_2) : (!var_10)));
        var_15 += ((!(((arr_1 [i_0 + 1] [i_0]) >= (0 | var_10)))));
        var_16 = ((~(((-54 ^ var_13) ? ((var_6 ? (arr_0 [i_0] [i_0]) : var_11)) : (arr_1 [i_0 + 1] [i_0 - 1])))));
        var_17 = 856518448039606008;
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((arr_4 [i_1]) ? (-22 / var_12) : 23));

        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_13 [i_1 - 1] [i_1] [i_3] [i_4] = ((!((!(((106 ? 0 : var_11)))))));

                        for (int i_5 = 4; i_5 < 10;i_5 += 1)
                        {
                            var_18 = (min(var_18, 42));
                            arr_16 [i_1] [i_2] [i_3 - 2] [i_1] [i_2] = ((((((3143920209 ? var_0 : 24)) ? var_5 : (max(var_5, var_8))))));
                        }
                        var_19 = (max(var_19, ((min((((~(~2042546787)))), (max((~-95373136), (arr_9 [i_3 + 1] [i_2 - 1] [i_1 + 1]))))))));
                        arr_17 [i_1] [i_2] [i_3] [i_4] = ((!((((var_11 >> (var_13 + 73)))))));
                    }
                }
            }
            var_20 = (((!-14485) ? 255 : (((((var_2 ? 23871 : (arr_0 [i_1] [i_1])))) ? (var_6 != 0) : (var_0 < var_9)))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    {
                        arr_22 [i_1] [8] [i_1] [8] = ((((((arr_18 [4] [i_1 - 1] [i_2 - 1] [i_1]) ? var_5 : 0))) ? ((max((arr_18 [i_1] [i_1 + 1] [i_2 - 1] [i_1]), (arr_20 [i_1] [i_1 + 1] [i_2 + 1] [i_2 - 1] [i_7 + 1])))) : (arr_20 [i_1] [i_1 - 1] [i_2 - 1] [i_2 + 1] [i_7 + 1])));
                        var_21 += (min(16, (arr_14 [i_6] [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1])));
                    }
                }
            }
            arr_23 [i_1] [i_1] = (min(((max(var_7, (arr_7 [i_1 - 1] [i_1])))), ((~(arr_7 [i_1 - 1] [i_1])))));
        }
        var_22 = (((((1198004849 + (arr_11 [i_1] [i_1] [i_1] [i_1 - 1])))) ^ 0));
        arr_24 [i_1] [i_1] = ((-7964260389498460526 ? (13 & var_11) : (!8)));
    }
    for (int i_8 = 1; i_8 < 11;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
        {
            var_23 = -157443788;
            var_24 = (((arr_20 [i_8] [i_9] [i_9] [1] [1]) ? ((max((var_11 <= 128), (~var_11)))) : (max(var_10, ((max(var_9, -599)))))));
            arr_33 [i_8] [i_8] = (((((23 ? ((1589426065 ? 5 : (arr_29 [i_8] [2]))) : (((0 > (arr_26 [2]))))))) / ((2426055192 ? 1 : var_5))));
            var_25 -= 2;
            var_26 = (min(var_26, (((((((arr_3 [i_9]) | 4294967292))) ? 1360291719 : (min(var_4, 62866)))))));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
        {
            var_27 = (((0 / -1258585522) ? (arr_27 [i_8]) : -29442));
            arr_36 [i_8] [i_8] [i_8] = ((var_7 & ((-78 ? (arr_0 [i_8] [i_10]) : -9153404430040426600))));

            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                arr_39 [i_8] [i_10] [i_8] = (~-28965);
                arr_40 [i_8 - 1] [i_8] [i_11] [i_11] = (arr_9 [i_8 + 1] [i_8 - 1] [i_8 + 1]);
                var_28 = ((((var_13 || (arr_8 [i_8 - 1] [i_10]))) ? 47204 : var_0));
            }
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                var_29 = 19432;
                var_30 = ((var_13 ? 18446744073709551615 : 1636294287));
                arr_45 [i_8] [i_8] [i_10] [i_8] = (((((164 ? 4 : 208))) ? ((var_9 ? 1 : (arr_4 [i_8]))) : 1));
                arr_46 [i_10] [i_10] [i_8] [i_10] = -18062;
            }
        }
        var_31 = var_3;
    }
    var_32 = var_10;
    var_33 = (((((var_8 ? ((var_1 ? var_8 : -29)) : var_2))) ? (((~var_2) | 1)) : ((((var_4 <= var_12) >= ((var_13 ? var_8 : var_5)))))));
    #pragma endscop
}
