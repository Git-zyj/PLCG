/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_16;
    var_19 = (((min(((min(35857, var_11))), var_7)) == (min((~2859633275705623285), -255))));
    var_20 = ((((min((79 < 4294967293), var_12))) < ((-((min(243, var_1)))))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_21 = (max(((~(arr_1 [i_0 + 1]))), (-6 && 0)));
        arr_3 [i_0] = ((+((((~32749) >= -var_13)))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_22 += ((((!((max(29676, 0)))))) == (min(-6, 25597)));
        var_23 = (min(var_23, (((~(min(0, 215)))))));
    }
    #pragma endscop
}
