/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    var_20 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (var_5 >> (((min(-980276590781473592, 255)) + 980276590781473595)));
                var_22 = (min(var_22, ((max(((var_17 ? (0 - var_4) : var_13)), var_5)))));
                var_23 = ((var_0 ? (min(-980276590781473586, 7)) : (((-(min((arr_2 [i_1]), var_10)))))));
                arr_7 [i_0] [i_0] [i_1] = var_2;
                var_24 = ((-(max((~var_14), 9223372036854775787))));
            }
        }
    }
    #pragma endscop
}
