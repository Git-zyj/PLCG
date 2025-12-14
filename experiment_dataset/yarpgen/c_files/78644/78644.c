/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_3] [i_2] [i_4] [i_1] [i_2] = (((((1 << (var_1 - 57)))) ? (min((arr_11 [i_1 - 1] [i_1 - 1] [i_2] [i_3] [3]), 3976083307)) : (arr_1 [i_1])));
                                var_17 = (arr_12 [i_0] [i_2] [i_2] [i_3]);
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_18 = (max(var_18, 75));
                        var_19 = arr_4 [i_5];
                        var_20 = (~(arr_4 [i_1 - 1]));
                        var_21 = ((111 ? (!var_4) : (arr_8 [i_1 - 1] [i_2] [i_1 + 1] [i_2] [i_0])));
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_22 = ((max((((-(arr_8 [i_0] [i_2] [i_2] [i_2] [8]))), -var_12))));

                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_23 &= 3976083307;
                            var_24 = ((((119 ? var_13 : 18446744073709551615)) & (31649 - 29040)));
                            var_25 = ((~(((arr_16 [i_0] [i_1] [i_0] [i_0]) ? (max(var_13, -583459407)) : (arr_6 [i_1] [i_1 - 1] [i_1 + 1])))));
                            var_26 = (max(var_26, 0));
                        }
                    }
                }
            }
        }
    }
    var_27 = var_13;
    var_28 = var_8;
    #pragma endscop
}
