/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((var_3 * (min((((1 / (arr_4 [5] [6])))), (((arr_4 [i_0] [i_1]) * var_4)))))))));
                var_14 = var_9;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [i_3] [13] = ((+(((arr_11 [i_2] [1] [i_2] [i_3] [i_2] [i_3] [i_0]) ? 32 : (arr_7 [i_0] [i_1])))));
                                var_15 = (min(var_15, (var_0 != var_7)));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        arr_15 [i_5] = (((max(((min(var_6, 20715))), (~var_0))) != ((((arr_13 [i_5] [i_5]) > (((arr_13 [i_5] [i_5]) & var_9)))))));
        var_16 = (min(20712, 23511));
    }
    #pragma endscop
}
