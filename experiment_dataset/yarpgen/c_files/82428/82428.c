/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((31543 ? (arr_4 [i_0 - 3] [i_1 - 1]) : 247)) < (max((arr_4 [i_0 - 3] [i_1 + 3]), var_6))));
                var_13 = (min(var_13, (((((((~(-127 - 1))) ? (max((arr_3 [5]), -21823252)) : (((199 & (arr_2 [i_0 - 1] [i_1])))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_14 *= 216;
                            var_15 = (((((-127 - 1) + 2147483647)) >> (118386338 - 118386331)));
                            arr_10 [i_0] [i_0] [i_2] [i_3] = (((((-(!2)))) ? (((((4176580957 & 12160969563784563325) > (var_3 | var_12))))) : (min((!0), (arr_0 [i_2])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_16 |= ((-((((-9223372036854775807 - 1) >= (arr_8 [i_0] [i_0] [i_0] [i_0]))))));
                            var_17 = (arr_16 [i_5] [i_1] [i_0 - 3]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 3; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_18 ^= (((((((arr_3 [i_0 + 1]) && var_0)))) >= (((arr_3 [i_0 + 1]) ? var_3 : (arr_3 [i_0 + 1])))));
                                arr_24 [i_0] [i_0] [i_6] [i_7] [i_8] = (((max(var_8, 247))));
                                var_19 = (((((((min((arr_17 [i_0] [i_1 + 2]), (arr_17 [i_0] [i_0])))) ? 196 : var_0))) ? 7818566993451364397 : var_6));
                                arr_25 [i_0] [i_1] [i_1] [i_7] = (((((29 * (arr_23 [i_1 + 1] [i_7 - 1])))) ? (((((arr_0 [i_0]) | var_10)) & (((255 ^ (arr_14 [i_0] [i_1 + 3] [i_0])))))) : 0));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        var_20 = (max(var_20, ((((((2047 ? 6285774509924988290 : 20))) ? ((min(65532, 61196))) : ((((arr_26 [i_9]) || ((max(22, -1431635297)))))))))));
        var_21 = ((!(((arr_27 [i_9]) < (-697245028 & 1431635297)))));
    }
    var_22 = var_6;
    var_23 = (max(((max(25288, (var_2 <= -1431635297)))), var_2));
    #pragma endscop
}
