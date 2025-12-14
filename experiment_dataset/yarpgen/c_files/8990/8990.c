/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_11));
    var_21 = (max(var_14, 96));
    var_22 -= 94;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_23 = 65427;

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_24 = var_14;
                    var_25 &= var_2;
                    var_26 = (((((max((arr_7 [i_1] [1] [i_1]), 83))) ? (((82 >> (4144489032 - 4144489003)))) : var_10)));
                }
            }
        }
    }
    #pragma endscop
}
