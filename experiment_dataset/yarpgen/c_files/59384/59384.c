/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = (min((arr_0 [i_0]), (min(23, -5852))));
        var_19 = min((arr_0 [i_0]), (max(((var_5 ? (arr_0 [i_0]) : (arr_2 [6]))), 33)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_1] [8] [i_1] [0] = ((((max(21, ((539040391 + (arr_5 [i_0] [i_1] [i_2])))))) / ((min(var_12, var_0)))));
                        arr_11 [i_1] [i_2] [14] = ((((((((var_16 & (arr_6 [i_0] [i_1] [i_2] [i_3])))) ? (((max(161, 74)))) : (arr_4 [6] [i_3])))) ? (arr_3 [2] [20] [i_2]) : (min(((((arr_7 [i_1] [i_1]) ? (arr_8 [10] [i_1] [i_2] [i_3]) : var_8))), var_9))));
                        var_20 = (min(var_20, (arr_1 [i_0] [i_1])));
                    }
                }
            }
        }
        arr_12 [i_0] [15] = (((((~2931221446) ? (var_1 / -3210197350717784827) : (arr_3 [i_0] [i_0] [i_0]))) & (((min((arr_8 [i_0] [i_0] [i_0] [i_0]), var_10))))));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_21 = (min(var_21, 80));
        var_22 = var_1;
        var_23 = (((arr_8 [i_4] [16] [i_4] [1]) ? (min((min(1833857725581854234, 1)), (arr_2 [i_4]))) : (arr_7 [i_4] [18])));
    }
    for (int i_5 = 2; i_5 < 10;i_5 += 1)
    {
        arr_18 [i_5] |= ((!((min((min((arr_3 [i_5] [i_5] [20]), var_6)), var_4)))));
        var_24 = (((((347921264 ? (arr_15 [i_5]) : -1962732580))) ? ((((min(-117, (arr_16 [i_5])))) ? (arr_0 [1]) : 97)) : 41492));
        arr_19 [i_5] = ((((min((!var_6), (arr_9 [i_5 + 2] [4] [i_5] [i_5] [i_5])))) ? (!var_5) : ((((min((arr_17 [i_5]), -2003312355))) ? (min(11830296797348205377, 1)) : (202 <= 6758471449197241643)))));
    }
    var_25 = ((((var_11 & 1) ? var_13 : (((max(1, 385)))))));
    var_26 = (!1);
    #pragma endscop
}
