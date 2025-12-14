/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_3;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((1972592006 ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])));
        arr_3 [18] |= 508;
        var_18 = (min((arr_0 [i_0] [i_0]), (((max(1, 1)) ? var_16 : var_14))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_19 += (arr_6 [6] [0] [i_0]);
            var_20 = (min(var_20, ((min((((1 ? ((1 ? 0 : (arr_5 [8]))) : (1 * 1)))), var_12)))));
            var_21 = (min(var_21, ((max((-18446 & var_11), ((((arr_1 [i_0]) ? -1 : 1))))))));
        }
        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            arr_10 [i_0] [i_2] [i_0] = (min(var_13, ((((arr_8 [i_2 - 2]) ? (arr_8 [i_2 - 1]) : (arr_8 [i_2 - 3]))))));
            var_22 = 1;
            var_23 ^= 52;
        }
    }
    var_24 ^= (!1);
    var_25 = (max(var_25, (((max((max(1, var_3)), var_10))))));
    var_26 = (max(1, var_5));
    #pragma endscop
}
