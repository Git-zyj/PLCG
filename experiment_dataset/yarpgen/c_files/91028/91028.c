/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-(min(1, 5786891867951754339))));
        arr_3 [i_0] = ((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))));
        arr_4 [i_0] [i_0 - 1] = var_5;
    }
    var_12 = (max(var_12, 436480230516096132));
    var_13 |= (max(var_7, ((var_8 | ((1 ? 1 : var_2))))));

    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] = var_5;
        var_14 = (((-var_10 ? ((var_7 ? var_11 : var_10)) : (arr_5 [i_1] [i_1]))));
    }
    for (int i_2 = 2; i_2 < 19;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_13 [9] [i_3] [i_2] = ((((arr_9 [i_2] [i_2]) < (arr_9 [i_2 - 2] [i_3]))) ? (arr_9 [i_2 + 2] [i_3]) : (arr_9 [i_2] [i_3]));
            var_15 = (((arr_9 [i_3] [i_2]) ? -52083 : -45));
        }
        arr_14 [i_2] = var_2;
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 19;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4 + 3] [0] |= ((var_10 << (arr_17 [i_4 + 1])));
        var_16 = (min(var_16, ((((!186) ? var_8 : ((~(arr_9 [i_4] [i_4 + 3]))))))));
    }
    #pragma endscop
}
