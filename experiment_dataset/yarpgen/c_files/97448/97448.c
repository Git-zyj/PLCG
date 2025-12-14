/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_6, (max((max(var_11, var_10)), (var_8 / var_13)))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_17 = ((+((((min((arr_1 [i_0]), var_12))) ? (((var_9 << (((arr_0 [i_0]) - 17115238001977576296))))) : (arr_0 [i_0 + 1])))));
        arr_3 [i_0] [i_0] = var_14;
        arr_4 [i_0] [i_0 - 2] = var_14;
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_18 = var_8;
        var_19 = (((((((var_11 ? var_7 : (arr_6 [i_1] [i_1]))) & (max((arr_1 [i_1]), var_4))))) ? (((((((arr_2 [1] [8]) ? var_1 : var_2))) ? var_8 : ((var_0 | (arr_2 [i_1] [i_1 - 1])))))) : var_2));
        arr_7 [i_1] = ((!((max((arr_5 [i_1 - 2]), var_3)))));
        arr_8 [i_1] = (max((((((arr_2 [i_1 - 2] [i_1]) >= var_1)) ? (((arr_1 [i_1]) % var_1)) : (((((arr_0 [i_1 + 1]) >= var_1)))))), (arr_5 [i_1])));
    }
    for (int i_2 = 2; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_20 = (((((arr_11 [i_2 + 1] [i_2 - 2]) && var_6)) ? (((arr_11 [i_2 + 1] [i_2 - 1]) / (arr_11 [i_2 - 2] [i_2 + 1]))) : (var_5 / var_15)));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    {
                        var_21 ^= (((((!var_6) ? ((max(var_5, (arr_10 [i_3])))) : (max(var_11, var_9)))) <= (arr_2 [i_2 + 1] [i_2 - 2])));
                        arr_20 [i_5] [i_3] [i_4] [i_5] = (((((arr_9 [1]) ? var_8 : (arr_9 [i_5 + 1]))) << ((min((((arr_14 [i_4]) < var_9)), (arr_9 [i_2 - 2]))))));
                        arr_21 [i_5] [i_3] = (max((((((arr_10 [i_2]) != (arr_13 [i_2 - 1] [i_4]))))), var_6));
                        var_22 = ((((arr_1 [i_4]) >= (arr_9 [i_4]))));
                    }
                }
            }
        }
        var_23 = ((var_14 ? ((max(((var_0 ? (arr_14 [i_2 - 1]) : var_4)), (((var_13 ? (arr_15 [i_2] [i_2] [i_2]) : var_9)))))) : ((var_6 ? (max(var_12, (arr_0 [i_2]))) : (((var_11 ? var_4 : var_1)))))));
    }
    var_24 = (min(var_24, ((max(((var_6 ? ((var_6 ? var_8 : var_14)) : ((var_0 ? var_7 : var_10)))), ((~(var_14 / var_12))))))));
    var_25 |= var_12;
    #pragma endscop
}
