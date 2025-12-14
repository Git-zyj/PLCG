/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (var_8 / var_9)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 -= ((~((((((2147483647 % (arr_2 [1])))) > (arr_3 [i_0] [6]))))));
                arr_6 [i_0] [i_1] = (arr_3 [i_0 + 1] [i_1]);
                arr_7 [i_0] [i_1] = (((((2018551004 > (((arr_2 [i_1]) - 4294967295))))) % (((((var_12 ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0] [i_1])))) ? var_8 : var_1))));
                var_18 = 2018551004;
            }
        }
    }
    var_19 = ((var_1 ? var_9 : var_10));
    #pragma endscop
}
