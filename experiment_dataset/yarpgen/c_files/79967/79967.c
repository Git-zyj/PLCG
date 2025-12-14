/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 = var_4;
    var_13 = (((((var_1 ? 2305843009213693951 : (var_5 == var_4)))) ? var_0 : ((min(var_0, var_5)))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (max(1, 32767));
        arr_4 [1] [11] = ((((var_9 > (arr_2 [i_0 - 1]))) ? (((arr_1 [i_0 - 1]) ? var_7 : var_8)) : ((((max((-32767 - 1), var_7))) ? (min(var_1, (arr_0 [i_0 - 1]))) : ((min((arr_1 [13]), var_10)))))));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] = ((((((!7442379215390526572) == (min(2305843009213693961, 2305843009213693951))))) == ((-88 ? var_3 : 65535))));
        arr_8 [i_1] [i_1] = (((max((arr_0 [i_1 + 3]), ((((arr_1 [i_1]) || -324877025))))) * (((((-46 <= (arr_0 [i_1])))) * var_1))));
    }
    var_14 = (max(var_14, (((~(max((var_1 & var_9), (42620 && var_10))))))));
    #pragma endscop
}
