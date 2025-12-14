/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = (max(var_20, ((((((-(32 - 13965596804826611316)))) ? ((9 ? -9 : (arr_2 [i_0] [i_0]))) : ((((arr_0 [i_0]) < var_4))))))));
        var_21 += (65527 ? 9424115579595016800 : (((min(var_8, (arr_2 [i_0] [i_0]))))));
        arr_4 [i_0] = ((-((((arr_0 [10]) >= var_2)))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 8;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = -var_1;
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 6;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    var_22 = (9424115579595016800 == 93);
                    var_23 = (((arr_2 [i_2 + 2] [i_2 + 2]) ? -var_5 : var_17));
                }
            }
        }
        arr_13 [i_1] = (((((arr_3 [18]) >= var_2)) ? var_3 : var_11));
        arr_14 [i_1] [i_1] = (((arr_10 [i_1] [i_1]) ? (arr_10 [i_1] [i_1]) : (arr_10 [i_1] [i_1])));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_17 [i_4] = ((var_11 / ((-((-(arr_15 [i_4] [i_4])))))));
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 21;i_7 += 1)
                {
                    {
                        arr_29 [20] [i_5] [i_5] [i_5] [i_7] [i_6] = ((((max((arr_26 [11]), ((max(var_17, 95)))))) ? (((9022628494114534815 < -93) - 12037608941197535257)) : (min((~var_0), ((min(-8192, 9223372036854775807)))))));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            var_24 ^= var_0;
                            arr_32 [i_4] [i_5] [i_5] [1] = var_6;
                            arr_33 [i_5] [i_6] [i_7] [i_6] [i_6] [i_5] [i_5] = (((arr_15 [i_4] [i_5 + 1]) ? (arr_15 [i_4] [i_5 - 3]) : (arr_15 [14] [i_5 - 1])));
                        }
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            var_25 = (min(var_4, -9022628494114534797));
                            var_26 = (max(var_26, ((((0 ? -120 : 46313)) + (arr_34 [i_6] [i_6] [i_7 - 4] [i_7 - 2] [i_9] [i_9] [18])))));
                            var_27 = ((~(arr_35 [i_6])));
                            arr_38 [i_4] [i_5] = var_15;
                        }
                        for (int i_10 = 2; i_10 < 21;i_10 += 1)
                        {
                            arr_41 [i_4] [i_4] [i_4] [i_5] = (arr_35 [i_5]);
                            var_28 = (((((-9223372036854775807 - 1) ? 53 : 8725724278030336)) & ((max(var_9, (min((arr_31 [i_4] [i_5] [i_5] [i_7] [i_5]), (arr_15 [i_4] [i_4]))))))));
                            arr_42 [i_7] [i_5] [i_7] [i_7] = (((var_3 - var_12) < var_16));
                            var_29 = (min(var_29, (((var_4 ? (8 != 40) : 194660978)))));
                        }
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            var_30 ^= ((var_11 ? (min(694979083466821803, ((-2462965874186690488 ? 9022628494114534841 : 46)))) : ((((var_16 < (max((arr_34 [i_4] [i_4] [i_6] [i_6] [i_11] [i_5] [i_6]), -54))))))));
                            arr_45 [i_4] [i_5] [i_6] [i_5] [i_4] [14] = (((12037608941197535257 ? 61 : (arr_22 [i_5 - 1] [i_7 - 1] [i_5]))) - 119);
                            arr_46 [i_6] &= (-(((~-201837752) ? var_1 : (min(-3647975263970538216, 7755423017613960918)))));
                            var_31 = arr_26 [1];
                        }
                    }
                }
            }
        }
        var_32 = (max(var_32, 6087790843305473903));
        var_33 = (min(var_33, ((((((((((arr_44 [i_4] [i_4] [i_4]) ? (arr_21 [i_4] [i_4] [i_4]) : var_1))) ? var_15 : ((min(var_6, var_11)))))) > -9223372036854775807)))));
        var_34 = (min(127, ((+(((arr_36 [i_4] [14] [14]) ? (arr_26 [i_4]) : 51))))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        var_35 ^= (arr_47 [i_12] [i_12]);
        arr_50 [i_12] = ((-(arr_48 [i_12])));
        var_36 = (min(var_36, (arr_47 [i_12] [i_12])));
        var_37 *= (arr_48 [i_12]);
        var_38 += (!var_4);
    }
    #pragma endscop
}
