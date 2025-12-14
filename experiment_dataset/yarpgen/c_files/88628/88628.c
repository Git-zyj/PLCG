/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0 + 1] = -17;
        var_12 = (max(var_12, 292242843));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_13 *= ((((max((max(var_7, -46)), ((((arr_0 [i_1]) <= (arr_4 [i_1]))))))) ? -1010934247 : (arr_3 [i_1])));
        arr_5 [i_1] [i_1] = (arr_3 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_8 [i_2] = var_1;

        for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
        {
            arr_11 [i_2] [i_2] = (((arr_10 [i_2] [i_2]) ? (arr_10 [i_2] [i_3]) : (arr_10 [i_3] [i_2])));
            arr_12 [i_2] [i_3] = (((arr_10 [i_2] [i_2]) && (2147483647 || -1010934247)));
            var_14 ^= ((arr_7 [i_2] [i_2]) ? ((((arr_9 [i_2] [i_3]) >= 1010934247))) : 1010934246);
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
        {
            arr_15 [i_2] [i_4] [i_4] = (((((var_10 ? var_6 : (arr_14 [i_2] [i_2] [i_2])))) ? (15429994410484811344 && 28) : var_2));
            var_15 *= ((arr_6 [i_2] [i_4]) ? (((arr_7 [i_2] [i_4]) & (arr_13 [i_2]))) : (((((arr_14 [i_2] [i_4] [i_4]) && (arr_6 [i_2] [i_2]))))));
            arr_16 [i_4] [i_2] = ((-(arr_7 [i_2] [i_4])));
            arr_17 [i_4] [i_4] [i_4] = (arr_13 [i_2]);
            var_16 = (arr_9 [i_2] [i_4]);
        }
        arr_18 [i_2] |= (((var_9 ? (arr_13 [i_2]) : (arr_14 [i_2] [i_2] [i_2]))));
    }
    #pragma endscop
}
