/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-(max(9223372036854775808, (6 ^ 4177333264)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = (((((min((((arr_4 [i_0]) == var_14)), (var_6 < var_7))))) & var_3));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_20 -= var_15;
                                arr_13 [i_1] [i_2] [i_3] [i_4] = ((((min(-1957804465746114589, (((0 ? -68 : -69)))))) || 50));
                                var_21 = ((-((-(min(20, var_8))))));
                            }
                        }
                    }
                }
                arr_14 [1] [i_1 + 1] [1] = (((var_15 && (arr_2 [i_1 + 2] [i_1 + 2]))));
            }
        }
    }
    #pragma endscop
}
