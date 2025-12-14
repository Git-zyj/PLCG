/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] = (((arr_0 [i_0]) != ((min(((((arr_14 [i_1] [14] [i_3]) != -4237088725916907202))), (max((arr_3 [i_3]), 220733119)))))));
                                var_11 += var_3;
                                var_12 = (max((((var_0 >= (((arr_2 [i_3]) ? (arr_0 [i_0]) : (arr_4 [i_4 + 1])))))), ((((-5618349711023610598 ? 0 : var_9)) & 438381537))));
                                var_13 ^= ((((max((((!(arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4])))), ((4294967293 / (arr_14 [i_0] [11] [i_0])))))) ? (arr_1 [i_0]) : var_6));
                            }
                        }
                    }
                    var_14 *= (max((arr_3 [i_1]), -2714755579562135387));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_5] [i_2] [i_5] [i_6] = (max((((((max(250, (arr_11 [i_1] [i_1] [4])))) != (max(var_2, (arr_17 [9] [i_2] [i_5] [9])))))), (arr_1 [i_2])));
                                arr_23 [i_6] = ((((max(var_6, (max((arr_6 [18]), (arr_1 [i_1])))))) ? ((((var_8 ? 36 : (arr_3 [12]))))) : (max((((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [8]) ^ var_1)), (max((arr_13 [i_2] [i_0] [i_5] [3] [i_0] [i_6] [i_0]), 1136369837))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (max(var_15, var_9));
    #pragma endscop
}
