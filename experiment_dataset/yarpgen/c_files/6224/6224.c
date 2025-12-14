/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (((-((1982056488 ? var_3 : (arr_2 [i_0] [i_0]))))));
        var_11 -= ((var_9 || (((-(arr_2 [i_0] [i_0]))))));
        arr_4 [i_0] [10] |= (15173452201213776380 || 0);
    }
    for (int i_1 = 3; i_1 < 7;i_1 += 1)
    {
        arr_8 [i_1] = 955763691;
        arr_9 [i_1] = ((((-(arr_5 [i_1 + 3]))) + (arr_5 [i_1 + 2])));
        arr_10 [i_1] [1] = (max(((-((5338687347923399458 ? 57157 : (arr_6 [i_1 - 2]))))), (((0 || ((((var_8 + 2147483647) >> (((arr_7 [i_1]) - 17168))))))))));
        arr_11 [i_1] = (((((arr_0 [i_1 + 2]) / (arr_7 [i_1 + 2])))) ? (((var_8 ? (arr_0 [i_1 - 2]) : (arr_0 [i_1])))) : ((3339203605 >> (((arr_0 [i_1 - 2]) - 11067)))));
    }
    var_12 ^= ((var_4 ? var_6 : var_1));
    #pragma endscop
}
