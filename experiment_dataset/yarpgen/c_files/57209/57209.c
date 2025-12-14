/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((~2013265920) && ((min(var_13, var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [6] = (min((max(((max(var_7, 65535))), 9407480081550187946)), 63));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_13 [i_3] [i_0] [0] [i_1] [i_0] [i_0] = ((var_0 << (((~-71) - 69))));
                            var_15 = (~((28 ? 6262808011403144925 : -1)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
