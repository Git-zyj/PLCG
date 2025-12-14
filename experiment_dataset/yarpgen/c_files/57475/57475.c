/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_9 != ((var_14 ? var_12 : ((var_9 ? var_7 : 53482))))));
    var_18 = (min(var_18, var_3));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((-(((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        var_19 = (max((((((37280 << (53469 - 53463)))) ? (((arr_0 [i_0]) + 2187875562)) : (((arr_1 [i_0]) ? 3369714344 : 53482)))), (((min(28250, 53458))))));
        arr_3 [i_0] = (((((((min(12053, (arr_0 [i_0]))))) > 9223372036854775799)) && ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        arr_4 [i_0] [i_0] = (max((((arr_0 [i_0]) * (arr_1 [i_0]))), ((min(var_12, (arr_0 [i_0]))))));
    }
    #pragma endscop
}
