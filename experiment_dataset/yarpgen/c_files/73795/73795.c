/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    var_17 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((var_15 ? ((1 ? 24576 : 1)) : var_8));
                var_18 *= ((((var_11 ? var_6 : (var_8 - var_10)))) ? ((((!(((1 << (1061631886 - 1061631862)))))))) : ((((min(var_4, var_6))) ? var_13 : ((var_12 << (var_5 - 4825789950016330909))))));
            }
        }
    }
    var_19 = (max(((-var_13 ^ (max(var_6, var_12)))), ((max(188, 1)))));
    var_20 = ((!(((1 ? ((1 ? 1 : 1)) : var_2)))));
    #pragma endscop
}
