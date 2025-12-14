/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_12 *= (((arr_0 [i_0] [1]) ? (arr_0 [i_0] [12]) : (arr_0 [i_0] [6])));
        arr_3 [i_0] [i_0] = 189;
        arr_4 [i_0] = ((1 ? var_6 : var_3));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_13 *= (((((arr_2 [i_1]) < (((arr_1 [i_1] [i_1]) | var_8)))) ? (~1) : ((1 ? var_2 : (max((arr_5 [i_1] [i_1]), var_1))))));
        var_14 = -3350055388899609329;
        arr_7 [i_1] = (max(var_8, (((arr_2 [i_1]) ? (arr_2 [i_1]) : (arr_1 [i_1] [i_1])))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            arr_14 [i_2] [i_3 + 3] = 1;
            var_15 = ((!(((((var_5 % (arr_13 [i_2] [i_2] [i_2])))) || (arr_12 [i_2] [i_3 - 2])))));
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 22;i_5 += 1)
            {
                {
                    var_16 = var_9;
                    arr_20 [i_2] = ((-((1 ? (arr_19 [i_2] [i_2] [i_2]) : (((!(arr_18 [i_2] [i_4] [i_4] [i_5]))))))));
                    arr_21 [i_2] = max((((1 << (((arr_16 [i_5 - 1] [i_5 - 2] [i_5 + 2]) - 1847))))), (min((arr_12 [i_2] [i_2]), (arr_16 [i_5 - 3] [i_5 + 2] [i_5 + 2]))));
                    arr_22 [i_2] [i_2] [i_2] [i_2] = 278467949;
                }
            }
        }
    }
    var_17 = var_9;
    var_18 = var_8;
    var_19 = -var_0;
    #pragma endscop
}
