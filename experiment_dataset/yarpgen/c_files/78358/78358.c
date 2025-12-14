/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((19828 ? ((-19828 ? var_4 : var_8)) : (~var_12))), (var_5 << 1)));
    var_16 = ((((min((((var_6 ? 1 : var_11))), 18446744073709551615))) ? (min((min(2, 18446744073709551614)), var_11)) : ((min(((var_12 ? var_10 : var_2)), (((1 ? var_14 : 1))))))));
    var_17 = (~1);

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_18 = (max(var_18, (arr_2 [2] [i_0 + 1])));
        var_19 &= (max((((9223372036854775807 <= 1920845254) ? (((arr_2 [i_0 + 3] [i_0 + 4]) + (arr_0 [i_0 + 4]))) : ((((arr_1 [3]) ? var_13 : 127))))), ((219 ? (arr_0 [i_0 + 4]) : (arr_2 [i_0 - 1] [i_0])))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_20 = (max(var_20, 1));
                            var_21 ^= 1;
                            var_22 = (arr_10 [i_0] [i_1] [5] [i_3] [8]);
                            var_23 = (min(var_23, ((((1 <= var_9) ? var_14 : (((-(arr_14 [i_0] [10] [10] [i_0 + 3] [i_0] [5])))))))));
                            var_24 = 42546;
                        }
                    }
                }
            }
            var_25 = (min(var_25, ((((arr_6 [i_0 + 2] [i_0 + 4] [i_0 + 3]) >= (arr_6 [i_0 + 4] [i_0 + 1] [i_0 + 2]))))));
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_26 = -19828;
            var_27 |= (max((((arr_13 [i_0] [i_0] [i_0 + 2] [0]) ? 2147483647 : -3786719014042654482)), ((((arr_13 [i_0] [9] [i_0 + 2] [i_0 - 1]) < (arr_13 [1] [i_0] [i_0 + 2] [i_0]))))));
        }
    }
    #pragma endscop
}
