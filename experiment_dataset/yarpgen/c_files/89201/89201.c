/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~1626132102);

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_11 = (min(var_11, ((((((var_6 ? (!var_3) : ((var_6 ? 30 : var_0))))) ? 1626132102 : ((~(min(4294967280, 4194303)))))))));
        var_12 = (((~((var_1 ? var_5 : 15)))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_13 = (((!1945239462812421178) % (max(var_3, ((var_8 ? 1 : 4294967281))))));
        var_14 = (max(var_14, ((max((((arr_5 [i_1]) ? 4294967280 : 0)), 1626132102)))));
    }
    var_15 = var_3;
    var_16 = var_5;
    var_17 = var_2;
    #pragma endscop
}
