/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_1 && var_5) >> (min((~var_7), var_0))));
    var_12 = (min(var_12, var_2));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = (((((24 ? (var_3 && var_2) : ((((arr_0 [i_0]) || -1)))))) <= ((+(((arr_1 [i_0]) ? 18446744073709551615 : var_4))))));
        var_14 = (((((arr_0 [i_0]) + 18)) ^ var_7));
        var_15 += (min((min(-var_10, (((arr_0 [i_0]) - var_2)))), ((((-(arr_2 [i_0]))) | ((-1 ? 48476 : var_2))))));
        var_16 &= (min((min(1, 17060)), -1736255299));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        arr_6 [i_1] = ((((-(((arr_2 [i_1]) ? (arr_1 [i_1]) : 125))))) ? var_9 : (((var_10 >= (1 | var_4)))));
        var_17 = (arr_5 [i_1]);
        var_18 = ((((min((arr_2 [i_1 - 1]), var_5))) & (((3 > (arr_2 [i_1 - 1]))))));
    }
    var_19 = (~255);
    #pragma endscop
}
