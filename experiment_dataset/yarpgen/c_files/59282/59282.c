/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_2 ? var_4 : (max(var_12, (!9223372036854775806)))));
    var_15 = 6380477447939677938;
    var_16 |= (min(var_11, 576460717943685120));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_1] = (+-var_7);
                var_17 = (min(((~(810032481 && var_7))), ((((((arr_2 [i_1]) <= 13981879385423858095))) ^ -15946))));
            }
        }
    }
    #pragma endscop
}
