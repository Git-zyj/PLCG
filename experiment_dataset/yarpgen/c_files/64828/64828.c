/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 -= (arr_7 [1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [6] = (((((-(arr_1 [i_0 - 1])))) || (arr_6 [i_0] [i_1] [12])));
                                var_15 = (arr_6 [i_0] [i_0 - 1] [i_4 + 2]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = var_13;
    var_17 = (((((-(~983374006485215145)))) && (((-(28 > 1))))));
    #pragma endscop
}
