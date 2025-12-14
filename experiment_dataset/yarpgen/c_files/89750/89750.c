/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_14 = ((((max(((var_2 ? var_2 : var_3)), (((595 + (-2147483647 - 1))))))) ? ((max((min(var_9, -110)), (var_8 ^ 73)))) : (((var_4 ? -110 : 13887352253432589596)))));
        arr_3 [i_0] = ((((max((15187922502608585666 && 0), (arr_0 [i_0] [i_0 - 2])))) ? ((((64689 ? var_8 : 22592)))) : ((9223372036854775807 - (arr_0 [i_0 - 2] [i_0 + 1])))));
    }
    var_15 = (min(var_15, (min((~-108), 846))));

    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_16 += (((max((arr_5 [i_1 + 1] [i_1]), (arr_4 [i_1 - 1]))) != (((arr_5 [i_1 + 2] [i_1]) ? var_7 : (arr_5 [i_1 + 2] [i_1 + 2])))));
        arr_6 [1] = (-2147483647 - 1);
    }
    var_17 = var_12;
    var_18 = (((((((max(779161152, 64689)) == 64705)))) < var_0));
    #pragma endscop
}
