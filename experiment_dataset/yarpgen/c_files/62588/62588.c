/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (1 ? var_15 : (246 | 14807));
    var_20 = (((7 / 14817) != ((((109 >> (24504 - 24501)))))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (i_0 % 2 == 0) ? (((((((var_2 != 8) ? ((var_3 >> (((arr_0 [i_0 - 1] [i_0]) + 3131)))) : (arr_2 [i_0])))) ? ((64886 ? 1289263885 : 805236857)) : (((var_15 ? ((var_14 ? var_2 : 124)) : (89 % var_3))))))) : (((((((var_2 != 8) ? ((var_3 >> (((((arr_0 [i_0 - 1] [i_0]) + 3131)) + 15612)))) : (arr_2 [i_0])))) ? ((64886 ? 1289263885 : 805236857)) : (((var_15 ? ((var_14 ? var_2 : 124)) : (89 % var_3)))))));
        arr_4 [i_0] = (41032 / 110);
        arr_5 [i_0] = (!var_5);
    }
    var_21 = (((max(171, (1 - var_16))) % 41));
    var_22 = (min((((min(var_4, 7680)) * ((var_17 ? var_7 : -15148)))), 7));
    #pragma endscop
}
