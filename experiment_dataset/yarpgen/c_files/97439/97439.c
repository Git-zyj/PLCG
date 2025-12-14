/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (max(var_9, ((((!6428192892096853834) << ((((var_5 ? var_14 : (arr_2 [i_1]))) - 7663005557382827141)))))));
                var_18 = (max(var_18, (((((7160880320233322908 ? 19497 : 10)) << (((max(var_4, (arr_3 [i_1] [i_0] [i_1]))) - 3126818003)))))));
                var_19 = (((((-(arr_1 [i_0] [i_0])))) ? (arr_1 [0] [i_1]) : (arr_3 [i_0] [i_1] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_3 + 2] [i_2] [i_1] = ((((min(2436970885, (arr_7 [i_3] [i_3 + 2] [17] [i_2 - 2])))) ? (arr_6 [i_0] [i_0]) : (arr_2 [i_1])));

                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                var_20 = ((!(((((arr_12 [i_1] [i_1] [15] [20] [i_1]) ? (arr_9 [10] [i_0] [i_0] [i_0]) : (arr_1 [i_1] [i_0])))))));
                                var_21 = (!(((var_0 ? (arr_13 [i_3 + 2] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1]) : var_4))));
                                arr_16 [i_0] [i_0] [21] [17] [i_0] [i_0] [i_1] = ((((~(6428192892096853810 | var_8))) | (min((var_17 | -6428192892096853834), var_7))));
                                var_22 ^= (((((190 ? (-9223372036854775807 - 1) : -121))) ? ((((((-7550931004466384249 ? var_2 : (arr_15 [i_0] [i_2 - 1] [i_2] [i_3] [i_4] [i_0] [i_0]))) <= (arr_3 [i_3 + 2] [i_4] [i_2 - 2]))))) : (max(var_7, var_4))));
                            }
                        }
                    }
                }
                arr_17 [i_0] [i_0] [i_0] &= ((0 ? ((9223372036854775807 ? (arr_6 [i_1] [i_0]) : (arr_3 [i_0] [i_0] [i_0]))) : (arr_1 [i_1] [13])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_23 = ((+((var_11 ? (((arr_6 [i_6] [i_5]) ? var_9 : (arr_10 [i_5] [8] [i_5] [i_5] [14] [i_5]))) : ((max(7550931004466384249, var_2)))))));
                var_24 ^= (max((min(((var_7 ? var_6 : var_1)), (((-19497 >= (arr_13 [18] [i_6] [i_6] [18] [18])))))), ((max((!19502), (arr_0 [i_6]))))));

                for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                {
                    arr_28 [i_5] [i_6] [i_5] = ((((arr_21 [i_7] [i_7] [i_7]) ? var_3 : (arr_21 [i_5] [i_5] [i_5]))) >> ((min((!var_5), ((var_9 <= (arr_18 [i_5] [i_5])))))));
                    arr_29 [i_5] [i_5] [i_7] = (((((-((var_13 ? (arr_14 [i_5] [i_5] [i_5]) : var_3))))) * (min((((var_8 / (arr_1 [i_5] [i_5])))), (arr_4 [i_5] [i_5])))));
                }
                for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                {
                    arr_32 [i_6] [i_6] [i_8] [i_6] &= (3260 <= -6428192892096853834);
                    arr_33 [i_5] [i_8] = (((((((min(var_17, (arr_21 [i_8] [i_6] [i_5]))) + 9223372036854775807)) << (((min(var_17, -9223372036854775807)) - -9223372036854775807))))) ? ((-19497 ? ((((arr_6 [i_6] [19]) ? var_3 : 14))) : ((var_14 ? var_6 : var_16)))) : ((((var_2 > (arr_14 [i_8] [18] [18]))))));
                }
            }
        }
    }
    #pragma endscop
}
