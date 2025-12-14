/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, 9223372036854775806));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = var_9;
                                var_18 = var_3;
                                var_19 = (min((((!((min(var_6, var_6)))))), (arr_1 [i_1] [i_1])));
                            }
                        }
                    }
                    var_20 = (max(var_20, (!2219786227539486510)));
                }
            }
        }
    }
    var_21 = (max(var_21, (((var_13 ? (((min(230, 1)))) : (((var_13 ? var_10 : 0))))))));

    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        var_22 &= var_14;
        var_23 = 1;
        var_24 = ((-(var_7 != var_11)));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_25 = (((((arr_18 [i_6] [i_6]) <= (arr_18 [i_6] [i_6]))) ? ((((!(arr_18 [i_6] [i_6]))))) : (min((arr_18 [i_6] [i_6]), 0))));
        var_26 = (min(var_26, 0));
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        var_27 = ((((5 ? (arr_2 [i_7]) : (arr_2 [i_7]))) > (27718 ^ 15896)));

        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            var_28 ^= ((((max(390203895, (min(17724889972539212180, 255))))) ? var_11 : (((((max(1, 5)) <= 1))))));
            var_29 = 24;
            var_30 = (min(var_30, ((((((-2112005104 + 2147483647) >> 0)) <= (arr_14 [i_8] [i_8] [i_7] [i_7] [i_7] [i_7] [i_7]))))));
        }
        var_31 = (min((!var_7), (((arr_25 [i_7] [i_7] [i_7]) <= var_6))));
    }
    #pragma endscop
}
