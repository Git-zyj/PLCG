/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((arr_1 [i_0 - 1] [i_0 + 2]) >= (arr_1 [i_0 - 1] [i_0 - 1]));
        var_19 = (((arr_1 [i_0 - 1] [i_0]) == ((62280 ? -104 : 62290))));
        arr_3 [i_0] [11] = ((9 ? ((((arr_0 [i_0]) || (arr_1 [i_0] [i_0])))) : (arr_1 [i_0] [i_0 + 1])));
        var_20 = (max(var_20, var_13));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_21 = ((((((arr_4 [i_1]) ? (arr_4 [i_1]) : 0))) || (((-(arr_5 [7]))))));
        var_22 = (!var_7);
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_23 = (min(var_23, ((max(var_15, (((-18446744073709551596 < (arr_7 [i_2] [i_2])))))))));
        var_24 = ((((var_2 - (arr_8 [i_2] [i_2]))) ^ 17785749));
    }
    var_25 = (!-1116191648);
    var_26 = 1116191633;
    #pragma endscop
}
