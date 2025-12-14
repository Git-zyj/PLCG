/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((~var_6), (~32767)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 = (!32762);
        arr_3 [i_0] = (4294967277 ? 16 : -4294967273);
        var_12 = (((((min((arr_1 [i_0]), (arr_1 [i_0]))))) > 15));
        var_13 = (22 && -32767);
    }
    #pragma endscop
}
