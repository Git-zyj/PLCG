/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (~var_5);
    var_13 ^= ((min(27865, -17455)));
    var_14 = var_2;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] |= ((-(((((11410235174813413033 ? 11410235174813413034 : var_6))) ? ((min(1, var_8))) : var_3))));
        arr_3 [i_0] [i_0] = (min((((-var_0 ? var_11 : ((var_0 ? (arr_0 [i_0] [i_0]) : 512))))), (((((var_3 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))) ? ((var_10 & (arr_1 [i_0]))) : var_11))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_15 = 31034;
                        arr_11 [3] = var_8;

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_16 ^= ((17455 + -11929) ? 17432 : (min(var_2, (arr_9 [i_0] [i_1] [i_2] [i_2 - 1]))));
                            var_17 = (max(-11949, -32755));
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            var_18 += ((7036508898896138573 >> (arr_14 [i_0] [i_2 + 3] [i_2] [i_5 - 1])));
                            var_19 ^= (((arr_5 [i_1] [i_1] [i_1]) == (arr_8 [i_2] [i_2] [i_2] [i_2] [i_2])));
                            var_20 = ((+(((arr_9 [i_1] [i_2] [14] [i_2]) ? var_2 : var_10))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] &= 9658584013584616937;
                            var_21 = var_8;
                        }
                        var_22 = 1190888475;
                    }
                }
            }
        }
        arr_17 [i_0] [i_0] = (((max(1, (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))) && ((max(32763, var_3))));
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        arr_20 [i_6] &= ((((((arr_8 [i_6] [i_6] [i_6] [i_6] [i_6]) ? var_2 : (arr_7 [i_6] [i_6] [i_6] [i_6])))) ? ((((arr_7 [i_6] [i_6] [i_6] [i_6]) & var_3))) : (min((arr_8 [i_6] [15] [i_6] [15] [i_6]), var_10))));
        arr_21 [12] = (arr_6 [i_6] [i_6] [i_6]);
        arr_22 [11] &= -var_4;
        var_23 -= ((+-951265585) ? (arr_9 [i_6] [i_6] [5] [i_6]) : ((((((arr_1 [4]) + 2371951631))) ? var_8 : (max(var_10, -24185)))));
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
    {
        arr_27 [i_7] &= ((32764 ? -32652 : 2371951638));
        var_24 = (max((((var_4 ? -var_8 : ((-1190888480 ? 19004 : -11938))))), (((arr_12 [16] [16] [16] [9] [i_7] [16] [i_7]) ? (((arr_26 [i_7] [i_7]) ? var_2 : var_6)) : (arr_5 [i_7] [i_7] [i_7])))));
        var_25 &= (((arr_13 [i_7] [i_7] [i_7] [i_7] [i_7]) ? ((((min(var_11, var_7))) | (-11925 && 27195))) : ((~(var_3 > var_11)))));
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 4; i_10 < 15;i_10 += 1)
            {
                {
                    var_26 = (min((min((((arr_0 [i_10] [i_10]) ? -20760 : 13826105406190450073)), ((var_0 ? var_2 : (arr_34 [i_10] [i_9] [i_10]))))), ((((arr_14 [i_10 - 1] [i_10 - 1] [i_10] [i_10]) ? var_11 : var_9)))));
                    var_27 += -20760;
                }
            }
        }
        arr_37 [i_8] = (min((min(var_9, (arr_15 [i_8] [i_8] [i_8] [i_8] [1] [i_8] [i_8]))), ((min((arr_13 [i_8] [13] [i_8] [i_8] [i_8]), (arr_13 [i_8] [i_8] [i_8] [i_8] [1]))))));
    }
    var_28 = (((!2371951638) | var_4));
    #pragma endscop
}
