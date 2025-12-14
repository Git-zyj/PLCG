/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (max(222, 4286578688));
    var_13 = 3485603125956825312;
    var_14 = (((80 >= var_2) >> (var_2 + 1193601008)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 ^= var_9;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [7] [2] [i_3] [i_0] = (max(((~(~var_0))), ((max((((!(arr_6 [i_0] [i_0])))), (arr_1 [i_0]))))));
                                var_16 = ((-(((arr_11 [i_0] [i_4 - 1] [i_3 - 2] [i_0] [i_0] [i_0]) * var_8))));
                                arr_16 [i_0] [i_1] [i_0] [i_0] = 6;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] [20] = var_6;
                                var_17 = (arr_1 [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
