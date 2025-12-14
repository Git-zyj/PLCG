/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_1] [i_1] [17] [i_2] = (((~10029466928695170221) > (min(((var_4 ? 222510356 : (arr_2 [i_0] [i_1]))), (arr_1 [i_2] [i_1])))));
                    var_10 = (min((((arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 1]) >> (((arr_5 [i_1 + 2] [i_1 - 1] [i_1 - 1]) - 1909729093)))), ((-(arr_5 [i_1 + 3] [i_1 + 2] [i_1 + 3])))));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_11 = -2019763364295703099;
                        arr_13 [i_0] [i_1] = (((((-2019763364295703099 ? var_9 : 0))) || var_3));
                    }
                    var_12 = (+((((((var_8 ? (arr_8 [i_1] [i_3] [9] [i_1]) : (arr_2 [i_0] [13])))) >= (min(3880759614, 579043319666671788))))));
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                {
                    var_13 = var_2;
                    var_14 = (min(var_2, ((-(arr_14 [i_1] [i_1] [i_5])))));
                }
                for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                {
                    var_15 = ((((max((arr_1 [i_0] [i_0]), (arr_15 [i_0] [i_1] [i_1 + 1] [i_1 + 2])))) ? 0 : (min(((((arr_3 [i_1] [i_1] [i_1]) ? var_7 : var_3))), ((8449228895877134317 >> (-6967872657723876966 + 6967872657723876972)))))));
                    var_16 = (var_1 || ((max(var_4, (max(-579043319666671788, 36))))));
                }
                var_17 = -1;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {

                            for (int i_9 = 0; i_9 < 18;i_9 += 1)
                            {
                                var_18 = ((-2019763364295703099 ? (max((((arr_5 [i_0] [i_1 - 1] [17]) ? -2019763364295703099 : 2019763364295703099)), (201 > 27))) : var_4));
                                arr_25 [i_0] [i_1] [i_7] [i_1] [i_9] = ((227 ^ (min(4072456939, -7183283608945458472))));
                                var_19 = (min((arr_5 [i_0] [i_0] [i_0]), var_2));
                                var_20 = ((-79 ? (arr_20 [0] [i_0]) : (80 ^ var_0)));
                            }
                            var_21 = (var_9 ? (((arr_9 [i_1 + 3] [i_1]) | -2019763364295703107)) : ((((arr_15 [i_0] [i_1] [i_7] [i_8]) ? 0 : 562222486))));
                        }
                    }
                }
            }
        }
    }
    var_22 = (176 * 2666621266);

    for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
    {
        arr_30 [i_10] = ((min((arr_29 [i_10]), (((1 ? 222510356 : 54))))));
        var_23 = (0 > 0);
    }
    for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
    {
        var_24 = (max((min((arr_33 [i_11] [i_11]), 18147547386481297173)), ((min((arr_28 [i_11]), -103)))));
        var_25 = (min(1, (arr_27 [i_11] [5])));
        var_26 = ((((var_7 >= (arr_32 [i_11])))));
        arr_34 [i_11] = 29;
    }
    #pragma endscop
}
