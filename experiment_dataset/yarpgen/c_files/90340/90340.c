/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (((((max(2114683491, var_0)) % (((1 ? var_2 : var_15))))) << (1265003531459692700 - 1265003531459692677)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = (((((max(var_1, var_10)) ? 22 : (((arr_1 [i_0] [i_0]) << (7388695536988489392 - 7388695536988489387)))))));
                var_18 = (arr_0 [i_1] [i_1]);
            }
        }
    }
    var_19 = ((-(~var_2)));
    var_20 = 3614638750043137493;
    var_21 = -2113793316;
    #pragma endscop
}
