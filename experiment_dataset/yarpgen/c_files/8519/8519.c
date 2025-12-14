/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = 2;
                    arr_7 [i_0] [i_0] [i_0] [i_0] = var_7;
                    var_20 = (max(var_20, (((max(44, 8306))))));
                }
            }
        }
    }
    var_21 = 216;
    var_22 &= (max((max(((var_3 ? var_16 : 1)), 232)), (((var_14 <= ((1 ? 19 : 114)))))));
    #pragma endscop
}
