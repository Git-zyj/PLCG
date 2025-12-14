/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_10 = var_8;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_11 = var_0;
                                arr_14 [i_0] [i_0] [i_2] [i_0] = var_2;
                                var_12 = (((var_3 * ((511 / (arr_6 [10] [10] [i_2]))))) / 37772);
                                arr_15 [i_0] [i_0] [i_2] [i_0] [i_2] = var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = (max(var_0, ((var_8 ? var_8 : var_3))));
    var_14 = ((var_1 ? (((511 == ((58623 ? -522 : 515))))) : var_9));
    #pragma endscop
}
