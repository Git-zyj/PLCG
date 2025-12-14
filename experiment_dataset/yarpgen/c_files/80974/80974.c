/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_3 [9] = ((-((~(1 / 17)))));
        arr_4 [14] [i_0] = (-((~(min(var_2, var_4)))));
        var_11 = var_7;
        var_12 = ((((~(max(27, var_6)))) ^ (var_9 <= 65524)));
    }
    var_13 = ((112 ? var_10 : 65519));
    var_14 = var_9;
    var_15 = (!var_3);
    #pragma endscop
}
