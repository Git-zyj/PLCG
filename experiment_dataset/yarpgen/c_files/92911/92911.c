/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 0;
    var_20 = ((70 ? -93 : 8351092970273614445));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = ((((-(arr_1 [i_0] [i_0 + 2]))) & (((max((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1])))))));
        var_21 -= (-88 <= 102);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (min((max((~-59), ((-102 ? -71 : -114)))), (-82 < 205)));
        arr_6 [i_1] [i_1] = ((-80 ? 0 : -10));
        var_22 = ((((arr_3 [i_1]) ? (!-75) : 1765724481)));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (~220473535);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_21 [i_4] [i_4] [1] [i_2] [i_2] = max((((~(arr_17 [i_6] [i_6] [i_5 - 1] [i_5 - 1] [i_4])))), ((((78 || (arr_10 [i_3]))) ? (((102 ? -103 : 0))) : (min(var_3, (arr_20 [1] [i_2] [9] [i_4] [i_2] [i_2]))))));
                            var_23 = (((~(~var_5))));
                            arr_22 [i_2] [i_4] [i_2] [i_5 + 1] [i_2] = (~74);
                            arr_23 [17] [i_4] [i_4] [i_3] [i_3] [i_4] [i_2] = min((((arr_15 [i_5 - 1] [i_5] [i_5] [i_5 - 1] [i_5] [i_5 + 1]) ? (arr_15 [i_5 + 2] [i_5 + 2] [i_5] [i_5] [i_5 - 1] [i_5 + 1]) : var_6)), ((min((arr_15 [i_5 - 1] [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1]), (arr_15 [i_5 + 1] [i_5] [i_5] [i_5 - 1] [i_5] [i_5 - 1])))));
                            var_24 = (max(var_24, var_0));
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            arr_27 [i_4] [i_5] [i_2] = (((((((min(108, -111))) ? -96 : ((56 & (arr_4 [i_5] [i_5])))))) ? (max(96, -18446744073709551615)) : (arr_8 [i_7])));
                            arr_28 [i_4] [i_4] [i_4] [1] [i_4] [i_4] [i_4] = (((~-80) || ((min((min((arr_17 [1] [i_2] [i_4] [i_2] [i_2]), (arr_15 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))), var_4)))));
                        }
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            arr_32 [i_4] [i_3] [i_4] [i_5 + 2] [i_3] = (min((arr_26 [0] [2] [i_4] [0] [i_5] [i_4]), (min(var_17, ((88 ? -103 : 9))))));
                            var_25 = (((1972287031 != -61) ? ((min(0, (arr_12 [1] [i_4])))) : ((min(-97, -11)))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            arr_37 [i_9] |= (arr_3 [i_9]);
                            arr_38 [6] [i_2] [i_3] [i_4] [i_2] [i_9] [i_4] = var_7;
                            var_26 = (min(var_26, 105));
                        }
                        var_27 = ((((var_18 ? (arr_19 [i_5 + 2] [i_5] [i_5 + 2] [i_5 - 1] [i_5 + 2] [i_5]) : (arr_19 [i_5 + 2] [i_5 + 2] [i_5 + 1] [i_5 - 1] [i_5 + 2] [i_5 + 1]))) << ((min(0, 105)))));
                    }
                }
            }
        }
        arr_39 [i_2] = min((min(9076908265034021568, -103)), ((min((((arr_31 [i_2] [i_2] [i_2] [i_2] [i_2]) ? (arr_26 [i_2] [i_2] [i_2] [i_2] [i_2] [16]) : var_3)), ((((arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) & (arr_34 [i_2] [i_2] [0] [i_2] [0] [2] [0]))))))));
        var_28 = ((-((12 ? -107 : (233 * -23)))));
        var_29 -= (arr_17 [i_2] [i_2] [i_2] [1] [i_2]);
    }
    #pragma endscop
}
