/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_10 = max((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]))), (min((arr_0 [i_0]), 4251316197)));
        var_11 *= ((1402003096 || (arr_2 [i_0])));
        var_12 = (max(var_12, (((var_7 / (min(1722786914, (arr_1 [i_0]))))))));
        var_13 ^= (((min(43651125, 4225294023))) ? (max(((3311804020 ? (arr_2 [i_0]) : 2224540735)), var_0)) : var_8);
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            {

                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    var_14 ^= (2347476491 ? 3194943504 : (4225294023 == 4251316218));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 15;i_5 += 1)
                        {
                            {
                                arr_16 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_4] [i_5] [i_4] = (-(((arr_15 [i_1 + 4] [i_1 + 1] [i_1 + 4] [i_4 - 1]) + (arr_14 [i_1 + 2] [i_1 + 1] [i_1 + 3] [i_4 + 1] [i_5 - 4] [i_5 - 4] [i_5 - 2]))));
                                arr_17 [i_1] [i_1] [i_3] = (2070426557 ? ((var_9 ? (arr_12 [i_3] [i_3] [i_3] [i_4]) : (~3662618374))) : (max((arr_9 [i_1 + 4] [i_4 + 1]), var_5)));
                                var_15 |= min(((var_5 ? (arr_10 [i_5 - 3] [i_3] [i_2] [i_1 + 1]) : (arr_10 [i_1 + 4] [i_2] [i_1 + 4] [i_4]))), (((arr_14 [i_4] [i_4 + 1] [i_4 + 1] [i_4] [i_4 - 1] [i_4 + 1] [i_4 + 1]) ? ((var_5 ? 3194943504 : (arr_13 [i_1] [i_3] [i_4] [i_5]))) : (arr_14 [i_4] [i_4 + 1] [i_3] [i_3] [i_3] [i_3] [i_3]))));
                            }
                        }
                    }
                }
                arr_18 [i_2] [i_1] = ((((~(69673285 || 3194943504)))) * (min((((arr_0 [i_2]) - (arr_13 [i_2] [i_2] [i_2] [i_1]))), var_1)));
            }
        }
    }
    #pragma endscop
}
