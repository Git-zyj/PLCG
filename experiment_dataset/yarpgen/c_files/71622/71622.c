/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    var_13 = 109;
    var_14 = ((-((-5406465301245339342 ? 130 : 268173312))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 ^= (((((arr_1 [i_0]) / (arr_0 [i_0] [i_0]))) ^ 18484));
                var_16 -= 119;
                arr_4 [i_0] [i_1] = ((var_6 ? (((1824458276 ? (arr_3 [i_1]) : 630643930))) : ((-667840242 ? (max(668613496725135203, 17778130576984416407)) : (((667840252 ? (arr_1 [i_0]) : 1)))))));
            }
        }
    }
    #pragma endscop
}
