/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min(0, (min(var_12, (max(0, 53461)))));
    var_19 = (!-36578);
    var_20 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] = (max(((((min(34767, var_0))) ? ((max(8191, 36583))) : -36581)), (((28935 ? var_14 : -1)))));
                                arr_14 [i_2] [i_1 + 1] |= 60213;
                                var_21 = ((6 ? ((-var_16 ? ((min(28948, var_5))) : 139)) : (!36588)));
                                var_22 *= 127;
                                arr_15 [10] [4] [i_4] [1] [i_4] = ((36585 ? ((min(65535, 33886))) : (65531 << 7)));
                            }
                        }
                    }
                    var_23 = (((~57841) ? 65529 : (((var_4 | 255) | (!0)))));
                    var_24 = (((-(!36587))));
                    var_25 = ((65535 ? ((((max(36588, 60214))) ? 28925 : ((min(12878, 16146))))) : ((-26711 ? ((max(28963, 17668))) : ((min(var_8, -6)))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_5] [i_1] [i_2] [14] [i_1] = ((28952 ? ((19788 ? 13543 : 5322)) : ((0 ? 5322 : (!28952)))));
                                arr_21 [i_1] [i_0] [i_1] [i_2] [i_5 + 3] [i_5 + 3] [i_6] |= (max(-20113, (!20125)));
                                arr_22 [i_5] [i_1] [i_2] [i_5] [i_6] [i_1] = -28957;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
