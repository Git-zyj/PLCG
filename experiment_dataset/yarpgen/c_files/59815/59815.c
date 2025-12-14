/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((((min((~var_6), 195)) << ((((var_10 - ((1357992431 ? 10578683815026599107 : 104)))) - 7868060258682952644)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 += -2207232964310257435;
                    var_20 *= (((((104 ? 94 : 2225867656))) < (((var_17 / var_0) ? (min(151, var_16)) : var_14))));
                    var_21 -= (((~var_4) & ((min((arr_3 [i_0] [i_1 + 1]), (arr_3 [i_0] [i_0]))))));
                    arr_8 [i_0] [i_1] [i_1] = (((~var_2) ? ((~(min((arr_0 [i_0]), var_1)))) : (arr_2 [i_1])));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            arr_14 [i_4] [i_3] [i_4] = -59;
            arr_15 [i_3] [1] |= 8105250024804809994;
            var_22 = var_13;
            var_23 = (((((arr_9 [10]) ? (arr_13 [i_4]) : var_13)) | ((((arr_12 [i_3]) ? (arr_11 [i_3]) : (arr_10 [i_3]))))));
            arr_16 [i_4] = ((~((((arr_12 [i_3]) >= var_12)))));
        }
        var_24 = (arr_13 [i_3]);
        var_25 *= ((1 ? 583483479 : -2207232964310257435));
        var_26 |= ((~(!var_12)));
    }
    var_27 = 207826341965075278;
    #pragma endscop
}
