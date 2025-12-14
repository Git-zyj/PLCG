/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (min(var_17, ((((arr_0 [i_0 - 1]) ? (min(var_9, -10123)) : var_0)))));
                var_18 = var_8;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            {
                arr_10 [i_2] = var_12;
                var_19 -= var_15;
                arr_11 [i_3] = (min((arr_2 [i_3 - 1] [i_3 + 1]), (arr_2 [i_3 - 1] [i_3 + 1])));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_20 [i_5] = -10123;
                                var_20 -= ((((min(var_8, (arr_4 [i_3] [i_3]))))) ? ((-10123 ? 1 : 3905144782030067962)) : var_5);
                            }
                        }
                    }
                }
                var_21 = (~(((((min((arr_3 [i_2] [i_2]), (arr_8 [i_2] [2])))) < -10125))));
            }
        }
    }
    var_22 = var_13;
    #pragma endscop
}
