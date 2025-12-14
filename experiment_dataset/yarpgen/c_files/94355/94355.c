/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (1 <= var_5);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = 1;
        var_11 *= var_3;
        var_12 = (min(var_12, (!1)));
        arr_4 [i_0] = 98;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_13 = (arr_8 [16] [i_2 - 2]);
                    var_14 = 1;
                }
            }
        }
        arr_12 [i_1] = (max((((arr_8 [i_1] [i_1]) ? (arr_8 [i_1] [i_1]) : 28345)), 98));
        arr_13 [i_1] = ((min(var_8, (arr_5 [i_1]))));
        var_15 = (((16935091357018116702 < 1) - (arr_11 [i_1] [i_1] [i_1])));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        arr_17 [i_4] [i_4] = ((~(arr_15 [i_4])));
        arr_18 [i_4] = (min((arr_6 [i_4]), (((!(arr_6 [i_4]))))));
        arr_19 [i_4] = var_3;
    }
    var_16 = var_5;
    #pragma endscop
}
