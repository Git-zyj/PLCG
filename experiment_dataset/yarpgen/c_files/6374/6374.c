/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_13 |= (max((!var_4), (var_5 | var_5)));
                var_14 = (max((~72), (min(-var_8, (arr_0 [i_1 + 1] [i_1 + 1])))));
                var_15 = (max(var_15, 1));
            }
        }
    }
    var_16 = ((((min(-1, 1))) ? ((var_4 ? var_1 : var_9)) : (((~(!142))))));
    var_17 *= ((((min(var_11, var_4))) ? var_8 : (1 % 1)));
    var_18 = (max(var_18, ((((((max(var_2, var_7)) << 1)) <= var_2)))));
    #pragma endscop
}
