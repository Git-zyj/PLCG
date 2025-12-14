/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 = ((21504 ? ((-1178148308 ? var_3 : (var_4 & 158831471375272958))) : ((min((44028 | 44031), var_6)))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (((21516 ^ (max(268435452, var_6)))));
                                arr_16 [i_1] = ((4398046511103 ? -637377520 : (var_10 & 104)));
                            }
                        }
                    }
                    var_16 = -var_11;
                    var_17 -= ((((max(var_4, var_2))) ? (!var_10) : (max(233, (-2147483647 - 1)))));
                }
            }
        }
    }
    var_18 = 3818988993282815806;
    #pragma endscop
}
