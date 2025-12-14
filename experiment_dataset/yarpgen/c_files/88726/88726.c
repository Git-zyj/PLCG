/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!-127);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 7;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_13 = (arr_3 [i_1] [i_1]);
                        arr_11 [i_1] [5] [i_2] [i_3] = (min((min((arr_9 [i_0] [9]), -1145812633248840030)), (arr_9 [i_0] [i_1 - 1])));
                    }
                }
            }
        }
        var_14 = (((((160 ? (3857919736339877994 || var_11) : 9409714617521772330))) && ((min(var_10, 9037029456187779288)))));
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 9;i_5 += 1)
            {
                {
                    var_15 |= (((((122 ? 2031554441107536554 : ((((arr_3 [i_0] [2]) ^ 16)))))) ? (((var_0 * 209) ? ((47 ? 0 : var_7)) : (arr_5 [i_0] [i_0]))) : ((min((arr_5 [i_5] [i_0]), var_7)))));
                    var_16 &= (8 << (arr_8 [i_0] [i_4] [i_5]));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_17 = (((-4684117442483686936 ? (arr_2 [i_6]) : (arr_15 [4] [i_6] [i_6] [i_6]))));
        var_18 = 4684117442483686916;
    }
    var_19 = (max(var_19, var_11));
    #pragma endscop
}
