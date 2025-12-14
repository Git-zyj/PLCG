/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_12 = (((arr_6 [i_0] [i_0] [i_0]) + ((((var_10 * var_11) && (var_5 < var_6))))));
                                arr_13 [i_0] [i_0] [6] [i_4] [1] [i_1] = ((var_4 && (~var_1)));
                                var_13 |= (max(var_2, var_5));
                                arr_14 [1] [0] [9] = (arr_12 [i_1] [7] [i_2] [i_1] [i_0]);
                            }
                        }
                    }
                }
                var_14 = (min(var_14, (min((arr_5 [4] [3] [i_0] [i_0]), (max((min(var_7, var_7)), (((var_11 ? var_11 : var_5)))))))));
            }
        }
    }
    var_15 = (((((var_4 < var_3) ? var_3 : (var_6 | 51073)))) ? -var_1 : var_7);
    #pragma endscop
}
