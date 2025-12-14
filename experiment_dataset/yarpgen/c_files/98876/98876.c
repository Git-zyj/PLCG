/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] [i_3 + 2] [i_4] = ((~(arr_10 [i_1 + 1] [i_1] [i_3 - 1])));
                                arr_13 [i_0] [1] [i_2] [i_1] [i_4] = ((var_8 ? var_3 : (arr_11 [i_0] [9])));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_1] [i_1] = (min((max(((max((arr_2 [i_1]), (arr_10 [i_0] [i_1] [i_1])))), ((var_10 ? var_2 : var_11)))), (!-var_6)));
            }
        }
    }
    var_14 = ((((((((var_8 ? var_8 : var_3))) ? (~var_6) : var_1))) ? (((((var_6 ? var_10 : var_2))) ? ((var_5 ? var_2 : var_11)) : var_8)) : var_10));
    #pragma endscop
}
