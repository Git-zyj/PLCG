/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (max(((min((arr_3 [i_0] [i_0]), (arr_3 [17] [i_0])))), (((arr_3 [i_0] [i_0]) ? 124 : (arr_3 [5] [i_0])))));
        var_10 = (((arr_1 [i_0]) << (((((((-2517003457587710148 ? 2517003457587710122 : -32747))) ? (arr_3 [i_0] [i_0]) : (arr_2 [i_0]))) + 15234))));
        arr_5 [i_0] = var_5;
        var_11 ^= var_1;
        var_12 = 213;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_13 = (arr_3 [i_1] [5]);
        var_14 = (((((var_2 * (arr_7 [i_1])))) ? ((~(((var_3 + 9223372036854775807) >> (((arr_8 [i_1]) + 1053472633)))))) : (((((!(arr_6 [1]))) ? var_7 : 17179868928)))));
        arr_9 [i_1] [i_1] = ((17179868900 ? (((-var_9 > (var_1 <= var_5)))) : ((-((20 ? (arr_2 [6]) : var_8))))));
    }
    var_15 += ((var_9 << ((((min(var_8, var_3))) - 393073475))));
    var_16 = var_2;

    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        var_17 = (arr_10 [i_2]);
        var_18 ^= (((arr_11 [i_2 + 1] [14]) ? ((((((arr_10 [6]) ? (arr_10 [12]) : (arr_10 [22])))))) : (max((!var_0), -17179868929))));
        arr_12 [i_2] = ((((var_7 < (arr_11 [i_2] [i_2]))) ? (!-var_6) : ((min((arr_10 [i_2]), (arr_10 [i_2]))))));
        var_19 = (~27);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_20 = (arr_16 [i_3] [11]);
        arr_17 [i_3] = (((arr_15 [i_3] [i_3]) ? var_7 : (arr_15 [i_3] [i_3])));
        arr_18 [8] = (arr_14 [i_3] [i_3]);
        var_21 = (((arr_14 [6] [i_3]) ? (arr_15 [i_3] [i_3]) : (arr_14 [i_3] [i_3])));
    }
    var_22 ^= ((17179868923 ? var_7 : var_8));
    #pragma endscop
}
