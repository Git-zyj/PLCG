/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 += (((var_8 ^ (arr_2 [i_0] [i_0]))));
        arr_3 [i_0] [i_0] = (((117 / 172) <= (~var_1)));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    arr_14 [i_2] [i_1] [i_2] [1] = (arr_4 [i_0] [i_0] [i_0]);
                    arr_15 [i_0] [i_1] [i_2] [i_2] = var_0;
                }
                var_14 = 135;
            }

            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                var_15 = ((-(((arr_2 [i_0] [i_4]) ? (arr_2 [i_0] [4]) : (arr_2 [i_1] [i_0])))));
                arr_20 [8] [i_1] = (max((!var_12), (arr_2 [i_0] [i_1])));
                var_16 = arr_19 [i_1] [0] [i_1];
                var_17 -= ((((((((0 - (arr_7 [i_4] [i_0] [i_4])))) ? (arr_19 [i_1] [i_1] [i_1]) : ((var_7 ? var_2 : (arr_19 [i_0] [i_1] [i_0])))))) ? (!var_9) : 124));
            }
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                arr_23 [i_0] [i_0] = ((-((0 ? (((10627266901539236951 ? var_7 : 1))) : 10627266901539236951))));
                var_18 = (max(var_18, (arr_5 [i_5 + 2] [i_5 + 2] [i_0])));
            }
            arr_24 [i_1] = (min((arr_8 [i_0] [i_0] [i_0] [i_1]), ((((((arr_0 [i_1] [7]) + (arr_18 [i_0] [i_1] [i_0])))) ? (61 - 18446744073709551615) : (arr_7 [i_0] [i_0] [i_0])))));
            arr_25 [i_0] = (((max(var_5, (arr_18 [i_1] [i_1] [i_1]))) | (((min(-107, var_2))))));
            var_19 ^= (((((0 - 17) ? 17299778365907566937 : 10658725212638748545)) >= (((max((arr_5 [i_0] [i_0] [i_0]), 1124))))));
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_20 = (var_4 && 6);
            arr_30 [i_6] [6] |= ((min((((6 ? (arr_16 [i_0] [1] [i_6]) : -59))), (max(var_5, var_4)))) * (((8657929856150195960 ? 398579106 : -64))));
            var_21 *= (arr_1 [i_0] [i_6]);
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            var_22 ^= (((((arr_26 [i_7]) <= 8894)) ? (((arr_26 [16]) / 3)) : (arr_32 [17] [i_7])));
            var_23 -= (arr_33 [i_7]);
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            var_24 = (min(var_24, ((((((var_5 ? var_0 : 19))) ? var_6 : 72057589742960640)))));
            arr_36 [i_0] [10] = ((-105 ? 8894 : 1146965707801984678));
        }
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        arr_39 [i_9] = 1;
        var_25 ^= arr_38 [i_9];
        var_26 = (arr_37 [i_9]);
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_27 = (min(var_27, (((((var_12 >> (((arr_19 [i_10] [i_10] [i_10]) - 54)))) < (((~(arr_19 [i_10] [i_10] [i_10])))))))));
        arr_43 [i_10] = 17358;
    }
    var_28 = ((((min(var_5, (97 != var_9)))) ? ((min(((var_10 ? 97 : 511)), var_9))) : (((var_5 % 827271293) / ((min(var_0, var_9)))))));
    #pragma endscop
}
