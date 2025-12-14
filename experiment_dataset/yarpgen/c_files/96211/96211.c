/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0 - 2] [i_0] = ((((min((var_8 + var_3), (max((arr_5 [i_0] [i_0 - 2] [i_0 - 3]), var_0))))) ? (3405411633058122149 * 2115457053) : 4294967295));
                var_10 = ((var_2 ? (((((max((arr_3 [i_0] [i_0]), var_8)))) ^ var_6)) : (arr_2 [i_0])));
                arr_7 [i_0 - 1] [i_0] [i_1] = ((-(((((var_4 ? (arr_1 [i_0]) : var_0))) ? ((min((arr_3 [i_0] [i_0]), 4294967280))) : var_7))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 7;i_2 += 1)
    {
        var_11 = (min(var_4, var_1));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    arr_16 [0] [i_2] = ((min(var_7, var_4)));

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        arr_19 [i_2] [i_2] [i_2 - 1] [i_2] = ((min(var_9, var_0)));
                        var_12 -= var_8;
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        arr_22 [i_2] [i_3] [i_3 - 2] [i_4] [i_6] = ((((((((18446744073709551615 ? (arr_0 [1] [i_3 - 2]) : var_5))) ? (min(16, (arr_5 [i_2] [8] [8]))) : ((var_4 ? var_2 : var_7))))) ? 0 : ((((((4294967284 ? (arr_12 [i_2] [3] [i_6]) : var_2)) != var_2))))));
                        var_13 = ((-((var_8 ? ((var_6 ^ (arr_3 [i_2] [i_2]))) : 4294967288))));
                    }
                    arr_23 [4] [3] [i_2] = (max(((-31855 ? var_1 : (arr_8 [i_2 + 1]))), ((((arr_17 [i_4] [i_4] [i_2] [i_2]) || (arr_1 [i_4]))))));
                }
            }
        }
        arr_24 [i_2] = (max((((arr_10 [i_2] [i_2 + 3] [i_2]) ? ((1984 ? (arr_13 [i_2] [i_2]) : (arr_18 [i_2] [i_2] [i_2]))) : (((var_2 | (arr_3 [i_2] [i_2])))))), (((13 ? -var_6 : (arr_11 [i_2 + 1]))))));

        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            var_14 = (max(var_14, (arr_25 [6])));
            arr_28 [i_2] = ((+((max((arr_14 [i_2] [i_2] [i_2] [i_2]), var_4)))));
        }
    }
    var_15 = ((((((((30660 << (var_7 - 731308231677212896)))) ? var_4 : (var_8 || var_2)))) ? (max(var_9, (((var_6 ? var_5 : var_3))))) : var_2));
    #pragma endscop
}
