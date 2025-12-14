/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [4] [14] [i_0] [i_4] = var_14;
                                arr_13 [i_0] [i_0] [i_2] [i_3] [4] |= (((((max(17427120575218323403, (arr_6 [i_0]))) % ((min(759432753, -759432754))))) - (arr_0 [10])));
                                var_18 = (min(var_18, (arr_8 [i_4] [i_4] [i_4] [i_4] [i_4] [2] [i_4])));
                            }
                        }
                    }
                    var_19 &= (((((((min((arr_2 [i_0] [i_1]), (arr_11 [i_1])))) ? (arr_9 [8] [10] [10] [i_2] [i_2]) : (max((arr_4 [14] [12]), (arr_8 [0] [6] [i_1] [i_1] [i_0] [6] [i_0])))))) ? (min(-1192026078, 3262790526)) : ((max(759432759, -759432735)))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_21 [2] [i_5 + 2] [i_2] [i_1] [2] |= (min((arr_19 [i_0] [8] [i_2] [i_5 - 1] [i_6] [i_5]), ((max((arr_7 [i_0] [i_1] [2] [i_5] [16]), ((4806997772026583555 ? var_0 : 759432751)))))));
                                var_20 = arr_9 [8] [i_5] [i_2] [i_1] [8];
                                arr_22 [3] [i_1] [i_0] [i_5] [i_6 + 2] = var_13;
                                arr_23 [i_0] [i_0] [i_2] [i_0] [i_0] = (((((((arr_10 [i_5 - 1]) / var_12)) * ((((arr_17 [i_0] [i_1] [i_1] [i_2] [i_5] [i_6]) / (arr_7 [i_0] [i_5 + 3] [i_0] [i_1] [i_0])))))) / (((((((arr_20 [i_0] [i_1] [i_2] [1] [i_6]) | (arr_6 [i_2]))) != (arr_17 [i_0] [i_1] [i_2] [i_5 + 3] [i_0] [i_1])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 8;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                {
                    arr_33 [i_7] = arr_6 [14];
                    arr_34 [i_7] [i_8] [i_9] [10] |= ((((min(6798841624870404748, 759432737)) % (((((arr_9 [12] [i_7] [12] [i_9] [i_9]) || var_8)))))));
                }
            }
        }
    }
    #pragma endscop
}
