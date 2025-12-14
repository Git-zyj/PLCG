/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 6163901272158614176;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = (min(var_15, (((~((var_9 ? 29 : 202)))))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
        {
            var_16 = 4294967243;

            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                arr_7 [i_1] [i_1] [i_2] [i_2] = (var_4 | var_6);
                var_17 += 48;
            }
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                var_18 = 14241492952322036167;
                var_19 = (arr_0 [i_1]);
            }
            var_20 = (min(var_20, (!244552541106376)));
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
        {
            var_21 |= 25;
            var_22 = (((((var_6 ? (arr_9 [i_0] [i_0]) : 59334))) ? (59334 / var_0) : 902429631));
            var_23 = (((var_4 | 4294967272) | 59334));
        }

        for (int i_5 = 2; i_5 < 22;i_5 += 1)
        {
            var_24 = (((arr_4 [i_5 - 2] [i_5 - 1] [i_5 - 1]) ? 4294967274 : (arr_12 [i_5 - 2] [i_5 - 2])));
            arr_14 [i_0] = 4294965248;
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 19;i_6 += 1)
    {
        arr_19 [0] [0] = 0;

        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            arr_22 [i_7] [i_7] [i_7] = ((arr_0 [i_6 + 4]) | 9);

            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                var_25 |= (((arr_4 [i_6 + 1] [i_6 - 1] [i_6 + 3]) > var_10));
                var_26 = (((arr_10 [i_8] [i_7] [i_6]) ? (arr_0 [i_6 + 3]) : (arr_0 [i_6 + 1])));
            }

            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_27 |= (((-127 - 1) ? 4668 : -2010040347));
                    arr_30 [i_7] [i_7] [i_9] [i_10] = 0;
                }
                for (int i_11 = 4; i_11 < 22;i_11 += 1)
                {
                    var_28 &= (((((3611805961 ? 242 : 6569610334111817184))) ? 3136373357318482916 : (-9223372036854775807 - 1)));
                    var_29 = ((4294967295 / ((-94 ? 36 : 36))));
                }
                for (int i_12 = 1; i_12 < 20;i_12 += 1)
                {
                    var_30 *= (((arr_13 [i_9]) / (arr_34 [i_6 + 1] [14] [i_6 + 3] [i_6])));
                    var_31 = (min(var_31, (arr_4 [i_6] [i_6] [i_9])));
                }
                var_32 = ((4155027736 / (((arr_20 [i_6] [i_7] [0]) ? -84 : 0))));
            }
            for (int i_13 = 0; i_13 < 23;i_13 += 1)
            {
                var_33 = 4294967265;
                var_34 = ((arr_38 [i_6] [i_7]) / ((-87 ? var_3 : var_0)));
            }
            arr_42 [i_7] = var_13;
            var_35 = (~var_11);
        }
    }
    var_36 = var_12;
    var_37 = (min(var_11, (min(((42 ? 1397338659772342082 : 215)), 0))));
    #pragma endscop
}
