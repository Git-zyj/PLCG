/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_13 *= (min((((var_0 + 9223372036854775807) >> (var_10 - 8253))), var_2));
        arr_3 [i_0] = (((var_8 | var_5) ? ((((var_7 && var_10) || ((max(526410404285636293, 0)))))) : (arr_2 [i_0 - 1] [i_0])));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_14 = var_5;
        var_15 *= ((~((95 ? (!var_1) : (((!(arr_6 [i_1] [i_1]))))))));
        arr_8 [i_1] &= (max((((max((arr_6 [i_1] [7]), var_5)))), ((((((arr_0 [i_1] [i_1]) & (arr_4 [i_1])))) ? (arr_0 [i_1] [i_1]) : (24 | 14336736242783534987)))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = ((((var_4 || (arr_9 [i_2] [i_2]))) ? var_1 : (((((max(-3410, 1048575)) <= (((179 ? 78 : 40261)))))))));
        arr_12 [i_2] [i_2] = (max(((var_4 ? 166 : ((179 | (arr_10 [i_2]))))), (arr_10 [i_2])));
    }
    var_16 = var_3;
    var_17 = ((var_12 == (~var_8)));
    #pragma endscop
}
