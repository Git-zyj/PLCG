/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 14822;
    var_14 = ((-((min((min(var_7, var_0)), var_10)))));
    var_15 = var_7;
    var_16 = (((((!var_2) ? (274341036032 == var_7) : (min(var_6, var_4))))) ? ((((16815 << (255 - 255))) & 14)) : var_9);

    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        var_17 ^= ((-(((arr_1 [i_0 + 3]) ? (arr_1 [i_0 - 1]) : (arr_0 [i_0 + 1] [i_0 + 3])))));
        var_18 = ((((max(((~(arr_1 [i_0]))), var_6))) ? var_9 : (((~5776) ? (arr_1 [i_0 + 2]) : ((((1 <= (arr_1 [i_0 + 1])))))))));
        var_19 = (((((((var_7 / (arr_0 [i_0] [i_0])))) ? (min(-8419544547822240363, -449350300)) : (var_7 + var_6))) & (~var_2)));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_4 [i_1] = (arr_2 [i_1]);
        var_20 *= ((-2048 ? -8983065818847349274 : ((min(1, 4008455572)))));
    }
    #pragma endscop
}
