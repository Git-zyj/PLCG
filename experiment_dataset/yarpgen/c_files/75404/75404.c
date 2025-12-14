/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((((((var_7 / var_8) + 2147483647)) >> var_10)), var_13));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 += (min((arr_0 [i_0] [i_0]), (((arr_0 [i_0] [i_0]) * (((arr_1 [i_0] [i_0]) << (13758707608719850166 - 13758707608719850153)))))));
        var_18 = (3732796553 == 1);
        var_19 = (max(((min(1520, 117))), 0));
        var_20 = (!(163 && 2305842940494217216));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_21 = (3 || -1504);
        var_22 = (((var_15 / var_13) < ((1519 ? (-2147483647 - 1) : (arr_4 [i_1] [16])))));
        var_23 = 11;
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_24 = (-var_15 ? (((arr_7 [2]) << (!42771))) : (max((arr_3 [i_2]), (arr_2 [10]))));
        var_25 = (min(var_25, (((((max((arr_5 [i_2] [i_2]), (arr_5 [i_2] [i_2])))) || (arr_5 [i_2] [i_2]))))));
    }
    for (int i_3 = 4; i_3 < 18;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            var_26 -= var_8;
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_27 = 53760;
                            var_28 = (~var_10);
                        }
                    }
                }
            }
        }
        arr_21 [i_3 - 4] [i_3] = (arr_8 [i_3] [i_3]);
    }
    var_29 = (max(var_2, (((((3901 ? 42759 : var_9))) ? ((min(22745, var_6))) : ((max(var_0, var_6)))))));
    #pragma endscop
}
