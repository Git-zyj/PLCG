/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((!(!1578181203))) ? var_0 : (max((min(var_9, var_3)), 60066))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_16 = ((var_5 && (((1 ? (!1) : (!0))))));
                                arr_15 [i_0] = (((2147483647 < 1065353216) ? (arr_3 [i_3]) : (arr_7 [10] [i_1 + 1])));
                            }
                        }
                    }
                }
                var_17 = (arr_14 [i_0] [i_0] [i_0] [i_1 + 1]);
                arr_16 [i_0] [1] [i_0] = (max(var_11, (((~var_12) & (~var_4)))));
            }
        }
    }
    #pragma endscop
}
