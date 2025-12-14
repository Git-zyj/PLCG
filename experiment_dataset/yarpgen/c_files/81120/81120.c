/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = var_7;
                var_22 = (-1112984935 ? (min(var_8, (arr_5 [i_0 - 4]))) : (((~(arr_2 [i_0 - 1])))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_3] [i_2] [1] [i_0] = (((((-14213 ? ((288230376151711743 ? (arr_9 [i_0] [i_0] [i_0] [i_3] [1] [i_0]) : var_19)) : var_19))) ? (!var_9) : var_2));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_10 ? (((-8213172005877402913 > (!-41)))) : ((((-14218 < (arr_10 [i_1] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0])))))));
                            }
                        }
                    }
                }
                var_23 = ((var_6 ? ((66 ? (!-14209) : (~var_2))) : 14098));
                arr_15 [i_0] [i_0] [i_1] = (((arr_7 [i_0] [i_0 - 3] [i_0 + 1] [i_0]) > ((-((-(arr_7 [i_0] [i_0] [i_0] [i_0])))))));
            }
        }
    }
    #pragma endscop
}
