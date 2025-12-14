/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((!-6917047310317085882) ? (max(-var_9, var_3)) : var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_15 = ((-(((arr_0 [i_2] [i_1]) ? (arr_0 [i_2] [i_0]) : (arr_9 [i_0] [i_1] [i_0])))));
                                arr_16 [i_0] [7] [i_2] [i_2] [i_1] [12] [i_4] = (((((arr_12 [i_1] [i_3] [i_3 + 2] [i_1]) ? (arr_12 [i_1] [i_1 + 2] [i_3 + 2] [i_1]) : (arr_12 [i_1] [i_1 + 2] [i_3 + 2] [i_1]))) | (arr_12 [i_1] [i_3] [i_3 + 2] [i_1])));
                            }
                        }
                    }
                    arr_17 [i_1] [i_1] = (min((~17573), (((arr_12 [i_1] [i_1 - 1] [i_2] [i_1]) & (arr_12 [i_0] [i_1 + 2] [i_1 + 2] [i_1])))));
                    var_16 = (max(((87537251 <= ((0 ? -4153112529409886305 : (-127 - 1))))), ((((87537251 ^ (-127 - 1))) == (!87537241)))));
                }
            }
        }
    }
    var_17 = (min(var_17, (max((min((1 && var_6), (~-102))), (!-var_2)))));
    var_18 &= ((87 ? (!-87537257) : ((-(min(7765395891646617626, 706836662))))));
    #pragma endscop
}
