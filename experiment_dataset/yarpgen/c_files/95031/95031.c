/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    var_20 = (max(var_20, var_3));
    var_21 = (!((max(2300039100, 242))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_22 = var_17;
        var_23 &= (((arr_1 [i_0]) ? (((arr_0 [i_0]) ? (((arr_1 [i_0 + 1]) ? -32756 : (arr_1 [i_0]))) : (arr_0 [i_0]))) : 0));
        var_24 = (min(((max((arr_0 [i_0]), (((arr_0 [i_0]) ? 17051 : (arr_0 [i_0])))))), ((((min(2777278863, -109))) ? (~-32035) : (((arr_1 [i_0]) ? 3494965750 : (arr_1 [i_0])))))));

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_25 = 30359;
                        var_26 = 1;
                        arr_9 [i_0] [6] [i_1 + 1] [i_2] [i_3] |= (arr_6 [8]);
                    }
                }
            }
            var_27 = (min(((((arr_1 [8]) | 3796679338))), (max((!1), (((arr_2 [i_0] [i_1]) ? (arr_6 [i_1]) : 1033767))))));
            var_28 += (max((arr_8 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1]), (arr_4 [i_0] [1] [10])));
        }
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            var_29 = arr_10 [i_4 + 2];
            var_30 |= (~2248602255310830396);
            var_31 = ((((((max((arr_4 [i_4] [i_0 + 1] [i_0 + 1]), (arr_3 [i_0 + 1] [i_0 + 1])))) ? ((min((arr_5 [i_0] [i_4] [i_4]), var_6))) : 4668680163291158725))) ? (arr_11 [i_4]) : (min(var_9, (arr_10 [7]))));
        }
    }
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                {
                    var_32 = 7756840576093421816;
                    var_33 = ((((max((-127 - 1), (max(var_9, (arr_16 [i_5] [i_6] [i_6] [10])))))) ? 7120977346880312494 : ((((arr_15 [i_6] [i_6]) ? (((1 << (((-2147483644 - -2147483634) + 21))))) : 6)))));
                }
            }
        }
        var_34 ^= ((max((((var_17 / (arr_17 [18] [4] [4] [i_5]))), 2974414578848281554))));
    }
    for (int i_8 = 1; i_8 < 19;i_8 += 1)
    {
        var_35 *= (arr_19 [7]);
        var_36 = var_1;
        var_37 ^= ((~((39422 ? -16408 : 0))));
    }
    #pragma endscop
}
