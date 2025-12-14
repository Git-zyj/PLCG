/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, 0));
    var_17 += ((-353252841917427531 ? (-2147483647 - 1) : -299943119));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [0] &= (var_14 ? (((var_9 ? (arr_0 [i_1]) : (-2147483647 - 1)))) : var_0);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_2] [i_2] [i_3] [i_3] [i_4] = max((max((((!(arr_8 [i_3] [i_3])))), (arr_2 [i_1] [i_2]))), ((+(max((arr_0 [i_1]), -299943107)))));
                                var_18 += (arr_2 [i_1] [i_4]);
                                var_19 += (((var_6 | 299943119) ? ((-(min((arr_2 [i_3] [i_1]), var_1)))) : -299943119));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (-8811025907075438160 & var_9);
    #pragma endscop
}
