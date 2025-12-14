/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = 4294967271;
                var_20 = -3926;
                var_21 = -110;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_22 = ((((max(4294967271, 4195361083))) || 32));
                arr_9 [i_2] = (max(40011, 99606212));
                var_23 *= min((128 < 16357962965312578567), (min(99606194, 4294967262)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_24 = (max(var_24, ((min((max((max(-120, 4294967263)), (min(-101, 21)))), ((max(((min(0, 118))), 39489))))))));
                            arr_15 [i_2 + 1] [i_2] [i_4] [i_5] = max(1, (max(-5525649230381263577, 4294967269)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
