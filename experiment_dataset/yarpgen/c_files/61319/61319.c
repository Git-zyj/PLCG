/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 = (min((arr_4 [i_0] [i_0]), ((9444 ? 3 : 3))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_15 = (arr_3 [i_4]);
                                var_16 = ((-(max(1, (arr_4 [i_0] [i_1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 -= var_4;
    var_18 = 1;
    var_19 = (max(var_19, var_8));
    var_20 = (((((1 ? var_7 : (((min(var_4, var_6))))))) ? (((!7340032) ? ((max(4294967293, var_6))) : var_2)) : ((((((33 << (var_12 - 1951634530)))) ? ((var_8 ? -37 : var_5)) : ((min(18558, -49))))))));
    #pragma endscop
}
