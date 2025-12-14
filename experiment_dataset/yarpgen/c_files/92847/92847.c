/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;
    var_20 = ((~(~133)));
    var_21 = (min(var_21, ((max(((((59599 && 7772599071072964869) ? (!var_13) : 3782859475))), (((((4586 ? var_15 : 680396453763033393))) ? var_1 : var_1)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_22 = (~17766347619946518235);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_23 |= ((((((arr_5 [i_2] [i_2]) ? (arr_5 [i_2] [i_4 - 1]) : (arr_10 [i_2])))) ? (min((arr_10 [i_2]), (arr_10 [i_2]))) : var_15));
                                arr_12 [i_4 + 1] [i_3] [i_2] [i_2] [i_0] [i_3] [i_0] = ((!((((arr_10 [i_3]) * (arr_6 [i_4 + 1] [i_4 - 1] [i_4 - 1]))))));
                                var_24 &= (((((arr_2 [i_3] [i_1] [i_0]) - (var_9 * var_10))) > var_2));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (!var_12);
    #pragma endscop
}
