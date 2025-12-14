/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_6 / 2147483647) < 1)));
    var_11 = (10 <= (1 + 10));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = ((((arr_0 [i_0]) ^ -6934)));
        arr_3 [i_0] [i_0] = (var_8 < (((((((arr_0 [i_0]) <= var_2)))) % 3262279916)));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] = (max((max(1, (arr_1 [i_1] [i_0]))), (236 < var_8)));
            var_13 = (((~-1097260809) ? (min(18446744073709551611, 32756)) : (1743669488 ^ 1097260812)));
            arr_7 [i_0] [i_1] [i_1] = (min(((max((2147483640 / var_8), (1 / 3236727851)))), ((((2626064333 ? 14 : 5)) + (var_5 != var_6)))));
        }
        arr_8 [i_0] = (-(((!((min(-2147483641, 31098)))))));
    }
    var_14 = (var_2 & 32415);
    #pragma endscop
}
