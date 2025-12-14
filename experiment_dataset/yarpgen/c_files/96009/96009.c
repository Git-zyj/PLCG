/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= -var_3;
    var_13 = var_7;
    var_14 = (min(var_14, var_0));
    var_15 = 86;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = ((((max((arr_0 [i_0] [i_0]), 95))) && (((-(arr_1 [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_16 *= -var_11;
                            var_17 |= ((+(min((arr_8 [i_0] [i_1] [i_2] [i_1]), ((var_1 + (arr_5 [i_2] [i_3] [i_2] [i_3])))))));
                        }
                    }
                }
                var_18 |= (arr_8 [i_0] [1] [1] [i_1]);
            }
        }
    }
    #pragma endscop
}
