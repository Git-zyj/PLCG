/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = (min(((-1706618779387296113 ? -15 : 44)), (min(183, ((var_7 ? 30720 : 1))))));
                    arr_8 [i_1] [i_1] [i_1] [i_0] = ((5708234860654015722 ? ((((arr_7 [i_0] [i_1] [i_1] [i_0 - 1]) && (arr_7 [i_0] [i_1] [i_2] [i_0 - 1])))) : ((min(1, 16)))));
                    arr_9 [i_2] [i_1] [i_1] [i_0] = ((~(((221 > (arr_4 [i_1] [7] [i_1]))))));
                    arr_10 [i_1] [i_0] [i_1] [i_2] = (arr_7 [i_0 - 1] [i_1] [i_1] [i_2]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                {
                    arr_18 [i_5] [i_3] [i_3] [i_3] = 416982644;
                    var_15 = (~166);
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_16 = (min(var_16, (((!(~127))))));
                                var_17 = ((((min(var_0, (min((arr_23 [i_3] [i_4] [9] [i_4] [11]), (arr_13 [i_6] [i_6])))))) ? ((min((arr_12 [i_4]), (((arr_12 [i_3]) ? (arr_17 [3] [3] [i_7]) : (arr_12 [i_3])))))) : (max(2948174393, 3640379066))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                arr_29 [i_3] [i_3] [i_3] [i_3] [i_3] = (max((arr_14 [i_3] [i_3]), var_11));
                                var_18 = (((arr_27 [i_3] [i_4] [i_3] [i_3] [i_9] [i_9]) == (arr_11 [i_3])));
                                var_19 = (min(1, 654588205));
                                var_20 += (max(22, 67));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
