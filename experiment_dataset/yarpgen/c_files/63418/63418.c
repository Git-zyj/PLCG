/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (127 * 1);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 ^= (min(((((!232) || ((((arr_2 [i_0]) ? 1 : (arr_0 [i_0]))))))), (min(var_5, (arr_1 [i_0] [i_0])))));
        var_13 = (min(var_13, 511));
        arr_3 [i_0] = (arr_0 [3]);
        var_14 -= (max(((65535 ? (2966506612 / 2624589332) : 1)), 1670377949));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_15 = var_10;
        var_16 -= ((((min(-23931, 255))) ? ((min((((!(arr_5 [i_1] [i_1])))), 6100))) : 1046528));
    }
    var_17 = (min(var_17, 359601866));
    var_18 = 27649;
    #pragma endscop
}
