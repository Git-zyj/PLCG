/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [0] [1] [0] [8] [i_0] = 1113;
                                var_19 = var_1;
                            }
                        }
                    }
                }
                var_20 *= (max((arr_9 [13] [0] [9] [5] [15] [9] [16]), (+-15650399514114525254)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 8;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    arr_23 [5] [i_6] [i_6] [1] = ((var_0 ? var_3 : (max((max(1, 10454733772301780302)), (min(var_10, var_14))))));
                    arr_24 [i_6] [7] [0] [5] = ((var_14 ? ((((arr_22 [6] [i_6 - 1]) >= (arr_22 [5] [i_6 + 2])))) : (((!(arr_18 [6] [6] [i_6 + 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
