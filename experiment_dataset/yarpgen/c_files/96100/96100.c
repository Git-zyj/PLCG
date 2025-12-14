/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (((((((max(3637388761, 657578534))) ? (var_15 | 33868) : ((var_5 ? var_15 : 3987999925))))) ? ((((!(~var_14))))) : ((var_15 & ((min(-16509, var_0)))))));
    var_19 -= (max(var_6, -5292));
    var_20 = var_2;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_21 = ((-(((arr_0 [i_0]) / (arr_1 [i_0 + 3])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    {
                        var_22 ^= (arr_3 [i_0] [i_1] [i_3]);
                        arr_11 [i_0] [i_0] [i_2 - 1] [i_3 + 1] = (arr_5 [i_3] [i_2 - 1] [i_1] [i_0]);

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_23 = (max(var_23, (510 <= 7309826125222904027)));
                            var_24 ^= (arr_10 [i_4] [i_1] [i_1] [i_0]);
                            var_25 = (min(var_25, (((((min((arr_13 [0] [0] [i_3 + 2] [13] [0]), (arr_13 [12] [12] [i_3 + 1] [i_3 + 1] [i_3])))) ? (max((arr_13 [i_3] [1] [i_3 + 2] [i_3] [13]), 7309826125222904038)) : ((((arr_13 [i_3] [i_3] [i_3 + 1] [i_3] [10]) ? (arr_13 [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_3]) : (arr_13 [i_3] [i_3] [i_3 + 2] [i_3] [i_3])))))))));
                            var_26 = (((((!(arr_4 [i_0 + 2] [i_4]))))) ? (arr_6 [i_0] [i_1] [i_3] [i_0]) : (arr_1 [i_0 - 1]));
                            arr_14 [i_0] [i_1] [i_2 - 1] [i_4] [i_3 - 1] = -16657;
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 8;i_5 += 1)
    {
        var_27 = 657578533;
        arr_18 [i_5] [i_5] = ((~(11989 < var_17)));
        var_28 = (arr_6 [i_5 - 1] [i_5 - 1] [i_5 + 2] [i_5]);
    }
    #pragma endscop
}
