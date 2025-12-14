/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_15 = (min((((arr_1 [i_0 - 1]) ? 253 : (arr_0 [i_0]))), (max((min(var_1, (arr_1 [i_0]))), ((min(13, (arr_1 [i_0]))))))));
        arr_2 [i_0] = var_7;
    }
    var_16 = (max(((~(!var_13))), var_0));
    #pragma endscop
}
