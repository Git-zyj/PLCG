/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (max(664967477, 3085));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] = (arr_6 [i_0] [12] [i_0] [i_0]);
                                arr_16 [5] [16] [i_2] [i_2] [14] [1] [i_2] = ((-(((arr_6 [i_1 - 1] [i_4 - 1] [i_2] [i_3 - 4]) ? (arr_6 [i_0] [i_4 - 3] [i_2] [i_3 - 1]) : (arr_12 [i_1 - 2] [i_3 - 2] [i_3 - 2] [i_4 - 2] [i_4] [i_4 - 3])))));
                                var_14 = ((((((arr_1 [i_4 - 2]) ? (arr_1 [i_4 - 2]) : -29))) ? ((-(arr_1 [i_4 - 1]))) : (((((arr_1 [i_4 - 3]) != (arr_1 [i_4 - 2])))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((+((max((arr_6 [i_0] [i_1] [i_3 - 2] [i_4]), 50)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = ((max(((var_10 ? 255 : var_9)), (((-6550187459401708770 ? 4 : -43))))) / var_7);
    #pragma endscop
}
