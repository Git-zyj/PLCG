/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((min(var_12, ((min(71, 181))))) & ((((max((-2147483647 - 1), var_13)))))));
    var_15 = var_0;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (min(0, 18446744073709551613));
        arr_3 [i_0] [i_0] = (min((((min(-1, (arr_1 [i_0]))) + (max((arr_0 [i_0]), var_0)))), (min((max(var_13, 3759811693533855727)), ((max(65533, var_3)))))));
        var_16 |= (1 >> 17989);
        arr_4 [4] [4] = -7303503984442907937;
    }
    #pragma endscop
}
