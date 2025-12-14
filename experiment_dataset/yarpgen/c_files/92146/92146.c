/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_14 = (max((arr_2 [i_0 - 1]), (((arr_0 [i_0 - 2] [i_0]) ? (arr_2 [i_0]) : (min(1110118059, (arr_2 [i_0])))))));
        arr_3 [i_0] = var_7;
        var_15 = (max(((~(!var_6))), (arr_1 [11])));
        var_16 = (((min(((1110118059 ? (arr_1 [3]) : (arr_1 [i_0 + 1]))), ((-1110118078 ? -1110118060 : var_2))))) / 3848740316778778199);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 14;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_2] [i_3] [i_3] = -65;
                    var_17 = ((!(((5605051396250967806 ? 1110118052 : var_2)))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_18 -= ((((((~0) ? var_12 : var_10))) ? (~0) : (!1110118075)));
                                var_19 *= (((max(var_4, var_12))) ? (arr_10 [i_4 + 2] [i_2]) : (((arr_11 [i_4 + 1]) ? 31084 : (arr_15 [i_2 - 1] [i_3 - 1] [i_5 + 1] [i_5 - 1] [i_5]))));
                            }
                        }
                    }
                }
            }
        }
        arr_19 [1] [i_1] &= (max((min((arr_11 [i_1]), (arr_11 [i_1]))), ((((arr_5 [i_1]) ? (~-1110118073) : -74)))));
        var_20 = (min(var_20, ((((((((var_9 && (arr_14 [1]))) ? var_3 : (max((arr_9 [i_1]), var_11))))) ? (((((var_3 ? 4323455642275676160 : 16))) ? (min(0, (arr_17 [8]))) : ((((arr_5 [i_1]) ? 32869038 : 1))))) : (((((!1415948578) == (arr_7 [i_1]))))))))));
        arr_20 [i_1] = (min(var_11, ((max(1, 4294967295)))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] = (((var_1 ^ 14) ? (arr_5 [i_6]) : ((var_1 ? 1 : var_10))));
        var_21 &= var_4;
        var_22 = (min(var_22, (arr_9 [i_6])));
        arr_24 [i_6] [i_6] = (((arr_17 [i_6]) ? 58 : var_1));
    }
    #pragma endscop
}
