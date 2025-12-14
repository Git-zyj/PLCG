/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_15 = ((((((max((arr_2 [i_0 - 2] [i_0]), var_8))) ? 0 : 18446744073709551615))) ? ((((((arr_1 [7]) <= 16383))) - (0 && 0))) : -1);
        var_16 -= (((((!0) < (max((arr_2 [i_0] [i_0]), var_1)))) ? ((((var_5 / var_2) < 1))) : (-32767 - 1)));
        arr_3 [i_0] = ((((max(((0 ? var_4 : (arr_2 [i_0] [i_0 - 2]))), var_9))) ? (((!(((-12266 ? 32767 : 596939641984095453)))))) : (arr_1 [i_0 + 2])));
    }
    for (int i_1 = 4; i_1 < 18;i_1 += 1)
    {
        var_17 = -1;
        arr_6 [i_1 + 2] = (max((((arr_5 [i_1 + 2]) ? (arr_5 [i_1 + 2]) : (arr_5 [i_1 - 3]))), -2138193641));
        var_18 = (((~var_0) % (((arr_4 [i_1]) ? 3214398959290951704 : 1))));
        arr_7 [i_1] = -76;
    }
    var_19 = var_2;
    #pragma endscop
}
