/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (5387151152919274015 * 1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2] = (((min(((1832683625 ? 1 : var_9)), var_1)) | 1));
                    var_13 = (((5354668081170366985 * var_1) | (((var_1 ? var_11 : var_6)))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (((((1 > var_11) * ((var_11 >> (var_5 - 48))))) != 2862));
                    var_14 = 1;
                }
            }
        }
    }
    var_15 = (!var_7);
    #pragma endscop
}
