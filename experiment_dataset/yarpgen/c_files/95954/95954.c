/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((~((var_13 << (var_7 + 9))))), var_9));
    var_15 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (min(1, var_7));
                var_16 += (max((((var_10 <= var_11) - (arr_2 [i_0]))), (((158 % 252) ? (max((arr_1 [i_1] [i_0]), var_12)) : (-9726 >= 1685706891)))));
            }
        }
    }
    #pragma endscop
}
