/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 70;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_20 = (!((-4113382164836935198 && (arr_10 [i_1 + 1] [i_1 + 2] [i_1 + 1]))));
                        var_21 = (max(var_21, ((max((!-4961305300483038734), -var_11)))));
                        var_22 = (min(var_22, ((((((~(((!(arr_7 [i_1 + 1] [i_1] [i_1]))))))) ? (var_18 * -var_12) : (((arr_7 [i_1] [i_1 - 1] [i_1]) + 205)))))));

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_23 = (min(var_23, (!205)));
                            var_24 = ((((((arr_13 [i_0] [i_2] [i_4]) ^ (((973234393 ? (arr_10 [i_2] [i_4] [i_2]) : (arr_11 [i_0] [i_0] [i_1 - 1] [i_2] [i_3] [i_4]))))))) ? (((((var_12 << (arr_2 [i_0]))) != 186))) : (((~42690) * (!190)))));
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 15;i_5 += 1)
                    {
                        var_25 = ((222 & (arr_2 [i_5 + 3])));
                        var_26 = 0;
                        var_27 += 31;
                        var_28 -= arr_6 [i_1 + 2] [i_5 - 2];
                    }
                    var_29 = 162;
                    arr_18 [i_0] = 186;
                    arr_19 [i_1 + 1] [i_2] [i_2] [i_0] = var_11;
                    var_30 = ((~24866) ? ((-(arr_3 [i_0] [i_1] [i_2]))) : (arr_2 [i_0]));
                }
            }
        }
    }
    #pragma endscop
}
