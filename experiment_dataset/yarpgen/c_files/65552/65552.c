/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = (max((arr_1 [i_0]), ((16327755045191555352 + (arr_0 [i_0])))));
        var_17 = 15526406305907982087;
        arr_2 [i_0] [i_0] = ((!(((arr_1 [10]) || (((15526406305907982087 ? -654044309 : (arr_0 [i_0]))))))));
        var_18 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 = (((((!(arr_5 [i_1] [i_1])))) % ((~(arr_5 [i_1] [i_1])))));
        var_20 = (min(var_20, var_7));
    }
    var_21 = 230;
    #pragma endscop
}
