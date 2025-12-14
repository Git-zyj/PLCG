/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_10 += (var_7 & 28);
        var_11 = ((-(arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_4 [i_1] = (((min((((arr_2 [i_1]) ? var_4 : (arr_2 [i_1]))), (arr_3 [i_1] [i_1]))) ^ ((((((max(0, 17))) || (arr_3 [i_1] [i_1])))))));
        arr_5 [i_1] [i_1] = (arr_3 [i_1] [i_1]);
    }
    var_12 -= var_2;

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_13 = ((((min((!-4622940472274914384), (~3003232164559004922)))) ? (max((arr_2 [i_2]), ((min(var_2, var_9))))) : (((arr_0 [i_2]) ? 1 : (arr_6 [i_2] [i_2])))));
        arr_9 [8] [i_2] &= (arr_0 [i_2]);
    }
    for (int i_3 = 3; i_3 < 21;i_3 += 1)
    {
        var_14 ^= ((((((arr_10 [i_3 - 1] [10]) | (arr_10 [i_3 - 1] [1])))) ? (arr_10 [i_3 - 1] [12]) : (1876444994 && -1)));

        for (int i_4 = 2; i_4 < 23;i_4 += 1)
        {
            arr_15 [i_3] = 3475910568;
            var_15 = (max(var_15, ((max((((!((min(var_0, 18202897867999183805)))))), 3151958384418491094)))));
            arr_16 [i_3] = ((!((max(((min((arr_12 [i_3 - 3]), var_1))), (max(134, (arr_13 [i_4]))))))));
        }
        arr_17 [i_3] = (((((min((arr_10 [i_3] [i_3]), (arr_10 [i_3 + 4] [i_3]))))) + ((1 ? (arr_10 [i_3] [i_3]) : ((var_6 ? var_3 : (arr_13 [i_3])))))));
    }
    var_16 = (max(var_16, 0));
    #pragma endscop
}
