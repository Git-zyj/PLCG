/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 = (min((arr_7 [i_4] [i_2] [i_1] [i_0]), 1));
                                var_15 = (min(2147483647, 330103808));
                                arr_10 [i_2] = arr_5 [i_0] [i_1];
                            }
                        }
                    }
                    arr_11 [i_0] [i_1] [i_1] [i_2] = -330103809;
                }
            }
        }
    }
    var_16 = 1;
    #pragma endscop
}
