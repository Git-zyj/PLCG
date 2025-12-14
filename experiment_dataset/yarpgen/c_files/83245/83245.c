/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_14 << (((((((var_15 << (var_6 + 1556120452)))) ? ((var_8 ? var_8 : var_16)) : ((var_15 ? var_13 : var_12)))) - 18446744073709534957)));
    var_18 = (min(var_10, (((var_12 + 2147483647) << ((((var_3 << (var_1 - 1339492564))) - 1526726656))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_19 = ((-1 ? 0 : 18372778768894932770));
                    arr_11 [16] [i_2] &= ((~(((arr_0 [i_0 - 1]) << (((arr_0 [i_0 - 1]) - 3492667024))))));
                }
            }
        }
    }
    #pragma endscop
}
