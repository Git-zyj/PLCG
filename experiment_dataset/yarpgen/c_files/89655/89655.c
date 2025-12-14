/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    var_12 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] = 17;
                var_13 = 79;
                arr_5 [i_0] = (max((((((var_5 ? 3142992517768643518 : 12931412624716863420))) ? 0 : (((arr_3 [i_1] [i_1] [i_0]) ? var_2 : (arr_1 [i_0]))))), (arr_1 [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_14 = (((18446744073709551615 ? 3877496788455119787 : (arr_9 [i_2] [i_0]))));
                                var_15 = -34359738367;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
