/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_14 &= ((1198956345 >> ((((1198956333 ? 3096010965 : 1198956345)) - 3096010934))));
                arr_6 [i_0] = -3096010962;
            }
        }
    }
    var_15 = var_13;
    var_16 = (max(var_16, (((var_10 <= (min(3263566563, -18)))))));
    var_17 = ((!(((var_13 / (~0))))));
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {
            {
                var_18 = (((((arr_4 [i_2] [i_2]) ? ((82 - (arr_9 [i_3] [i_2] [1]))) : var_6)) / (arr_4 [6] [i_3 + 2])));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_19 = (((arr_3 [i_2 - 2]) ? (((var_1 * (var_12 / var_3)))) : ((var_5 ? var_2 : 37))));
                                arr_18 [16] [i_3] [i_3] [i_4] [1] [i_5] [i_6 - 2] |= (var_4 | var_5);
                                var_20 = ((((max(var_10, (((var_1 ? -35 : (arr_15 [i_3 + 2] [i_6]))))))) ? (min((3096010976 && var_8), var_0)) : ((var_1 ? (min(var_0, -391402187)) : (arr_10 [i_4])))));
                                var_21 = (min(var_21, (((-((min((arr_4 [i_6 + 1] [i_6 + 1]), (arr_4 [i_6 + 1] [15])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
