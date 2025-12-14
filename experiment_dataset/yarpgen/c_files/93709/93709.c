/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((((var_10 ? var_3 : var_0))) ? -var_1 : ((var_10 ? var_6 : var_0))))) || ((((((var_8 ? var_8 : var_10))) ? ((var_1 ? var_1 : var_7)) : var_9)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = ((((((var_10 ? var_3 : var_5)) > ((var_9 ? var_6 : var_4)))) ? (((var_3 || var_0) ? (var_9 / var_11) : ((var_7 ? var_9 : var_2)))) : ((var_4 | ((var_5 ? var_2 : var_6))))));
        var_14 = ((((((var_0 ? 8191 : 1340195706)) - var_2)) >= ((var_11 ? ((var_2 ? var_1 : var_8)) : (((var_10 ? var_3 : var_3)))))));
        var_15 = (((((((((-117690611 + 2147483647) << (714929046 - 714929046)))) ? 1742694854 : (!2113086654)))) / (((((var_3 ? var_1 : var_0))) ? ((-117690602 ? 3252368801 : 249)) : var_6))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_16 = (((((((var_2 ? var_10 : var_7))) ? ((var_4 ? var_6 : var_7)) : (((var_0 ? var_4 : var_6)))))) ? ((((!var_4) ? ((var_6 ? var_1 : var_10)) : ((var_5 ? var_3 : var_10))))) : (((var_7 && var_1) ? var_11 : ((var_6 ? var_7 : var_4)))));
                        var_17 = ((((((((var_10 ? var_0 : var_0))) ? ((var_9 ? var_6 : var_3)) : (var_11 < var_10)))) ? (((!var_7) ? ((var_5 ? var_10 : var_4)) : ((var_1 ? var_2 : var_10)))) : ((~((var_0 ? var_3 : var_10))))));
                    }
                }
            }
        }
        var_18 = ((var_6 ? (((((var_6 ? var_10 : var_3))) ? ((var_10 ? var_10 : var_4)) : ((var_9 ? var_8 : var_5)))) : (((((var_0 >> (var_8 - 916985506)))) ? ((var_1 ? var_8 : var_4)) : var_5))));
    }
    for (int i_5 = 2; i_5 < 14;i_5 += 1)
    {
        arr_20 [i_5 - 2] [i_5] = var_9;
        var_19 ^= ((((-((var_8 ? var_5 : var_9))))) ? var_5 : ((117690611 ? 120 : 128)));
    }
    #pragma endscop
}
