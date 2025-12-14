/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= ((((((~8) ? 121 : ((216 << (2147483647 - 2147483646)))))) ? (!171) : 0));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((((236 ? 19 : 117))) ? 63 : 3);
        var_17 = (187 >= 393371130);
        var_18 = 14;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (-205 ? -242 : ((112 ? 55 : 242)));
        arr_8 [i_1] = -211080834;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_19 = (max(var_19, (~-28)));
                        var_20 = (-78 ? (109 + 4161536) : ((1447886621 ? 14 : 14)));
                        var_21 = 20;

                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 13;i_5 += 1)
                        {
                            arr_21 [i_1] [i_2] [i_2] [i_1] = (2 / ((14 ? 1064205417 : 122)));
                            var_22 = (!35);
                        }
                    }
                    var_23 = ((-((80 ? ((5 ? 13 : 11)) : 68))));
                    arr_22 [i_2] [i_2] = (((!232) ? ((31 ? 14 : 100)) : (!102)));
                }
            }
        }
    }
    #pragma endscop
}
