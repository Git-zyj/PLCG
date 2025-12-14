/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [1] [i_1] [i_1] [i_0] |= ((((min(var_0, var_6))) ? ((1 ? (((var_8 ? var_6 : 19027))) : var_8)) : ((((!((max((arr_9 [i_0] [16] [i_1] [16] [i_2] [i_3]), (arr_4 [i_1] [i_1] [i_0]))))))))));
                        var_12 = ((((~((2 ? 866378989 : (arr_6 [16] [i_1]))))) == (arr_2 [i_3])));
                    }
                }
            }
        }
        var_13 += ((92 ? 1 : 17222));
        var_14 = (((min(((((arr_2 [i_0]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : 65535))), var_7)) & ((((((((arr_4 [17] [i_0] [17]) - (arr_5 [i_0] [13] [i_0] [i_0])))) || (!-10)))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_15 = (arr_12 [i_4] [14]);
        var_16 ^= (arr_12 [i_4] [i_4]);
        var_17 += arr_12 [4] [2];
    }
    var_18 = ((65523 ? -7600481345761124775 : -32));
    var_19 = (((((var_9 / ((max(var_10, -17222)))))) % (min(14386659462107751961, 12))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                var_20 = (((((((-(arr_16 [i_5]))) | (arr_24 [i_6 - 1] [i_5] [6] [i_8] [i_9] [i_6])))) ? (arr_20 [i_8] [i_8]) : ((((!65534) % (((arr_23 [i_7] [i_7] [4] [i_7] [i_7]) + 127)))))));
                                var_21 *= var_7;
                                var_22 = ((((max(var_2, (arr_21 [19] [i_6] [19] [i_5])))) < var_10));
                            }
                        }
                    }
                    var_23 = (max(var_23, (((((min(1415443492, (arr_15 [18] [18])))) ? (((((arr_15 [i_6 - 1] [16]) + 2147483647)) << (((((arr_15 [4] [4]) + 896)) - 12)))) : ((9651558210162692459 ? (arr_15 [i_5] [12]) : (arr_15 [22] [10]))))))));
                    arr_26 [i_5] [4] [i_7] = (arr_25 [22] [i_6 + 1] [i_6] [22] [i_6]);
                }
            }
        }
    }
    var_24 = (min(var_24, (((((((!1) >> (((~var_5) - 66))))) ^ (9651558210162692461 - -1570356536))))));
    #pragma endscop
}
