/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((12614 < (((2056863429 > var_1) ? (((-1622565614 + 2147483647) << (12597 - 12597))) : 12614))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_1] = (((((65535 ? (-2147483647 - 1) : 65521))) ? -1039795378 : -917192726));
                                arr_16 [i_1] [i_1] = (2990 ? 52921 : 1039795378);
                            }
                        }
                    }
                    arr_17 [i_0 + 1] [0] [i_1] [i_1] = -889063078;
                }
                for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
                {
                    arr_20 [i_1] [i_0 - 4] [4] [i_0] = (-(arr_0 [i_0] [i_0]));
                    arr_21 [i_1] [3] = (max(12606, 0));
                }
                var_18 = ((52915 ? (((arr_18 [i_0 - 2]) ? -1039795384 : 12621)) : -1185953670));
            }
        }
    }
    var_19 = -116305472;
    #pragma endscop
}
