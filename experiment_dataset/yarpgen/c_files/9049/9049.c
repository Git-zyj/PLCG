/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (((((var_4 ? ((var_5 ? var_12 : 1542170072)) : (max(1542170062, 0))))) ? var_7 : (((((var_4 ? var_6 : var_13))) ? (max(var_3, var_14)) : (((var_1 ? 55 : var_11)))))));
    var_16 = var_7;
    var_17 = ((((((((var_8 ? var_4 : 1542170045))) ? var_4 : var_4))) ? ((var_5 ? var_3 : var_2)) : ((max(((27 ? var_5 : var_5)), var_11)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [4] = (max((((arr_1 [i_0]) ? var_2 : var_10)), (((((((arr_0 [i_0]) ? 3390010377 : 2752797253))) ? ((max(10924, 0))) : (arr_0 [i_0]))))));
        arr_4 [i_0] &= (((((var_1 ? (arr_2 [i_0]) : var_9))) ? ((var_1 ? -10924 : var_12)) : ((var_3 ? (arr_2 [i_0]) : -32753))));
        var_18 = (((((((((arr_1 [1]) ? 10924 : (arr_1 [i_0])))) ? (((arr_1 [1]) ? var_2 : var_9)) : var_2))) ? (((-25774 ? 32767 : ((65535 ? 22 : 47121))))) : (((arr_1 [i_0]) ? var_14 : ((var_10 ? var_12 : var_8))))));
        arr_5 [i_0] = (min(((((max(2752797207, var_2))) ? (max((arr_0 [5]), (arr_2 [i_0]))) : (arr_1 [i_0]))), (min(((var_9 ? var_10 : (arr_2 [6]))), ((189 ? var_13 : var_0))))));
    }
    var_19 = (max(var_19, ((max(var_6, (max((((2849371271425885277 ? 26795 : var_5))), var_2)))))));
    #pragma endscop
}
