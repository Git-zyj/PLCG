/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_19 = (arr_0 [i_0 + 1]);
        var_20 ^= ((max((min((arr_1 [12]), (arr_0 [i_0]))), (arr_0 [i_0 - 2]))));
        var_21 ^= ((~(arr_1 [i_0 - 2])));
        arr_2 [i_0] [i_0 - 1] = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 7;i_1 += 1)
    {
        arr_5 [i_1] = (((arr_4 [i_1 - 2]) ? (arr_3 [i_1 + 1]) : (arr_4 [i_1])));
        var_22 = var_9;
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_23 = ((+((((min((arr_7 [i_2]), (arr_1 [i_2])))) ? (((arr_7 [i_2]) ? (arr_1 [i_2]) : 1)) : 1))));
        var_24 = (((((arr_1 [i_2]) < (arr_1 [i_2]))) ? ((max((arr_1 [i_2]), (arr_1 [i_2])))) : (min(((max((arr_1 [i_2]), (arr_4 [4])))), (((arr_6 [i_2]) ? (arr_7 [i_2]) : (arr_0 [i_2])))))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_25 = (arr_6 [i_3]);
        var_26 ^= (max((((((!(arr_9 [i_3]))) ? ((-(arr_11 [i_3]))) : ((var_8 ? (arr_7 [4]) : (arr_11 [i_3])))))), (((arr_1 [i_3]) ? (min((arr_11 [i_3]), (arr_8 [i_3] [9]))) : (arr_1 [i_3])))));
    }
    var_27 *= (max(4294967273, ((max(var_13, 1)))));
    var_28 *= var_5;
    #pragma endscop
}
