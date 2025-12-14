/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= 7511673296013250895;
    var_17 = (max(var_6, (5251814310131580493 || var_5)));
    var_18 = (max(var_18, ((max(var_1, 12)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = 5667108800606312126;
        var_20 = ((((~(arr_2 [i_0]))) ^ 274012349));
        arr_3 [i_0] [18] = (max((max((((arr_2 [i_0]) | 0)), ((max((arr_1 [i_0]), (arr_1 [i_0])))))), ((((!var_15) <= (arr_2 [2]))))));
    }
    #pragma endscop
}
