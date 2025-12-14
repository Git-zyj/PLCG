/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;
    var_19 = ((((((((32767 << (-539651178 + 539651180)))) ? 1 : (((var_3 ? var_3 : var_13)))))) ? (((var_17 * (~var_5)))) : (((var_5 + var_14) ? -var_11 : (min(var_7, var_9))))));
    var_20 = var_1;
    var_21 = ((var_1 > ((var_8 - ((var_3 ? -4355 : 336804828))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((97 * ((max(var_11, (arr_5 [i_1] [i_0] [i_0 - 4]))))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_0] = (min((!-1617188567397530784), (var_15 && var_14)));
                        var_22 = (22986 * 42550);
                        arr_15 [7] [i_1] [i_2] [i_0] [i_3] = ((-((-(((var_4 || (arr_1 [i_0]))))))));
                        arr_16 [i_0] = ((((arr_6 [i_0] [i_0 - 2]) ? (arr_8 [i_0 - 3] [5]) : (arr_12 [i_0 - 4] [i_0 - 1] [i_0]))));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_23 = (((((arr_18 [i_0]) ? -var_8 : (arr_5 [i_0] [i_0] [i_0]))) < ((((max((arr_2 [i_0]), var_6)) > var_15)))));
                        arr_19 [10] [i_0] [i_1] [i_4] = (((min((max(var_9, var_6)), (((var_4 ? -71 : -70)))))) ? var_7 : ((998878005518598462 ? (min((arr_13 [i_0 - 2] [i_0] [i_2] [i_4]), (arr_0 [i_0]))) : (((var_5 ? var_15 : var_3))))));
                        var_24 = (min(var_24, var_0));
                        arr_20 [i_0] [10] [i_2] [i_0] [i_1] [i_0] = (((~-2147483635) >> (((min(-25500, ((~(arr_6 [i_2] [i_1]))))) + 25514))));
                    }
                    for (int i_5 = 2; i_5 < 7;i_5 += 1)
                    {
                        arr_25 [i_0] [i_0] = (var_4 * var_7);
                        arr_26 [i_5] [i_0] [i_2] [i_0] [i_0 - 3] = (((-0 & ((var_6 ? var_7 : 44095)))));
                        var_25 = ((!(((arr_6 [i_0 + 1] [i_1]) || ((var_13 && (arr_4 [i_1])))))));
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        arr_29 [i_0] = var_5;
                        arr_30 [i_2] [3] [i_0] [i_6] = (((!(var_1 > var_6))));
                        arr_31 [i_0] [i_1] [i_1] [i_6] = (~4354);
                    }
                    arr_32 [i_0] [i_2] [8] [i_0] = (arr_23 [i_0] [i_1] [i_2] [i_2] [i_0 - 3] [i_2]);
                }
                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    var_26 -= ((((!(arr_24 [i_0 - 1]))) ? (max(252, -539651178)) : ((~(!var_15)))));
                    arr_35 [i_0] = (arr_27 [i_0] [i_1] [i_7]);
                    arr_36 [i_0] [i_0] [i_7 - 1] = (max(((((((arr_6 [i_0] [i_1]) ? 254 : var_2))) + ((var_16 ? (arr_13 [i_0 - 3] [i_0] [9] [i_7]) : var_9)))), (((!(!4379))))));
                }
            }
        }
    }
    #pragma endscop
}
