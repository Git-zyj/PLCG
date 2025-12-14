/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 -= ((((min((var_12 > 127), (max((arr_5 [i_0] [i_0] [i_2]), (arr_6 [i_0])))))) ? (max(((3531 ? var_12 : var_9)), var_14)) : (((64188 >= (!var_2))))));
                    var_17 = (min(var_17, ((((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_1])))) ? ((18446744073709551601 ? (arr_0 [i_1] [i_1]) : (arr_0 [i_0] [i_1]))) : (arr_0 [i_2] [i_0])))));
                }
            }
        }
    }
    var_18 = var_4;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    var_19 = (min(var_19, (((5 ? 3525 : 28647)))));
                    var_20 *= (+((((arr_15 [i_5] [i_4] [i_4] [i_5]) < var_1))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            {
                var_21 -= var_4;
                var_22 *= ((((((min(var_9, var_6))) ? var_2 : (-32753 - var_8))) << ((((((((min(var_1, 64177))) ? var_5 : -3520)) + 11467)) - 18))));

                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    var_23 -= (max(((((var_9 > var_3) == 7))), ((var_2 + (arr_19 [i_7] [i_8])))));

                    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                    {
                        var_24 -= (min(var_4, ((var_11 | (var_6 ^ var_5)))));
                        arr_25 [i_8] [i_8] [i_8] [i_9] [i_8] [i_7] = (~-var_6);
                        arr_26 [i_7] [i_8] [i_6] [i_6] [i_7] = (i_7 % 2 == zero) ? ((((((var_7 >> (((arr_4 [i_6] [i_7]) + 86))))) ? (min((arr_4 [i_8] [i_7]), var_4)) : -var_5))) : ((((((var_7 >> (((((arr_4 [i_6] [i_7]) + 86)) - 49))))) ? (min((arr_4 [i_8] [i_7]), var_4)) : -var_5)));
                    }
                    for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                    {
                        var_25 -= ((-var_2 ? (!var_12) : (((arr_27 [i_6] [i_6] [i_6] [i_6]) ? var_4 : var_10))));
                        arr_29 [i_6] [i_7] [i_7] [i_7] [i_10] = ((max(var_11, (0 | var_15))));
                        var_26 = (((((arr_5 [i_6] [i_7] [i_10]) > var_11)) ? ((((max(var_15, var_2))))) : (((var_12 ? var_1 : -5637626732872872764)))));
                    }
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                {
                    arr_33 [i_6] [i_7] [i_6] = ((~(arr_4 [i_6] [i_7])));
                    arr_34 [i_7] [i_7] = (i_7 % 2 == zero) ? ((max((((((var_12 ? var_10 : var_9))) ? var_6 : var_3)), (((((var_9 ? var_2 : var_3)) >> ((((~(arr_32 [i_7]))) - 88)))))))) : ((max((((((var_12 ? var_10 : var_9))) ? var_6 : var_3)), (((((var_9 ? var_2 : var_3)) >> ((((((~(arr_32 [i_7]))) - 88)) + 204))))))));
                }
                var_27 = ((var_11 < ((((-3522 ? -5637626732872872764 : -92714227))))));
            }
        }
    }
    var_28 = (((var_11 >> (var_4 - 1964157247))));
    #pragma endscop
}
