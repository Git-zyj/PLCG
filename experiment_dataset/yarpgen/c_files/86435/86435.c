/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (!var_5);
    var_14 = var_10;

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0 + 3] [i_0] = -66;
        arr_4 [i_0] = ((var_8 * ((max((arr_2 [i_0 - 3]), (arr_2 [i_0 - 1]))))));
        var_15 = (max(var_15, -3195589640858508004));
    }
    var_16 = (((((0 ? ((max(var_5, (-32767 - 1)))) : var_0))) ? -16193266028291166543 : 4092));
    #pragma endscop
}
