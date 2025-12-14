/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_16 -= arr_0 [i_0 - 2];

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_7 [i_1] [i_1] = (((arr_0 [i_0]) ? (arr_0 [i_0 - 2]) : (arr_1 [i_0 - 2] [i_1])));
            var_17 = (min(var_17, (((874519583 >= (arr_5 [i_0 - 2] [i_1]))))));
        }
        var_18 = (min(var_18, (((((-(arr_1 [i_0] [0]))) ^ ((-(arr_0 [i_0]))))))));
        var_19 = (-(arr_1 [i_0] [i_0 - 2]));
        arr_8 [i_0 - 1] = (arr_6 [i_0 - 1]);
    }
    var_20 = (max(var_20, var_11));
    var_21 = -16416;
    var_22 = var_2;
    #pragma endscop
}
