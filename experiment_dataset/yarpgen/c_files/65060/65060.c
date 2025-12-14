/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (!var_3);
        arr_3 [i_0] &= var_4;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((~(min((min(42947, (arr_4 [i_1] [i_1]))), ((min(38866, 1)))))));
        arr_7 [i_1] = ((~(((arr_1 [i_1]) ? var_6 : var_6))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = ((~((max(22594, 26697)))));
        arr_11 [i_2] [i_2] = (((min(((max(23281, var_12))), (~3030617088))) != (((-((var_11 ? 26 : var_6)))))));
    }
    var_13 = ((!(var_4 && var_10)));
    var_14 = ((~((var_0 ? ((var_5 ? 157 : var_12)) : (!var_0)))));
    var_15 = (((((var_2 | (max(1264350180, 22585))))) || (!var_10)));
    var_16 = (((((var_4 & (~var_6)))) ? (((!37) ? ((23303 ? var_5 : -1966866511)) : var_8)) : (((var_3 % var_4) ? var_1 : (var_4 > 38819)))));
    #pragma endscop
}
