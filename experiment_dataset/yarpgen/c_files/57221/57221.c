/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [2] &= ((!(((((arr_2 [8]) / (arr_1 [6])))))));
                var_12 = (min(var_12, (((min(1618046699, 520842969))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_13 &= (((-8620492264710170371 & (arr_5 [i_2] [i_2]))));
        var_14 = (((min((arr_6 [i_2]), 8491646590945961196))) ? (((arr_7 [i_2]) ? (arr_6 [i_2]) : (arr_6 [i_2]))) : ((19224 ? 8447702978442815069 : (arr_7 [i_2]))));
    }
    var_15 = ((var_11 ? var_4 : (((((1618046699 ? var_5 : 47527))) ? 1618046699 : 46312))));
    #pragma endscop
}
