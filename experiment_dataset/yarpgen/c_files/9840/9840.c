/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((min((min(((min(var_8, -29))), (max(0, -12)))), (((var_18 ? -var_18 : 0))))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = (max((((!((min(11, var_1)))))), 16512));
        var_21 |= ((max((arr_0 [i_0] [i_0]), 54738)));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_22 = (max(var_22, var_5));
            var_23 &= 2147483648;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_24 = (((12811 == 15189) & (min((arr_3 [i_0]), var_3))));

            /* vectorizable */
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                var_25 = ((var_8 ? (arr_2 [i_3 - 1]) : 16512));
                var_26 = ((!(arr_7 [6] [i_3 - 1] [i_3] [i_2])));
                var_27 = 2744492813;
            }
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                var_28 = (max(var_28, (((-3182337146 ? (arr_7 [i_0] [i_0] [i_2] [i_4]) : 16512)))));
                var_29 = (max(((16512 ? 2147483648 : 1)), 33553408));
                var_30 |= var_17;
            }
        }
    }
    for (int i_5 = 4; i_5 < 13;i_5 += 1)
    {
        var_31 = (arr_0 [i_5 - 1] [i_5 + 1]);
        var_32 = (max(((min((arr_11 [i_5 - 2] [i_5 - 4]), 0))), (((((var_13 ? 49335 : 0))) ? (arr_12 [i_5]) : var_12))));
        var_33 = 8322084356682951863;
        var_34 += ((var_15 ? (((max(var_1, (arr_7 [i_5] [i_5 - 1] [i_5] [i_5 + 1]))))) : 16512));
        var_35 = arr_14 [i_5 - 1] [i_5];
    }
    var_36 = (max(var_36, var_4));
    #pragma endscop
}
