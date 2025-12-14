/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~var_3);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((!(~var_1)));
        arr_3 [i_0] [i_0] = (!var_9);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_8 [10] |= ((~(((!(!var_5))))));
        var_11 -= ((!((max(118, var_4)))));
        var_12 = (max(var_12, (((-(max(((max((arr_7 [i_1]), (arr_4 [i_1] [1])))), (~var_2))))))));
        var_13 = (max(var_13, (((max(8234539111746504007, -8234539111746504006))))));
        var_14 = (((!-8234539111746504008) >> (-8234539111746504022 >= var_8)));
    }
    var_15 = (min(var_15, (((~(~1))))));
    #pragma endscop
}
