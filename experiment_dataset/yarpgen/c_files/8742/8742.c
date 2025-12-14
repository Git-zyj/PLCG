/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (((((((8423987563815986495 + (arr_7 [i_0] [7] [7]))) - -62)) + 214)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_3] [i_1 + 1] [i_1 + 1] [8] = ((((((arr_0 [i_0] [i_0]) / 47))) ? ((210 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_3] [i_1 + 1]))) : (~204)));
                                arr_14 [i_0] [i_0] [i_0] [i_4] = var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = ((((max((var_8 > 1), 1))) == 110));
    #pragma endscop
}
