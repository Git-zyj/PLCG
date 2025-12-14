/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((246726648 ? 773263475 : 39))) || (16352 | 4201914305)));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_15 = (arr_2 [i_0]);
        arr_3 [i_0] = (arr_0 [i_0 - 1]);
        var_16 = 20233;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_6 [10] = (min(1218753812, 858549440));
        var_17 = (129 * 62754594);
    }
    #pragma endscop
}
