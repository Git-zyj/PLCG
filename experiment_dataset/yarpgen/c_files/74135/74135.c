/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 ^= (((((~((var_10 ? var_12 : 165))))) ? ((var_18 ? (136 || var_15) : (max(var_1, (arr_1 [i_0]))))) : (~144)));
        arr_2 [i_0] = ((119 ^ (max(18446744073709551615, (((112 ? var_6 : 146)))))));
        var_21 = (min(var_21, ((max((12108 ^ var_18), ((1 ? 0 : 154)))))));
        var_22 = ((((((((arr_0 [i_0] [i_0]) ? 119 : var_14))) || (arr_1 [i_0]))) ? (arr_0 [i_0] [i_0]) : (max((((arr_0 [i_0] [i_0]) | var_15)), (var_8 | 255)))));
    }
    #pragma endscop
}
