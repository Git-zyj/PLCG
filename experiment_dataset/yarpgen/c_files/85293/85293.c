/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_16 = ((((((((-(arr_12 [i_0] [i_1] [i_3] [i_0])))) ? var_8 : ((min(52268, var_2)))))) ? (arr_7 [i_0] [i_0] [i_0]) : var_15));
                        var_17 = ((((((arr_11 [i_3] [i_1 - 2]) ? (arr_10 [i_1 - 2] [i_1 - 2] [i_1] [3]) : (arr_10 [i_1 + 1] [i_1 - 2] [i_1] [8])))) ? (((arr_1 [i_1 - 1] [i_3 + 1]) >> (var_13 - 28848))) : ((((arr_9 [i_1 + 1] [i_1] [i_1 - 1]) ? (arr_9 [i_1 + 1] [i_1 - 1] [i_1 - 1]) : (arr_9 [i_1 + 1] [2] [i_1 - 1]))))));
                        var_18 = (((((min((arr_6 [i_0]), (arr_0 [i_0]))) ^ (arr_10 [i_3] [1] [i_3] [i_3 + 1]))) & (((max(52268, (65535 != 52268)))))));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_17 [i_4] [i_1 + 1] [i_2] [i_4] = (((((var_13 != (arr_15 [i_1 - 2] [i_1 + 2] [i_1] [i_1])))) - (((arr_11 [i_4] [i_1 + 1]) ? (arr_15 [1] [i_1 + 1] [i_1] [1]) : (arr_15 [i_1] [i_1 + 1] [i_1 + 1] [i_1])))));
                        var_19 = (((arr_12 [i_0] [i_1] [i_4] [i_4]) ? ((((((arr_8 [i_0] [i_0]) | (arr_1 [i_0] [3]))) <= ((((arr_4 [i_0]) ? (arr_4 [i_4]) : (arr_10 [i_0] [i_1] [i_2] [i_4]))))))) : (((arr_3 [i_1]) ? (arr_14 [i_4] [i_1 + 2] [i_1]) : 52268))));
                        var_20 = (min(var_20, (((((arr_8 [i_1 - 2] [i_1 - 1]) ? (arr_8 [i_1 - 2] [i_1 - 1]) : (arr_8 [i_1 - 2] [i_1 - 1])))))));
                        arr_18 [i_4] [i_1 - 1] [i_4] = ((+((((arr_8 [i_1 - 2] [i_1 + 2]) <= var_13)))));
                    }
                    var_21 = (arr_6 [i_0]);
                }
            }
        }
    }

    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        var_22 ^= 27708;
        var_23 = ((-(((max(37834, 37828))))));
        var_24 |= ((((min(((((arr_20 [i_5 + 1] [i_5 - 1]) != var_11))), (~3347846397)))) ? (((arr_20 [i_5] [i_5]) ? (arr_20 [i_5] [i_5 + 3]) : (~13268))) : (max((((arr_20 [i_5] [i_5]) | (arr_19 [i_5]))), (((arr_20 [i_5] [i_5]) ? var_12 : var_3))))));
    }
    var_25 ^= ((var_3 << (var_8 || var_6)));
    var_26 = (min(var_26, ((((var_6 ? ((var_6 >> (var_15 - 63))) : var_14))))));
    #pragma endscop
}
