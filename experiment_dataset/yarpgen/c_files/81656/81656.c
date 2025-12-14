/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_1] [i_2] [14] [i_4] |= (arr_10 [i_0] [i_1] [11] [i_2 + 1] [i_3] [i_4] [i_4]);
                                arr_12 [i_0] [i_1] [i_0] [i_3] [i_4] = ((((min(((min(-108, -30942))), var_4))) ? (max(((13 ? -5100731141288686750 : -108)), var_9)) : (((max((arr_7 [i_0] [i_1] [i_0] [i_3] [i_1]), var_2))))));
                                arr_13 [23] [i_0] [17] [i_3] [i_3] = (+-7418642030187337891);
                            }
                        }
                    }
                    var_10 = -77;
                    var_11 = var_8;
                }
            }
        }
    }
    var_12 = (max((((-9223372036854775807 - 1) ? -3212 : 0)), ((((var_0 >= var_8) == ((var_8 ? var_2 : var_8)))))));
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                var_13 = (max(var_13, var_9));
                var_14 = var_0;
            }
        }
    }
    #pragma endscop
}
