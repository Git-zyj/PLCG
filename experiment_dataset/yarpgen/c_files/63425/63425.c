/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1 - 1] [18] [i_3] [i_3] = ((-((var_13 ? 4019616169 : var_9))));
                        var_17 += var_15;
                    }
                    var_18 = ((((min(4019616168, ((1 ? var_12 : (arr_1 [i_0])))))) ? (arr_9 [i_0] [i_1] [i_2] [i_0 + 1]) : 2634590308));
                }
            }
        }
    }
    #pragma endscop
}
