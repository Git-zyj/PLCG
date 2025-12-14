/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = (((((!(((1129662548 & (arr_0 [i_0] [i_0]))))))) * ((var_11 / (arr_1 [i_0] [i_0])))));
        arr_2 [i_0] = ((((max(((4160749568 ? var_11 : 4160749568)), ((((arr_0 [i_0] [i_0]) ? 0 : (arr_1 [i_0] [i_0]))))))) | (((((arr_1 [i_0] [i_0]) && var_3)) ? (arr_1 [i_0] [i_0]) : (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))))));
        var_16 = ((-5792554202777314980 > (arr_1 [i_0] [i_0])));
        var_17 = (max(4160749568, 134217733));
    }
    var_18 = var_11;
    var_19 = max(5792554202777314980, 255);
    #pragma endscop
}
