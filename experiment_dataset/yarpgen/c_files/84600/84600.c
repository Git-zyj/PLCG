/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((1246159717 ? -22019 : 3205778890468305642));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [7] = ((max(var_2, (var_15 && var_2))));
        arr_4 [i_0] [i_0] |= (var_8 + 1152921504606846975);
    }
    #pragma endscop
}
