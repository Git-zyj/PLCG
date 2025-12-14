/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (min((var_6 ^ var_6), ((((var_7 ? var_0 : var_1))))));
    var_14 = (min(var_14, var_11));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_15 += (((arr_0 [i_1] [i_1]) - (~var_7)));
            var_16 = ((-(~var_4)));
            var_17 = (((arr_3 [i_0] [i_1]) ? (((arr_3 [i_0] [i_1]) ? var_6 : (arr_1 [7] [i_0]))) : ((-(arr_2 [i_0] [i_0])))));
        }
        var_18 = (((arr_0 [i_0] [i_0]) ? (((~var_4) ? var_3 : ((var_4 ? (arr_3 [11] [i_0]) : (arr_1 [i_0] [i_0]))))) : (min(((max((arr_0 [i_0] [i_0]), var_12))), (~var_5)))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_19 = (((((((((arr_4 [i_2]) >> (var_2 - 216)))) ? ((((arr_5 [i_2]) || var_7))) : (((arr_1 [i_2] [i_2]) ? (arr_1 [i_2] [i_2]) : (arr_1 [i_2] [i_2])))))) ^ ((((var_6 <= (arr_5 [i_2]))) ? var_4 : ((var_12 ? var_9 : var_6))))));
        var_20 = ((!(((((((arr_0 [i_2] [i_2]) ? var_1 : var_1))) ? (!var_9) : (((arr_0 [i_2] [i_2]) ? (arr_1 [i_2] [i_2]) : var_7)))))));
        var_21 = (min((((((var_10 ? var_4 : var_2))) ? ((min((arr_4 [5]), (arr_0 [i_2] [i_2])))) : (arr_5 [i_2]))), (((arr_0 [1] [13]) ? (arr_0 [i_2] [i_2]) : (arr_0 [i_2] [i_2])))));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        var_22 = ((((((((arr_10 [i_3] [4]) ? var_4 : var_2))) && var_6)) ? var_2 : ((((((arr_3 [i_3] [i_3]) ? (arr_9 [i_3]) : (arr_0 [i_3] [i_3])))) ? (((arr_4 [i_3]) ? (arr_8 [i_3] [10]) : (arr_9 [i_3]))) : (((arr_2 [i_3] [i_3]) ? (arr_6 [i_3]) : var_12))))));
        var_23 = (((((arr_7 [i_3]) ? var_4 : (arr_3 [6] [i_3]))) <= (((arr_7 [i_3]) ? (!var_2) : (((arr_7 [0]) & var_12))))));
        var_24 = ((((((arr_10 [i_3] [i_3]) - (arr_10 [i_3] [i_3])))) ? (((((var_10 ? (arr_7 [i_3]) : var_4))) ? ((((arr_10 [i_3] [i_3]) ? var_11 : var_5))) : (((arr_10 [i_3] [i_3]) ? (arr_3 [i_3] [i_3]) : var_9)))) : (((((min((arr_5 [i_3]), var_5))) ? var_7 : (~var_8))))));
        var_25 += (((((arr_0 [i_3] [i_3]) ? ((var_5 ? var_9 : var_11)) : ((((arr_7 [i_3]) * var_5)))))) ? (min(var_7, (max(var_10, var_6)))) : ((var_5 ? var_9 : (((arr_6 [i_3]) ? var_3 : (arr_5 [1]))))));
    }
    #pragma endscop
}
