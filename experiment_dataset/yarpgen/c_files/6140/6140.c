/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_8, (((((var_6 ? var_6 : 34))) ? var_3 : ((min(4466652634146533783, var_5)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_3] [i_3] = (max((arr_9 [i_2] [i_2] [i_2] [i_2] [i_2 + 2] [i_2]), -43));
                                var_11 = ((201 ? 26 : -577214677));
                                var_12 = var_2;
                            }
                        }
                    }
                    var_13 = (max(((54 ? 6152502227757827811 : 23)), 64));
                    var_14 += (arr_4 [i_0] [i_2]);
                }
            }
        }
    }
    var_15 |= ((-var_1 ? ((((!(~-8723520902508946089))))) : (((min(var_4, 18446744073709551615)) ^ (((-1697878926 ? var_0 : 58726075)))))));
    #pragma endscop
}
