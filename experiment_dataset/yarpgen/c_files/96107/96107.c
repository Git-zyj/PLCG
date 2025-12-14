/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = 54;
        var_12 = (arr_3 [i_0]);
        var_13 = (max(var_13, ((((((((-23554 ? 96 : 0))))) <= ((-97 ? (arr_1 [i_0]) : (arr_2 [i_0]))))))));
        var_14 -= ((arr_2 [i_0]) >= ((((((arr_0 [i_0]) & (arr_2 [i_0])))) ? (-9223372036854775807 - 1) : (max(4294443008, var_5)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_15 = 96;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_16 = ((((((arr_8 [i_1]) == -97))) * var_2));
            var_17 = -var_6;
        }
    }
    var_18 = var_2;
    var_19 = var_7;
    var_20 = (max(var_0, (var_10 < var_9)));
    #pragma endscop
}
