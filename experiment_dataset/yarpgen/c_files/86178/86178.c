/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= var_9;
    var_14 = var_1;
    var_15 = (((((~((74973591 ? var_9 : var_8))))) ? -24132 : var_0));
    var_16 = (((((max(4294967279, 6483956216757595986)) != (var_7 + 2010676215)))) != (((var_2 && (((2010676215 ? 1 : (-9223372036854775807 - 1))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_17 = -52061;
                            arr_12 [i_0] [i_2] [i_1] [i_0] = 17;
                        }
                    }
                }
                arr_13 [i_0] [i_1 - 1] = (((((((((arr_11 [i_0] [i_0] [i_0] [i_0] [12] [i_0]) <= 2010676217)))) <= var_0)) ? var_0 : 250));
            }
        }
    }
    #pragma endscop
}
