/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_15 = (max(var_15, ((max((((((min(var_4, var_10))) ? var_9 : var_7))), (((min(var_3, var_10)) & var_6)))))));
                            var_16 *= var_6;
                        }
                    }
                }
                arr_10 [i_0] [i_0] [i_0] = (((max((((-127 ? var_5 : var_12))), var_9)) | (((var_13 ? var_6 : var_4)))));
            }
        }
    }
    #pragma endscop
}
