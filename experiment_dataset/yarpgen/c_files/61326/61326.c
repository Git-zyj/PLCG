/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (min((((var_17 ? ((24461 ? 73 : -2147483646)) : var_15))), -540073447));
    var_19 = (max(var_19, 61170493));
    var_20 = min(((((max(0, 4294967280))) ? 17571206546020841066 : ((8949560776499672309 ? -64 : var_14)))), ((-(~var_1))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-((69 ? 73 : 24461))));
        var_21 -= (max(((((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) ? 3754893849 : (min(-74, (arr_1 [6]))))), (!8949560776499672309)));
        var_22 = (max(var_22, ((min(var_15, ((!(arr_1 [i_0]))))))));
        arr_3 [i_0] = var_17;
        var_23 *= ((~(max((max((arr_1 [i_0]), (arr_1 [i_0]))), (((~(arr_0 [i_0] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_24 &= (max(9497183297209879306, ((((arr_6 [i_1]) << (102 - 80))))));
        arr_7 [i_1] = (max(((((max((arr_5 [i_1]), (arr_4 [i_1])))) ? (min(var_17, (arr_4 [i_1]))) : (arr_6 [i_1]))), (arr_5 [i_1])));
    }
    #pragma endscop
}
