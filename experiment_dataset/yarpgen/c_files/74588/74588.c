/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_2));
    var_13 = (min(var_3, (max(((var_3 ? var_3 : var_1)), (var_3 != var_4)))));
    var_14 -= (((!1) > (~0)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = ((((((~0) ? ((~(arr_2 [i_0] [i_0]))) : (arr_2 [i_0] [10])))) ? (((((0 ? -1331714998205945645 : 39059))) ? (arr_2 [i_1] [i_1]) : (arr_2 [i_0] [i_0]))) : ((((((arr_1 [i_0]) | -1331714998205945645))) ? (arr_1 [i_0 + 1]) : ((var_10 ? (arr_0 [i_1] [i_0 + 1]) : (arr_1 [i_1])))))));
                var_16 += (((~0) ? 1331714998205945634 : 0));
            }
        }
    }
    #pragma endscop
}
