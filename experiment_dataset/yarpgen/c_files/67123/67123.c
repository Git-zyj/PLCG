/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0 + 2] [i_0 - 1] [i_0] = (((((((min((arr_4 [i_0] [i_0] [i_0 + 2]), (arr_1 [i_0 + 2])))) <= (((arr_0 [i_1] [5]) ? (arr_3 [i_0 + 2] [i_0]) : var_9))))) << (65513 - 65509)));
                    var_13 = (((min(((23709 + (arr_3 [i_2] [i_0]))), 0)) + (arr_2 [i_0])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_14 = (min(var_14, -32583));
                                arr_24 [i_3] [i_4] [i_5] [i_3] [i_4] [i_4] [9] = (-((max(-23105, 23730))));
                            }
                        }
                    }
                }
                arr_25 [i_3] [i_4] = 42936232;
            }
        }
    }
    var_15 ^= (max(-var_6, ((((min(-1, 138))) - var_2))));
    var_16 = (max(var_16, (!var_9)));
    var_17 = ((((min(var_8, ((var_4 ? var_11 : var_6))))) ? var_1 : (var_0 > 23709)));
    #pragma endscop
}
