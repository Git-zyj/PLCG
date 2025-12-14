/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((((!(((3 ? var_6 : var_10)))))));
        arr_3 [i_0] [i_0] = ((var_1 ? (((((((arr_0 [i_0]) || (arr_1 [i_0]))))) | (max(var_0, var_13)))) : (arr_1 [i_0])));
        arr_4 [i_0] = var_11;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_9 [i_1] = (max(65528, ((((334253695 ? var_13 : -63))))));
        arr_10 [i_1] = ((min(var_8, (65534 & var_0))));
        arr_11 [i_1] = (((arr_6 [i_1] [i_1]) >> ((7782985108204147462 ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1])))));
    }
    var_15 = max(25, var_10);
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            {
                arr_17 [i_3] [i_2] = var_3;
                arr_18 [i_2] [i_3] = (max((((-6418018505238023654 + 9223372036854775807) << var_12)), ((((!var_0) ? 255 : 65528)))));
            }
        }
    }
    #pragma endscop
}
