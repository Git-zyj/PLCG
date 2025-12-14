/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_15 = ((-((((237 ? (arr_0 [i_0] [i_0]) : -7803407263598825416))))));
        var_16 += (((arr_0 [i_0 + 1] [i_0]) + (arr_0 [i_0 - 2] [i_0])));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_17 = ((-(arr_3 [i_1])));
        arr_5 [i_1] [i_1] = ((((min(210, 46))) ? (arr_4 [i_1]) : ((((!(arr_4 [i_1])))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_18 = 210;

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                var_19 = (arr_7 [i_4] [i_4]);
                var_20 = (((arr_10 [i_3] [i_3] [i_4]) | (arr_10 [i_3] [i_3] [i_3])));
                var_21 = 65535;
            }
            arr_13 [i_2] [i_3] = 0;
        }
        var_22 = (max(var_22, (((~(arr_11 [i_2]))))));
        arr_14 [i_2] [i_2] = 65535;
    }
    var_23 = ((((((777728428 ? var_2 : var_4))) ? var_8 : (~91))));
    #pragma endscop
}
