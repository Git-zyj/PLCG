/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 *= (min((((-((max(var_7, (arr_1 [17]))))))), (min(((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))), (max((arr_1 [i_0]), 1))))));
        var_13 *= ((+(((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_14 = ((-((-6538013950235722448 | ((min((arr_0 [i_1] [22]), 272635024)))))));
            var_15 &= 536862720;
            arr_4 [i_1] = (((((4398046507008 && (((arr_0 [i_0] [i_0]) > 9223372036854775807))))) != (((-(arr_0 [i_1] [i_0]))))));
        }
    }
    var_16 = var_1;
    var_17 -= -22;
    #pragma endscop
}
