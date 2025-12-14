/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((((((var_13 ? var_11 : var_3)) * ((var_8 ? 1 : var_8))))))));
    var_20 = ((~1) ^ var_14);

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_3 [0] |= (max((((((-9223372036854775801 ? 1 : 9223372036854775800))) ? (var_3 * var_12) : ((((arr_2 [i_0] [i_0]) || var_16))))), (var_18 < 2135673056)));
        var_21 -= -9223372036854775798;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_22 = min(((var_9 ? var_16 : (arr_6 [i_2] [i_0] [i_2]))), (((!(((var_6 << (var_13 - 4726395763754521381))))))));
                    arr_9 [i_0] [5] [i_2] [i_1] = (arr_5 [i_0]);
                    var_23 = (((~var_0) >= (max(9223372036854775784, 1704588422587083945))));
                    var_24 = ((~((1289380139980157134 & ((~(arr_7 [i_0 + 2] [i_0 - 1] [i_1] [i_2])))))));
                }
            }
        }
    }
    #pragma endscop
}
