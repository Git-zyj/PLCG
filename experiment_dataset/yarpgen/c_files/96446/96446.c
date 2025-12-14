/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = ((-((var_8 ? 0 : 71))));
                arr_6 [7] = -100;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 11;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_20 [i_3] [i_5] [i_4] [i_3] [i_3] = min(((min((arr_7 [i_5]), (arr_19 [1] [i_3] [i_3] [i_3] [10] [1] [i_3])))), (min(((1 ? (arr_12 [i_3] [i_6]) : var_7)), (((arr_10 [i_2]) - 1)))));
                                arr_21 [i_3] [i_3] = (((arr_10 [i_4]) ? 1 : 154703834));
                            }
                        }
                    }
                    var_13 = ((1 * var_7) ? (arr_18 [i_3 - 1] [i_2 - 3]) : 161);
                    var_14 = (((((arr_9 [i_2]) * -109))));
                }
            }
        }
    }
    #pragma endscop
}
