/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 = ((var_5 >> (var_9 + 558682998)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = var_6;
                    var_15 = (arr_6 [i_0] [i_2 - 2] [i_2 - 2] [i_2 - 2]);
                    arr_8 [i_1] = -123;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [9] [i_0] [i_0] = (min((min((min((arr_5 [i_3 + 2]), 122)), (!-32767))), (!var_2)));
                                arr_18 [i_2] [i_2] |= (max((arr_4 [i_3] [i_3 - 1]), (!43057)));
                                var_16 = (min(var_16, (((!((((((arr_2 [i_2 - 1]) + 9223372036854775807)) >> (((arr_2 [i_2 - 1]) + 5367648345120300177))))))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] = (min(((-1801071181 | (arr_20 [i_5 - 1]))), ((max((arr_20 [i_5 + 1]), 1)))));
        arr_23 [i_5] [i_5 - 2] = ((min((0 & 6142), ((((arr_19 [i_5] [i_5]) ? (arr_19 [i_5] [3]) : var_11))))));
        var_17 = ((((!(var_4 || var_4))) || var_3));
        arr_24 [i_5] = (max((1 && 0), var_6));
    }
    for (int i_6 = 2; i_6 < 17;i_6 += 1) /* same iter space */
    {
        arr_27 [i_6] = 3113640653;
        arr_28 [i_6] = (~var_6);
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_32 [1] |= (arr_19 [i_7] [i_7]);
        var_18 ^= ((!((((var_0 ^ var_0) >> (((((arr_30 [i_7]) ? var_2 : var_1)) - 7880042)))))));
    }
    var_19 = ((-(max(var_11, (max(var_9, 2147483647))))));
    #pragma endscop
}
