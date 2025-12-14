/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = (arr_6 [i_0] [9] [i_0] [i_0]);
                    arr_9 [i_2 - 3] [i_1] [i_2] [i_1] = (3526147263 | var_6);
                    arr_10 [0] [i_0] [i_0] [i_0] = -35;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_15 |= 35;
                var_16 -= ((((!(39 % var_8))) ? (((((((arr_12 [1]) < 0))) << (var_5 - 7389890347662790829)))) : ((-30 ? 11 : -144313448))));
                var_17 = (5562 % 1414109803);
                var_18 = (((((var_7 ? ((34 ? var_11 : var_8)) : ((max(260046848, (arr_13 [i_3]))))))) ? (((var_11 < (!107)))) : (((arr_14 [i_3]) ? (arr_14 [i_3]) : (arr_14 [i_3])))));
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        arr_19 [i_5] = var_9;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_19 += (arr_13 [i_6]);
                    arr_26 [i_6] = (((arr_25 [i_5 + 1] [i_5 + 1] [i_5 + 1]) % var_13));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        var_20 ^= ((9223372036854775807 ? ((~(arr_15 [i_8] [i_8] [i_8]))) : ((-8918809406143486856 ? -109 : 5562))));
        var_21 += (min(((((((var_12 >> (((arr_27 [i_8]) - 6840645696015141863))))) ? ((min(var_6, (arr_13 [i_8])))) : (~-117)))), ((-var_0 ? ((var_4 ? 37908 : var_0)) : (arr_16 [i_8] [i_8])))));
        var_22 = ((-((var_0 ? 1414109803 : ((992 ? (arr_27 [i_8]) : (arr_16 [i_8] [i_8])))))));
    }

    /* vectorizable */
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        var_23 = ((54753 ? (arr_30 [i_9]) : (arr_30 [i_9])));
        var_24 = (1 & 91);
        var_25 = var_8;
        var_26 = (!var_5);
        arr_32 [i_9] = -1278847335;
    }
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        var_27 -= (((arr_18 [i_10] [i_10]) ^ ((((-(arr_14 [i_10])))))));
        arr_35 [i_10] = 5;
        var_28 = 23593;
        var_29 = ((((arr_28 [i_10]) ? 0 : (arr_25 [i_10] [i_10] [i_10]))));
    }
    #pragma endscop
}
