/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    var_13 = ((((((var_9 ? var_3 : 252)) - ((9771476251509088132 ? var_3 : var_3)))) != var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_0] = (min(10853080198268962174, var_11));
                    var_14 = ((106 >> (-var_3 + 32560)));
                    arr_11 [i_0] [i_1] [i_0] = (((((-var_2 ? 252 : 15))) ? -70 : var_11));
                    var_15 ^= 38443;

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_16 = var_5;
                        arr_15 [i_0] [i_2] = (((~var_1) - (!var_11)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
