/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = (max((((((var_4 ^ (arr_4 [i_0])))) ? var_1 : (arr_4 [i_1]))), (((((min(-21316, (arr_5 [i_1] [i_1] [i_0])))) ? ((-(arr_0 [i_0]))) : ((var_15 ? var_5 : (arr_1 [i_1]))))))));
                var_16 = (((!3616427371717537677) ? ((-77 ? var_9 : 5179754981139059158)) : ((min((-2 >= -13), -26)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_17 *= (!(var_12 + var_11));
                                var_18 = (((((((((arr_9 [i_2] [i_3]) % 11324144782450039944))) ? -2 : (var_3 || var_1)))) ? (max((min(var_4, 7755533500861460268)), -30)) : var_9));
                                arr_19 [i_2] [i_2] [i_3] [i_4] [i_4] [i_5] [i_5] |= ((var_8 != (arr_14 [i_2] [i_2] [i_4] [i_6])));
                                var_19 &= ((((120 ? var_2 : (arr_9 [i_3 + 1] [i_5 - 1]))) <= (arr_9 [i_3 + 1] [i_5 + 1])));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_20 |= ((!-59) ? (((((arr_23 [i_2] [i_3] [i_4] [i_7]) || -6554630317808209103)) ? (((-2147483647 - 1) ? -7326 : 1108307720798208)) : (!var_10))) : ((((min(var_5, 10746117095677838862))) ? (((arr_10 [i_7] [i_4] [i_2]) ? var_6 : (arr_17 [i_2] [i_3 - 1] [i_3 + 1] [i_3] [i_4] [i_7] [i_7]))) : (arr_12 [i_7]))));
                        arr_24 [i_2] [i_3] [i_3] [i_2] = ((((min((-123 / -2280475205477897462), -185317670))) ? -11 : ((min(-1001662281, (arr_16 [i_7] [i_7] [i_4] [i_4] [i_3] [i_3 + 1] [i_2]))))));
                        arr_25 [i_3 - 1] [i_7] [i_2] [i_2] [i_3 - 1] [i_2] = arr_17 [i_2] [i_2] [i_3] [i_2] [i_2] [i_4] [i_7];
                        var_21 -= ((((max(var_3, ((var_13 ? var_8 : var_8))))) ? (((max(var_11, (arr_9 [i_2] [i_4]))))) : ((~(arr_8 [i_2])))));
                    }
                    var_22 = ((~(((-41 + 2147483647) >> var_3))));
                }
            }
        }
    }
    #pragma endscop
}
