/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += ((-(var_3 + -6203955683618803481)));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_16 = arr_0 [i_0 - 2];
        arr_2 [i_0] [i_0] = (min((arr_1 [10] [i_0]), ((((arr_0 [i_0 - 2]) * var_4)))));
        var_17 = (((arr_1 [i_0 + 1] [1]) ? var_2 : (min((arr_0 [10]), (arr_1 [i_0] [i_0 - 3])))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_18 ^= (4931 && 4912);
        arr_7 [i_1] = (((((arr_1 [i_1] [i_1]) + 9223372036854775807)) << (((((arr_3 [i_1]) + 9000997962537549023)) - 46))));
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            var_19 = (max(var_19, 4915));
            var_20 += (arr_9 [i_2] [i_3 + 3]);
            var_21 = (((arr_12 [i_3 - 2] [0]) ? (arr_11 [i_2] [i_2]) : (var_9 * 124)));
            arr_13 [i_2] [i_2] [i_2] = (arr_9 [i_3 + 1] [i_3 - 2]);
        }
        var_22 = ((((((arr_10 [i_2]) ? (arr_10 [i_2]) : var_5))) ? var_8 : ((-(arr_10 [6])))));
        var_23 = (((arr_11 [i_2] [i_2]) ^ var_10));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_24 = (((((var_12 ? var_5 : var_0))) ? (arr_15 [i_4]) : var_3));

        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            var_25 = (arr_19 [i_4] [i_5]);
            var_26 = (arr_17 [i_4] [i_4] [i_4]);
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_27 *= var_12;
                                var_28 = -113;
                                var_29 += (((arr_22 [i_6] [i_4] [i_8 + 1] [i_8 - 1]) ? (arr_26 [i_6] [i_8 + 1] [i_8 - 1] [i_8 - 2] [i_9] [i_9 - 1]) : (arr_26 [i_8] [i_8 - 2] [i_8 - 2] [i_8 + 1] [1] [i_9 + 4])));
                                var_30 ^= ((var_9 ? (((4931 ? (arr_25 [i_4] [i_4]) : var_10))) : (arr_14 [i_8] [i_6])));
                                var_31 = (arr_27 [i_4] [i_9 + 3] [i_4] [i_4] [i_4]);
                            }
                        }
                    }
                    var_32 = var_9;
                }
            }
        }
    }
    #pragma endscop
}
