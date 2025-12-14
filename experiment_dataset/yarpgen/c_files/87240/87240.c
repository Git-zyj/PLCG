/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = -2032532006;
                var_16 = (max(((((max(29, 8794024695194500862)) != ((((var_9 < (arr_3 [1] [2])))))))), (((((var_14 ? -32759 : var_2))) ? (arr_3 [i_0] [i_0]) : ((max(-29, 1313358137)))))));
            }
        }
    }
    var_17 = (min(((-(min(1, 9223372036854775801)))), ((min(var_1, ((var_12 ? var_14 : var_2)))))));
    #pragma endscop
}
