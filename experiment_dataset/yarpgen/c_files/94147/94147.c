/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!-4731);
    var_17 += ((8589934576 & ((max(187, 0)))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_18 = ((((max((max((arr_1 [i_0 + 1]), (arr_0 [12] [i_0]))), ((max(var_6, 187)))))) ? ((((arr_2 [i_0 + 1] [7]) || (arr_1 [10])))) : (arr_2 [i_0 + 1] [i_0])));
        arr_4 [i_0] = arr_1 [i_0];
        var_19 = (min(var_19, 4730));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_20 = (max(11166, ((-(!var_1)))));
        var_21 = (max(var_21, -2147483647));
        var_22 ^= (min((187 < 186), 0));
    }
    for (int i_2 = 2; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_23 = (min((((arr_3 [i_2] [i_2]) ? (((-83 ? 1 : 4730))) : 3603588151950322475)), (((var_9 ? (var_13 > var_11) : ((min(65535, var_10))))))));
        var_24 = (((((-((var_6 ? 0 : var_0))))) && (((-(((arr_5 [i_2 - 2]) ? 3174294068272602449 : 14117)))))));
        arr_11 [i_2] [i_2] = (max((max(var_15, (arr_6 [i_2]))), ((((arr_0 [i_2 - 2] [i_2]) >= var_6)))));
        arr_12 [i_2] = (((-(arr_7 [i_2]))));
        var_25 = var_11;
    }
    #pragma endscop
}
