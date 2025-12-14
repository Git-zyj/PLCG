/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = 4294967295;
                var_14 = (arr_3 [i_0] [i_1] [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_4] [i_3] [i_4] = ((((((arr_7 [i_3 + 2] [i_1] [i_2]) ? (arr_9 [i_4] [i_0] [i_3 - 2] [i_2 - 1] [i_0] [i_0]) : (arr_10 [12] [i_2] [i_4])))) ? 2425243589 : (arr_0 [i_1])));
                                arr_14 [i_4] = ((min(255, (~13))));
                            }
                        }
                    }
                }
                var_15 = min((arr_6 [i_0] [i_0] [i_0] [i_1]), (((-(arr_4 [7])))));
                arr_15 [i_0] = ((+(min((arr_0 [i_1]), (arr_0 [i_1])))));
            }
        }
    }
    var_16 = var_1;
    var_17 = -37;
    var_18 = min(7, 245);
    #pragma endscop
}
