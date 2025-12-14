/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_1] [i_1] [i_0] = (!34);
                                var_12 |= (arr_3 [i_2]);
                            }
                        }
                    }
                }
                arr_14 [i_0] = (min(((((arr_7 [i_0] [i_1] [i_0] [i_1]) && (arr_10 [i_0] [i_1] [i_0] [i_1] [10] [10] [10])))), 1));
            }
        }
    }
    var_13 = var_1;
    var_14 &= (min(var_0, var_4));
    #pragma endscop
}
