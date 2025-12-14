/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = -65535;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 = (1 * 32640);
                    var_18 *= (((var_14 + var_0) * var_7));
                    arr_9 [i_0] [i_1] [18] = (arr_6 [i_0] [i_0] [i_0 - 2]);
                    arr_10 [i_0] [i_1] [i_2] [i_2] = var_8;
                }
            }
        }
        var_19 = (((((var_4 >> (var_10 + 54)))) ? var_2 : (var_11 < var_6)));
    }
    var_20 = (max(var_20, -88));
    var_21 += ((((max(var_0, (1 % 167)))) ? (97 == var_15) : ((((min(var_5, var_1))) ? var_7 : (var_5 && var_8)))));
    var_22 -= (min(((min(var_6, var_5))), var_11));
    var_23 += ((168 ? 168 : 1));
    #pragma endscop
}
