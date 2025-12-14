/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_5 << (var_6 - 19700)));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_21 = 688628684;
        var_22 = (((arr_2 [i_0]) == ((min((arr_2 [i_0]), (arr_2 [i_0]))))));
    }
    #pragma endscop
}
