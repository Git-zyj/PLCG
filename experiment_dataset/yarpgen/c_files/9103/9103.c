/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_17 = ((((((var_5 ? (arr_1 [i_0]) : var_11))) ? ((4294967295 ? 1 : 4294967294)) : ((var_5 ? 1 : var_5)))) >> (((max((var_10 && var_1), (arr_1 [i_0]))) - 1919186216)));
        var_18 = ((4294967295 ? ((2 ? 4294967294 : 127)) : (arr_0 [20])));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_5 [i_0 - 1] [i_0] = (arr_0 [i_0]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_10 [i_1] [0] [i_0] = ((((-958021264 ? ((2 ? 524287 : 113)) : (((var_15 ? 4122852515 : var_14))))) >= ((((arr_9 [i_0] [i_0]) ? ((((arr_2 [i_0]) >= 4294967295))) : var_3)))));
                        var_19 = ((((var_3 ? (arr_8 [i_3] [i_3] [i_0 - 1]) : (arr_0 [i_0 - 2]))) | (var_5 | var_8)));
                        var_20 = (max(var_20, (arr_4 [i_0 - 2] [i_3])));
                    }
                }
            }
            arr_11 [i_0] [i_0] = 6;
            var_21 = (min(var_21, (((var_3 ^ ((((arr_0 [i_1]) ? (arr_9 [10] [i_1]) : 0))))))));

            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                var_22 = (max(var_22, 18));
                var_23 = (max(var_23, 185));
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_24 = (((var_1 > -93) == ((~(arr_15 [i_5])))));
        var_25 = var_5;
        arr_18 [i_5] = ((((4122852508 || (arr_17 [i_5] [24]))) ? 14 : (((var_13 ? (arr_17 [i_5] [i_5]) : (arr_17 [i_5] [i_5]))))));
        var_26 += var_16;
    }
    for (int i_6 = 1; i_6 < 19;i_6 += 1)
    {
        var_27 = ((~(arr_9 [0] [0])));
        var_28 = (min(var_28, var_13));
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    var_29 = (max(var_29, ((+(((arr_8 [i_7] [9] [i_9]) ? (-745736103 >= var_9) : 4294967294))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            {
                                var_30 = max((max(-1, 9032)), (((!(arr_30 [i_11] [i_10] [i_9] [i_8])))));
                                arr_35 [i_7] [i_7] [i_7] [16] [i_7] [i_7] = (!var_8);
                            }
                        }
                    }
                    var_31 = ((~((var_14 ? (arr_28 [i_7] [i_8] [i_8] [i_9]) : var_9))));
                }
            }
        }
    }
    var_32 += (((-65535 + 2147483647) >> (745736095 - 745736077)));

    for (int i_12 = 3; i_12 < 20;i_12 += 1)
    {
        var_33 = (min(var_33, -3357863516230672703));
        var_34 -= (arr_4 [i_12 + 1] [i_12 - 2]);
        var_35 ^= var_16;
    }
    for (int i_13 = 0; i_13 < 20;i_13 += 1)
    {
        var_36 = (((((((var_0 ? 4294967295 : (arr_30 [i_13] [i_13] [i_13] [i_13]))) * var_0))) ? (max((arr_22 [i_13]), (((var_14 ? 6 : var_16))))) : (arr_41 [i_13])));
        arr_42 [15] = ((((max(((101 >> (var_7 - 3234337926))), var_12))) ? ((((var_15 ? (arr_31 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) : var_8)))) : ((max(155, (arr_21 [i_13]))))));
        var_37 = ((~(((arr_30 [i_13] [i_13] [i_13] [20]) / (arr_30 [i_13] [i_13] [i_13] [i_13])))));
    }
    /* vectorizable */
    for (int i_14 = 1; i_14 < 15;i_14 += 1)
    {
        var_38 = (max(var_38, 4294967282));
        var_39 ^= (((arr_6 [i_14 + 2] [i_14 - 1]) ? (arr_6 [i_14 + 1] [i_14 + 3]) : (arr_6 [i_14 + 2] [i_14 + 3])));
    }
    #pragma endscop
}
