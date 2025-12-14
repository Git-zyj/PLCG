/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [16] = (((min(6727914034999325063, (arr_2 [i_0]))) > ((((1848964297 ? 8 : var_7)) + (arr_1 [i_0])))));
        arr_4 [i_0] = 6706489490781643374;
    }
    var_16 = (((((((min(var_8, var_15))) ? (var_8 < 22612) : ((6727914034999325045 ? var_9 : var_2))))) ? ((((((237 ? 232 : var_13))) < var_7))) : ((~(255 > var_0)))));
    var_17 = var_13;
    var_18 = (((((~((226 ? var_7 : 221))))) ? (((((min(var_7, 10760)) > var_1)))) : (min(((128 ? var_3 : var_12)), var_14))));
    #pragma endscop
}
