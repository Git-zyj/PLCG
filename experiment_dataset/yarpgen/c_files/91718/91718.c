/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (var_11 / var_11);
    var_13 = 40963;
    var_14 = (max(var_11, (((((var_3 ? var_11 : var_7))) ? (var_1 % 10299624830352908805) : 40960))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((var_0 / ((var_2 ? var_0 : var_0))));
        var_15 = (min(var_15, ((((((arr_0 [i_0] [i_0 + 1]) ? -5632478826803133366 : var_4)) ^ (((var_8 ? var_6 : (arr_0 [i_0 + 1] [i_0])))))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_16 = ((((33 ? (arr_5 [i_1]) : (arr_5 [i_1]))) == ((~(arr_5 [i_1])))));

        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            var_17 = ((-(((var_11 >= (arr_4 [i_2 - 1] [i_2 + 1]))))));
            var_18 = ((((((arr_6 [i_2 - 1]) ? var_5 : var_10))) ? (arr_6 [i_2 - 1]) : ((max((arr_9 [i_2 + 1]), var_0)))));
            var_19 = (max((arr_3 [i_2]), ((~(~-32742)))));
        }
        var_20 = var_11;
    }
    #pragma endscop
}
