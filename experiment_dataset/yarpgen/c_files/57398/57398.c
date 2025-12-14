/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 ^= (((((0 ? var_12 : 0))) ? ((~(arr_3 [7]))) : ((((arr_2 [i_0]) > (arr_3 [i_0]))))));
        var_17 = var_3;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_18 = ((-(arr_9 [i_1])));
            var_19 = ((((((arr_7 [i_1]) ? (arr_7 [i_1]) : var_3))) ? (((!(arr_4 [i_1])))) : ((((-2147483647 - 1) != (arr_4 [i_2]))))));
            var_20 &= -930984130;
        }
        var_21 &= (min(26476, 26476));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        var_22 = (-26476 && 119);
        var_23 ^= (((((-32588 ? (arr_12 [21]) : (arr_11 [10])))) ? 8388576 : (((-127 - 1) ? var_12 : (arr_11 [8])))));
    }
    var_24 &= -26484;
    #pragma endscop
}
