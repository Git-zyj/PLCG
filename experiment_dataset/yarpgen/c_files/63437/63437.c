/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((min(var_11, 10)) * 10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = (((((~(arr_4 [i_2 + 2] [i_2])))) & ((((max(-28199, var_17))) ? var_9 : 6))));
                    arr_8 [i_0] [i_0] [i_2] [i_2] = var_17;
                }
            }
        }
    }
    var_19 = var_11;
    var_20 = (min((((var_13 ? var_8 : var_10))), ((var_0 ? 9 : 34))));
    #pragma endscop
}
