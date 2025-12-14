/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((((!var_9) ? var_9 : (max(var_5, 1))))), ((((min(0, var_17))) ? (~var_17) : (max(var_16, var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = ((!(((34 ? (219 + 226) : (arr_3 [i_0 - 1] [i_1 + 3]))))));
                var_21 = (max(var_21, (max((((((arr_1 [i_1 + 1]) << (arr_1 [i_1]))) * ((max((arr_3 [i_0 + 1] [6]), var_0))))), (((~var_11) ? (!var_5) : ((var_10 ? var_6 : 1))))))));
                var_22 -= (min(((((((arr_1 [i_1]) ? 29 : var_2))) ? var_1 : (arr_1 [i_0 + 1]))), (max(((var_11 ? 174 : 29)), var_12))));
                var_23 = 226;
            }
        }
    }
    var_24 |= (min((min((min(8796093022207, var_2)), ((max(var_13, var_19))))), ((((((var_15 ? var_9 : 8796093022219))) && var_13)))));
    var_25 = (max(var_25, (~var_16)));
    #pragma endscop
}
