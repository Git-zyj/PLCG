/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (-(((((4294967295 ? (arr_0 [i_1]) : 3458764513820540928))) ? 3458764513820540928 : (((arr_2 [10]) ? var_5 : (arr_0 [i_0]))))));
                var_16 = (min(var_16, ((min(51460, (((var_9 && ((((arr_5 [9] [5] [i_1]) ^ 2101684402)))))))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 += ((var_10 ^ (arr_9 [i_0] [i_0 - 1] [i_0 - 1] [1] [i_2 - 3] [i_2 + 1])));
                            arr_10 [i_3] [4] [i_1] [i_1] [i_1] [3] = (arr_3 [i_1] [i_1]);
                        }
                    }
                }
                arr_11 [i_1] = var_5;
                var_18 += (arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]);
            }
        }
    }
    #pragma endscop
}
