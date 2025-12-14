/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_17 ? (((((var_4 >> (var_17 - 160))) * var_11))) : (var_12 & var_14)));

    for (int i_0 = 1; i_0 < 7;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((arr_1 [i_0] [i_0]) + var_2));
        arr_4 [i_0] = (min(-1, -1));
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (((arr_2 [i_1] [i_1]) & ((((((((arr_2 [i_1] [i_1]) && (arr_1 [i_1] [i_1])))) != var_11))))));
        arr_8 [i_1] = (((max((((arr_5 [i_1] [i_1 - 1]) >> (((arr_5 [i_1] [i_1]) - 13822487518787887532)))), (((arr_5 [i_1] [i_1]) >> (var_10 + 7456390146925244374))))) >= (arr_5 [i_1 + 3] [i_1 + 3])));
    }
    var_20 = ((((var_10 ? var_16 : ((var_4 ? var_6 : var_18)))) * ((((var_16 || (((var_17 ? var_0 : var_8)))))))));
    var_21 = (((((~(var_17 & var_9)))) % (min(((min(var_14, var_9))), var_16))));
    #pragma endscop
}
