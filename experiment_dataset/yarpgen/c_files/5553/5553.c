/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (16 ^ 19164);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] [8] [i_2] = (!((((arr_5 [i_0] [i_0]) ^ (arr_7 [i_2] [i_2] [i_0])))));
                    var_14 = 219;

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_15 = var_1;
                        arr_13 [9] [i_3] [i_2] [i_2] [7] [3] = (((!8285012235386946480) ? var_12 : (((!(-2315656497065418142 || 34))))));
                    }
                }
            }
        }
    }
    var_16 = var_9;
    #pragma endscop
}
