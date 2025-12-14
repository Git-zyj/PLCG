/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((((var_12 << (((((-9223372036854775807 - 1) ? 15534 : 0)) - 15527)))) | (arr_0 [i_1]))))));
                var_15 |= ((~(~var_12)));
            }
        }
    }
    var_16 -= var_2;
    var_17 = 1;
    var_18 |= (max(((-var_12 ? var_7 : (((var_0 ? var_4 : 55392))))), 88));
    #pragma endscop
}
