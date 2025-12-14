/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (!var_3);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = (max((min(160, (arr_2 [i_0] [i_0]))), var_11));
        arr_3 [i_0] [i_0] = var_2;
    }
    var_14 ^= (((var_0 & var_6) & var_8));
    var_15 = (max(89, ((255 >> (var_8 + 25611)))));
    #pragma endscop
}
