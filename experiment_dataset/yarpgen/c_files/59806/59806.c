/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((((((min(4194304, (arr_9 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] [i_0]))) != ((min(1229266625, -1))))) ? 6738072045800923095 : (!8936830510563328))))));
                                var_21 += (((var_5 / var_0) <= (((var_11 < var_12) ? (min(-9223372036854775802, (arr_3 [i_2 - 2] [i_2 - 2]))) : ((var_8 ? 0 : 6738072045800923095))))));
                            }
                        }
                    }
                }
                arr_11 [i_0] = ((((max(var_9, 17325))) >> ((((-((var_19 ? 255 : var_6)))) + 284))));
                arr_12 [7] [i_0] [i_1] = ((!((((arr_9 [i_1] [i_1] [i_1] [i_0] [6] [i_1] [i_1]) ? -3 : ((max(45049, -1994004981))))))));
                var_22 = (max(var_22, ((min(-8936830510563329, (min(233, 1267141387729493524)))))));
            }
        }
    }
    var_23 = var_2;
    var_24 = ((!(((var_11 ? 4194304 : (-7910456490083579646 - var_15))))));
    #pragma endscop
}
