/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (((~11) | var_10));
    var_14 = max(var_1, var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [2] |= ((((((!(4693620586733415996 - var_0))))) != (max((arr_0 [i_1] [i_0]), (-127 != var_12)))));
                var_15 ^= ((((+(((arr_0 [i_0] [i_1]) ? -127 : 2730578445)))) >= ((-((var_4 ? var_10 : var_6))))));
            }
        }
    }
    #pragma endscop
}
