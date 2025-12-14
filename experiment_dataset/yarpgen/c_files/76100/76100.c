/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((1 ? var_5 : ((var_0 ? var_17 : var_16))))) ? ((2776157314 ? 250 : (-127 - 1))) : var_15));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 = ((19 ? -0 : (arr_10 [i_3] [i_3] [i_4 - 1] [i_3] [i_4] [i_3])));
                                arr_15 [i_1] [i_1] [i_1] [i_1] = (min((((!((min(-2045041521, (arr_12 [1] [i_3] [i_2] [6] [i_0]))))))), ((-(arr_5 [i_4] [i_3] [i_0])))));
                            }
                        }
                    }
                    var_20 = (min(var_20, ((((-127 - 1) ? ((126 ? -118 : (arr_10 [i_0] [i_1] [14] [14] [i_2] [i_2]))) : (((min(-54, (-33 > 108))))))))));
                }
            }
        }
    }
    #pragma endscop
}
