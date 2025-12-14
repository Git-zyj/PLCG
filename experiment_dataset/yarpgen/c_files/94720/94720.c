/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((min(var_13, (max(var_13, -113)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = ((-((max((!var_1), 62556)))));

                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    var_21 |= (((((!(arr_6 [5] [i_1] [7]))) ? -var_16 : (470568566 / -113))));
                    var_22 = (~3824398730);
                    var_23 = -5389038022153274358;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_24 = ((var_13 ? var_17 : (arr_5 [i_1])));
                    var_25 = (max(var_25, (((((arr_1 [i_3]) / var_12))))));
                }
                var_26 = ((((~var_12) + 9223372036854775807)) << (((!(arr_3 [i_0 - 3])))));
                var_27 = ((((arr_6 [11] [11] [i_0 - 2]) * var_14)));
            }
        }
    }
    #pragma endscop
}
