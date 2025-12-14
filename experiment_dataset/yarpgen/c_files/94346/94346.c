/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] = ((+(max((arr_13 [i_0] [i_1] [i_2] [i_1] [i_4 + 1]), (arr_3 [i_0] [i_0] [i_3])))));
                                arr_16 [i_0] [i_1] [i_2] [3] [i_1] [i_0] [i_0] = (arr_11 [i_0] [12] [i_0] [i_3] [i_4]);
                                var_19 = (min(var_19, ((max(((((arr_6 [i_0] [i_2 - 2]) < 1))), (arr_9 [i_0] [i_1] [i_2] [3] [0]))))));
                                arr_17 [i_3] [i_1] [i_2 + 2] [i_2 - 1] [i_0] = (238 + 252);
                            }
                        }
                    }
                }
                arr_18 [i_0] [i_0] = ((!(((62 ? (~var_4) : (58347 % -61))))));
                arr_19 [i_0] = ((10197944010846297951 ? 5833520344226146400 : ((((124 < (arr_11 [i_0] [i_0] [i_0] [i_0] [i_1])))))));
                var_20 = ((~233) / -6628278178402645167);
            }
        }
    }
    var_21 = ((-(max(var_13, ((var_2 ? 7396380358003792298 : var_2))))));
    var_22 = (var_6 / var_4);
    var_23 = ((min((var_7 + -7772657205536700632), 2006105298)));
    #pragma endscop
}
