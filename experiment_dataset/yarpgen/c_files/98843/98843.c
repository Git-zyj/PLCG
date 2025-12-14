/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= ((((min(((65535 ? var_11 : 52730)), ((max(-1227306873, 1199313243)))))) ? (max(var_14, 0)) : 0));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((~(arr_2 [i_0] [i_1]))))));
                var_18 *= ((!(((((min(var_11, -1734416826))) ? 4294967295 : (arr_1 [i_0] [i_1]))))));
                var_19 = (max((arr_3 [i_0 + 2] [i_0]), ((1 ? (arr_3 [i_0 + 1] [i_0]) : (arr_3 [i_0 + 2] [i_0])))));
            }
        }
    }
    #pragma endscop
}
