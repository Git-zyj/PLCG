/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))) >= (204 & 1)));
        var_20 = ((-(min((arr_1 [i_0]), (max(8, -756267799))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_9 [i_2] [i_2] [0] = (((arr_7 [i_2]) ? (arr_7 [i_2]) : var_15));
            var_21 = ((((((arr_1 [i_2]) & (arr_4 [3] [i_1])))) >= (arr_8 [i_2])));
        }
        for (int i_3 = 3; i_3 < 8;i_3 += 1)
        {
            arr_12 [i_1] [i_3] = (((((var_7 - (arr_8 [i_3])))) ? (-2 * var_1) : (((var_14 ? (arr_5 [i_3]) : var_14)))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_20 [i_1] [i_3] [i_4] [i_5] = ((var_0 ? ((var_13 ? (arr_6 [i_3]) : (arr_19 [8] [i_4] [i_3] [8] [8] [8]))) : (arr_7 [i_3])));
                        var_22 = ((var_18 << (var_17 + 668149224)));
                        var_23 = ((-((var_8 ? (arr_13 [i_3] [5] [i_4] [i_5]) : 130816))));
                    }
                }
            }
            var_24 ^= ((((var_10 + 2147483647) << (((arr_0 [i_1] [i_3]) - 5594)))) != (((arr_7 [4]) << (((var_11 + 53) - 15)))));
        }
        var_25 = (min(var_25, ((((arr_13 [2] [8] [2] [0]) << (((((arr_16 [i_1] [i_1]) ? var_9 : (arr_19 [i_1] [i_1] [i_1] [3] [4] [1]))) - 6496)))))));
        var_26 = (min(var_26, (arr_0 [i_1] [i_1])));
        var_27 = var_2;
    }
    var_28 = ((-(((((var_6 ? var_4 : var_14))) ? 130786 : ((min(var_16, var_14)))))));
    var_29 = (min(var_29, ((var_3 != ((((((var_14 ? var_11 : var_12))) ? ((var_13 >> (var_0 - 16477196862158954722))) : ((max(var_14, var_17))))))))));
    var_30 ^= (((min(var_18, ((130816 ? var_16 : 28)))) - var_8));
    #pragma endscop
}
