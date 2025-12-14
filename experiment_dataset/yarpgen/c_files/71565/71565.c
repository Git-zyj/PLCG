/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_21 = ((((max(46730, ((12 ? 2241 : -32767))))) ? 234 : (((!(((127 ? 211 : 74))))))));
                                var_22 *= (((((((15 ? 26 : 2744))) ? ((min(-8028, 62893))) : ((max(31, 32760))))) % ((((max(255, 31))) ? -9 : 20076))));
                                arr_17 [6] [i_0] [6] [6] [i_3] [i_4] [i_4] = min((((!-31) ? -80 : (((27581 ? 62795 : 46615))))), ((((15 ? 234 : -32767)))));
                                var_23 &= 13;
                                arr_18 [i_0] [i_1] [i_1] = (-32767 - 28);
                            }
                        }
                    }
                }
                arr_19 [i_0] = (((-32767 - 1) ? (~3189320496) : (((65535 ? -23763 : 2744)))));
                arr_20 [i_0] [i_1 - 1] = ((((max(-32762, 1))) ? ((2203 ? 65535 : -1)) : 32757));
            }
        }
    }
    var_24 = (!var_16);
    #pragma endscop
}
