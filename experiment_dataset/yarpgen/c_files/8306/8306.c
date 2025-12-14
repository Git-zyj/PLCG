/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_11 = (((arr_4 [i_0 + 1]) ? ((((((arr_0 [i_2]) && (arr_4 [i_1])))) ^ ((max(var_10, (arr_4 [i_0 + 3])))))) : (((!(var_1 || var_2))))));
                    arr_10 [i_2] [i_2] = (arr_7 [i_1] [i_1]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_22 [i_3] [i_3] [i_3] [i_4] [i_4] [i_6] [i_7] = ((67553994410557440 ? -208754787 : -208754787));
                                var_12 = (min(var_12, -208754787));
                                var_13 = var_6;
                                arr_23 [i_7] = 65531;
                            }
                        }
                    }
                    var_14 = (max(var_14, (((((((!(arr_14 [i_3 - 1] [i_3 + 1]))))) < (max(2305843004918726656, (-127 - 1))))))));
                    arr_24 [i_3] [i_5 - 1] = ((var_10 ^ ((((max((-127 - 1), var_7))) & var_10))));
                    var_15 = (((var_6 * 0) / (min((arr_1 [i_3]), (max(23, 16140901068790824957))))));
                    arr_25 [i_3] [i_4] [i_4] = max(((-208754786 ? 18281675766131756275 : 60)), (((1 << (((arr_5 [i_3 - 1] [i_5 - 1]) - 1658747233))))));
                }
            }
        }
    }
    var_16 = var_5;
    #pragma endscop
}
