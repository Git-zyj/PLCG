/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = (((!(arr_4 [i_0] [i_0]))) ? ((12856 ? (min((arr_0 [i_0]), var_6)) : ((var_0 ? var_12 : var_7)))) : (((+(((arr_4 [i_0] [i_1]) ? (arr_1 [i_1] [i_1]) : 173))))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_17 = (!52659);
                    var_18 = 1275445136;
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    var_19 = (!-14274);
                    var_20 += 1;
                    arr_12 [i_3] [i_3] [i_3] [i_3 - 1] = (arr_10 [i_0] [i_0] [5] [i_0]);
                }
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    var_21 += (min(var_6, 57));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] = 173;
                                arr_22 [i_1] [i_1] [i_4] [i_6] = (arr_14 [i_0] [i_1] [i_0]);
                                var_22 = var_7;
                            }
                        }
                    }
                    var_23 += ((!(((6158 ? 7084390712478460809 : 255)))));
                }
            }
        }
    }
    var_24 = var_11;
    #pragma endscop
}
