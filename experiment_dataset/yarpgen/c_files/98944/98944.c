/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [8] [8] [i_1] = (min(((var_12 ? -0 : ((var_0 ? 54900 : var_10)))), (max(var_8, (min(var_0, var_17))))));
                var_19 = (~23192);
                var_20 = 3360994433075482423;
                arr_7 [i_1] = var_1;
                arr_8 [i_0] [i_0] [i_1 - 1] = ((((!var_3) != var_11)));
            }
        }
    }
    var_21 = (((!var_14) > ((min(var_9, var_18)))));
    var_22 = var_0;
    var_23 = (((!-var_9) ? (((((var_5 ? var_9 : var_13))) ? (~84) : (14171353489895875945 ^ var_13))) : ((((var_4 || 0) ? ((14171353489895875945 ? 2701758889 : var_1)) : 223)))));
    #pragma endscop
}
