/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_21 = ((((((arr_1 [i_1]) ? (arr_0 [i_1 - 1]) : var_1))) ? (arr_3 [i_1 - 1] [i_0 - 1] [i_0]) : var_18));
                var_22 = var_5;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_23 = ((((min(((-(arr_0 [i_2 + 1]))), ((min(var_0, var_15)))))) ? (arr_6 [i_0] [i_2] [i_0]) : ((((max((arr_5 [1] [1] [i_3]), (arr_5 [i_1 + 1] [i_1 + 1] [i_2 + 1])))) ? (min((arr_5 [i_1 + 1] [i_1] [9]), var_2)) : -79))));
                            var_24 |= ((+(((arr_10 [i_0] [i_0] [i_0] [i_0]) / ((-(arr_4 [4])))))));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 4; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_25 = (((-var_11 >= var_10) ? ((-(max(var_7, (arr_13 [i_4 - 4]))))) : (((max((arr_13 [i_4 - 1]), var_8))))));
        var_26 = (min((!var_14), ((((!(arr_12 [8]))) || (arr_14 [i_4 - 2])))));
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 17;i_6 += 1)
            {
                {
                    var_27 = (max(var_27, ((((arr_19 [4] [4]) > (arr_20 [i_5]))))));
                    var_28 = (min((((((var_7 ? 243 : (arr_12 [i_4 - 2])))) ? ((var_18 ? (arr_21 [i_5]) : 250)) : ((max(var_13, var_15))))), ((((var_15 && var_3) == ((min((arr_18 [i_4] [i_5 - 3] [4]), (arr_11 [0] [10])))))))));
                }
            }
        }
        var_29 |= (var_7 ? (arr_16 [i_4 - 2] [i_4 - 3]) : (((arr_20 [i_4]) ? (arr_20 [5]) : var_6)));
        var_30 = (((((arr_19 [i_4] [i_4]) && (arr_19 [i_4 - 3] [13])))));
    }
    /* vectorizable */
    for (int i_7 = 4; i_7 < 18;i_7 += 1) /* same iter space */
    {
        var_31 ^= (arr_16 [18] [i_7 - 1]);
        var_32 = (arr_22 [i_7 - 1] [i_7 - 1]);
        var_33 |= (arr_21 [i_7]);
        var_34 = ((~(((arr_25 [15]) ? (arr_23 [i_7]) : (arr_15 [i_7 + 1] [9])))));
    }
    for (int i_8 = 1; i_8 < 20;i_8 += 1)
    {
        var_35 = max(var_7, (((((var_5 / (arr_27 [10])))) ? (((var_8 ? 504 : var_14))) : (((arr_27 [10]) ? var_14 : (arr_26 [i_8]))))));
        var_36 *= ((!(arr_26 [i_8 + 1])));
        var_37 = (max(var_37, (((((arr_27 [0]) ^ (((var_16 + 9223372036854775807) >> (var_18 - 4202884303)))))))));
        var_38 = ((-(((((5611785181991100275 ? (arr_27 [i_8]) : var_5))) ? var_11 : (arr_27 [i_8])))));
        var_39 *= ((((max((var_17 >= var_12), ((var_13 / (arr_27 [10])))))) ? (!var_15) : (max(var_12, (arr_26 [i_8])))));
    }
    var_40 = -var_12;
    #pragma endscop
}
