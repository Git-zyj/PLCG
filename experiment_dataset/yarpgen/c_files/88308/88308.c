/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = var_13;
                arr_6 [i_0] = ((((max((max(var_14, (arr_1 [i_0]))), (var_11 && var_10)))) ? var_3 : (((min(1200, 1))))));
            }
        }
    }
    var_16 *= (((min((39474 / var_4), (var_15 % 7))) == var_10));
    var_17 |= var_13;
    #pragma endscop
}
