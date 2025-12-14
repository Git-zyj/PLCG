/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_1 ? var_2 : (min((((var_3 ? var_1 : var_10))), (min(var_2, 2234220836)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_14 *= (arr_3 [i_0] [2]);
            arr_5 [i_0] = (((max((arr_0 [i_0]), (arr_0 [i_1]))) % ((min((arr_2 [i_0]), (arr_3 [i_0] [i_1]))))));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_9 [2] [2] [i_2] &= max(var_3, (max((arr_0 [i_0]), (((7 ? var_7 : var_8))))));
            var_15 = 10313;
        }
        arr_10 [i_0] [i_0] = var_1;
        var_16 *= var_0;
    }
    #pragma endscop
}
