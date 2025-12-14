/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((min((((arr_3 [i_1 - 1] [1] [i_1 + 1]) ? (arr_0 [i_0 + 2]) : (min((arr_3 [i_0] [2] [i_1 + 1]), (arr_0 [i_1 + 1]))))), (arr_2 [i_0 + 1]))))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_15 &= (((((-(arr_4 [i_0] [i_0 - 1] [i_0 - 1] [i_2]))))) ? ((max((((!(arr_2 [i_2])))), ((~(arr_2 [i_1])))))) : ((((((arr_0 [i_0]) ? (arr_3 [i_0] [i_2] [i_0]) : (arr_1 [i_2])))) ? (min((arr_1 [i_0]), (arr_2 [i_0]))) : (arr_5 [i_2] [i_0 + 2] [i_2]))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_16 = (arr_9 [5] [i_2] [2] [i_2] [i_0]);
                                arr_10 [i_0 - 1] [i_0] = ((-(max((arr_7 [i_2] [i_0]), (arr_7 [i_0] [10])))));
                                arr_11 [i_0 + 2] [i_1 + 1] [i_2] [i_3 - 1] [i_0] = 1505930363;
                            }
                        }
                    }
                    var_17 = (arr_2 [i_1]);
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_18 = (((((arr_9 [9] [i_1] [i_5] [i_5] [i_0]) ? (((arr_1 [i_0 - 1]) ? (arr_0 [i_0]) : (arr_5 [i_0] [i_1 + 1] [i_5]))) : (arr_3 [i_0] [i_0] [i_5]))) >> (((!(((~(arr_3 [i_5] [i_0] [i_5])))))))));
                    arr_14 [i_0] = (arr_3 [i_1 - 1] [i_0] [i_1 - 1]);
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_20 [i_0 + 2] [10] [14] [i_5] [i_6] [i_0] [6] = (((max((arr_16 [i_0] [i_1] [i_1] [i_6 + 1]), (arr_16 [i_0] [i_5] [4] [i_6 - 4]))) - (((arr_16 [i_0] [i_0 + 3] [i_0] [i_6 - 4]) ? (arr_16 [i_0] [i_6] [i_6] [i_6 - 1]) : (arr_16 [i_0] [i_5] [i_5] [i_6 - 3])))));
                                var_19 = (min((!-29885), (((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) ? ((-(arr_1 [i_0]))) : (-32767 - 1)))));
                                arr_21 [i_0] [i_0] [i_5] [i_6 + 2] [i_5] = ((((((arr_5 [i_0] [i_6 + 2] [i_7 - 2]) ? -1 : 5507739007104468303))) ? (~5507739007104468303) : ((((((arr_15 [i_0] [i_1] [i_5] [i_6] [i_7] [i_7]) - (arr_16 [i_0] [i_1 + 1] [i_5] [i_6 + 1]))) % (((arr_16 [i_0] [i_5] [i_6] [i_7 - 2]) ? (arr_2 [1]) : (arr_16 [i_0] [i_7 - 3] [i_5] [i_6]))))))));
                            }
                        }
                    }
                }
                var_20 = ((((arr_12 [i_0 + 3] [i_1 - 1] [i_0 - 1]) ? (arr_12 [i_0] [i_1 + 1] [i_0 + 1]) : (arr_3 [i_0] [i_0] [i_0 - 1]))));
            }
        }
    }
    var_21 = ((-(max(((max(111, 409909071))), 6025928342873799200))));
    var_22 = var_4;
    #pragma endscop
}
