/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_0, ((var_5 ^ (var_9 >> var_5)))));
    var_11 = ((((((var_9 ? ((min(var_2, 11667))) : var_0)) + 2147483647)) << (var_9 - 14883)));
    var_12 = (var_3 ^ var_1);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (min((((arr_3 [i_0]) ^ var_9)), (((arr_2 [i_0] [i_0]) ^ (arr_1 [i_0])))));
        arr_5 [i_0] = (((var_6 ^ var_4) ? ((((arr_3 [i_0]) < 2302015938))) : (((arr_1 [i_0]) ? 1 : (arr_1 [i_0])))));
        var_13 -= (min((var_0 + var_6), ((2302015938 ? (arr_1 [i_0]) : var_2))));
    }
    #pragma endscop
}
