/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 43381;
    var_21 &= 622290061;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_0] [i_2] [i_0] = 22155;

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_22 = (var_12 >> ((((min(var_6, 41))) + 2619)));
                        arr_12 [i_1] [i_1] = ((!(!43374)));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_23 = (max(var_23, 2097151));
                        var_24 = (((min((-381705716 >= 1458549738), (arr_15 [i_4] [i_2] [i_1] [i_0 - 1]))) * (arr_13 [i_1] [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 1])));
                        var_25 = (max((((arr_4 [i_0 - 1]) ? 3842315030 : (arr_4 [i_0 + 1]))), (~var_10)));
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        arr_18 [i_5] [i_5] = ((((((((0 ? var_19 : var_17))) ? 3842315030 : var_17))) ? var_6 : ((((min(41, var_8))) << ((((var_15 ? -5929891402454596918 : var_13)) + 5929891402454596942))))));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    var_26 -= ((-var_15 ? (((min((max(var_8, var_7)), 109)))) : ((452652266 << (255 - 234)))));
                    arr_25 [18] [i_7] [i_5] = max((((min(16383, 43374)))), (max((((var_5 || (arr_15 [i_5] [i_6] [i_7] [i_5])))), (min(var_8, -622290064)))));
                    var_27 = (max(var_27, var_12));
                    arr_26 [16] [i_7] [i_7] [i_5] = (((!(((167815689463954643 ? var_4 : (arr_22 [i_5])))))));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_28 = ((((((arr_0 [i_6 - 1]) ? var_12 : (arr_0 [i_6 - 1])))) ? ((max(var_11, (arr_0 [i_6 - 1])))) : (var_6 != var_13)));
                                var_29 -= (arr_29 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]);
                                var_30 &= min(203, (max((((arr_28 [i_5]) ? var_2 : var_18)), (var_7 >= var_4))));
                                var_31 = (((((arr_8 [i_8 - 1] [i_6 - 1]) + 4294967292)) + (((min((arr_31 [i_7] [i_8 - 2] [i_8] [i_8] [i_7]), var_11))))));
                                arr_32 [i_5] [i_7] = (((min(var_9, 107423336950914239)) / (((arr_29 [i_5] [i_6] [i_6 - 1] [12] [i_8 + 1] [i_8]) * 1))));
                            }
                        }
                    }
                }
            }
        }
        arr_33 [i_5] = ((var_18 ? 2126144466 : (((-2378 ? (arr_6 [i_5] [i_5]) : var_17)))));
    }
    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {
        var_32 -= (arr_20 [i_10] [i_10] [i_10]);
        arr_36 [i_10] = ((var_2 ? var_9 : ((max(52, 2126144466)))));
    }
    for (int i_11 = 2; i_11 < 21;i_11 += 1) /* same iter space */
    {
        arr_41 [i_11 + 1] = (((((((var_14 ? var_11 : var_5))) ? (var_1 >> 0) : ((var_15 ? var_7 : var_1)))) + var_19));
        var_33 -= (!var_13);
    }
    for (int i_12 = 2; i_12 < 21;i_12 += 1) /* same iter space */
    {

        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            var_34 -= (arr_11 [i_13] [i_13] [i_13] [i_12 + 1] [i_12] [i_12]);
            arr_48 [12] &= ((((1 | var_9) != (~var_15))));
        }
        var_35 = 3794342396;
    }
    #pragma endscop
}
