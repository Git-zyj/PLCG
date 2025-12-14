/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((((((~8157) ? -0 : 65504))) ? 4162462366 : 1));
        var_11 = (max(var_11, (((+(((arr_1 [i_0] [i_0]) ? (((-(arr_1 [i_0] [i_0])))) : (max(3269829912, 1)))))))));
        var_12 = var_2;
    }
    var_13 = (max(var_13, 255));
    #pragma endscop
}
