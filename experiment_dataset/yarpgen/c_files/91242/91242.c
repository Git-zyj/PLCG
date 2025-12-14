/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((var_2 || (var_7 <= var_14)));
        var_17 = ((min((min(var_2, var_12)), (((var_10 ? var_11 : var_4))))) > ((max((var_3 > var_8), (~var_6)))));
        var_18 -= ((((~var_12) ? var_4 : (251 || 11535363609488090682))) % var_9);
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_3] [i_3] [i_3] = (min(((((min(88, var_14)) << (var_4 >= var_12)))), (min((~var_16), var_7))));
                        var_19 *= var_12;
                        var_20 = var_7;
                        var_21 = ((var_12 ? (~1) : (min((var_2 / var_3), (var_16 || var_4)))));
                    }
                }
            }
        }
        var_22 = (((((var_7 ? (((var_4 ? var_9 : var_13))) : 0))) + (((max(var_15, var_5)) + (((min(var_6, var_16))))))));
    }
    var_23 = var_4;
    var_24 = (((!var_7) & (((max(var_3, var_7)) % (((var_9 ? var_15 : var_2)))))));
    var_25 = ((var_4 ? -11535363609488090682 : ((min((max(var_0, var_11)), ((var_3 ? var_4 : var_16)))))));
    #pragma endscop
}
