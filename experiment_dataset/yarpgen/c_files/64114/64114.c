/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 ^= var_1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_1] = (arr_4 [5] [5] [i_2] [i_3 + 1]);
                            var_17 = (min(var_17, ((((arr_7 [i_3 - 2] [i_3 - 2] [i_0] [i_3 + 2]) ? (max((arr_8 [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 2] [i_3 + 2] [8]), ((var_6 ? var_15 : var_4)))) : ((max(var_7, (arr_4 [i_0] [i_3 + 2] [i_0] [i_0])))))))));

                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                var_18 = ((-((1 ? 1 : -29402))));
                                var_19 ^= max(((var_7 ? var_13 : (arr_11 [i_3 + 1] [i_3] [i_3 + 1] [1]))), var_13);
                                arr_13 [i_3] [i_1] [i_2] [i_3] [i_4] = var_8;
                                var_20 = ((((arr_1 [i_0]) ? (!var_15) : (arr_6 [i_1] [i_2] [i_3 - 2]))));
                                var_21 = ((((((arr_0 [i_0]) ? var_13 : ((var_3 | (arr_7 [i_0] [i_0] [i_1] [11])))))) ? (arr_0 [i_3]) : (arr_2 [i_2] [i_1])));
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                arr_17 [i_0] [i_1] [i_2] [i_3 + 1] [i_1] = ((+((var_13 ? (arr_4 [i_3 + 1] [i_3 - 1] [i_3] [i_3 - 2]) : (arr_9 [i_3 + 1] [i_1] [i_1] [i_3 - 2])))));
                                arr_18 [i_5] [i_1] [i_2] [i_1] [i_0] = max(var_5, (((!((min(-5, var_8)))))));
                                var_22 &= 1;
                                arr_19 [i_0] [i_1] [i_2] [i_2] [i_0] [i_1] = (((((arr_8 [i_3 + 1] [i_3] [i_3 - 2] [i_3 + 1] [i_3 - 2] [i_3 + 2]) ? (arr_8 [i_3] [i_3] [i_3 - 1] [i_3] [i_3] [i_3 + 2]) : (arr_11 [i_3] [i_3] [i_3] [i_3 + 1]))) / (arr_15 [i_3 - 2] [i_1] [i_3 + 2])));
                            }
                            for (int i_6 = 1; i_6 < 18;i_6 += 1)
                            {
                                var_23 = ((((min((arr_14 [i_1] [i_3 - 1] [i_3 - 2] [i_3] [i_3 - 2] [i_3 + 1]), (arr_14 [i_1] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3] [i_3 - 2])))) & (arr_14 [i_1] [i_0] [i_1] [i_2] [i_3] [i_6 + 1])));
                                var_24 -= ((((max((((arr_20 [i_0] [i_1] [i_0] [1] [i_2] [i_0] [i_6 + 1]) ? var_15 : var_3)), (((18446744073709551615 ? 1 : var_12)))))) ? var_7 : var_13));
                                var_25 = (max(var_25, (arr_12 [i_6] [i_6] [i_3] [i_6 - 1] [i_3] [i_3] [i_3])));
                            }
                            for (int i_7 = 1; i_7 < 18;i_7 += 1)
                            {
                                arr_25 [i_0] [i_1] [i_1] [i_3] [i_3] = ((var_3 ^ (((((max(var_7, 32))) ? (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : ((min(-19681, (arr_1 [i_1])))))))));
                                arr_26 [i_0] [18] [i_1] [i_3] [i_7 + 1] = arr_20 [i_0] [i_1] [i_2] [i_7] [i_7] [i_2] [i_3];
                                var_26 = 1;
                            }
                            var_27 = (arr_4 [i_3 - 2] [i_3 + 1] [i_3 + 1] [6]);
                        }
                    }
                }
            }
        }
    }
    var_28 = (max((((var_6 + 2147483647) >> (var_12 - 115))), 9));
    #pragma endscop
}
