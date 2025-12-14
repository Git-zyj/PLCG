/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_19 = ((((((((33 ? var_2 : var_0))) ? (4398046511103 + 4398046511103) : var_17))) || var_4));
                            arr_10 [i_0] [i_1] [13] [12] = (71 - 11925653060733014651);
                            var_20 = 0;
                            var_21 += (((((var_0 ? 88 : var_7))) * var_9));
                        }
                    }
                }
                arr_11 [14] [i_0] = (var_10 != var_7);
                var_22 = var_12;
            }
        }
    }
    #pragma endscop
}
