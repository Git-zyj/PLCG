/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;
    var_21 = (min(var_21, (((var_9 ? (((~((max(var_8, 122)))))) : (((-123 ? 32 : var_8))))))));
    var_22 = (min(var_22, (((((((((var_11 ? var_16 : var_4))) ? var_6 : var_8))) ? ((((1023 / var_1) / var_4))) : var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_2] [i_0] = -125;
                            arr_12 [0] [i_0] [i_2] [0] [i_3] = var_19;
                        }
                    }
                }
                arr_13 [i_0 + 2] [i_1] = ((~(((!(arr_6 [i_0] [i_0] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
