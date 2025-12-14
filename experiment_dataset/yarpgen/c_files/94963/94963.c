/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        {
                            var_19 = (-2147483645 || -2147483645);
                            var_20 = (3623036314719385002 % (1 * 14823707758990166617));
                            var_21 = min(0, (1688223463 <= 3623036314719385029));
                        }
                    }
                }
                var_22 = (3552515538198359244 + 1);
                var_23 = (((14823707758990166587 | (-2147483647 - 1))));

                for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                {
                    var_24 = ((min(3623036314719384980, 0)));

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_25 = (((1 * 3552515538198359236) / ((min(14823707758990166614, (-127 - 1))))));
                        arr_15 [i_1] [i_1] = ((23276 + ((min(2342209738, 0)))));
                        var_26 = (min((1 * 0), -2147483645));
                    }
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        var_27 = (((1 | 14823707758990166634) & 14823707758990166613));
                        arr_18 [i_0] [i_1] [i_4] = 2296194032;
                    }
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                {
                    arr_21 [i_0] [5] [i_1] = ((min(-6152526897436014865, 0)));
                    var_28 = ((-2147483647 - 1) - (-2147483647 - 1));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                {
                    var_29 = -2147483625;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                var_30 = 265746038;
                                var_31 = 57901;
                                var_32 = -75;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 0;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            {
                var_33 = ((-6006681931147916310 + (-2147483645 / 1)));
                var_34 = ((1 + (min((min(5986, 14823707758990166634)), 1878665693))));
            }
        }
    }
    #pragma endscop
}
