/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 &= 2990157877434263501;
        arr_2 [i_0] = ((var_1 ? (((arr_1 [i_0]) ? 26 : 26)) : (55 == 35)));
    }
    var_17 = ((((max(-var_11, (var_12 + var_13)))) ? ((43 ? 26 : 4961457261565756294)) : 7244067142640514771));
    var_18 = 168;

    /* vectorizable */
    for (int i_1 = 4; i_1 < 8;i_1 += 1)
    {
        arr_5 [i_1] = (((18446744073709551615 / var_8) + -6494093400299145103));
        arr_6 [i_1] = ((!0) ? 88 : (var_0 + 72));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_9 [i_2] = ((var_6 >= (max(-6028752833269071318, (max(var_12, var_6))))));
        arr_10 [i_2] = ((211 ? var_11 : ((0 + ((max((arr_1 [i_2]), 1742880290)))))));
    }
    var_19 = var_1;
    #pragma endscop
}
