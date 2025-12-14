/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 = ((((((var_11 ? -4024344589892840571 : var_6)) + (!5354754490584054589)))) ? -14 : ((940254391 ? -3970909822604693317 : -14)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [6] [i_0] = 32767;
        arr_3 [i_0] [i_0] = 14;
        var_17 = (min(var_5, (((arr_0 [i_0]) ? -1124860058995335194 : (((max(var_8, var_1))))))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_18 = ((((min(-115702661, -4024344589892840558))) ? (1 ^ 0) : 121));
        arr_7 [i_1] = (((((!1) ? (((arr_4 [i_1 + 1]) << (1444306187 - 1444306173))) : (arr_6 [i_1 - 1]))) != ((-1444306188 ? (arr_4 [i_1 + 1]) : (arr_4 [i_1 + 1])))));
    }
    #pragma endscop
}
