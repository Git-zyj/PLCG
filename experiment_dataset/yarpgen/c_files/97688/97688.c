/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_16;
    var_21 = (min(var_21, (((var_0 > ((~(min(1, var_12)))))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_22 &= 1;
        arr_2 [1] |= (!-152229042);
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_23 = (max((1 != 1), ((!(arr_3 [i_1 + 2])))));
        var_24 = ((1 ? 1 : 593544425));
    }
    #pragma endscop
}
