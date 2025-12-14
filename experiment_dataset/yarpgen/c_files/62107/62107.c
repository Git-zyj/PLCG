/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_4 [i_0] [i_1] = var_13;
            var_14 = var_5;
            arr_5 [i_0] [i_0] = (min(((((arr_0 [i_1]) / var_7))), (min((arr_2 [i_1]), (arr_1 [i_0])))));
            var_15 = (((((!(-15825 < 29)))) == ((6 ? 16751 : 1))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_8 [i_2] [i_2] [i_2] = ((~(max(((min((arr_7 [i_0] [i_2]), 41421))), var_9))));
            var_16 *= ((((max(-var_6, var_4))) ? ((((arr_2 [i_2]) || var_3))) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : 254))));
        }
        arr_9 [i_0] = (((max(var_12, ((var_1 ? 254 : (arr_0 [i_0]))))) ^ (!var_6)));
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_17 = (((arr_2 [i_3]) ? ((var_11 / (arr_0 [i_3]))) : ((-16752 | (arr_2 [i_3])))));
        arr_12 [i_3] = (((9751 ? -16751 : 1)));
        var_18 ^= (((((arr_7 [i_3] [i_3]) + 2147483647)) >> (((arr_1 [i_3]) - 7880245917073675040))));
    }
    var_19 = ((var_5 ? var_2 : var_10));
    #pragma endscop
}
