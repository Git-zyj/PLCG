/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= max(var_19, var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    var_21 = (min(var_21, ((((~var_10) ? (arr_0 [i_0] [i_1]) : var_10)))));
                    var_22 = var_7;
                    arr_9 [i_0] [2] [i_2] = ((1 ? var_18 : 18446744073709551615));
                    var_23 = ((((-1092047144 ? (arr_0 [i_0] [i_0]) : (arr_5 [i_0] [i_1 + 2] [i_2]))) >> (var_17 - 11102693998593907600)));
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0] [i_1] [i_3] [i_3] = ((((((var_4 < var_6) && 1))) + ((~(~var_8)))));
                    arr_14 [i_0] [11] [11] = (min(((min(var_4, (arr_0 [i_3] [i_0])))), var_8));
                    arr_15 [i_0] = (!var_9);
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                {
                    arr_19 [i_0] [i_1] [i_4] [i_0] = ((arr_10 [i_4] [i_1] [i_1 - 1] [i_0]) ? var_7 : var_13);
                    arr_20 [i_0] [7] [7] [i_0] = ((~((-(arr_0 [i_0] [i_1 + 1])))));
                    var_24 -= var_0;
                }
                var_25 = ((max((max((arr_1 [i_0] [i_1]), -1092047144)), var_0)));
            }
        }
    }
    #pragma endscop
}
