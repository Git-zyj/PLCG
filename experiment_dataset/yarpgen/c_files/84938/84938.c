/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((min(var_10, var_5))), (min(var_13, var_10))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            var_16 = (max(var_16, (((((((((arr_1 [i_0 + 1]) ? (arr_1 [i_1]) : (arr_3 [i_1] [i_0 + 1])))) || var_14)) ? var_1 : -var_14)))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_17 = ((0 ? 18446744073709551615 : 193));
                            var_18 = (((-(arr_4 [i_3 - 1] [i_1]))));
                            arr_12 [i_1] [i_3 + 1] [i_0] [i_0] [i_0] [i_1] = 65535;
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_19 = (min((min(2878914960, 18)), (arr_10 [i_0] [i_0] [i_5] [i_6] [i_5] [i_6] [i_6])));
                            arr_21 [i_6] [i_6 + 1] [0] [i_6] |= ((!(arr_13 [i_6 - 1] [i_7 + 1] [i_6 - 1] [i_7 - 1])));
                            arr_22 [i_1] [i_1 - 1] [i_5] [13] = (arr_11 [i_0] [i_0] [i_1 + 1] [i_0] [i_6] [i_7 - 1] [i_7 + 1]);
                            arr_23 [2] [i_7 + 1] [i_5] [i_6] [i_1] [i_5] [7] = (min(((-var_10 ? ((min((arr_0 [i_7]), -1675158730))) : (arr_7 [i_5] [i_1 + 2] [i_5] [i_5]))), -var_1));
                        }
                    }
                }
            }
            var_20 = (min(var_20, ((((((min((arr_10 [i_0] [i_0] [1] [i_0] [i_1 - 3] [i_1 + 2] [i_1 - 3]), 1675158731))) % (max(4289554541136464549, var_4))))))));
        }
        var_21 = (((((var_1 * (var_12 * 0)))) ? 65535 : -2858713058));
        var_22 = max((((4289554541136464549 || 154) + var_1)), var_4);
    }
    #pragma endscop
}
