/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 += (max(((41200 ? (-7159321043207118746 ^ var_1) : (!0))), var_15));
        arr_2 [i_0] = min((min(((var_11 ? (arr_1 [i_0]) : 41200)), (((var_12 ? 24332 : 19180))))), var_14);
        var_20 = (((var_10 && 41212) ^ ((-(((!(arr_1 [i_0]))))))));
        arr_3 [i_0] = var_0;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_21 = (((((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) << ((((max(var_8, var_3))) - 9910)))) ^ ((((!(~18446744073709551592)))))));
        var_22 = ((~((~(arr_5 [i_1])))));
        arr_6 [i_1] = (arr_5 [i_1]);
        arr_7 [i_1] = (((-241975063 + 2147483647) << (24323 - 24323)));
        var_23 = var_3;
    }
    var_24 = (((((24338 ? var_18 : ((var_6 ? var_12 : var_16))))) ? var_14 : ((~(var_17 ^ var_18)))));
    #pragma endscop
}
