/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (max(((1675190069 ? 1675190048 : 1675190069)), (arr_2 [i_0 + 1] [i_0 - 1])));
        var_16 = (min(var_16, ((max((!65535), var_8)))));
        arr_5 [i_0] [i_0] = (arr_1 [i_0 + 2]);
    }
    var_17 *= (max((~var_2), (max(var_14, var_15))));
    #pragma endscop
}
