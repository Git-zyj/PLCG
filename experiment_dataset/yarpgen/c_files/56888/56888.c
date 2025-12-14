/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (-var_9 ? -var_4 : var_8);
    var_13 = (min(var_13, (((var_2 ^ ((1424626870 ? (~5705668765135009277) : 36703)))))));
    var_14 += (((((~var_10) == (~-983899716))) || (((8711168377728132074 ? var_3 : var_8)))));
    var_15 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = (min(var_5, (((-3110180730549160060 / var_3) * ((((arr_3 [i_0] [i_1] [10]) ? var_8 : -96)))))));
                    var_17 -= ((70 ^ (((17 || (arr_6 [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_18 *= (((var_3 - var_8) < (((var_7 == (((var_3 ? var_4 : 3658522753))))))));
                                var_19 = (((357868464 == -36698) == 481036337152));
                                var_20 |= var_5;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
