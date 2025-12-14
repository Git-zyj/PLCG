/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_19 = (((((var_14 ? (arr_7 [i_3] [i_3]) : (arr_2 [i_0] [i_1])))) ? 229 : var_4));
                        var_20 = 1;
                        var_21 = 27;
                        arr_9 [i_3] = 3858138889;
                    }
                }
            }
        }
        arr_10 [i_0] [i_0] = (((arr_4 [i_0] [i_0] [23]) ? ((0 ? 3544769563 : 1)) : (!var_0)));
        var_22 = ((!(((229 ? (arr_8 [i_0] [i_0]) : var_17)))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_13 [1] [22] = (arr_5 [i_4] [i_4]);

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_23 = 7241;
            arr_17 [i_4] [i_4] = (min(((((~var_16) || (arr_3 [22] [i_5] [22])))), (arr_14 [i_4])));
            var_24 = (~2147483647);
            var_25 = (((arr_2 [i_5] [i_4]) ? (((((0 << (63 - 51)))) ? (min((arr_5 [i_5] [i_4]), var_9)) : (~7241))) : ((min((((arr_4 [i_4] [i_4] [i_4]) ? 1023 : (arr_11 [i_5]))), ((229 ? 0 : (arr_2 [i_5] [i_4]))))))));
        }
    }
    var_26 = var_10;
    var_27 = (min(((var_15 >> (var_4 - 38259)), (63 * 35140))));
    var_28 -= ((((var_14 ? var_15 : 2389348012))));
    #pragma endscop
}
