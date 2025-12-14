/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] [i_1] [i_2] [i_3] [i_3] = (arr_8 [i_1] [i_2] [i_3] [i_4]);
                                arr_13 [i_0] [i_1] [i_2] [i_1] [i_1] = var_15;
                            }
                        }
                    }
                    arr_14 [i_1] [i_1] = 10444214099683674255;
                }
            }
        }
    }
    var_19 = var_14;
    var_20 = var_4;
    var_21 = var_7;
    #pragma endscop
}
