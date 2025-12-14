/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += ((((min(7165001481888198360, -2431))) ? (min(-7165001481888198386, 11179)) : (min(-31608, 7165001481888198377))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, (((((min(1322, var_11))))))));
                    arr_9 [i_0] [i_0 + 2] [i_1] [i_0] = var_1;
                    var_16 = (max(var_16, (((var_10 ? var_12 : 1500)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] = min((((((2431 + (arr_14 [i_4] [i_0] [4] [i_0] [3])))) ? -1 : ((var_2 | (arr_8 [i_0] [i_0] [i_3] [i_0]))))), var_5);
                                var_17 = (max((-7165001481888198409 + -25), ((527 ? ((-21148 ? -115 : -17)) : (((-25 ? 80 : 127)))))));
                            }
                        }
                    }

                    for (int i_5 = 4; i_5 < 16;i_5 += 1)
                    {
                        var_18 -= ((2430 ? 95 : (min(var_9, (arr_11 [i_0])))));
                        var_19 += (arr_6 [i_0] [i_1] [i_2] [i_5]);
                        var_20 *= -2943;
                    }
                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        var_21 *= ((((max((arr_10 [i_2] [i_0 - 1] [i_0 + 1] [i_2]), var_4))) ? ((13666760607277162947 ? 38 : 2914942158)) : (!-81)));
                        var_22 = 1745189419;
                        var_23 -= (min(((-104 ? 116 : 9007199254732800)), ((((((13666760607277162947 ? var_11 : -9007199254732801))) ? var_11 : (min(-20626, (arr_21 [i_2]))))))));
                        var_24 = (max(var_24, (((102 ? 24867 : 9007199254732777)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
