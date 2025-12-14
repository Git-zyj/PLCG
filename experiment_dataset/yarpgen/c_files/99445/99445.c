/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] = (arr_3 [i_0] [i_0]);
                var_19 = ((((max((~var_12), (arr_0 [i_0])))) ? (max(1, ((~(arr_5 [i_0] [i_0]))))) : 1));
            }
        }
    }
    var_20 = ((~(((((1 ? var_16 : 1))) ? 0 : var_0))));
    #pragma endscop
}
