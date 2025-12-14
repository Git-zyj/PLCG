/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((max(-101, var_13))) ? ((-((var_4 ? var_8 : -30)))) : var_0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 = (~var_7);
        var_17 = ((((var_12 % (arr_0 [i_0])))) ? 16539854029963943228 : -124);
        arr_2 [i_0] [0] = var_5;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_10 [i_1] [i_1 + 2] = (~4294967290);
                        var_18 -= var_8;
                        var_19 = var_1;
                    }
                }
            }
        }
    }
    var_20 = -var_7;
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            {
                var_21 -= 118;
                arr_15 [i_4] [i_4] = var_13;
            }
        }
    }
    #pragma endscop
}
