/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = 26417;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_18 = (min(var_18, (((!(~1))))));
                            var_19 = ((!(!-1656793839)));
                            var_20 = (((5396837035384355776 - 57) < (13526277781263045513 - 120)));
                            var_21 = 0;
                        }
                    }
                }
                var_22 = 19604;
            }
        }
    }
    var_23 |= 0;
    var_24 = -0;
    var_25 = ((((((12658 >> (9223372036854775807 - 9223372036854775790))))) >> (-19527 - 45978)));
    #pragma endscop
}
