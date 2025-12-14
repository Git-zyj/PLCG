/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    var_19 = var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (min(var_20, (max((arr_1 [i_0]), (max(-5, 13))))));

        for (int i_1 = 4; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_21 ^= ((!(((~(arr_0 [i_1 - 2] [i_1 - 1]))))));
            var_22 = max(((max((((arr_1 [i_1]) < var_2)), (arr_4 [i_0])))), ((((max(-5, var_16))) + var_3)));
            var_23 = ((~(((arr_5 [i_1] [i_1 + 1] [i_1]) ? (arr_5 [i_1] [i_1 - 3] [i_1]) : (arr_5 [i_1] [i_1 + 1] [i_1 + 1])))));
            var_24 = ((((((arr_2 [i_1 + 2] [i_1 - 4]) & (arr_2 [i_1 - 3] [i_1 - 4])))) ? var_16 : (max(var_17, (arr_2 [i_1 + 1] [i_1 - 4])))));
        }
        for (int i_2 = 4; i_2 < 22;i_2 += 1) /* same iter space */
        {
            arr_8 [i_0] [i_2] = -5;
            var_25 = (max(var_25, ((((max(((5 ? 140737488355327 : (arr_4 [i_0]))), ((max((arr_1 [i_0]), (arr_2 [i_2 + 2] [i_0])))))) < ((((((arr_6 [10] [10] [i_2]) % -68))) & ((var_0 & (arr_7 [i_0]))))))))));
            var_26 = arr_3 [i_0];
        }
        var_27 = (min((max((arr_7 [i_0]), var_8)), ((max((arr_3 [i_0]), (((-87 + 2147483647) >> (-23 + 46))))))));
        arr_9 [i_0] = (arr_4 [i_0]);
    }
    #pragma endscop
}
