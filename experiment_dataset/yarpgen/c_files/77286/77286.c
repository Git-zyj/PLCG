/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_10 = (arr_0 [i_0]);
        var_11 = (((arr_1 [i_0]) <= (max((((arr_1 [i_0]) / -843821726)), (arr_0 [i_0])))));
        var_12 = (min((min(0, (arr_1 [i_0]))), (((0 ? (-467392051 == 12) : 7)))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = ((12 ? 228 : 28));
        arr_5 [i_1] = ((var_8 ? (arr_2 [21] [i_1]) : var_9));
        var_13 = (~150);

        for (int i_2 = 4; i_2 < 20;i_2 += 1)
        {
            var_14 = (max(var_14, ((((arr_2 [i_2] [i_1]) & ((var_1 ^ (arr_7 [i_2] [i_2]))))))));
            arr_9 [i_1] = 1;
        }
    }
    var_15 = ((var_1 ? var_0 : ((((!(((var_8 ? var_8 : var_9)))))))));
    #pragma endscop
}
