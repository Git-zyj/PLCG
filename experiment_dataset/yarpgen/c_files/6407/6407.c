/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_9 == ((1 & (((min(var_4, var_2))))))));
    var_16 = ((((((var_1 ? var_14 : var_14))) ? (max(var_6, var_0)) : (min(var_3, var_14)))) / (((var_14 && var_8) ? (max(var_14, var_0)) : (((min(var_13, var_9)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = (((((arr_0 [i_0] [i_0]) ? 4 : (arr_1 [13]))) & (88 != var_1)));
        var_18 = (((!(arr_1 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_19 *= ((((max(var_12, ((11163237346846658607 ? var_2 : var_1))))) ? (((max(1, (arr_0 [i_1] [i_1]))))) : ((-((var_7 ? 1 : 1399387214))))));
        var_20 = (((min(var_3, ((var_5 ? var_11 : (arr_1 [i_1]))))) + ((((!((max(var_3, 942072175)))))))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] = (min((max(var_14, (((arr_3 [i_2] [i_2]) ? var_12 : (arr_5 [i_2]))))), (((((min(var_2, var_6))) ? (min(var_4, (arr_3 [i_2] [i_2]))) : (((max((arr_0 [0] [i_2]), 1)))))))));
        arr_8 [i_2] = ((((((max(var_2, 1)) ? ((max((arr_1 [i_2]), (arr_0 [i_2] [4])))) : var_6))) ? (((var_8 ? var_4 : (arr_0 [i_2] [i_2])))) : ((((max(var_11, (arr_4 [8] [i_2])))) ? (((var_2 ? 1 : (arr_2 [i_2])))) : (((arr_1 [i_2]) ? 29722 : 1915590443))))));
    }
    #pragma endscop
}
