/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = max(-259661679, 5494930149637869188);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1 + 2] [i_1] [i_1 + 2] [3] = var_9;
                        var_13 += var_8;
                        var_14 = (min(var_3, (((var_1 != 5494930149637869179) ? (arr_2 [i_3 - 1] [i_3 - 1]) : var_2))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_15 = (max(var_15, var_10));
                                var_16 &= ((1 ? (((max((-5494930149637869189 > var_2), (!var_10))))) : -5494930149637869180));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
