/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 ^= -1;
                    arr_7 [i_2] [8] [i_0 - 1] [i_0 - 2] = 0;
                    var_17 = -126;

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        var_18 |= 14640450906826061024;
                        var_19 = (min(var_19, ((~(!2)))));
                        var_20 = -1045004406;
                        arr_10 [i_2] [i_3] [i_0 - 1] = -13902;
                        arr_11 [i_3] = ((~(~0)));
                    }
                    var_21 = (~65526);
                }
            }
        }
    }
    var_22 += var_14;
    #pragma endscop
}
