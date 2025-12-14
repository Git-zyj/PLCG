/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_0 ^ (((var_5 % -879919262384080058) & var_0))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_1 + 1] = ((var_1 * (!23362)));
                arr_7 [i_0 + 2] [i_0 + 1] [i_1] = 4453668458959628655;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_14 = var_11;
                                var_15 = (((4294967277 ^ 23362) ? ((~(arr_3 [i_0 + 2]))) : ((((!(arr_3 [i_0 + 1])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
