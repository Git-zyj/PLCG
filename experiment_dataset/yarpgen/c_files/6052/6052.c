/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1529;
    var_12 = -var_8;
    var_13 = 3376867126;
    var_14 = (min((~var_1), ((((min(9223372036854775807, 3376867139)) > 918100182)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 = (1744773357605835077 ^ 0);
                                var_16 = (((min(0, 109))));
                            }
                        }
                    }
                    var_17 = (min((((max(0, -943)))), (0 * 2545977387)));
                    var_18 = ((max(0, (max(-8152718390650372001, 0)))));
                    var_19 = (((max(-22052, -3519))));
                }
            }
        }
    }
    #pragma endscop
}
