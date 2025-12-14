/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 + 1] = 1073741823;
        arr_3 [i_0 + 1] = -1;
        arr_4 [i_0] = (((((((min(1, var_3))) ? (max(var_2, 11141265881680821943)) : (((var_13 ? (arr_0 [i_0] [i_0]) : 27189)))))) ? 1 : (((min(((((arr_0 [i_0] [i_0 - 1]) && 8))), (max((arr_0 [i_0] [i_0]), 246))))))));
        arr_5 [i_0] = (((((((arr_0 [i_0 + 1] [i_0 + 1]) / var_7)))) * (((arr_0 [1] [i_0]) ? ((27205 * (arr_0 [i_0] [i_0]))) : (arr_1 [i_0 + 1])))));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_17 = (min(var_17, (((3605725525 ? ((2736948314 ? (((15 ? 2262590830 : 1558018961))) : var_1)) : (~30891))))));
        arr_8 [i_1] = var_5;
    }
    var_18 = var_12;
    #pragma endscop
}
