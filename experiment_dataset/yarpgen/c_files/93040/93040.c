/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = (max(var_19, ((((max((arr_1 [1] [i_0]), (arr_1 [10] [10])))) ? (arr_1 [12] [i_0]) : (~var_3)))));
        var_20 += 27344;
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            arr_6 [i_1] [i_2] [i_2] = (max((arr_5 [i_2] [i_2 - 1] [i_2 + 2]), (((arr_5 [3] [i_2 - 1] [i_2 + 2]) ? var_3 : 6736444029993249885))));
            var_21 = ((var_11 > (((!(var_2 & var_2))))));
        }
        arr_7 [i_1] = var_7;
        var_22 *= (max(((~((var_12 ? var_18 : var_6)))), (max(11158271406418079947, var_12))));
        var_23 += var_10;
    }
    var_24 |= 0;
    var_25 += ((var_9 ? ((max(var_3, var_3))) : (max((var_2 * 9959127330947268328), -1))));
    #pragma endscop
}
