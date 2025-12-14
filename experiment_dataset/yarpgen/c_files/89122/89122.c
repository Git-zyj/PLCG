/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((!1) && ((max((min(var_8, var_9)), var_9)))));

    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        var_11 = (((min(var_6, var_1)) + (((1 ? -56 : (((-309307677 ? 1 : 121))))))));
        arr_3 [i_0] = ((-(arr_2 [i_0] [5])));
        arr_4 [i_0] = 1;
    }
    #pragma endscop
}
