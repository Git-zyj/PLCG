/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (((127 ? ((min(var_12, var_17))) : (~-5399728645500339427))));
    var_20 = var_15;

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_21 = ((~((min((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1]))))));

        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_0] = (max(-29849, (min(var_16, (min(2002245369, -29832))))));
            var_22 = ((24945 & ((((max(var_7, var_17))) ? (((((arr_4 [i_0]) + 2147483647)) >> (65534 - 65533))) : ((max((arr_1 [i_0] [i_0]), 1)))))));
            arr_6 [i_1] [i_1] [i_0] = ((1 / (~40591)));
            var_23 = ((((((40591 != 5399728645500339427) ? (arr_4 [i_0 + 1]) : (var_11 && var_1)))) ? (((((var_6 <= 65523) && (arr_0 [i_0]))))) : -5399728645500339405));
            arr_7 [i_0] [i_0] [i_0] = ((((((arr_0 [i_1]) ^ (7316578902799247412 && 18446744073709551615)))) * 32767));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_10 [i_0] [i_0] [i_2] = ((((max(9223372036854775807, (min(25500, 8556914204644769761))))) ? 40591 : -5399728645500339436));
            var_24 = var_10;
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_15 [i_0] = ((~((~(140737488355327 ^ -6359)))));

            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                arr_18 [i_3] |= (((~var_2) ? ((min((arr_9 [i_0 - 1]), ((min(var_17, var_3)))))) : (arr_17 [i_3] [i_3] [i_3] [i_4])));
                var_25 += (max((((arr_17 [i_3] [14] [i_3] [i_4]) ? (min((arr_0 [i_3]), var_4)) : (arr_13 [i_3]))), (((-9223372036854775782 ? -29849 : 1198258444)))));
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
    {
        arr_22 [i_5 - 1] = ((~(arr_13 [6])));
        arr_23 [i_5 - 1] [i_5] = (arr_21 [i_5 - 1]);
    }
    #pragma endscop
}
