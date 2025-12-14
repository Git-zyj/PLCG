/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 ^= (min((max((arr_0 [i_0] [i_0]), (min((arr_2 [i_0] [1]), (arr_2 [i_0] [10]))))), (((!(arr_1 [i_0]))))));
        var_20 = (min(4294967295, 1370217875));
    }
    var_21 -= (((~var_13) ? -1370217875 : var_2));
    #pragma endscop
}
