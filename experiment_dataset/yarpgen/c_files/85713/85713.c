/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_10 = ((min(1, (max(0, 18)))));
                var_11 = 24;
                var_12 = ((-(((((min((arr_5 [i_1]), (arr_5 [i_1])))) && 0)))));
            }
        }
    }
    var_13 = ((-(min(var_5, (3190628038 % var_5)))));

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_14 = (min(8583387925018388444, (((-((((arr_8 [i_2]) <= (arr_9 [i_2])))))))));
        arr_10 [i_2] = ((((arr_8 [i_2]) | (arr_9 [i_2]))));
        arr_11 [i_2] [i_2] = 19;
        var_15 = (((-(arr_8 [18]))));
        arr_12 [i_2] = 2147483648;
    }
    #pragma endscop
}
