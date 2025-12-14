/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 = var_7;
    var_13 = var_8;
    var_14 -= 93862954;

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_15 = (106 >= 17280);
        var_16 = ((!(arr_1 [i_0])));
        arr_2 [i_0] = (max(((10 + (arr_0 [i_0 + 2]))), ((min(-27474, 11069)))));
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        var_17 = (min((min(61440, 201)), ((max(-113, 11075)))));
        var_18 = (max((11059 <= 0), ((((((-127 - 1) == 15872))) >= (arr_1 [i_1 - 1])))));
        var_19 = 0;
        arr_5 [i_1] |= ((arr_4 [i_1]) ? ((~((62880 ? -126 : (arr_0 [i_1]))))) : (((31744 ? 52018 : (arr_1 [i_1])))));
    }
    #pragma endscop
}
