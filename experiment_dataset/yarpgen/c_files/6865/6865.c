/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [15] [6] &= (max(((((var_14 ? (arr_0 [1]) : (arr_3 [1]))) * (arr_1 [i_0]))), (((197 ? 4294967295 : (((58 <= (arr_3 [5])))))))));
        var_16 -= (min(((((arr_1 [1]) > (((arr_2 [i_0]) ^ (arr_0 [i_0])))))), (((arr_2 [i_0]) ^ var_10))));
        var_17 = var_14;
    }
    var_18 += (max((((197 - ((max(1, 200)))))), var_5));
    var_19 = var_0;
    #pragma endscop
}
