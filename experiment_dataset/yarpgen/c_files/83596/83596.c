/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_16 = max(((97 ? 0 : (((arr_2 [i_0]) ? (arr_0 [i_0]) : 16)))), ((((arr_3 [i_0]) / (arr_3 [i_0])))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_8 [i_0] [9] [i_1] = (((arr_0 [i_0]) ? 63 : -114));
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_17 = (min(var_17, (arr_6 [i_0])));
                            arr_20 [i_0] [i_4] [i_2 - 1] [i_3] [i_4] [i_0 + 3] [1] = (i_0 % 2 == 0) ? (((((((~(arr_12 [i_0] [i_1] [i_0]))) + 9223372036854775807)) << ((((-(arr_1 [i_0]))) - 10843892244371932279))))) : (((((((~(arr_12 [i_0] [i_1] [i_0]))) + 9223372036854775807)) << ((((((-(arr_1 [i_0]))) - 10843892244371932279)) - 13205386997653237913)))));
                            arr_21 [i_0] = var_14;
                        }
                    }
                }
            }
        }
        arr_22 [i_0] = (((((((~(arr_14 [i_0] [i_0 - 1] [i_0] [i_0] [i_0]))) == (max((arr_9 [i_0]), var_1))))) << (2944596143 - 2944596123)));
        arr_23 [i_0] [i_0] = (max(((((~-1815788151) && -101))), (max((arr_18 [i_0] [5] [i_0] [5] [i_0] [i_0]), (70368744177660 <= 17762)))));
        arr_24 [i_0] = max((!var_3), (arr_7 [i_0] [i_0] [i_0]));
    }
    var_18 *= ((~((((43 / 23) < ((1 ? 23 : var_11)))))));
    #pragma endscop
}
