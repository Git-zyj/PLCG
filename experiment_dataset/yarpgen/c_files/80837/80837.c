/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, (((-(((((arr_0 [i_0]) && var_6)) ? var_6 : ((var_5 ? 2040 : var_1)))))))));
                    arr_8 [i_0] [i_0] [i_0] = (((((1 ? -22804 : 1))) ? (((((min(-30197, var_6))) ? (var_8 <= var_1) : ((min(1, 751)))))) : var_1));
                    arr_9 [i_0] [i_1] = var_0;
                }
            }
        }
    }
    var_12 = ((var_5 > (((768 - -4984084862461356563) ? -var_5 : (!var_1)))));
    #pragma endscop
}
