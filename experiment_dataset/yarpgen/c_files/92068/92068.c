/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_9 ? ((var_5 << (var_2 - 32952))) : (((~var_5) << (((~var_2) + 33039))))));
    var_16 = ((121 ? 134 : 1));

    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 = ((-(((((var_11 ? (arr_1 [i_0]) : (arr_6 [i_0] [i_2])))) ? var_3 : (((((arr_6 [i_0 + 4] [i_1 + 1]) || 9768773059328181938))))))));
                    var_18 = (((max(var_2, (var_5 / var_11))) / ((var_9 ? ((var_1 ? var_13 : (arr_5 [i_1] [i_1] [i_0]))) : (((~(arr_3 [i_0] [i_1]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 6;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3 - 1] [i_4] = arr_7 [i_2];
                                var_19 = (((-828730370 ? 22390 : 8677971014381369695)));
                                var_20 = (min(var_20, (((((((arr_9 [i_0] [i_0 - 2] [i_1] [i_3 - 1] [1] [i_3 - 4]) | (arr_1 [i_0 + 4])))) ? (((((((var_2 != (arr_6 [i_2] [i_0]))))) > (~var_9)))) : (arr_1 [5]))))));
                                var_21 = (((max((max(var_0, (arr_3 [i_1] [i_1]))), 849509342)) / ((((arr_7 [i_3]) ? ((((arr_8 [i_0] [i_1] [i_0] [2]) ? var_13 : var_7))) : ((var_10 ? var_4 : var_11)))))));
                                var_22 ^= max(((min((arr_2 [i_3 + 2]), var_13))), ((~(arr_13 [i_0] [i_0] [i_0] [i_0] [i_4]))));
                            }
                        }
                    }
                    var_23 ^= var_8;
                }
            }
        }
        var_24 &= arr_10 [i_0] [i_0];
        var_25 = (arr_10 [i_0 - 1] [i_0]);
        var_26 = (max(((~((var_4 ? 144 : 8677971014381369695)))), (((((((arr_13 [i_0] [i_0 - 1] [i_0 + 3] [i_0] [i_0]) ? var_13 : var_14))) ? (((var_5 < (arr_12 [i_0] [i_0] [i_0 + 3] [i_0])))) : ((var_3 ? (arr_12 [i_0] [i_0 + 3] [i_0] [i_0 + 3]) : 73)))))));
        arr_15 [i_0] [i_0] = arr_7 [i_0];
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_27 ^= (((max((((!(arr_16 [i_5])))), (arr_18 [i_5] [i_5])))) ? (min((var_14 / var_10), 18446744073709551601)) : ((0 ? 849509342 : 8677971014381369695)));
        arr_19 [i_5] = (max(((((((arr_17 [i_5]) % var_4)) % ((134 ? 828730343 : (-32767 - 1)))))), ((((min(var_6, (arr_18 [i_5] [i_5])))) ? (((var_4 ? (arr_16 [i_5]) : var_1))) : (max(var_6, (arr_18 [i_5] [i_5])))))));
        arr_20 [i_5] = (((((arr_17 [i_5]) << (((arr_17 [i_5]) - 33)))) ^ var_7));
        var_28 ^= (arr_18 [i_5] [i_5]);
    }
    #pragma endscop
}
