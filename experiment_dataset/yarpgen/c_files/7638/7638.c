/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((((min(((2282456331 ? 1828780240 : 65535)), (~1))) >= 6)))));
    var_18 = ((((1 ? -1 : (0 < 1))) + var_13));
    var_19 += (~1);
    var_20 = (max(var_20, var_15));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_21 = (min(var_21, (((((((((var_10 ? var_13 : (arr_1 [i_0])))) ? (!-843) : (1 * 1)))) ? (4294967285 == 17381034674097399378) : 167)))));
        var_22 ^= (max(((((((arr_2 [i_0]) && (arr_1 [i_0]))) || var_2))), (max((min(var_5, 1299689652281489859)), (arr_2 [i_0])))));
    }
    #pragma endscop
}
