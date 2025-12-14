/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((-(max(((233175138 ? -5183214309305557089 : 2890412554)), (var_2 < 1404554741))))))));
    var_11 &= ((6675203125280920982 + (((max(var_7, var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_4] [i_0] [i_4] [i_0] [i_4] = (arr_0 [i_0]);
                                arr_15 [i_0] [i_0] [i_2 + 2] [i_3] [i_2 + 2] = var_7;
                                var_12 = (max(var_12, -71));
                                var_13 = (min(var_13, ((((((arr_0 [i_1 + 1]) * (arr_10 [1])))) ? 0 : ((~(arr_9 [i_2 - 1] [i_1 + 1] [i_2 - 1] [4] [i_4])))))));
                                var_14 = 2890412554;
                            }
                        }
                    }
                }
                var_15 = ((-((~(arr_4 [i_0])))));
            }
        }
    }
    var_16 = 2890412555;
    #pragma endscop
}
