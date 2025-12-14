/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    var_16 = (!53);
    var_17 = var_8;
    var_18 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 *= (((min(var_8, var_0))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_20 *= max(-53, 1);
                                var_21 = 1461616051756530738;
                                var_22 = var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
