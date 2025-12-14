/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-(max(((var_5 ? 1 : (-2147483647 - 1))), (((-127 - 1) & 104))))));
    var_14 = (max(var_14, (((((((min(1, var_11))) ? (((min(var_4, -5889)))) : (max(192, 2656039908)))) - ((~((var_7 ? 536854528 : var_12)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_15 = arr_2 [i_0] [i_0] [i_1];
            var_16 = (max(var_16, (((((((arr_2 [i_0] [i_0] [i_0]) - var_7))) ? (((!(-32767 - 1)))) : (arr_0 [i_0]))))));
            arr_4 [i_1] &= (((!(arr_2 [0] [i_1] [0]))));
            var_17 = ((63393 ? var_3 : 6));
            var_18 = (max(var_18, (((((-536854529 - (arr_2 [i_0] [i_0] [i_0]))) & 65532)))));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_7 [i_0] [i_2] = (((-24987 ? 12 : -28336)));
            arr_8 [i_0] [i_0] [i_0] = ((!(arr_1 [i_0])));
        }
        var_19 = 2147483647;
        var_20 = ((1 ? (arr_0 [i_0]) : (((arr_2 [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_2 [16] [i_0] [i_0])))));
    }
    #pragma endscop
}
