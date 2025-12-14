/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_1] = 2065065383;
                arr_7 [22] [i_1] = var_6;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_15 [i_0] [i_2] [i_0] [i_0] |= (min((!34453), var_6));
                            arr_16 [i_0] [i_0] [i_1] [i_0] = ((18191006382126392182 ? 255737691583159434 : 0));
                            arr_17 [i_1] [i_1] = (((arr_11 [i_3 - 1] [i_1] [i_1] [i_1 + 3]) ? ((min((arr_1 [i_1 + 2]), 1))) : -var_4));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
