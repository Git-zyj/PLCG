/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0] |= var_1;
        var_17 |= ((-(arr_1 [i_0] [i_0])));
    }
    var_18 = (max(var_18, (((~(-986046943 && 12751633129108166273))))));
    var_19 = (max((((var_0 <= var_0) / var_2)), var_1));
    #pragma endscop
}
