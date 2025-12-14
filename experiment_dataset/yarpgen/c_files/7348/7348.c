/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= -1003353570;
    var_14 = (var_9 && var_10);
    var_15 |= (!var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = ((!((min((arr_1 [i_0] [i_1]), -5)))));
                arr_5 [i_0] [i_0] = ((~var_0) + (((arr_2 [i_0] [i_1] [i_1]) ? (((!(arr_3 [i_1])))) : ((((-2147483647 - 1) != var_5))))));
            }
        }
    }
    #pragma endscop
}
