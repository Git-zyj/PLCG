/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(-66, ((((min(var_4, -30584))) ? (var_7 & 412885488) : 112))));
        arr_3 [i_0] = (-16221 ^ -114);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_10 = (min(var_10, ((((((min((-9223372036854775807 - 1), -97))) || (130816 && 2949290666627269840)))))));
                    var_11 ^= (max(-8, (~10112)));
                    arr_9 [i_0] [7] [i_1] [i_0] = ((((min(10088, var_6))) && ((min(13633, 30703)))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] = ((!(763727282 && 1641163054)));
                                var_12 = (max(var_12, (-var_9 & -13446)));
                                arr_17 [i_0] [i_0] [i_2 + 1] [i_0] [11] = (((((3435860714 ? 13023 : var_2))) ? var_8 : (var_8 > 8843689178258105993)));
                                arr_18 [i_0] [i_1] [i_2 - 1] [i_3 - 2] [i_0] [i_0] = (((min(255, -58))) ? (((~((-5211936725054982187 ? var_1 : 31))))) : (max(var_7, 3435860714)));
                            }
                        }
                    }
                    arr_19 [i_0] [5] [i_1] [i_0] = (min((max(var_5, 9223372036854775807)), (~34359738367)));
                }
            }
        }
    }
    var_13 = (max(var_13, var_4));
    #pragma endscop
}
