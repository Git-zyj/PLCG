/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((-((30310 ? 6 : 1)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [0] [i_0] = (((arr_0 [i_0]) ? 1 : (arr_0 [i_0])));
        arr_4 [i_0] [i_0] &= (arr_0 [i_0]);
        var_15 = (var_12 | var_3);
        arr_5 [i_0] &= 0;
    }
    var_16 = (var_10 >> var_9);
    var_17 = (min(var_17, (((min(var_7, (~35221)))))));

    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_18 = (max((((((var_9 >> (((arr_6 [i_1]) - 35043))))) ? 55421 : var_6)), (arr_1 [2])));
        var_19 = (max(var_19, ((max(109, 65520)))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        arr_12 [i_2] = (((~55431) & var_4));
        var_20 = (!var_9);
        var_21 = (((-(arr_11 [i_2 - 1]))));
    }
    for (int i_3 = 4; i_3 < 22;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    arr_21 [i_3] [i_3] |= var_11;

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        arr_24 [i_3 + 2] [i_4] [i_5] = 55435;
                        var_22 = ((54487 ? (max((var_2 >= var_4), 2234207627640832)) : (((var_11 ? 30310 : (arr_18 [i_4]))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_27 [i_4] [i_4] [i_4] = ((-22455 ? 255 : -111));

                        for (int i_8 = 1; i_8 < 22;i_8 += 1)
                        {
                            var_23 ^= ((((var_5 ? var_10 : (arr_22 [i_3]))) + var_12));
                            var_24 = ((1453 % (arr_19 [i_3] [i_4])));
                        }
                        var_25 = (min(var_25, (arr_20 [i_3 + 2] [i_3 + 2] [i_3 - 4])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 23;i_10 += 1)
            {
                {
                    arr_35 [i_10] = 196;
                    arr_36 [i_3] [i_10] [i_10] = (((arr_19 [i_3 - 2] [i_9]) * (0 | 99)));
                }
            }
        }
        var_26 = 8;
    }
    #pragma endscop
}
