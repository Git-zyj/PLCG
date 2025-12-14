/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, -19));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = ((247 ? 186681133 : 19));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_12 -= ((((!32754) > 19)));
                            var_13 = (min(var_13, (arr_4 [i_0] [i_1 - 1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
