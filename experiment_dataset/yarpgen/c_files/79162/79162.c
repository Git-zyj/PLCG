/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((min(13249516787032354936, var_4)) % ((-var_0 | (max(1296501526, 56))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = var_5;
        var_14 = (((((((334925929 ? 5197227286677196685 : 2527471855399924755))) ? ((var_6 ? (arr_0 [i_0]) : var_3)) : (((1861678321 ? (arr_0 [i_0]) : var_2))))) <= (198 | 13249516787032354942)));
        var_15 = (max(((+((min((arr_1 [i_0]), 100))))), (max(-var_10, ((min((arr_1 [4]), var_2)))))));
        arr_4 [i_0] = ((!(((var_9 ? var_11 : (((arr_3 [i_0]) ? 0 : var_5)))))));
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        var_16 *= min(6789, 108);
        var_17 = (((((arr_7 [i_1 - 3]) ? (arr_7 [i_1 - 3]) : (arr_7 [i_1 - 3])))) ? ((((arr_7 [i_1 - 3]) < (arr_7 [i_1 - 3])))) : (((arr_7 [i_1 - 3]) ? var_10 : (arr_7 [i_1 - 3]))));
    }
    var_18 &= ((((((-118 + 2147483647) << (var_11 - 103)))) ? ((var_6 ? ((((var_2 + 2147483647) >> (var_4 - 53)))) : var_3)) : var_10));
    #pragma endscop
}
