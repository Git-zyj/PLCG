/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [14] [i_4] [i_4] [i_4] = (((((arr_4 [1] [i_1 - 2] [i_4 - 1]) >> (((arr_4 [i_0] [i_1 - 2] [i_4 + 2]) - 11461861195183176715)))) - 120));
                                arr_14 [i_0] [7] [i_0] [i_0] [i_0] [5] [i_0] = ((!(arr_5 [8] [8] [i_4])));
                                var_13 = (-(((min(-2438507929987277388, var_1)))));
                                arr_15 [i_0] [i_1 - 1] [i_0] [i_3] [i_0] |= ((var_3 ? ((288230375077969920 ? (12135 % 136) : ((min(-19680, 0))))) : (((1050881847 <= (arr_8 [i_0] [i_2] [i_3] [i_4]))))));
                            }
                        }
                    }
                }
                arr_16 [i_1] = var_1;
            }
        }
    }
    #pragma endscop
}
