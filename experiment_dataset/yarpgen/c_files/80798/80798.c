/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_17 = -1679811824;
                            var_18 = (27 ? -28 : 1);
                            var_19 = ((75 ? -1723806227 : 329172723));
                        }
                    }
                }
            }
            var_20 = ((1 ? 19666 : -29));
            var_21 = (((1 ? 2265834694 : 11)));
        }
        var_22 = -1723806227;

        for (int i_5 = 4; i_5 < 11;i_5 += 1)
        {
            var_23 = 1;
            var_24 = -791903359;
            var_25 = (max(var_25, (((((min(-1, -173042166))) && ((max(1414167702, 35))))))));
        }
        var_26 += min(((254 ? -28135 : 85)), 26462);
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                var_27 = 1;
                var_28 = (max(((-424947153 ? 11 : 156025338)), 34));
                var_29 = (min(var_29, (((((((-40 ? 1515760499 : 194))) ? -2147483632 : 135207789))))));
            }
        }
    }
    var_30 = (max(-var_6, -var_9));
    #pragma endscop
}
