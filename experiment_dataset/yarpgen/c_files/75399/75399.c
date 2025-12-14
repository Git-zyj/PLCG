/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = (((~4575) ? (arr_1 [i_0]) : var_8));
                var_17 = (arr_3 [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_8 [i_1] [i_1] [i_1] [i_1] = ((((((min(128, var_2))) ? (arr_4 [i_1]) : (min(var_3, 41719)))) ^ var_13));
                            var_18 = (max(((((arr_1 [i_2]) || (arr_1 [i_0])))), (arr_5 [i_0] [i_0] [i_0] [i_0])));
                            var_19 = (min((arr_5 [i_0] [i_0] [i_0] [i_0]), -5883270873197973791));
                        }
                    }
                }
            }
        }
    }
    var_20 = 56;

    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        arr_11 [i_4] [i_4] = ((-6652716558570012080 | (var_9 * var_6)));
        var_21 = 1017634657;
        var_22 = (max((arr_10 [i_4]), (min((arr_9 [i_4]), (arr_10 [i_4])))));
        arr_12 [i_4] &= (min((arr_9 [i_4]), (arr_10 [i_4])));

        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {

            for (int i_6 = 2; i_6 < 14;i_6 += 1)
            {
                var_23 = (arr_18 [i_6 + 1] [i_6 - 1] [i_6 - 2] [i_6 - 2]);
                var_24 = (max(var_24, (((-var_8 ? (max((((var_5 ? (arr_16 [i_4] [i_5] [i_5] [i_6 - 1]) : 1))), (((arr_16 [i_4] [i_4] [i_4] [i_4]) ? (arr_15 [i_4] [i_6 - 2]) : var_7)))) : (((-9 % ((5926 ? -59 : (arr_13 [i_4])))))))))));
            }
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                var_25 = (max((max((max((arr_13 [i_4]), 1)), 960900093509415456)), (!2147483647)));
                var_26 = (((((((((arr_14 [i_4] [i_4] [i_4]) | (arr_19 [i_7] [i_5] [i_5] [i_4]))))) + 2147483647)) << (14249258857678829823 - 14249258857678829823)));
                var_27 = var_0;
            }
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {

                /* vectorizable */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    var_28 -= (29350 / ((var_9 ? 1139738911753304198 : (arr_9 [i_4]))));
                    var_29 = (max(var_29, ((((arr_13 [i_8]) & (arr_25 [i_4] [i_4] [i_8] [i_8] [i_9]))))));
                    var_30 = ((((var_4 ? -7428329478305445024 : -877992359))) ? (arr_18 [i_9] [i_8] [i_5] [i_4]) : (arr_13 [i_8]));
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_31 |= ((6415022824989015345 + (arr_10 [i_4])));
                    var_32 = (arr_18 [i_4] [i_4] [i_4] [i_4]);
                    var_33 = (arr_18 [i_8] [i_8] [i_8] [i_8]);

                    for (int i_11 = 3; i_11 < 12;i_11 += 1)
                    {
                        var_34 = var_1;
                        var_35 = (arr_23 [i_10] [i_11 + 2] [i_11 + 2]);
                        arr_33 [i_4] [i_4] [i_4] = ((!(arr_31 [i_4] [i_4] [i_8] [i_4] [i_4] [i_4])));
                    }
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        var_36 = var_7;
                        var_37 = (arr_18 [i_4] [i_4] [i_10] [i_12]);
                        var_38 = 1;
                        var_39 = var_15;
                    }
                }
                var_40 = (arr_13 [i_4]);
            }
            var_41 = 17897323858761342131;
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 21;i_13 += 1)
    {
        var_42 = (((((13379226163071624340 ? 128 : 2976924609))) ? 459662062 : -15678));
        var_43 = (max(var_43, var_13));
    }
    var_44 = (max(((var_2 ? (var_12 || var_5) : (-102 % var_13))), (((var_1 ? 2491311076 : var_10)))));
    #pragma endscop
}
