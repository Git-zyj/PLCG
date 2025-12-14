/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += 240;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = ((-(max(((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : 1))), ((~(arr_0 [i_0] [9])))))));
        var_13 = ((((((arr_0 [i_0] [0]) ? (!var_1) : (-3671589574785416981 || 0)))) ? (max(0, (arr_0 [i_0] [5]))) : var_10));
        var_14 = (i_0 % 2 == zero) ? (((!((((min((arr_0 [i_0] [3]), (arr_2 [1]))) << (((arr_1 [i_0]) - 1940151221)))))))) : (((!((((min((arr_0 [i_0] [3]), (arr_2 [1]))) << (((((arr_1 [i_0]) - 1940151221)) + 2031946171))))))));
    }
    var_15 = (!var_0);
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {
                    var_16 = (min((arr_6 [i_3]), ((((((arr_6 [6]) ^ 0))) >= (max(var_1, var_4))))));

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_17 |= (((((((max(-1294620422, var_10)) <= (arr_3 [i_3 - 1] [i_2]))))) ^ (min(((max((arr_5 [11]), var_0))), 0))));
                        arr_17 [i_1] [i_4] [i_1] [i_3 - 1] [0] |= var_1;
                        arr_18 [10] [9] [i_3 - 1] [i_3] [2] = 19510;
                    }
                    for (int i_5 = 4; i_5 < 12;i_5 += 1)
                    {
                        var_18 = (~(((arr_8 [i_3 + 1] [i_2] [i_5 - 3]) / -1256511170)));
                        var_19 = (max(var_19, (arr_15 [10] [8] [i_2] [i_5 + 1])));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_23 [i_1] [i_3] [4] [i_5 + 1] = ((~(arr_13 [i_1] [i_5 - 1] [i_3 + 1])));
                            var_20 = ((var_6 ? (~var_10) : (arr_10 [i_1])));
                        }
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_21 = ((~((max(var_2, (arr_7 [i_3 - 1]))))));
                        var_22 |= (max((arr_8 [i_1] [8] [5]), (arr_3 [8] [i_3 - 1])));
                        var_23 = (arr_19 [i_1] [i_3 + 1] [i_2] [6] [3]);
                    }
                    for (int i_8 = 2; i_8 < 11;i_8 += 1)
                    {
                        arr_29 [i_3] [i_2] = (!0);
                        var_24 = (arr_28 [9] [11] [i_3 - 1] [i_8 - 2] [3] [4]);
                        arr_30 [i_1] [i_3] [7] [i_8 + 2] = (max((~0), (min((arr_28 [i_8 - 1] [1] [i_3 - 1] [i_8 - 2] [i_2] [i_1]), -1256511171))));

                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            arr_33 [8] [i_3] [5] [i_3 - 1] = ((+(max((arr_10 [i_9]), (arr_31 [i_9] [i_2] [12] [5] [i_9] [i_1] [i_1])))));
                            arr_34 [6] [2] [3] [i_1] [i_9] [i_3] = ((!(((max((arr_24 [i_1] [2]), 6804764927225909103))))));
                        }
                        var_25 = (min((var_8 | 0), (((arr_10 [i_3 + 1]) * (arr_10 [i_3 - 1])))));
                    }
                    var_26 = (min(var_26, ((max((arr_13 [1] [1] [i_3]), -1105770622)))));
                    var_27 = (((((var_1 ? (((arr_32 [i_1] [i_3] [3] [8] [3] [i_2] [6]) ? -116 : var_9)) : ((2147483647 / (arr_11 [i_3 + 1] [i_1])))))) ? 236 : 101));
                    var_28 += ((((max(((1105770621 - (arr_19 [2] [i_1] [i_1] [10] [1]))), (arr_24 [1] [2])))) <= (((min(-9223372036854775783, (arr_27 [i_1] [i_2] [2] [i_2]))) ^ ((53 ? 4402095016195483886 : (arr_12 [8] [i_2])))))));
                }
            }
        }
    }
    #pragma endscop
}
