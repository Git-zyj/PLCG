/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= 6729;
    var_20 = ((min(((max(39566, 3074)), (max(9223372036854775807, 1681562770))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_21 = ((((((arr_1 [i_0] [i_1]) ? (-9223372036854775807 == var_4) : 32768))) ? (arr_1 [i_1 - 1] [i_1 + 1]) : 32767));
            arr_4 [i_0] = (max(((((max(var_0, var_1))) ? (var_8 / var_1) : (!var_12))), 1));
            arr_5 [i_0] = var_6;
        }
        var_22 = ((var_1 + ((-((var_3 ? -3074 : (arr_2 [i_0] [i_0])))))));
        arr_6 [i_0] = (3074 ? 15 : 3100036065455317054);
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        arr_10 [i_2] = (max(158, (-26521 | -3100036065455317067)));
        var_23 = 57;
    }
    var_24 = (max(var_24, 3044));
    #pragma endscop
}
