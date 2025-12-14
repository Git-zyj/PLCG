/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_10 = ((-((+(min((arr_1 [3]), 57536))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_11 = (max(var_11, var_4));
                            arr_10 [i_0] [i_2] [i_3] [5] [3] = var_5;
                            var_12 = -57540;
                        }
                    }
                }
            }
        }
    }
    var_13 = (max(((~((var_2 ? 112 : 1)))), var_4));
    var_14 = var_6;
    #pragma endscop
}
