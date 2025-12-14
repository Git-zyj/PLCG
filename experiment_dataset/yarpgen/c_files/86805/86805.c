/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= -1;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((var_8 & ((4294967295 | (0 | -105)))));
        arr_3 [i_0] = ((~(((arr_0 [i_0]) | (arr_0 [i_0])))));
    }
    var_12 = (min(var_12, var_4));
    #pragma endscop
}
