/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-(~262080)));
    var_21 = var_18;
    var_22 = var_18;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_23 = 1;
        var_24 = (max(var_24, ((((((arr_1 [i_0]) ? 3 : (arr_0 [i_0]))) < var_2)))));
        arr_4 [i_0] [i_0] = ((~(arr_2 [i_0])));
        var_25 ^= (min(((((!(arr_3 [i_0] [i_0]))))), -3));
    }
    #pragma endscop
}
