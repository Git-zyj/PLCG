/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_2, (((min(var_6, var_1)) + var_4))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_11 = (((((19708 << (((arr_8 [i_2] [i_2] [i_2] [i_2 - 1]) - 314903596426573917))))) ? ((1 ? 25557 : -25546)) : 18446744073709551597));
                                arr_15 [i_2] [i_3] [11] [i_1] [i_2] = var_1;
                                var_12 = ((((arr_8 [i_0] [i_1] [i_2 + 2] [i_3]) ? (arr_13 [4] [i_3] [i_2] [i_2 + 2] [i_3]) : var_2)));
                            }
                        }
                    }
                    var_13 = var_7;
                    arr_16 [i_0] [i_1] [i_2] = ((1 * ((-((-2944548710434187497 ? 25564 : -1409))))));
                }
            }
        }
    }
    var_14 |= (((((((min(var_5, -25554))) ? var_6 : (var_3 & var_0)))) && var_2));
    #pragma endscop
}
