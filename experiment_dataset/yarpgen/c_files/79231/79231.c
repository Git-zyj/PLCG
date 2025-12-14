/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += ((((var_3 ? ((var_1 ? var_5 : var_14)) : ((var_3 ? var_5 : 23175)))) < (23175 * var_3)));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_3 [14] = ((~(arr_1 [i_0])));
        var_16 = ((~(arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_17 = (min(((((arr_1 [i_1]) / (arr_1 [i_1])))), var_9));
        arr_8 [i_1] = var_4;
        var_18 = ((var_9 ? ((var_5 ? ((min(23175, 126))) : 26666)) : ((((arr_2 [i_1]) == (((arr_5 [i_1]) ? (arr_5 [i_1]) : var_5)))))));
        var_19 = (max(var_19, var_6));
    }
    #pragma endscop
}
