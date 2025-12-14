/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_0 * ((8 >> (4857827778607395850 - 4857827778607395796)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = ((26158 ? 1 : -39));
        var_13 = (min(4857827778607395877, -8517));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 -= (((((arr_4 [i_2]) == ((((arr_8 [i_0] [i_1] [i_0] [i_2]) ? var_2 : var_10))))) ? ((((!var_5) << (((arr_4 [i_1]) - 6383249437679016353))))) : (arr_1 [i_1] [i_1])));
                    var_15 *= ((arr_3 [18]) <= ((min(var_6, var_8))));
                    arr_9 [i_0] = var_4;
                    var_16 = ((var_0 || ((!((min(3434954374, 4857827778607395857)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 = (((arr_11 [i_0] [i_1] [i_2] [i_3] [8]) || ((((arr_3 [i_0]) ? (min((arr_8 [6] [i_1] [1] [1]), var_7)) : (arr_0 [i_0]))))));
                                arr_14 [1] [i_1] [1] [i_3 - 1] [i_0] = (arr_6 [i_0] [i_2]);
                            }
                        }
                    }
                }
            }
        }
        var_18 *= var_4;
    }
    var_19 = var_9;
    var_20 = (max(var_20, ((((((((var_9 ? var_9 : var_9)) == (max(17149589548228123942, 1969414789))))) - var_10)))));
    #pragma endscop
}
