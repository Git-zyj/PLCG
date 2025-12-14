/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 18446744073709551609;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_18 = arr_1 [i_0];
        var_19 = (((arr_0 [i_0]) ? ((((arr_1 [i_0]) % (arr_1 [i_0 - 2])))) : (((arr_0 [11]) ? 45 : (arr_0 [6])))));
        var_20 = (!4094);
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_21 ^= (((((~(arr_0 [i_1])))) ? (min((((10130 - (arr_2 [i_1])))), (arr_1 [i_1 + 1]))) : ((10125 ? -4108 : 2942715193627199753))));
        var_22 = ((!((max(524287, 6851936767354227326)))));
        var_23 = ((((((min((arr_2 [i_1]), -10142))) ? -12623 : (arr_5 [i_1 + 2]))) > -10108));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_24 = ((~((~(arr_0 [i_2])))));
        var_25 &= (((arr_1 [i_2]) | ((6851936767354227302 ? -7763595453878616572 : 3412403986))));
        var_26 = (arr_7 [i_2]);
    }
    var_27 = (((15 + -var_14) ? (6851936767354227298 > 18356291107937502540) : ((((min(var_1, var_4))) + var_0))));
    #pragma endscop
}
