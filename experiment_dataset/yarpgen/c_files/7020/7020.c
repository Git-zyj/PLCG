/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= -5501;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = (-(max((((5500 ? 5501 : 622372020332253617))), (arr_9 [i_2] [i_3] [i_2] [i_1] [i_2]))));
                                var_13 = (((((((min((arr_10 [i_2]), var_10))) ? var_7 : (((((arr_1 [i_0] [i_0]) && -441238967))))))) ? (max((arr_12 [i_4] [i_3] [11] [i_0]), -622372020332253604)) : ((((arr_3 [i_1] [i_2]) ? (arr_11 [i_4] [i_2]) : (!var_2))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_14 = ((((((max((arr_5 [i_5] [i_2]), var_6)) + (((arr_11 [i_2] [i_2]) + 622372020332253609))))) ? (((((32027 / (arr_13 [i_2] [9] [i_5])))))) : (max(0, (((arr_15 [i_0] [i_1] [i_0] [i_6]) ? 179510081 : (arr_5 [i_1] [i_6 - 1])))))));
                                var_15 = (((!var_0) - 1325886004));
                                arr_19 [i_0] [i_5] [i_2] [i_2] [i_2] = (max(-17862, ((24936 % ((max(58, 32765)))))));
                                var_16 = (((arr_11 [i_5] [i_5]) ? (((min((arr_8 [i_0] [i_0] [i_0] [i_5] [i_6 - 1]), (arr_8 [i_0] [i_1] [i_0] [2] [i_6 + 2]))))) : (arr_9 [i_6 + 2] [i_1] [i_2] [i_5] [i_5])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
