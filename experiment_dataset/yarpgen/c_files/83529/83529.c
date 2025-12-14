/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((32763 > 92) ? ((((max(-1, var_4))) ? ((var_8 ? 967720685215239196 : var_3)) : var_7)) : var_7))));
    var_17 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((0 ? 4067191496 : 967720685215239174));
                arr_6 [i_0] [i_0] [i_0] = -var_13;

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_18 ^= (var_4 ? var_11 : ((((((arr_2 [2]) ? (arr_3 [1] [1] [1]) : var_12))) ? (~var_8) : (((arr_7 [i_0] [i_0] [0] [i_0]) ? 1159487870075797741 : var_14)))));
                    var_19 = (min(var_19, 243));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    arr_11 [i_0] [i_0] [i_1] [i_0] = (((arr_4 [18] [i_3 + 2] [18]) ? -28 : ((14130649651147090473 ? 0 : 52659))));
                    var_20 = (((arr_7 [i_3 + 1] [i_3 + 1] [i_0] [i_3 - 1]) % 4624));
                    var_21 ^= (((((var_9 ? var_12 : 0))) ? (arr_8 [i_3 - 1]) : (((-1159487870075797752 + 9223372036854775807) << (((-18 + 71) - 53))))));
                }
            }
        }
    }
    #pragma endscop
}
