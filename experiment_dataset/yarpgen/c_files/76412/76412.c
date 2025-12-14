/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (4439893213731025559 ? (!4439893213731025577) : 10090742533920954192);
    var_12 = ((((~((var_9 ? var_10 : var_4)))) % (((((0 | 1) && var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 *= (min(var_9, var_1));
                var_14 ^= (min((((var_2 ? var_2 : var_0))), (min(var_0, var_9))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            {
                var_15 = (((~var_7) < (var_8 & var_3)));
                var_16 = (max(((var_4 ? var_5 : var_1)), var_10));
            }
        }
    }
    #pragma endscop
}
