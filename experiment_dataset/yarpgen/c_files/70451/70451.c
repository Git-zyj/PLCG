/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 = (min(var_19, (arr_0 [i_0])));
        var_20 = (arr_0 [i_0]);
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        var_21 = ((4403196242846466672 / (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_22 = (max(var_22, ((((!((min((arr_4 [i_1]), (arr_1 [i_1]))))))))));
        arr_5 [12] = (arr_3 [i_1]);
        var_23 = (max(var_23, (max((min((arr_4 [i_1]), 0)), (max((arr_1 [i_1]), (max(-8347707864251183336, var_0))))))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = (~14043547830863084943);
        var_24 = (max(var_24, ((((!((max(var_11, var_14))))) ? ((((((arr_3 [i_2]) & (arr_4 [i_2])))) ? (arr_7 [i_2]) : (max(4403196242846466672, var_10)))) : ((max(var_0, ((((arr_3 [i_2]) || (arr_0 [9])))))))))));
    }
    var_25 = (max(var_25, (((var_3 != (var_1 == 511))))));
    #pragma endscop
}
