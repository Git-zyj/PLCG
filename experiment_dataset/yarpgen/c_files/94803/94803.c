/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (max((((4625128543776003175 >= 63) ? 65535 : (15931 >= var_9))), ((-((-6471061637482964817 ? 15943 : 49590))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 = ((~((15949 ? ((49593 ? 49588 : -5992802813257634467)) : -6899925456847490040))));
                            var_16 = 49582;
                            arr_10 [i_0] [i_0] [i_2] [i_2] = ((((((((var_8 ? var_8 : 1)) != (var_11 > 5360755158857902695))))) < 786432));
                        }
                    }
                }
                arr_11 [i_0] [0] [i_1] |= (((((~(var_13 ^ var_5)))) ? -var_4 : (var_2 - 1048575)));
                arr_12 [i_0] [i_0] = 49582;
            }
        }
    }
    var_17 = var_9;
    #pragma endscop
}
