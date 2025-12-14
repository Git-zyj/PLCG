/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_9 || (((max(13, 3912418029064594555))))));
    var_11 = (max(var_11, (((var_2 ? var_0 : (((17300245070988240800 << ((((117 ? 1432856573432763835 : var_9)) - 1432856573432763817))))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [1] = (((arr_0 [i_0]) + var_1));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 ^= (17013887500276787781 <= 17013887500276787781);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [5] [i_2] [i_0] [i_0] = ((11030810849094894490 ? 1 : 1));
                                var_13 -= ((~(arr_10 [i_0] [i_2] [i_4])));
                                arr_14 [i_0] [i_1] [i_0] [2] [i_4] = 11030810849094894491;
                            }
                        }
                    }
                    var_14 = ((1432856573432763837 ? (arr_1 [i_1 + 1] [i_1 - 1]) : var_1));
                    var_15 = (min(var_15, (arr_0 [i_1 + 1])));
                }
            }
        }
        var_16 += 65520;
        arr_15 [i_0] = 17261790600468456276;
        var_17 *= var_5;
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_18 = ((((((var_9 | (arr_16 [i_5] [i_5]))) & 0)) >> (((arr_2 [i_5]) - 24875))));
        var_19 = (min(var_19, ((max((11030810849094894490 / -1), -123)))));
        var_20 *= ((var_8 ? (((((var_1 - 123) == 18446744073709551615)))) : (max(7415933224614657131, 65535))));
        arr_18 [i_5] [i_5] = ((!((min((arr_0 [18]), var_6)))));
    }
    var_21 = 108;
    #pragma endscop
}
