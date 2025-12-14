/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_13 = -1202219013859964270;
                            var_14 = (max(var_14, (((((((((arr_3 [i_0] [18]) / (arr_7 [i_0] [i_1 - 2] [i_3]))) >> (313921214 - 313921205)))) ? ((((!(arr_4 [i_1 - 1] [i_1] [i_1 + 1]))))) : (((arr_7 [i_1] [i_1 - 2] [i_1 - 2]) ? (min((arr_7 [i_0] [i_1] [i_3]), 2538782041716157654)) : (((arr_1 [i_0]) ? (arr_8 [i_0] [3] [4] [20]) : 632118513000639073)))))))));
                            arr_10 [i_2] [i_1] [i_1] [i_1] [3] [i_1] = ((-var_9 ? (~1202219013859964278) : (((min(1202219013859964278, (arr_7 [i_0] [7] [18]))) / 1202219013859964295))));
                        }
                    }
                }
                arr_11 [16] |= (((var_11 < (min((arr_8 [2] [2] [2] [i_1]), (arr_9 [i_0] [2] [16]))))));
                var_15 = ((1202219013859964286 <= (((arr_4 [i_1 + 1] [i_1] [i_1 - 1]) ? (~1202219013859964270) : 2147483647))));
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_16 &= (13793 | 3065949767300459479);
                            arr_17 [i_0] [i_0] [11] [12] [12] [i_1] = (max((max(6375134320590325060, -1202219013859964247)), ((min(18824, 12)))));
                        }
                    }
                }
            }
        }
    }
    var_17 = var_9;
    var_18 -= (-(min(1202219013859964283, (max(var_5, var_5)))));
    #pragma endscop
}
