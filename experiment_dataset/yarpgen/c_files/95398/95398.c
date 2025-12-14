/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] |= 32767;
        arr_4 [i_0] = var_8;
        arr_5 [i_0] [2] = -var_0;
        var_18 = ((((-32768 + 9223372036854775807) << (((-11954 + 11978) - 24)))));
        var_19 = (!((!(arr_2 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = (arr_1 [i_1]);
        var_20 = (max((((!(arr_8 [i_1] [6])))), (arr_0 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_14 [i_2] [i_2] = (arr_11 [1]);
        arr_15 [i_2] = (arr_6 [i_2] [i_2]);
        arr_16 [i_2] [i_2] = var_11;
        var_21 = (arr_1 [i_2]);
        var_22 = 886090142;
    }
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        arr_20 [i_3] = ((((max((arr_19 [i_3] [i_3]), (arr_19 [i_3] [i_3])))) - ((((arr_19 [i_3] [i_3]) < (arr_19 [i_3] [i_3]))))));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_23 = ((arr_17 [i_3]) ? (arr_19 [i_3 - 1] [i_3]) : -32749);
            arr_23 [i_3] = (min((((!(arr_19 [i_3] [i_3])))), -255));
        }
    }
    var_24 = (min(var_24, 13307));
    var_25 += var_12;
    #pragma endscop
}
