/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (max((((1 ? 33591 : 38268))), (min(((27267 ? var_11 : 38272)), 10062))));
    var_15 = (+-96);
    var_16 = (-var_7 % (max((max(var_6, var_8)), 1)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = ((((-1638609716839175653 ? (arr_0 [i_0]) : 224)) == ((min(255, 1)))));
        arr_2 [i_0] [i_0] = (27260 % -96);
    }
    #pragma endscop
}
