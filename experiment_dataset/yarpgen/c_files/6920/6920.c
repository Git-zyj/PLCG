/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (~var_7);
        var_19 |= ((max(var_8, var_7)));
        var_20 = ((min(85, -121)));
        var_21 = -8192;
        var_22 = min(((((arr_1 [i_0]) > var_5))), (arr_1 [i_0]));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_23 = ((~(-20 > 3037412667555976178)));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_2] [i_1] [1] = (((146 > 15409331406153575448) ? (0 == -1203784765) : (15409331406153575438 == 3037412667555976186)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_24 *= var_6;
                                var_25 |= ((-1203784765 ? 3037412667555976178 : (((max(32767, 70))))));
                                arr_17 [i_1] [i_2] [i_2] [i_5] = ((~((((var_12 >> (var_16 + 67))) ^ (~2147483647)))));
                            }
                        }
                    }
                }
            }
        }
        var_26 = (((~var_3) != (max((~192), 958699094691837636))));
    }
    var_27 = (((((1166467899 - var_1) * (!var_1))) == (min(var_1, 220704435))));
    #pragma endscop
}
