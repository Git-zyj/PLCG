/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (32760 <= 1);
        var_14 = (max(var_14, 2));
    }
    var_15 = var_13;
    var_16 = 3;
    var_17 = var_9;
    var_18 = (min((((var_10 >= (-95 || 9)))), var_4));
    #pragma endscop
}
