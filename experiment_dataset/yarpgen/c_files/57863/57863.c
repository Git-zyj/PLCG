/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((+(((arr_0 [2] [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])))));
        var_13 = ((-(72 < 1177063564)));
        var_14 = (var_12 && var_12);
    }

    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((((((((max(9, 13))) == 178)))) & (max((max(var_6, 1941843007)), 247))));
        var_15 = (max((((var_6 / var_5) ? ((max((arr_1 [12]), var_11))) : ((-(arr_4 [i_1]))))), (((max(var_5, var_8))))));

        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            arr_9 [i_1] [i_1] = ((((min((((!(arr_0 [i_1] [i_2])))), var_4))) ? (min(((max(var_4, var_11))), -var_1)) : (max((((arr_8 [i_1] [i_1 + 1]) ? var_3 : var_6)), (((var_8 || (arr_1 [1]))))))));
            var_16 = ((-(!var_12)));
            arr_10 [i_1] [i_1 + 2] [i_1] = ((((((((var_9 | (arr_3 [i_1] [i_1])))) ? var_1 : var_11))) || (((((max(var_2, var_9))) * ((var_1 ? (arr_4 [i_2]) : var_6)))))));
        }
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 10;i_3 += 1)
    {
        var_17 = ((((arr_11 [i_3] [i_3]) & var_2)) <= (var_1 | var_8));
        arr_13 [1] = 255;
        var_18 = var_2;
        var_19 = (((((~(arr_7 [1] [i_3])))) ? (((arr_5 [1]) | (arr_4 [i_3]))) : (((var_2 ^ (arr_3 [i_3] [i_3]))))));
        var_20 = var_9;
    }
    var_21 = (min(var_4, (max(((max(var_12, var_6))), var_7))));
    var_22 |= (((max(((max(var_2, var_10))), -var_1)) ^ var_5));
    #pragma endscop
}
