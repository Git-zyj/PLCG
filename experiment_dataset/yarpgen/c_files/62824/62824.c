/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1 + 2] [i_1] = (((((64554 >> (-1573343406 + 1573343409)))) % (arr_3 [i_0] [i_0] [i_1])));
                var_20 &= (((arr_0 [i_1] [i_0]) | ((min((var_14 > var_17), (0 >= 31007))))));
                var_21 = (min(var_21, ((((min((arr_3 [i_1] [i_1 - 2] [i_1 - 2]), (((arr_0 [i_0] [i_1]) ? (arr_2 [16]) : (arr_3 [i_0] [i_0] [i_1]))))) >= 31007)))));
            }
        }
    }
    var_22 += var_10;

    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        arr_7 [i_2] [i_2 - 2] = ((var_13 || ((((arr_6 [i_2 + 2]) ? (arr_6 [i_2 + 2]) : (arr_6 [i_2 + 2]))))));
        arr_8 [i_2] |= (min((((arr_6 [i_2 + 2]) ? (arr_6 [i_2 + 1]) : var_13)), (((arr_6 [i_2 - 1]) ? (arr_6 [i_2 - 3]) : (arr_6 [i_2 - 3])))));

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_23 |= ((((var_9 ? var_13 : (arr_2 [i_3]))) * var_13));
            var_24 = (min(var_24, (arr_10 [i_2] [i_3])));
        }
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            arr_13 [i_2] &= (min(var_3, (((arr_0 [i_4 + 2] [i_2 + 2]) + (arr_9 [i_4 - 1] [i_2 - 3] [i_2 - 1])))));

            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                var_25 += (arr_16 [i_5] [i_4] [i_5] [i_5]);
                arr_17 [i_2] [i_4 - 2] [i_5] [i_5] = var_1;
            }
            var_26 = (((((((~(arr_14 [i_2] [i_2] [i_4 - 2] [i_4]))) == (arr_2 [i_4]))))) % (max((arr_5 [i_2] [i_4 + 2]), (arr_6 [i_2]))));
        }
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    {
                        var_27 |= var_13;
                        var_28 *= (-(var_5 <= var_12));
                        var_29 |= (arr_19 [i_8]);
                    }
                }
            }
            var_30 = ((arr_18 [i_6 - 1] [i_6] [i_6]) ? (arr_23 [i_2]) : ((((arr_18 [i_2] [i_6] [i_6]) != (((arr_9 [i_2] [i_6] [i_6]) ? var_13 : (arr_21 [i_6] [i_6] [i_6] [i_6])))))));
            arr_25 [i_6] = (((((var_6 > (arr_2 [i_6])))) >> (var_4 - 734502943)));
        }
        var_31 += var_12;
    }
    for (int i_9 = 2; i_9 < 18;i_9 += 1)
    {
        arr_28 [i_9] [i_9] = (min(((((((arr_27 [i_9]) / var_5))) ? (max((arr_27 [i_9]), (arr_26 [i_9 - 1]))) : (arr_26 [i_9]))), ((-(max((arr_26 [i_9]), (arr_27 [i_9])))))));
        arr_29 [i_9] = (((-1289463656 > 9558375922839533057) == (((arr_26 [i_9]) ? (((((arr_27 [i_9]) >= var_8)))) : (((arr_27 [i_9]) & (arr_26 [i_9])))))));
        var_32 = (arr_26 [i_9]);
    }
    for (int i_10 = 3; i_10 < 24;i_10 += 1)
    {
        arr_34 [14] &= (arr_31 [i_10]);
        var_33 = (max(var_33, (arr_32 [i_10 + 1])));
    }
    var_34 |= (-1289463656 & var_4);
    #pragma endscop
}
