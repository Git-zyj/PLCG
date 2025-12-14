/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((~((max(167, 1566))))), 35776));
    var_11 = (min(15603509900042576737, -4053151354018319024));
    var_12 = (min(29760, 27705));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_1] = ((-27716 ? 8097850046647699354 : (arr_6 [i_0] [i_1])));
                arr_8 [i_0] [i_1] [i_1] = (arr_0 [i_0] [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_19 [i_4] [12] [i_1] [i_1] [11] [11] = ((-((((min(35774, -13401))) ? ((min((arr_6 [i_3] [i_4]), 16171))) : (arr_9 [i_2] [i_1] [i_2] [1])))));
                                arr_20 [i_0] [8] [i_2] [i_3] [i_2] [i_3] = (min((min((arr_11 [i_0] [i_2] [i_2] [i_4]), -792062758854039687)), (((~(arr_2 [i_4]))))));
                                arr_21 [i_0] [10] [i_0] [i_1] = (min(-0, ((min(35776, -16171)))));
                                arr_22 [i_0] [i_1] [i_4] [i_3] = (min((max(-27691, 6266574719826640917)), ((max((arr_2 [i_0]), (arr_3 [i_4] [i_2]))))));
                                arr_23 [i_1] [i_1] [i_1] = (((!((!(arr_18 [i_4] [i_3] [i_2] [i_1] [i_0]))))) ? ((max((arr_18 [i_0] [i_1] [i_2] [3] [i_4]), (arr_18 [i_4] [i_0] [i_0] [i_3] [i_4])))) : -16186);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            {
                arr_29 [i_6] [i_6] [i_5] = (((arr_25 [i_6] [i_5]) == (arr_26 [i_5] [i_5] [i_6 - 1])));
                arr_30 [i_6] = (max((arr_26 [i_5] [i_6 + 1] [i_6 - 1]), (arr_26 [i_6] [i_6 + 1] [i_6 - 1])));
            }
        }
    }
    #pragma endscop
}
