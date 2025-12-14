/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 *= (min((min(4294967295, 1)), 43));
                    var_17 = var_8;
                    var_18 = (((235 << (var_8 + 7412572807424720116))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] = (((arr_11 [i_0]) ? -18077 : (max(var_1, ((max(var_14, var_1)))))));
                                arr_13 [i_0] [i_0] [i_2] [i_3] = (((((~(arr_10 [i_0] [i_1] [i_0] [i_3] [i_4])))) ? (~var_10) : var_15));
                                var_19 -= var_11;
                                var_20 = (arr_6 [i_0] [i_0] [i_2] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (max(var_13, var_10));
    #pragma endscop
}
