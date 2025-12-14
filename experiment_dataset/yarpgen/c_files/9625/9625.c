/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (var_8 < var_0)));
    var_12 = (var_8 && (((2876108177 ? (1893548881 | 53617) : (92 ^ 108)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = ((-((88 ? (arr_2 [i_0]) : (arr_0 [4])))));
        arr_3 [i_0] = (((((~(arr_0 [i_0])))) ? (((arr_2 [i_0]) ? ((2795894598695233862 << (4224519393 - 4224519393))) : (~70447889))) : (max((arr_2 [i_0]), var_2))));
        var_14 ^= (((max((max(var_2, -105)), (53612 | var_3))) | ((((arr_2 [i_0]) ? (min(24, 536870911)) : (arr_1 [i_0] [i_0]))))));
        var_15 = (((var_9 / var_6) ? (min((min(-389052835, (arr_2 [i_0]))), (((arr_0 [i_0]) ? 1077339782 : var_10)))) : (min((arr_2 [i_0]), (max(var_9, (arr_1 [11] [11])))))));
    }
    for (int i_1 = 2; i_1 < 7;i_1 += 1)
    {
        var_16 ^= ((4294967295 ? ((((10042 ? (arr_2 [i_1]) : var_1)) ^ (~var_2))) : ((((26 ? (arr_1 [6] [i_1 - 2]) : (arr_2 [5])))))));
        arr_6 [i_1] = 53618;

        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            var_17 -= (max(((47 ? (arr_1 [12] [i_1]) : -4294967295)), (max((arr_2 [i_2 + 1]), ((-(arr_1 [5] [i_1])))))));
            var_18 = (((((max((arr_1 [i_1 - 2] [i_2 - 2]), -39)))) ? (max((arr_0 [0]), ((21 ? (arr_5 [i_1 - 2] [8]) : 119)))) : 0));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_19 ^= arr_8 [i_1] [6] [i_1 + 3];
            var_20 &= (arr_4 [2]);
        }
        var_21 = ((max((((arr_11 [3]) > 4224519406)), ((var_4 && (arr_2 [i_1 + 3]))))));
        arr_12 [i_1] = (min(((((arr_0 [i_1]) ? (((max(var_3, 24)))) : 26))), (arr_1 [i_1 + 3] [i_1 - 1])));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_15 [i_4] = max((((389052858 ? 0 : 25885))), ((0 ? ((4294967295 ? 1268033043 : 18)) : (arr_2 [i_4]))));
        arr_16 [i_4] [0] = (max((max((max(-120, var_1)), var_10)), ((max((arr_2 [i_4]), var_6)))));
    }
    var_22 = (min(var_1, (min((var_6 ^ var_1), 5128699668308227636))));
    #pragma endscop
}
