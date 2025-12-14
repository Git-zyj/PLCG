/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((((arr_0 [i_1] [1]) ? 65535 : (arr_2 [i_4 + 1]))))));
                                var_18 = (min(var_18, (arr_13 [i_2])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_19 = ((var_9 ? (!31) : ((var_2 >> (var_12 - 4857)))));
                            var_20 -= 16383;
                            var_21 = (max(var_21, (((((((arr_13 [i_0 - 1]) < (((arr_4 [i_5]) ? (arr_12 [i_0] [i_0] [12] [i_5] [12] [i_6] [i_6]) : (arr_16 [i_0 - 1] [i_1] [i_1] [i_6])))))) % -1073741824)))));
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(16352, 44030));
    #pragma endscop
}
