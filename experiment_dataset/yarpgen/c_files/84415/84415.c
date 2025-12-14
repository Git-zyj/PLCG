/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_17 = (max(var_17, ((max((arr_0 [0]), (((max(var_0, var_14)))))))));
        arr_2 [i_0] = (((min(249, 462139118)) > 15484));
        arr_3 [i_0] = (((arr_0 [i_0]) - var_9));
    }
    var_18 = 2970571039;
    var_19 &= (max(2970571026, 3518101810));
    #pragma endscop
}
