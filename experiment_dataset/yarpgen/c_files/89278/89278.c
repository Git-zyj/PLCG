/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (((((var_10 ? var_2 : 15102531387399516526))) ? (((arr_0 [i_0]) ? (arr_1 [1]) : var_0)) : ((((arr_0 [i_0]) != var_5)))));
        arr_4 [i_0] [i_0] = var_7;
        var_16 = ((-1 ? 50825 : 50837));
        var_17 = (+(((((arr_0 [i_0]) ? var_4 : 50832)) + var_10)));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_9 [0] |= -103;
        arr_10 [i_1] = var_4;
    }
    var_18 = 3283977205048000483;
    var_19 = (max(var_19, (((-(((0 ? 4691492599161116095 : 553310318))))))));
    #pragma endscop
}
