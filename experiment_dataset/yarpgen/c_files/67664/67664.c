/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = ((18446744073709551588 | (arr_2 [i_0] [i_0])));
                var_19 = (arr_5 [i_0] [i_0] [4]);
                arr_6 [i_1] [i_0] = (max(((((var_13 ? var_8 : var_7)))), var_7));
            }
        }
    }
    var_20 = var_11;
    #pragma endscop
}
