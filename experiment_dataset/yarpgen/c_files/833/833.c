/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    var_19 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_10 [i_0 + 1] [i_1] = (min(((((21 >= (arr_9 [i_0] [i_1] [11] [i_1] [i_1] [i_3]))) ? var_5 : (min((arr_6 [i_0 - 1] [i_1] [i_2]), -5340100963480307086)))), 1555104688));
                        arr_11 [i_3] [i_2] [i_0] [i_1] [i_0] [i_0 - 1] = (min((((((min(14421158197816442714, 131071))) ? (min(var_4, var_12)) : (arr_3 [i_0 + 1] [i_0 - 1])))), ((var_6 & (min((arr_4 [i_3] [i_1] [i_0]), (arr_1 [11] [i_2])))))));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        arr_14 [i_4] [7] [i_2] [0] = (max(((((arr_5 [7] [i_0]) ? (arr_8 [3] [i_0 - 1] [i_0 + 1] [12] [i_0]) : -346977795))), (((arr_5 [i_0 - 1] [i_0]) / 16517711078623157622))));
                        arr_15 [i_0 + 1] [i_1] [i_2] [i_4] [i_4] [i_4] = 22;
                    }
                    arr_16 [1] [i_1] [i_1] [i_1] = (min((((arr_12 [i_2] [1]) ? (arr_6 [i_0 - 1] [i_1] [i_2]) : 14421158197816442717)), ((max(628213871, (arr_6 [i_0] [i_1 - 1] [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
