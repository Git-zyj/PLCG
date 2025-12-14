/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= var_4;

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [5] = (min(var_11, ((((max(2501447730, 65528)) != var_0)))));
        arr_4 [i_0] = ((((((var_6 ? 14229 : (arr_1 [i_0] [i_0]))))) ? ((983 ? 32763 : (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0 - 3] [i_0 - 3]) : (arr_2 [i_0 - 2] [i_0]))))) : var_3));
        var_13 = (arr_0 [i_0]);
    }
    var_14 = (max(var_14, ((((((((12 ? var_0 : 1))) ? var_7 : 7))) >= (((!4294967272) ? ((21883 ? -2272476393028129250 : var_5)) : var_9))))));
    #pragma endscop
}
