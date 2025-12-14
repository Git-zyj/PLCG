/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    var_11 = ((!((((1 && var_8) ^ var_5)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_12 = (4 * 3081514597);
                                var_13 = (max((max((min(3418087021939260401, 14437)), (~43683))), 5845171810366174837));
                            }
                        }
                    }
                    var_14 = (~73);
                    arr_14 [i_0] [10] [i_2 + 1] [i_1] = (min(((3695809397289292634 ? (arr_2 [i_1 - 1] [i_1 + 1]) : (arr_2 [i_1 + 1] [i_1 - 1]))), (((3081514597 || (((arr_4 [i_2]) > 2840185412)))))));
                    var_15 = (max(((((arr_3 [i_2 + 1]) - (arr_3 [i_1 + 1])))), var_5));
                    var_16 &= 122;
                }
            }
        }
    }
    #pragma endscop
}
