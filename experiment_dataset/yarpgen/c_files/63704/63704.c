/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((1 ? (max(var_7, var_0)) : (!var_0)))) ? 1 : var_8));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_19 = (min((min(1, (var_3 * var_3))), ((~(arr_0 [9])))));
        var_20 = (min(89, 1));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] = ((arr_4 [i_1] [i_1]) ? (((min(var_5, var_5)))) : ((((max(2210450168756865674, (arr_0 [i_0])))) ? (((arr_5 [i_0] [i_1]) ? var_15 : (arr_5 [i_0] [12]))) : (((1 ? var_1 : var_17))))));
            var_21 += ((((1 ? (~var_16) : var_0)) / (((var_12 / ((max(1, var_3))))))));
        }

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_9 [i_0] [10] = (((1 ? var_13 : 3969535605)));
            arr_10 [i_2] = ((-(arr_1 [i_2] [i_0])));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_22 = (!var_2);
        arr_13 [i_3] &= (!1);
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_23 = (((1 >> (((arr_8 [i_5]) + 124)))));
                    arr_19 [i_3] [0] [i_4] = (arr_12 [i_4 - 2]);
                    var_24 -= (arr_11 [i_5]);
                }
            }
        }
    }
    #pragma endscop
}
