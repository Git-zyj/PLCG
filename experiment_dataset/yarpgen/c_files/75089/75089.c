/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_13 = (((((-1645856186 + (185 + 196)))) ? var_2 : (max(((168 ? 56212619 : 185)), 1))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            arr_12 [i_2] [i_2] [i_2] [9] = ((-((-(arr_1 [i_0] [16])))));
                            var_14 = var_9;
                            var_15 += var_8;
                            var_16 = (arr_9 [i_0] [i_1] [i_2] [i_1] [i_0] [i_1]);
                            arr_13 [12] [i_2] |= (arr_11 [i_0] [i_1] [i_2] [i_3] [i_0]);
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_17 = var_4;
                            var_18 = 46;
                        }

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_19 = (var_10 > 66);
                            arr_19 [i_6] = ((var_11 && (arr_17 [i_6] [i_6] [i_6] [i_6] [i_6])));
                            var_20 += var_2;
                        }
                        for (int i_7 = 1; i_7 < 14;i_7 += 1)
                        {
                            var_21 = var_5;
                            var_22 |= (max(((((arr_1 [i_2 + 2] [i_0 - 2]) ? 2013937847 : (arr_1 [i_2 - 1] [i_0 + 1])))), (((arr_1 [i_2 + 2] [i_0 + 1]) ? var_7 : (arr_1 [i_2 + 2] [i_0 - 1])))));
                            arr_22 [i_0] [i_0] [i_0] [i_3] [i_0] [14] = ((((max(4292870144, (((var_7 ? 90 : var_2)))))) ? 207 : (arr_9 [i_0 - 1] [i_0 - 1] [i_0] [i_3] [i_3] [i_0 - 1])));
                            arr_23 [i_7] [i_3] [i_2] [i_1] [i_0] = var_0;
                        }
                        arr_24 [i_3] [i_1] = ((!(arr_20 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [3])));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        var_23 = (max((~var_5), (((~var_11) | ((var_6 ? -33554432 : (arr_28 [22])))))));
        var_24 = (max(-var_2, (max(((var_3 ? (arr_27 [i_8]) : (arr_25 [i_8]))), (arr_28 [i_8])))));
        var_25 += max(18446744069416681478, 2409685124133946709);
        var_26 = 2281029448;
    }
    for (int i_9 = 3; i_9 < 18;i_9 += 1)
    {
        var_27 = (-9223372036854775807 - 1);
        arr_31 [i_9] = ((+((((arr_25 [i_9 - 1]) != var_9)))));
        arr_32 [i_9] = (((-(max(-37, 18446744069416681472)))));
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        var_28 |= 7534768913340013562;
        var_29 -= -var_6;
        arr_35 [i_10] = (arr_27 [18]);
    }
    var_30 |= 8545198715419784398;
    var_31 -= -127;
    #pragma endscop
}
