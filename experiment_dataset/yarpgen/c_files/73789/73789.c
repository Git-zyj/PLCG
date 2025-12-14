/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (!((min((max(639379043, 639379043)), -29))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (!66);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_18 = (!0);
                            arr_11 [i_0] [i_1] [9] [i_0 - 1] = (min((min(2209216460, 0)), (((-(min(1, 1597601588)))))));

                            for (int i_4 = 2; i_4 < 17;i_4 += 1)
                            {
                                var_19 = var_0;
                                var_20 = (~0);
                                var_21 = (!var_11);
                            }
                            for (int i_5 = 1; i_5 < 18;i_5 += 1)
                            {
                                var_22 = (max(var_22, 66));
                                var_23 = 2823513176;
                            }
                            arr_16 [i_1] = var_1;
                        }
                    }
                }
            }
        }
    }
    var_24 = 1;
    var_25 = (min((min(66, (max(-1951990583, var_2)))), 189));
    #pragma endscop
}
