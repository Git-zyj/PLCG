/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (350290937 > 350290937)));
    var_13 = var_5;
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0 + 1] = ((~(~2)));
                var_15 ^= ((-22 ? (0 % 47) : var_2));
                arr_6 [5] [i_1] = ((((((((4221670894 ? 18963 : var_3))) ? -351504678 : (~var_6)))) ? ((max(-22, 7359))) : (((((min(-117, 22464))) || -18954)))));
            }
        }
    }
    var_16 = ((var_9 ? ((((var_10 <= (max(var_0, var_5)))))) : var_8));
    #pragma endscop
}
