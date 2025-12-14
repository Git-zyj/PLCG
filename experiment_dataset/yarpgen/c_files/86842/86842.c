/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((var_0 - var_2), (--76)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = (!73);

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_17 = ((((-(arr_1 [i_0]))) < (((arr_1 [i_0]) ^ var_14))));
            var_18 = ((((!(arr_4 [i_1] [1]))) ? (179 ^ 14304878330035687985) : (arr_1 [i_0])));
            var_19 = ((~((((min(55, var_3))) ? 4294967295 : (arr_2 [2])))));
            var_20 = (arr_3 [i_0] [i_1] [i_1]);
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_21 = ((min((min(66, 4368779499400580365), (!5654599074957906962)))));
            var_22 = (((((-58028 ? (arr_5 [i_0]) : ((((arr_1 [i_0]) / (arr_1 [i_0]))))))) ? (((max(181, (arr_6 [i_0] [i_0] [i_2]))))) : (max(-33, (max(var_13, 2789637855))))));
        }
    }
    var_23 = ((min(var_4, (~4095))));
    var_24 = (((max((14077964574308971242 / var_2), (((var_14 ? 4762568777256951898 : 3985507653291280340)))))) ? var_13 : var_8);
    var_25 = ((((max(var_1, var_14))) != (((min(var_14, var_3))))));
    #pragma endscop
}
