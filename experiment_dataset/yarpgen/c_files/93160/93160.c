/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_12, var_3));
    var_20 = ((!(var_9 * 134217727)));
    var_21 -= var_2;
    var_22 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_23 += ((max(4160749563, var_17)));
                            var_24 = (min(var_24, ((min(134217727, var_0)))));
                            var_25 = ((arr_3 [i_0 - 3] [i_2 + 1]) ? var_6 : ((((arr_5 [i_1] [i_1] [13] [i_0 - 4]) | (arr_5 [i_1] [i_1] [1] [i_0 - 2])))));
                        }
                    }
                }
                var_26 = max(((((!(arr_5 [i_1] [i_1] [10] [i_1]))) ? ((((!(arr_6 [i_1] [i_1]))))) : (min((arr_7 [i_1] [i_0] [i_0] [i_1]), -31955)))), (arr_1 [i_1] [i_0]));
            }
        }
    }
    #pragma endscop
}
