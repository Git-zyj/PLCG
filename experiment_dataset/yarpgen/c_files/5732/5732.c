/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (0 >= 4294967281);
        arr_3 [i_0] = (arr_1 [7] [i_0]);
        var_20 = (max(var_20, (((var_9 ? (((var_4 || (arr_1 [4] [4])))) : (~8))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 4; i_2 < 12;i_2 += 1)
        {
            var_21 = (min(var_21, (arr_10 [i_1])));
            arr_11 [13] [i_1] = (((-102 ? 39 : 1685520915)));
        }
        var_22 = (((((-(max(var_15, var_6))))) > 54));
        arr_12 [i_1] = 39;
    }
    var_23 = (!var_11);
    var_24 = (~-26841);
    var_25 = (var_12 ^ -103);
    var_26 = (min(38, -40));
    #pragma endscop
}
