/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = min(3554519029860102894, 1);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 |= 1;
        var_13 = 0;
        var_14 = (((arr_1 [i_0]) ? -1 : (arr_1 [4])));
        var_15 = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_5 [i_1] = ((1 ? 1 : 1));
        arr_6 [i_1] = 4251494018995533157;
    }
    var_16 -= (((min(1, -1048576))));
    var_17 = var_0;
    #pragma endscop
}
