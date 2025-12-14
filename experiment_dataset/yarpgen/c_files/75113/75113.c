/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75113
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
            var_14 = (min((arr_3 [i_0] [i_0]), (max((arr_3 [i_0] [i_1]), var_4))));
            var_15 += ((((max(-112, var_11))) ? (arr_4 [11] [i_1] [i_1]) : var_8));

            /* vectorizable */
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                var_16 = arr_7 [i_1] [i_1];
                var_17 = arr_3 [i_0] [i_0];
                var_18 = ((!(33 + -2827)));
                var_19 = (max(var_19, ((((-45 ? var_13 : var_5))))));
                var_20 = (arr_8 [i_0] [i_0] [i_0] [i_0]);
            }
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                var_21 = var_5;
                var_22 = -122;
            }
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                var_23 |= -13;
                var_24 ^= (min((arr_3 [i_4] [i_0]), var_8));
                var_25 = 61;
            }
            var_26 = (arr_3 [i_0] [i_0]);
        }

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_27 = (-((-(min(var_7, var_8)))));
            arr_18 [i_0] [i_5] = var_3;
        }
    }
    var_28 = ((((((max(1109144557, -6396))) ? -121 : 123)) / ((var_3 - (var_1 + 119)))));
    var_29 *= (min(var_5, (min(((max(var_11, var_1))), ((227 ? var_0 : var_8))))));
    var_30 = (max(var_30, ((((max(var_2, ((var_12 >> (var_8 + 1818195182)))))) ? -26 : (!-6407)))));
    #pragma endscop
}
