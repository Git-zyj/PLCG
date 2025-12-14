/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [6] = (max((((((arr_0 [i_0]) == (arr_1 [i_0] [i_0]))) ? var_11 : (var_16 < var_11))), ((((((arr_0 [i_0]) << var_16)) == var_10)))));
        arr_3 [12] [i_0] = (max(var_12, (((((1 ? var_17 : 1))) ? -var_4 : var_10))));
    }
    var_19 = (((min(var_7, var_9)) % ((~((var_16 ? var_4 : 1))))));
    #pragma endscop
}
