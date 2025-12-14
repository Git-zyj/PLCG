/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((+(((2676390505416162403 > var_11) ^ ((-3080508194688081359 ? 34565 : (-127 - 1)))))));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_13 ^= -4494571031930620384;
        var_14 = (min(54936, (arr_1 [i_0] [i_0 + 1])));
        var_15 = (min(var_15, ((max(((((arr_3 [14]) < var_11))), (arr_3 [0]))))));
        var_16 = -1024183776;
        var_17 = (((65535 ? 16737456570864079159 : 0)));
    }
    var_18 = var_5;
    #pragma endscop
}
