/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_4 [3] [3] = 76;
        var_12 *= 80;
        var_13 = (max(var_13, ((min(1, var_1)))));
        arr_5 [i_0] = (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 = (min(var_14, (((+(((arr_6 [i_1]) ? 1 : var_8)))))));
        arr_10 [23] [23] = ((((min(((1730221439 ? (arr_9 [i_1] [i_1]) : var_10)), var_2))) ? (arr_8 [i_1]) : ((((var_11 ? (arr_6 [i_1]) : 1))))));
        arr_11 [i_1] = (min((max(((min(var_5, 1))), ((var_11 ? var_0 : 130541186)))), ((-1 ? (min((arr_8 [i_1]), 1)) : var_4))));
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_15 = ((((var_10 ? 385578214 : 69)) + var_5));
        var_16 = (min(var_16, var_2));
    }
    for (int i_3 = 4; i_3 < 15;i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] = (((((min(1, (arr_15 [i_3]))) ^ ((min(var_3, 68)))))));
        arr_17 [i_3] [i_3] = ((((max((arr_3 [i_3] [1]), (var_0 ^ var_5)))) ? ((((~(arr_8 [i_3 - 4]))))) : (min(((~(arr_2 [i_3]))), (arr_1 [6])))));
        var_17 = (min(var_17, ((max(((min(((min(var_1, var_10))), (arr_13 [i_3] [i_3])))), ((-(((arr_2 [i_3]) ? -130388004 : var_10)))))))));
        arr_18 [i_3 - 4] [i_3] = (~var_8);
    }
    var_18 = ((var_10 ? -1 : ((-((var_11 ? var_4 : var_1))))));
    #pragma endscop
}
