/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, ((max((!-78578226), (!-66))))));

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        var_18 = ((((((1 ? 8897587675366162276 : 8897587675366162288))) ? -5 : -78578226)));
                        arr_12 [i_0] [i_1] [i_0] [i_1] [i_0 - 1] = ((!(((!-78578226) && ((((arr_11 [11] [i_1] [i_2] [i_1] [i_2] [i_3]) ? (arr_5 [i_0] [i_1] [i_1]) : var_8)))))));
                        arr_13 [i_3] [i_0 + 2] [i_3] [i_0 - 1] = (((((arr_8 [i_0 + 1]) ? -13 : ((min(55925, (-32767 - 1)))))) == (((!(arr_1 [i_0 + 1]))))));
                    }
                    var_19 = (max(var_19, (arr_9 [i_1 - 3] [i_1 - 3] [i_0 + 2])));

                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        var_20 = ((~(~1974175412)));
                        var_21 = (min(var_21, (((var_8 ? (arr_1 [i_4 - 1]) : (arr_11 [i_4] [i_2] [i_1] [i_0] [i_0] [i_0]))))));
                        var_22 = (min(var_22, (((4611686018427387903 ? (~-70) : (~-8897587675366162302))))));
                        arr_18 [i_0 + 2] [i_1] [i_1] [10] [i_4] [i_1 - 4] = ((((max((-2107996834 & var_5), 4294967278))) ? (max((((arr_4 [i_2] [i_2]) ? -268435456 : var_1)), (arr_3 [i_4 - 2] [i_1 + 1]))) : ((((-(arr_3 [i_0] [i_4 - 1]))) + ((max(18362, (arr_3 [i_0] [i_0]))))))));
                        var_23 = (min(var_23, (((((245 ? (arr_16 [6] [i_1] [6]) : (4410616826248012990 ^ 0))) + 0)))));
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_24 += (arr_5 [i_0] [i_0] [i_2]);
                        var_25 = (max(var_25, 4294967278));

                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            arr_23 [i_0] [i_5] [i_2] [i_2] [i_5] [4] = (max(0, 4));
                            var_26 = (((arr_14 [i_2] [i_2] [i_2] [1]) ? (((arr_2 [i_1 + 2]) ? (arr_2 [i_1 - 3]) : (arr_6 [i_1 - 1] [i_0 + 1]))) : (((((~(arr_14 [i_1] [i_2] [i_5] [i_6 + 2])))) ? 0 : (~-8897587675366162283)))));
                            var_27 *= ((~((0 - ((max(1, 103)))))));
                            var_28 *= ((((((((~(arr_3 [i_5] [i_6])))) ? 268435456 : (!15444)))) ? (80793344 ^ var_10) : ((1 ? 3881431195331548229 : 0))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
