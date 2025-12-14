/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = min(46, (max(255, (min(2147483618, 190)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, 2147483613));
                                var_20 = 617769596;
                            }
                        }
                    }
                    var_21 = (max((min(190, 102)), 174));
                    var_22 = (max(var_22, ((min(3801737125, ((min(-64, 1))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_23 = (min(95, (min(178, 19565))));
                                var_24 = (min(7, (max(2062939973, 4373814017188476682))));
                                arr_20 [i_6] [i_5 - 2] [1] [i_1] [4] = 65522;
                                var_25 = 247;
                                var_26 = -1250358329;
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = 100;
    #pragma endscop
}
