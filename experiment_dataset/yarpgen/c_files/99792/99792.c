/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_19 = (arr_0 [i_0]);

        /* vectorizable */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_20 ^= (((-524288 ? 94 : var_11)) + ((var_14 ? var_0 : 207)));
                            var_21 |= ((var_14 || (arr_2 [i_0 - 2])));
                        }
                    }
                }
            }
            arr_13 [5] [i_0] [i_1] = (!var_12);
            arr_14 [i_1 - 2] = var_15;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    {
                        arr_19 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6 + 1] = (((arr_17 [i_0] [i_0] [i_5] [i_6 - 1]) & (arr_6 [i_6 + 2] [i_1 - 1] [i_6])));
                        var_22 -= (((161 ^ 524292) > (-9223372036854775807 - 1)));
                        arr_20 [i_0] [i_1 + 1] [i_5] [i_6] = -524283;
                        var_23 = (((~-524283) % ((120 ? 3181574507 : (arr_5 [i_6] [i_5] [i_1 - 1] [i_6])))));
                    }
                }
            }
            arr_21 [i_0] [i_0] = (((arr_17 [i_1] [i_1 - 2] [i_1 - 1] [i_1 - 2]) << (399514517275404751 - 399514517275404723)));
        }
        for (int i_7 = 2; i_7 < 16;i_7 += 1)
        {
            var_24 = ((min((arr_22 [i_0 - 2] [i_0] [i_0]), (((arr_1 [i_0] [i_0]) >> var_10)))));
            arr_24 [i_0 - 2] |= ((var_3 ? (((var_13 + var_17) ? (var_11 + 17592186043904) : (0 - 108))) : (((min((arr_4 [i_0 + 1] [i_7 - 1] [i_7 + 1]), (arr_4 [i_0 + 1] [i_7 - 1] [i_7 - 1])))))));
        }
    }
    var_25 = ((((((~128) & var_11)) + 2147483647)) << (((((var_10 << var_2) ? var_18 : -524286)) - 18446744073709027330)));
    var_26 = (max(var_26, (!var_17)));
    #pragma endscop
}
