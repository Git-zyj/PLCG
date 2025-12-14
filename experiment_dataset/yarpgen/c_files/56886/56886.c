/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(49509, (-32767 - 1)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = -27761;
        arr_3 [i_0] [i_0] = 127;
        var_12 = (max(var_12, 127));
    }
    var_13 = (-32767 - 1);
    #pragma endscop
}
