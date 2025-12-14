/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 = arr_0 [i_0] [9];
                                var_15 = (arr_1 [i_0]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            arr_26 [i_6] [i_1] [i_5] [1] [i_1] [i_6] = (arr_0 [i_0] [i_0]);
                            arr_27 [i_6] [i_1] [i_1] |= (arr_6 [i_1]);
                        }
                    }
                }
            }
        }
    }
    var_16 |= 24;
    #pragma endscop
}
