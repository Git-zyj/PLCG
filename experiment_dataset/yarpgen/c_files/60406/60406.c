/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(((31714 ? 32635 : 1)), 32901))) ? var_19 : ((max(var_7, ((var_5 ? var_8 : var_18)))))));
    var_21 = (10919 & var_17);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_22 = (i_0 % 2 == 0) ? ((max((((arr_2 [i_0 + 1]) ? var_2 : (arr_1 [i_0 + 1]))), ((((arr_4 [i_0 - 1] [i_0]) >> (((arr_4 [i_0 - 1] [i_0]) - 663673514)))))))) : ((max((((arr_2 [i_0 + 1]) ? var_2 : (arr_1 [i_0 + 1]))), ((((arr_4 [i_0 - 1] [i_0]) >> (((((arr_4 [i_0 - 1] [i_0]) - 663673514)) - 3787480395))))))));
                var_23 = (min(var_23, 191));
            }
        }
    }
    #pragma endscop
}
