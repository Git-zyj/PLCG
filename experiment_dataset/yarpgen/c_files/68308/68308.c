/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = var_0;
    var_15 = ((((((((161 ? 7175733398788370669 : 19360))) ? var_7 : (((var_11 ? var_5 : var_6)))))) ? var_10 : (((var_0 ? ((var_3 ? var_5 : var_12)) : (((95 ? 92 : -1568380388))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_16 *= (((((var_12 ? var_1 : var_2))) ? ((var_3 ? var_1 : var_3)) : ((var_2 ? var_12 : var_3))));
        var_17 += var_12;
        var_18 = ((var_0 ? ((var_8 ? var_9 : var_6)) : (((var_12 ? var_2 : var_5)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_2] = ((var_10 ? ((var_4 ? var_8 : var_10)) : ((var_1 ? var_7 : var_11))));
                    arr_11 [i_1] [11] [i_1] = ((var_0 ? ((var_7 ? var_5 : var_6)) : var_5));
                    var_19 = (((((var_12 ? var_9 : var_9))) ? var_7 : var_9));
                }
            }
        }
        var_20 = (min(var_20, var_12));
        arr_12 [i_1] = (((((var_8 ? var_10 : var_4))) ? ((var_7 ? var_2 : var_8)) : var_5));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_21 = var_2;
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    var_22 = var_2;
                    var_23 = ((((((((var_11 ? var_11 : var_3))) ? var_6 : ((var_11 ? var_3 : var_12))))) ? ((((((var_2 ? var_8 : var_5))) ? var_2 : ((var_4 ? var_6 : var_0))))) : (((((var_9 ? var_11 : var_5))) ? ((var_9 ? var_9 : var_9)) : (((var_10 ? var_7 : var_4)))))));
                    var_24 = ((((((((163 ? 0 : var_11))) ? var_2 : ((var_9 ? var_3 : var_6))))) ? (((1568380388 ? 4294967295 : var_1))) : ((var_12 ? var_2 : var_10))));
                    arr_21 [i_4] &= (((((0 ? 0 : var_9))) ? ((((((var_9 ? var_7 : var_9))) ? (((var_3 ? var_12 : var_2))) : ((var_1 ? var_3 : var_5))))) : (((((var_2 ? var_3 : var_10))) ? var_7 : ((var_10 ? var_7 : 161))))));
                    arr_22 [0] [0] [i_6] = var_0;
                }
            }
        }
    }
    #pragma endscop
}
