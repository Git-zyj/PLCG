/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((max(-var_5, (var_5 + 0)))) ? var_1 : -24291));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 ^= ((((((arr_3 [i_0]) >= (arr_2 [8] [i_0])))) ^ (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_16 = 8860722550312305352;
            arr_8 [i_0] = var_3;
            arr_9 [i_0] [i_0] = ((-(!var_11)));
        }
        var_17 = (max(var_17, var_8));

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_18 = (max(var_18, (arr_5 [i_2])));
            var_19 = (-24293 >= var_5);
            arr_14 [4] [i_0] = ((1 ? (arr_0 [i_0]) : (arr_7 [i_0] [i_0] [i_0])));
        }
    }
    var_20 = (!var_2);
    var_21 = (max(var_21, (((~((var_0 * (1 / var_9))))))));
    #pragma endscop
}
