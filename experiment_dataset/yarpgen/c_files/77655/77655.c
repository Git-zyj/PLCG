/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_15 ^= (((((((((arr_0 [3]) || var_2))) != ((((arr_0 [4]) && (arr_1 [i_0]))))))) >> (((max(var_4, ((var_3 ? var_0 : -2043876272)))) + 559022839))));
        var_16 ^= (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((!((((arr_3 [i_1]) >> (var_5 - 63))))));
        var_17 ^= (((((((min((arr_3 [i_1]), -3400))) ? ((((arr_4 [i_1]) ? var_4 : var_11))) : -var_2))) ? (((!(((-3400 ? -2043876272 : var_7)))))) : (1255918557465996358 >= var_13)));
    }
    #pragma endscop
}
