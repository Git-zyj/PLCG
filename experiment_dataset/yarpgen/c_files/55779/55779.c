/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~((~(var_0 <= 2147483647)))));
    var_20 = -2147483632;
    var_21 = (((((-2147483632 ? -22514 : var_14))) ? (!22514) : (min(var_11, -2147483632))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_22 *= (~-22501);
        arr_2 [i_0] [i_0] = 65535;
    }
    #pragma endscop
}
