/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_3] [i_2] [13] [i_4] [i_0] = (max((arr_11 [i_4 + 1] [i_3] [i_4 - 1]), (((!(arr_2 [i_4 + 2] [19] [i_1]))))));
                                var_16 = ((-(max((arr_0 [i_3]), (-8156607693930961883 < 20705)))));
                                arr_14 [i_0] [i_3] [i_2] [i_3] [i_4] [0] [2] = 30084;
                                var_17 = ((543082457 <= (~512)));
                                var_18 += (min(((~(min(var_7, (arr_4 [i_1] [i_2] [i_3] [i_4 + 2]))))), ((((min(12, var_13))) ? (min((arr_4 [i_0] [16] [i_3] [i_4]), 4294967292)) : (~1)))));
                            }
                        }
                    }
                    var_19 += ((max(((max(var_5, 545814346))), (min(var_1, 27244)))));
                }
            }
        }
    }
    var_20 = ((max(((var_5 ? var_6 : var_10)), ((max(var_10, 24))))));
    #pragma endscop
}
