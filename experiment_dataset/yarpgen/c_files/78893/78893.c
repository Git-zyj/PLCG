/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((!(~32765)))) % 8388607));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = (min(var_17, 1152921504606584832));
        var_18 += (var_7 >= -34);
        var_19 = (arr_2 [1]);
        var_20 -= (((!8388595) > (((var_9 ? (arr_1 [i_0] [i_0]) : 0)))));
        var_21 = (min(var_21, ((((((!(arr_0 [i_0] [i_0])))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_22 = (min(var_22, ((((6325072085631784098 / 32759) ? (7 / 65336) : (~1))))));
        var_23 *= ((!-8388604) + (!201));
    }
    #pragma endscop
}
