/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 149;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = max((arr_0 [i_0]), ((min((arr_1 [i_0]), ((var_1 ? (arr_1 [i_0]) : (arr_1 [i_0])))))));
        arr_3 [i_0] [i_0] &= ((7895675542272257989 > ((((-var_1 + 2147483647) >> ((((arr_0 [i_0]) == var_1))))))));
        var_17 = (((((arr_1 [i_0]) | ((min(var_0, 24773)))))) >= ((-((var_13 ? 11989 : 7895675542272257990)))));
    }
    var_18 = var_2;
    #pragma endscop
}
