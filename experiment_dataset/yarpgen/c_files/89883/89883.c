/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;

    for (int i_0 = 3; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_13 = (min(((82 ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 1]))), (arr_1 [i_0 + 2])));
        arr_2 [i_0 - 3] [0] &= 82;
        var_14 *= ((var_10 >= (!3465733944228383384)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [i_2 + 1] [i_0] [i_0 + 2] = (min(((-82 ? var_2 : (arr_3 [i_2 - 2] [i_1] [i_2 - 3]))), ((min(-1, (((arr_5 [i_0 + 1] [i_1] [i_2 - 2]) + 34)))))));
                    var_15 = (((arr_6 [i_0 - 2] [i_0 - 1]) ? var_9 : (arr_5 [i_0 + 2] [i_0 + 2] [i_0 - 2])));
                    var_16 = ((69818988363776 ? 71 : 136));
                    arr_11 [i_2 - 3] [i_0] [i_0] [i_0 + 1] = (min((min(((224 | (arr_3 [i_0 - 2] [i_0 + 1] [i_0 + 1]))), (max(13731004972956770514, (arr_4 [i_2 + 1]))))), (max((max(var_9, 536869888)), (((-(arr_9 [i_0 + 1] [i_0 - 2] [i_1] [i_2 - 3]))))))));
                }
            }
        }
    }
    for (int i_3 = 3; i_3 < 13;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 13;i_6 += 1)
                {
                    {
                        var_17 = var_4;
                        var_18 = ((!(((-((((arr_6 [i_3 - 3] [i_4 + 1]) == (arr_19 [i_4 + 1] [i_5] [i_6 - 2])))))))));
                        arr_23 [i_3 - 2] [i_6 - 1] [i_5] [i_6 - 2] = ((var_3 + ((221 ? ((121 ? 17831946849677100911 : -20068)) : 18446674254721187839))));
                    }
                }
            }
        }
        var_19 = ((((arr_13 [i_3 + 1] [i_3 - 3]) ? var_1 : (arr_9 [i_3 - 2] [i_3 + 2] [i_3 + 2] [i_3 + 1]))) * (min((arr_13 [i_3 + 1] [i_3 + 2]), var_1)));
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 13;i_7 += 1) /* same iter space */
    {
        arr_27 [i_7 + 2] = (arr_20 [i_7 - 2] [i_7 - 1] [i_7 + 1] [i_7 + 2]);
        arr_28 [i_7 - 3] = (((arr_7 [0] [i_7 - 3] [i_7 - 3] [i_7 - 3]) >> (-6419 + 6447)));
    }
    var_20 *= ((min(((var_1 ? var_0 : var_4)), var_11)) >> ((((~-27) || ((min(12, 614797224032450707)))))));
    #pragma endscop
}
