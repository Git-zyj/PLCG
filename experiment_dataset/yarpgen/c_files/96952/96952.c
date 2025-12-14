/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((((((var_3 ^ var_0) <= (((var_9 ? 6970 : var_16))))) ? (var_4 ^ var_14) : var_11)))));
    var_19 = (min(var_19, ((((49123 + var_15) ? var_8 : var_0)))));
    var_20 = (((((-(2305840810190438400 || 2566086089747206098)))) ? ((((var_10 != ((var_10 ? 13038574527805083203 : var_10)))))) : var_5));

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_21 -= ((13038574527805083203 >= (arr_2 [i_0 + 1])));
            var_22 = ((-(arr_2 [i_0 + 2])));
            var_23 = (var_15 ? (arr_2 [i_0 - 1]) : (((arr_2 [i_0 + 1]) ^ (arr_3 [i_0 + 2] [i_1]))));
        }
        arr_5 [i_0] = ((((((((1 ? 4140 : 13038574527805083207))) ? var_1 : 1))) ? ((+(((arr_2 [7]) ? -102 : 22334)))) : 13038574527805083203));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 11;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = (((1 ? var_1 : (arr_6 [i_2]))));
        arr_11 [i_2] = ((((arr_7 [2]) - 32767)));
    }
    for (int i_3 = 1; i_3 < 11;i_3 += 1) /* same iter space */
    {
        var_24 = (max(var_24, (((549755812864 && (((32767 ? (arr_1 [i_3 + 1] [i_3 + 1]) : ((var_11 ? (arr_15 [i_3] [11]) : var_13))))))))));
        var_25 = ((((arr_13 [i_3 + 1]) * (arr_13 [i_3 + 2]))) / 16154416368254223092);
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        var_26 = (max(var_26, (((-(arr_17 [i_4 + 1]))))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {
                        arr_25 [1] [i_5] [1] [i_6] = var_5;
                        var_27 = (max(var_27, var_4));
                        var_28 = (((((arr_16 [i_6]) > var_6))) > (-32767 - 1));
                    }
                }
            }
        }
        var_29 = ((-(((var_15 < (arr_20 [i_4] [i_4] [i_4] [i_4]))))));
    }
    #pragma endscop
}
