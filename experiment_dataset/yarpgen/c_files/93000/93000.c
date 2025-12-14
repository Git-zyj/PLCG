/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = ((((min(127, 127))) ? ((min(-39, 39))) : ((min(244, 39)))));
                    var_11 = (min((max(-127, -31328474)), ((min(83, 208)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                var_12 = (max(3599940375, (max(0, 695026920))));

                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_13 = (min(var_13, 1));
                    arr_15 [i_3] [i_5] [i_5] = min((max(15784782657202948203, 90)), ((min(81939506, -15282))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_14 = (max(1916703512, (max(7092559184161431942, 39))));
                                var_15 -= ((((min((min(0, -131)), 56))) ? ((((min(-7092559184161431956, 1))) ? (max(1090897304, 208)) : (((max(1, 196)))))) : (min(((min(157, (-127 - 1)))), (min(0, -1543087193))))));
                                var_16 = (max(((max((min(0, 0)), 1))), (max(35, 0))));
                                var_17 -= 39;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_18 = (max(var_18, 231));
                                arr_27 [13] [i_5] [i_5] [i_5] [i_9] = (max(((min(-89, ((-39 ? 1 : 0))))), (max((((208 ? (-127 - 1) : 211))), 0))));
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                {
                    var_19 = (max(var_19, ((max((((208 ? -13271 : -39))), (min(-13630, 8796566628616049975)))))));
                    var_20 = -20;
                    var_21 = (max(var_21, 235));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
                {
                    arr_34 [i_3] [i_3] [i_11] = 0;
                    var_22 = 48;
                }
            }
        }
    }
    var_23 = (min(var_3, -268435456));
    var_24 = min(var_1, (min(((208 ? -32 : 274957193)), ((min(0, 160))))));
    #pragma endscop
}
