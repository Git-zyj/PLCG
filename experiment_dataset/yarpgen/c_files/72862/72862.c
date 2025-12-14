/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_3;
    var_17 = (max(var_17, (((~(((((var_13 ? var_4 : var_13))) ? ((var_2 ? var_10 : 1)) : var_13)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = ((-(min(((1 ? 444344848 : 9223372036854775807)), 6027))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_1] [i_4] = (var_0 < var_4);
                                arr_17 [i_0] [i_1] [i_1] [i_0] [1] [i_0] [1] = (((-(arr_1 [i_1 + 1] [8]))));
                                var_19 = ((~((((((arr_1 [1] [i_1]) - var_6))) ? var_8 : ((var_5 ? -1612344348 : (arr_14 [i_4] [i_3] [i_0] [i_1] [i_0] [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
