/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= 10634;
    var_13 = (min(var_13, var_7));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 -= 32768;
        arr_3 [i_0] = (min((((-(var_10 ^ 32771)))), 151578424670326740));
    }
    var_15 = ((var_11 < ((13524 ? -10650 : (var_6 >= var_4)))));
    #pragma endscop
}
