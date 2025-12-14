/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((var_7 ? -816958846 : var_2)), var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, ((min((min((arr_7 [i_1 - 1] [i_1 + 1] [i_1 - 1]), ((min(0, (arr_8 [i_0] [i_1] [14])))))), ((min((!816958845), var_7))))))));
                                arr_14 [i_3] [i_3] = ((~((~(arr_13 [i_4 + 1] [i_4] [i_4] [i_3] [0])))));
                            }
                        }
                    }
                    arr_15 [i_1] [i_0] = (arr_4 [i_1 + 1] [i_2 - 2]);
                }
            }
        }
    }
    var_13 = var_3;
    #pragma endscop
}
