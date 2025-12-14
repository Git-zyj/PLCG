/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_15 = (((arr_0 [i_0 + 1] [i_0 - 1]) ? (((arr_1 [i_0]) ^ (arr_1 [i_0]))) : -512));
        arr_2 [i_0] = (min((max((arr_0 [i_0 + 1] [i_0 + 1]), 31895)), (max(var_10, (arr_0 [i_0 - 1] [i_0 - 1])))));
        var_16 = var_13;
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_5 [i_1] = (((((min(-32754, 255)) ? (((arr_0 [i_1] [i_1]) - var_11)) : (-1 - -10588)))));
        arr_6 [i_1] [10] &= 152;
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_17 += (max((arr_8 [i_2]), (--234)));
        var_18 ^= ((((min((arr_1 [i_2]), (((arr_1 [i_2]) ? (arr_8 [12]) : var_3))))) ? (((!((max(var_3, 82)))))) : (max((((arr_1 [i_2]) ? (arr_1 [i_2]) : var_13)), 130))));
        arr_9 [8] = (max((82 ^ -20483), (arr_7 [i_2] [i_2])));
        var_19 *= ((var_7 ? (min(((~(arr_7 [i_2] [i_2]))), (((arr_0 [i_2] [i_2]) ? 29 : var_10)))) : ((max((arr_0 [i_2] [1]), -350)))));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [1] |= ((!(((((min(var_7, (arr_11 [i_3] [i_3])))) | var_4)))));
        arr_13 [14] [i_3] = ((-(arr_8 [4])));
        arr_14 [1] [i_3] = (arr_0 [i_3] [i_3]);
        var_20 += 3284;
    }
    var_21 = var_12;
    var_22 = var_13;
    var_23 *= (max((((var_10 <= 82) << (((var_13 % var_6) - 63)))), var_4));
    #pragma endscop
}
