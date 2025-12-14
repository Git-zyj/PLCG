/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (arr_2 [i_0]);
                var_10 = (((((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_0]))) - (min((arr_5 [i_0]), (arr_5 [i_0])))));
            }
        }
    }
    var_11 = (max((((((var_1 ? var_5 : var_3))) ? 9223372036854775807 : (-4850030392276582248 && var_3))), var_9));
    #pragma endscop
}
