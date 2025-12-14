/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_2 && var_10);
    var_18 = (min(var_8, ((min((var_0 && -15), var_5)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_19 = (((arr_3 [i_0]) == (((max(-14333, 1382825454111390301)) + (arr_3 [i_0])))));
        arr_4 [2] = (min((max(5998539993666449282, 1035167702)), (((!(arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_20 ^= ((((max(((189 ? var_13 : 0)), (63 == 3930179400)))) == (min((arr_2 [i_1] [i_1]), var_7))));
        arr_9 [i_1] [1] = (var_12 & 199);
        var_21 = ((~(((arr_7 [i_1] [6]) ? (arr_7 [17] [i_1]) : (arr_7 [9] [i_1])))));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    arr_18 [i_2] [1] [i_2] = ((((-2042279862 ? 96 : 1)) >> (11025 - 11009)));
                    var_22 -= -var_14;
                    var_23 = ((!(arr_14 [i_2] [i_2] [i_2])));
                    var_24 = (((arr_11 [i_4]) + (arr_16 [i_2] [i_3] [i_4] [i_2])));
                    var_25 += (((arr_16 [i_4] [i_4] [19] [0]) == (arr_13 [i_2] [i_4] [i_4])));
                }
            }
        }

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_26 ^= (((arr_19 [i_2] [i_5]) >= (arr_19 [i_5] [13])));
            var_27 *= (((arr_16 [i_2] [i_2] [i_5] [i_5]) - (arr_16 [i_2] [i_2] [i_5] [i_5])));
        }
        arr_22 [i_2] = (arr_21 [19] [i_2] [i_2]);
        var_28 = (((arr_13 [i_2] [i_2] [i_2]) | (arr_16 [i_2] [i_2] [i_2] [5])));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_29 = (((((arr_13 [i_6] [1] [i_6]) == var_16)) ? (!var_8) : var_1));
        var_30 &= ((45674 - (var_16 | 1)));
        var_31 -= 16582;
        var_32 = (((arr_15 [i_6] [i_6] [i_6]) ? (arr_19 [i_6] [i_6]) : (arr_14 [i_6] [11] [11])));
    }
    var_33 = (((((-9223372036854775807 - 1) == 264241152)) ? (((((min(var_11, var_14)) >= var_1)))) : var_16));
    #pragma endscop
}
