/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, ((((((((min((arr_11 [i_4] [i_3] [i_2] [i_1] [10]), var_5))) ? ((~(arr_6 [i_0] [i_0] [i_0]))) : (200 ^ 67)))) % (min((arr_3 [i_2 - 1] [i_4 + 1] [i_4 - 2]), (arr_3 [i_2 + 1] [i_4 - 1] [i_4 + 1]))))))));
                                arr_12 [i_0] [i_1] [i_0] [i_1] = arr_0 [i_2] [11];
                                arr_13 [i_0] [i_0] [i_1] [i_2] [i_4] [i_0] [i_4] |= (min((max((arr_1 [13] [i_4 - 2]), (arr_6 [i_4 + 1] [i_0] [i_0]))), ((((arr_8 [i_1] [i_4 + 1] [i_2] [i_2 - 1]) ? var_8 : (arr_8 [i_0] [i_4 + 1] [i_0] [i_2 - 1]))))));
                            }
                        }
                    }
                }
                arr_14 [i_1] |= -503414905;
            }
        }
    }
    var_15 = (((((((196 ? 503414905 : -120))) ? -109 : var_12)) < (min(var_12, (var_2 * var_2)))));
    var_16 = (max(var_7, (max(-var_3, var_9))));
    #pragma endscop
}
