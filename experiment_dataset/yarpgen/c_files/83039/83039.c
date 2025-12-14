/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((max(((min(-2333, var_2))), (max(var_7, var_1)))), (max((max(var_2, var_1)), var_1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_2] = var_8;
                            arr_14 [i_2] [3] [i_2] [i_2] = var_11;
                        }
                    }
                }
                arr_15 [i_0] = var_0;
                arr_16 [i_0] = (min(((min(var_12, var_7))), (min(var_6, (max(var_13, var_5))))));
            }
        }
    }
    #pragma endscop
}
