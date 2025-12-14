/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 0;
    var_13 = var_11;

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_14 |= arr_2 [i_0];
        arr_4 [i_0] [i_0] = ((((~(3015682778238056160 & var_11))) < (--12550)));
        arr_5 [i_0] [i_0] = ((~((((min(1, var_4))) ? (!3015682778238056160) : (arr_3 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_9 [8] = arr_0 [i_1] [i_1];
        var_15 = (var_8 << (((((var_8 | (arr_7 [i_1] [i_1]))) <= (arr_7 [i_1] [i_1])))));
        arr_10 [i_1] [i_1] = (max(1, (min(var_6, (arr_8 [i_1] [i_1])))));
        var_16 = ((arr_1 [i_1]) ? 3605784943996276114 : (~1));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        arr_13 [11] [i_2] = -12523;
        var_17 -= ((-((37 ? (((arr_12 [i_2]) ? (arr_11 [i_2]) : 2259655029352829711)) : (arr_7 [i_2] [i_2])))));
    }
    #pragma endscop
}
