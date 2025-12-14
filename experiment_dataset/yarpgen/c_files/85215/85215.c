/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 += (((arr_0 [i_0]) ? ((min((arr_0 [i_0]), -11741))) : ((((-9971 + 2147483647) >> (((arr_0 [i_0]) - 153642868)))))));
        var_17 = 1265502908;
        arr_2 [i_0] |= (min(var_14, 3488931255));
        var_18 += (min(((284333045 | (arr_0 [i_0]))), (((~(arr_0 [i_0]))))));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_19 = (((arr_0 [i_1 + 1]) ? var_8 : var_2));
        arr_7 [i_1] [i_1] = (min(((806036025 / (arr_1 [i_1 + 2]))), (arr_5 [i_1 + 3])));
        arr_8 [i_1] [i_1] = (arr_6 [i_1 + 3]);
    }
    var_20 = ((var_13 > (((var_9 ? 32604 : (1 && 4010634251))))));
    var_21 += var_2;
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                var_22 = arr_12 [i_2] [20];
                arr_16 [i_2] [i_2] = (arr_11 [i_2 + 1] [i_2 - 3]);
            }
        }
    }
    #pragma endscop
}
