/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((2950874308686921777 ? -2950874308686921780 : 2950874308686921761));
    var_14 = (((var_2 > var_7) && ((((((3 ? 5038 : 49))) & ((var_0 >> (var_2 - 32))))))));
    var_15 = ((-(max(127, -2621))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_16 = ((((max((min(321679572, 6606108022616264724)), var_3))) || (((561 ? (((var_6 + 9223372036854775807) << (((arr_2 [i_0 + 1] [i_0] [17]) - 9295)))) : (((-3907361814599059003 + 9223372036854775807) >> 32)))))));
                            var_17 = (min(var_17, 1073741823));
                            arr_11 [i_0] [6] &= (!-8013);
                        }
                    }
                }
                var_18 &= 5038;
            }
        }
    }
    #pragma endscop
}
