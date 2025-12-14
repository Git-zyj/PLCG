/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_11 = ((var_6 & (!30238)));
                                var_12 += (((~1244044695181906466) | (((~((var_5 ? 74 : 0)))))));
                            }
                        }
                    }
                }
                var_13 = 4063232;
            }
        }
    }
    var_14 = ((-0 ? ((min(var_3, 0))) : ((min(var_1, 1284292148)))));
    var_15 = ((~((min(-1, -64)))));
    var_16 ^= ((((max(1244044695181906466, -471) % (((1244044695181906461 ? var_7 : var_6)))))));
    #pragma endscop
}
