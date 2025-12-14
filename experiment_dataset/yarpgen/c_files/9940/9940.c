/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_11));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 |= (((!(var_8 * 1))));

                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        arr_13 [i_0] [i_3] [i_2] [i_3] = ((25011 ? ((((arr_8 [i_0] [i_1] [i_2] [i_3]) ? ((((!(arr_9 [i_0]))))) : (arr_10 [i_0] [i_1 + 1] [i_0 - 1] [8])))) : (arr_4 [i_0 - 1] [i_0 - 2] [i_2])));
                        var_14 = var_10;
                        var_15 = (min(((((45967 ^ var_11) >= 37777))), (max(0, (1125899906842623 || 253)))));
                    }
                    var_16 = (max(((((arr_1 [i_0 - 1]) == (arr_9 [i_0 - 1])))), (max((min((arr_2 [i_0]), 801001072)), -255))));
                }
            }
        }
    }
    #pragma endscop
}
