/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((var_12 ? ((137438953471 ? 123 : 137438953473)) : (var_10 && var_8))), var_10));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_16 *= 54;
                            var_17 = (min(5081481222214195564, 5513162085265774120));
                        }
                    }
                }
                var_18 = ((max((arr_1 [i_0 + 1]), (arr_8 [i_0]))) ? -66 : var_10);
                var_19 = (min((((!(arr_2 [i_0 - 1] [i_0])))), ((((min(137438953452, -39))) ? ((-50 ? var_7 : (arr_7 [i_0] [i_1] [i_0] [8]))) : (((var_7 >> (((arr_7 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0]) - 17548928566433483581)))))))));
            }
        }
    }
    #pragma endscop
}
