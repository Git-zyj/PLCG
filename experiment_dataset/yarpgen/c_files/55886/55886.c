/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_1 - 4] [i_2] = ((+((((~1) == 1)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [10] [i_2] [i_2] [i_3] [i_2] = (((~32) > ((max(-5, (0 == 255))))));
                                arr_16 [i_0] [i_2] [i_2] [i_3] [i_4 - 1] = ((-(((!(240 ^ 1149468793))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = ((-(~var_3)));
    var_14 = (((((((max(1, var_2))) % ((min(1, 249)))))) ? (((16 && -811276403101229170) ? ((min(var_12, var_3))) : ((var_9 ? var_12 : var_12)))) : (32 > 119)));
    #pragma endscop
}
