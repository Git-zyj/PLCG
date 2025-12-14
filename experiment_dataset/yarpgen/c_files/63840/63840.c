/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 = ((((max(-30590, (arr_8 [i_0 - 1] [i_0 - 1] [i_1 - 2])))) && (arr_3 [i_0 - 2] [i_0 + 2])));
                    var_15 = ((+(min((arr_5 [i_1 - 2] [i_1]), (arr_5 [i_1 + 1] [i_1])))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    var_16 = (min(var_16, ((((((((min(-2, (arr_13 [2] [2])))) ? (arr_3 [i_3] [15]) : (arr_3 [10] [i_4])))) && ((((arr_12 [1] [5] [i_5]) ? (max((arr_1 [i_3] [i_3]), var_11)) : 2207))))))));
                    arr_17 [i_5] [i_4] [i_3] = (var_7 ? ((((arr_1 [5] [i_4]) ? (~-4) : (7246162658734210776 % -2207)))) : var_7);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 21;i_8 += 1)
            {
                {
                    var_17 = (((arr_20 [i_6 - 1] [i_7] [i_8 - 1]) ? (arr_18 [i_8 + 1]) : ((max(-16, 2207)))));
                    arr_24 [i_6] [0] [i_8] [11] = (max(1, var_11));
                }
            }
        }
    }
    var_18 = 15627;
    #pragma endscop
}
