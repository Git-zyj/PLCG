/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    var_17 = (((((~(~var_3)))) ? ((2957843113 ? 0 : 0)) : var_6));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = (((((arr_0 [i_1 - 1] [i_1 + 1]) ? 1337124182 : (max(1163276302, 4294967275))))) ? (((-9223372036854775807 - 1) ? ((-(arr_1 [i_0] [i_1]))) : (((1337124175 ? -1683027017 : 152))))) : ((((arr_0 [i_0] [1]) ? (arr_0 [i_0] [i_1 + 1]) : var_6))));
            arr_5 [i_0] [6] [i_1] |= (max(var_6, (((-2069517711 ? ((-1904146084998056923 ? 4294967295 : 2957843091)) : (((min((arr_2 [i_1 - 1] [i_1 + 1]), var_3)))))))));
        }
        var_18 -= ((!((max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))))));
        arr_6 [i_0] = (min(2939607195, 4294967295));
        arr_7 [i_0] [10] = ((2957843122 ? var_1 : ((127 + (arr_0 [i_0] [i_0])))));
        arr_8 [i_0] = 3131690993;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 7;i_2 += 1)
    {
        arr_11 [i_2] = (~4294967289);
        arr_12 [i_2] |= (arr_3 [i_2 - 1] [i_2 + 3]);
        arr_13 [i_2] [3] = (arr_1 [i_2 - 1] [i_2]);
        var_19 += -1683027014;
    }
    #pragma endscop
}
