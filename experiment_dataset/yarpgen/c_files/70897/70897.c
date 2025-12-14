/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 &= var_6;
        var_17 += ((115 ? ((-(~101))) : (!var_9)));
        arr_4 [i_0] [i_0] = 227;
    }
    for (int i_1 = 4; i_1 < 19;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_11 [i_1] [i_2] = ((-644532639 ? var_12 : 97));
            var_18 += (var_12 / -644532639);
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_14 [i_1] = ((-6510 ? -6515 : var_2));
            arr_15 [i_1] [i_1 - 1] = (max(((48 ? var_0 : var_15)), (6510 * var_11)));
        }
        var_19 = (((!398) >= ((35 ? 1 : var_11))));
    }
    for (int i_4 = 4; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_20 = ((18592 ? (((((1 ? var_7 : var_7))))) : (((-226827187 * 1) ? var_3 : (((max(1, 1))))))));
        var_21 = (max(var_21, (+-2072150077)));
    }
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        arr_21 [0] &= ((((((var_7 ? 13839 : var_0))) ? -6510 : -44)));
        arr_22 [i_5] = (((((var_11 ? ((-8486714466527446009 ? var_5 : 1)) : var_6))) ? (((max(1, 1)))) : ((var_5 ? (var_13 || var_10) : var_12))));
    }
    var_22 = var_5;
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 16;i_7 += 1)
        {
            {
                var_23 = -1247985368;
                var_24 += (min((min(var_2, ((var_4 ? -124 : var_10)))), var_1));
                arr_29 [i_6] [i_7] = -var_1;
            }
        }
    }
    #pragma endscop
}
