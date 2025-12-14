/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1] [i_2] = max((((arr_2 [i_0]) ? (arr_2 [i_1]) : (arr_2 [i_0]))), (((~(arr_6 [i_2] [i_1] [15] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 += ((arr_3 [i_0]) & (max((arr_6 [i_0] [i_1] [i_2] [i_4 - 2]), (arr_3 [i_4 - 4]))));
                                var_18 = (max(var_18, ((((((max((arr_4 [1]), 3350026777475421618)))) & 65521)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_19 = min(65521, (4935032789559183587 * 0));
                                var_20 = (arr_13 [i_0] [i_1] [i_2] [i_6 - 1] [i_6 - 1] [i_6]);
                                var_21 = (max(var_21, ((((3350026777475421597 ? 14430333525019211256 : (-127 - 1))) * (arr_1 [i_0])))));
                                var_22 = (max(var_22, ((max((min((((arr_13 [i_0] [i_1] [i_2] [i_2] [3] [i_1]) ? 5510571289083882 : 52452)), (arr_13 [i_1] [i_2] [i_6 - 3] [i_6] [i_6] [i_6 - 2]))), ((~(((arr_8 [1] [i_2]) + (arr_7 [i_6] [i_1] [i_2] [i_6]))))))))));
                                arr_20 [i_5] [i_5] [i_5] [i_2] [i_5] [7] [i_5 - 1] = (((((((arr_4 [i_0]) ? (arr_2 [18]) : 20))) ? (arr_1 [9]) : ((-(arr_11 [i_0]))))));
                            }
                        }
                    }
                    var_23 = (max(var_23, (((((((~(arr_18 [i_1] [i_1]))))) ? (((arr_11 [i_2]) ? (arr_7 [i_0] [i_0] [i_1] [i_2]) : ((17819423505416973732 % (arr_4 [i_0]))))) : (!13511711284150368028))))));
                    var_24 = (((!(arr_2 [i_0]))) || ((min((arr_13 [i_0] [i_0] [16] [4] [i_0] [i_0]), (max((arr_5 [3] [3]), (arr_16 [i_2] [i_2] [i_0] [i_0])))))));
                }
            }
        }
    }
    var_25 = ((13098 ? 112 : 47));
    var_26 = (max(var_26, var_3));
    #pragma endscop
}
