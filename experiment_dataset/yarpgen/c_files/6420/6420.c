/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = ((1013114851 > ((max(3057, (!-4082407539838119240))))));
        arr_3 [i_0] [i_0] |= min(((62471 >> (-8102 + 8128))), (max(3057, 1)));
    }
    var_18 = (+-1);
    #pragma endscop
}
