/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    var_21 = ((max((((var_4 >> (2151099794178204383 - 2151099794178204357))), (min(9644204849379900108, var_18))))));
    var_22 += var_4;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 5105589922521512241;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_23 = (!var_9);
            var_24 = (((13341154151188039375 & 0) ^ 1));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_25 = ((0 ? 1 : (min((min((arr_1 [i_2] [i_0]), (arr_4 [i_0] [i_0]))), 3459426710))));
            var_26 = ((((((arr_1 [i_0] [i_2]) > (arr_4 [i_2] [i_0])))) != (-105 % var_15)));
            var_27 = -var_7;
            var_28 = (((min(1, (-6834 * var_1))) * (arr_5 [i_0])));
        }
    }
    var_29 = (var_16 / (((var_6 > (var_18 && var_2)))));
    #pragma endscop
}
