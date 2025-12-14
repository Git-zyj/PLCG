/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 = (max(var_10, 0));
        var_11 = (!((min(3907386371, (~var_4)))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = 19984;
            arr_6 [i_1] [14] [4] = (((!0) << (-var_1 / 9223372036854775804)));
            var_12 = (min((!var_2), ((34719 << (((-25105 + 25124) - 19))))));
            var_13 = var_1;
        }
        var_14 = (max((max((-2147483647 - 1), (max(387580940, 0)))), (~var_9)));
        var_15 = 10337834514358639387;
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_12 [i_3] [i_2] = var_9;
            arr_13 [i_3] [i_2] [i_3] = ((~(((min(var_9, 1)) << (var_2 - 11656719592201842831)))));
            var_16 += (((!25105) && (!2194933353220808575)));
            var_17 = (max(var_5, var_4));
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_18 -= (((~var_2) || (var_6 > 1)));
                            arr_26 [1] [i_2] [17] [i_6] = ((var_6 & (!-var_1)));
                            arr_27 [i_2] [i_2] [i_5] [i_2 + 1] [i_2] [i_4] = (+-2339443652);
                            var_19 = (~(min(var_8, var_9)));
                        }
                        arr_28 [i_2] = 387580924;
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        arr_31 [i_8] = min((var_8 % 387580924), -7526544624999971663);
        var_20 = (min(((((!var_5) > (!var_8)))), 425092258423593477));
        var_21 = ((-((min(var_8, var_8)))));
        arr_32 [i_8] [i_8] = min(-25105, 1612138239);
    }
    var_22 = var_3;
    var_23 = var_2;
    var_24 += -var_4;
    #pragma endscop
}
