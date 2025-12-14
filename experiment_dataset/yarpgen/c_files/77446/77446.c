/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((((65535 ? 8388352 : 384))))));
                var_16 = (min(var_16, ((((~4294967295) << (((arr_0 [i_0]) - 33910)))))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    var_17 = var_0;
                    arr_7 [i_1] [i_1] [i_0 - 1] = (65520 ? (((8388352 ? 20 : 65516))) : 5011206864295450631);
                    var_18 = (min(var_18, 20));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_19 = (44346 ? ((var_0 ? (arr_8 [i_0] [i_0 - 2] [i_0 - 3]) : (arr_9 [i_0 - 1]))) : (var_11 > var_0));
                    arr_10 [i_3] [i_1] [i_1] = ((!65513) ? var_11 : ((((!(arr_6 [i_0 - 1] [i_3]))))));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {

                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        var_20 = (max(var_20, (((var_8 * 1) ? 18446744073709551604 : (((2440283211 ? 65524 : 65521)))))));
                        var_21 = arr_11 [i_0 + 2] [i_1] [i_4] [i_5 + 1];
                        var_22 = (min(var_22, (arr_1 [i_0 + 3] [i_0])));
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_23 = -18409795819836934646;
                        var_24 ^= (!91222519);
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_25 = (max(var_25, (arr_5 [i_0 + 3] [i_1])));
                                var_26 = (max(var_26, ((-(arr_18 [i_4] [i_0 + 2] [i_0 + 3] [i_4])))));
                                var_27 = (arr_3 [i_1]);
                            }
                        }
                    }
                }
                var_28 = (min(var_28, ((((((2440283211 ? 7894831295478484774 : 4294967278))) / (arr_19 [i_0 - 2] [i_1] [8]))))));
                arr_22 [i_1] [i_1] = var_14;
            }
        }
    }
    var_29 = (var_3 ? var_14 : var_13);
    #pragma endscop
}
