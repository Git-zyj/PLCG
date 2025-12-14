/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = (max((((-(!var_4)))), var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] = (max(((!(!4319964740718877499))), (max(1, 1))));
                arr_6 [i_0] [6] [i_0] = 14126779332990674136;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_12 += ((~(max(((1 ? var_6 : 4319964740718877485)), (!1090715534753792)))));
                                var_13 = ((max(14126779332990674136, 0)));
                                arr_14 [9] [i_4] [i_2] [i_2 + 1] [i_2] [2] [i_0] = max((max((arr_12 [i_3] [i_3] [i_2] [i_4] [i_4]), var_5)), (((!((max((arr_8 [i_3] [i_4]), var_6)))))));
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_1] [i_0] = -var_3;
            }
        }
    }
    var_14 = (!(!var_4));
    var_15 = (max(((((!var_2) ? var_2 : var_4))), (max(var_4, var_8))));
    #pragma endscop
}
