/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;
    var_19 ^= (var_9 % var_10);

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_20 = (arr_2 [i_0]);
        var_21 = (max(var_21, var_0));
        var_22 = (~(((arr_3 [i_0 - 1] [i_0 - 1]) ^ (arr_3 [i_0] [i_0]))));
        arr_4 [i_0] |= ((4107082284 ? 0 : 820362469));
        arr_5 [i_0] [i_0] = (arr_3 [i_0] [i_0]);
    }
    for (int i_1 = 3; i_1 < 8;i_1 += 1)
    {
        var_23 = (max(var_23, (arr_0 [i_1])));
        var_24 |= (min(((((((var_4 && (arr_3 [i_1] [i_1])))) > (arr_1 [i_1 - 1])))), ((~((~(arr_3 [i_1] [i_1])))))));
        arr_10 [i_1] = (((min(1940190648, (arr_0 [i_1])))));
    }
    #pragma endscop
}
