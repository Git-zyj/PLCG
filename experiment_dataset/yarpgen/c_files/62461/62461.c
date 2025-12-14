/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 = (max(var_4, (((min(4294967293, var_3)) ^ var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_12 = (max(var_12, (-127 - 1)));
                            var_13 = ((-(arr_7 [i_0] [i_2 + 2] [i_2])));
                            var_14 = (max(var_14, (((-(arr_8 [i_0] [i_0] [14] [i_0]))))));
                        }
                    }
                }
                arr_13 [i_0] [i_0] [0] = (~var_8);
            }
        }
    }
    var_15 = (min(((var_8 ? (55443 - var_6) : ((55451 >> (2726139689 - 2726139681))))), var_1));
    #pragma endscop
}
