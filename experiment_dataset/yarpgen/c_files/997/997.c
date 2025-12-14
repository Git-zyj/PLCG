/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    var_18 = (((((54283 ? (-9223372036854775807 - 1) : 54283))) && (!11252)));
    var_19 = ((((((1159268027 ? var_14 : 1)))) != (1 - var_12)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = ((var_5 < (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_1] [i_0] = (((1227253664 || var_6) ? (11837715658905343528 || -1) : (arr_11 [i_1] [i_2] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_2])));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 32767;
                            var_21 = (6609028414804208087 || var_0);
                        }
                    }
                }
            }
            var_22 = (((arr_0 [i_1]) ? 14 : 3911));
        }
        for (int i_5 = 4; i_5 < 12;i_5 += 1)
        {
            var_23 = 1985705314;
            arr_17 [i_5] [i_5] = (((15 * -1) == var_8));
        }
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_24 = (((-((var_7 ? (arr_18 [i_6]) : 3918)))));
        var_25 = (((((var_12 ? (arr_18 [i_6]) : var_9))) ? 0 : (~var_15)));
        var_26 = var_11;
    }
    #pragma endscop
}
