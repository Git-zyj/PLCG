/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (!var_3)));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (min(var_9, 2481497684));
        arr_4 [i_0] = (1 ? 6164843768595582584 : (-9223372036854775807 - 1));
    }
    #pragma endscop
}
