/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    var_14 = (min((min(var_5, -var_3)), var_5));
    var_15 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] [i_0] = (arr_3 [i_0] [10] [14]);
                            var_16 = (min(var_16, (arr_2 [i_2] [i_1])));
                            var_17 = (min(var_17, (((+((((arr_0 [i_0]) && (arr_4 [i_0] [i_0] [i_0])))))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_18 = (arr_7 [i_6] [i_5] [7] [i_0]);
                                arr_18 [i_1] [i_4] [i_1] [i_1] = 4027905183951961281;
                                var_19 = (arr_17 [i_0] [i_5] [i_4] [i_5] [i_5] [i_5]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
