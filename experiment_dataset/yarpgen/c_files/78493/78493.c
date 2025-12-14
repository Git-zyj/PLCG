/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 -= (((((((arr_0 [i_0]) ? var_0 : 1)))) ? (1 / 1) : (var_8 - 3705310677)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_12 = ((~((0 ? 9 : -91))));
                                var_13 = (((arr_0 [i_2]) | ((~(arr_10 [i_2 + 1] [i_1] [i_2 + 2] [i_2 + 1] [i_4])))));
                            }
                        }
                    }
                    var_14 = (1 ^ (((arr_0 [i_2 - 1]) ? -29061 : -29042)));
                    var_15 = (min(var_15, (((((((~(arr_13 [i_0] [i_1]))) ^ (((((arr_9 [i_0] [i_1] [i_1]) || -14846)))))) <= (((min((!1), 1)))))))));
                }
            }
        }
    }
    var_16 = (~var_8);
    var_17 = (min(0, 5156310442416899750));
    var_18 = var_10;
    #pragma endscop
}
