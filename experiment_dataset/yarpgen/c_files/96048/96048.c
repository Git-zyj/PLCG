/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_12 += ((((3 ? -23410 : -23387))) ? var_3 : (!-23372));
        var_13 = ((-215150753 ? 7470023098157693154 : -67));
        arr_3 [i_0] = -12214;
        var_14 = ((min(var_5, (-23375 % -6))));
    }
    var_15 = ((((var_1 ? var_2 : var_2)) ^ var_8));
    #pragma endscop
}
