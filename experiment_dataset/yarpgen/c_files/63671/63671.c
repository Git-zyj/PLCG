/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((((min(var_8, var_8)) >= (((var_5 ? var_9 : 16482))))))) % ((((var_8 ? var_5 : var_7)) * -var_0))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = ((((var_3 ? var_2 : 25109)) <= (max(103, var_0))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_7 [i_0] = (((~((1 ? var_4 : -31)))));
            arr_8 [i_0] = ((!(!130)));
        }
        var_12 = (min(var_9, (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_3 [i_0] [i_0] [i_0])))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_13 = ((-(arr_10 [i_2] [i_2])));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_14 = var_8;
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_21 [19] [i_3] [i_3] [i_5] [i_5] = 88;
                            var_15 = (arr_19 [i_2] [i_2] [i_5] [i_2] [i_2] [i_2] [i_2]);
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            var_16 ^= ((((((arr_9 [i_7] [i_2]) ? (arr_9 [i_7] [i_2]) : 0))) ? (~237) : ((~(arr_22 [i_2])))));
            var_17 = (((((8191 ? ((var_4 ? var_3 : var_6)) : ((var_10 ? (arr_14 [i_2] [i_7] [i_2] [i_2]) : (arr_19 [i_2] [i_2] [i_7] [i_2] [i_2] [i_2] [i_2])))))) ? ((((arr_14 [i_7] [i_2] [i_2] [i_2]) ? (arr_16 [i_2] [12] [8] [i_2] [8] [i_2]) : var_10))) : 14));
        }
    }
    #pragma endscop
}
