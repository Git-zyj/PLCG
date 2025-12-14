/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= ((((9223372036854775807 ? (!var_5) : var_7)) - (37 | 16)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = ((((((((arr_1 [i_0]) ? (arr_3 [i_0]) : 6524638063680090401)) < 1))) == (((max(var_0, (arr_0 [i_0])))))));
        arr_4 [i_0] = (min((((!(((-2126224603 ? var_12 : 1724036085)))))), (min(1801882126, (arr_1 [i_0])))));
        arr_5 [i_0] &= (((arr_3 [i_0]) ? (((arr_0 [i_0]) ? var_0 : (((arr_0 [i_0]) + (arr_0 [2]))))) : (((arr_2 [i_0] [i_0]) ? 640583187 : var_6))));
        var_15 -= var_5;
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        arr_8 [i_1] = ((((min(4384688907227964198, (arr_6 [i_1 + 2])))) ? ((((arr_6 [i_1 + 2]) | (arr_6 [i_1 + 3])))) : var_4));
        var_16 = (max(var_16, 0));
        var_17 -= (max((arr_6 [11]), ((((max(96527887, -14))) ? 4384688907227964205 : var_6))));
        var_18 = ((((var_10 << (((arr_0 [i_1 + 3]) - 27314)))) == (arr_0 [i_1 + 1])));
        arr_9 [i_1] [i_1] = (max(var_10, 13191892498564006677));
    }

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_12 [i_2] = 0;
        arr_13 [i_2] = ((!(~-31)));
    }
    var_19 = (min(((var_4 % (-1724036075 % var_6))), 377015396));
    #pragma endscop
}
