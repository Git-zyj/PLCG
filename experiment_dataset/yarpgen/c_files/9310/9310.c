/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 = var_4;
                    arr_9 [i_0] [i_0] = (min((-1364368735 | 70), (((arr_0 [i_1 + 2] [i_1 + 3]) ? (arr_1 [i_1 - 1] [i_1 + 1]) : (arr_6 [i_1 - 1] [i_1 + 3] [i_1 - 1])))));
                    var_16 = (max((((((arr_0 [6] [i_2]) >= var_11)) && var_4)), ((-863858300 && ((max(32767, -844915898)))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        var_17 = (min((arr_7 [i_0] [i_3] [i_4]), (((var_13 != (arr_15 [i_0]))))));
                        var_18 = arr_19 [i_0] [i_0] [i_4] [i_5] [i_4];
                    }
                }
            }
        }
        var_19 &= (((min((arr_15 [i_0]), (arr_3 [i_0] [i_0] [i_0]))) | ((max(-3791, 127)))));
    }
    var_20 = var_3;
    #pragma endscop
}
