/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_0] |= (0 >= 65535);

            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                var_20 = var_5;
                var_21 = (((((((var_5 ? (arr_7 [i_2 - 1] [i_1] [i_0]) : (arr_0 [i_2])))) ? (((arr_7 [i_0] [i_1] [i_2]) ? var_15 : (arr_0 [i_2]))) : (((arr_8 [i_0] [i_1] [1]) ? 65535 : (arr_1 [i_2])))))) ? (((arr_8 [14] [i_2 - 2] [i_2 - 2]) ? 1 : (arr_0 [i_2 + 1]))) : var_17);
                var_22 = var_7;
            }
            arr_9 [i_0] [i_0] = (arr_3 [i_0] [i_0] [i_0]);
        }
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                var_23 = (((-148 ? (arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_3 - 1]) : var_5)) <= (max(((1 ? (arr_8 [i_0] [i_0] [i_0]) : 108)), (arr_0 [i_0]))));
                arr_16 [i_4] [i_4 - 1] = ((3217777447 ? ((((var_16 | (arr_10 [i_0] [i_3 + 1] [i_3 + 1]))) << (var_13 + 107))) : var_3));
                arr_17 [i_4] = (min((((var_17 ^ var_5) ? ((var_3 ? (arr_1 [8]) : var_1)) : (-5 <= var_14))), 109));

                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {

                    for (int i_6 = 3; i_6 < 20;i_6 += 1)
                    {
                        var_24 = ((103 | (109 / 540970298)));
                        var_25 = ((((((-540970278 ? 105 : var_13)))) ? 174 : 540970278));
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        arr_25 [i_7] [i_4] [i_4] [i_4] [i_0] = ((!((((1 ? 15 : 540970273))))));
                        var_26 = ((-((((!(arr_3 [i_3] [i_4] [i_7]))) ? ((((arr_22 [i_0] [i_0] [i_0] [i_0]) ? var_8 : var_6))) : ((~(arr_5 [i_0] [i_0] [i_0])))))));
                        var_27 = ((((max((arr_11 [i_0] [i_0] [1]), var_7))) ? var_17 : (((arr_21 [i_3 - 2] [i_4 - 1] [i_5] [i_7]) ? -2058042859 : (((arr_1 [i_0]) - (arr_1 [i_0])))))));
                    }
                    for (int i_8 = 1; i_8 < 21;i_8 += 1)
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] = ((-(((!(arr_1 [i_0]))))));
                        var_28 = ((!((max(18446744073709551615, (arr_3 [i_4 - 1] [i_3 + 2] [i_3 - 1]))))));
                    }
                    var_29 = ((((((arr_7 [i_3 - 1] [i_3 - 2] [i_4 - 1]) ? (arr_21 [i_3 - 1] [i_3] [i_3] [i_3 - 2]) : (arr_1 [i_4 - 1])))) ? (((!(arr_0 [i_3 - 1])))) : (((!(arr_21 [12] [i_4] [12] [12]))))));
                    var_30 = ((((((arr_19 [i_4] [i_4]) ? (arr_8 [i_4 - 1] [i_3 + 2] [i_0]) : var_2))) ? ((min((arr_8 [i_4 - 1] [i_3 + 2] [i_3]), (arr_19 [i_4] [i_4])))) : (arr_7 [i_4 - 1] [i_3 + 2] [i_3 - 1])));
                }
            }
            var_31 *= (((min(var_11, (arr_24 [i_0] [i_3] [i_0] [20] [6]))) ^ var_13));
            var_32 ^= (arr_5 [i_0] [i_0] [i_0]);
            var_33 = (max(var_33, (((var_2 ? (var_9 & var_12) : (max(var_11, (((var_2 ? var_10 : -776216499))))))))));
        }
    }
    var_34 = var_6;
    #pragma endscop
}
