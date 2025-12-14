/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_6;
    var_19 = ((-(((!(var_10 == 153))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (min(((((min((arr_1 [i_0]), (arr_2 [i_0])))) ? 25800340 : 16820803)), (175793550 != 102)));
                var_20 = (((arr_0 [i_1] [i_0]) <= (min((arr_4 [i_0]), 633742424))));
                var_21 = (((((-(arr_0 [i_0] [i_1])))) && 633742424));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            {
                var_22 += 210;
                var_23 &= (((((arr_7 [i_3 + 2] [i_3 + 2]) < (arr_7 [i_3 + 1] [i_3 + 1]))) ? (max((((var_8 ? (arr_8 [3] [2] [i_2]) : (arr_7 [7] [i_2])))), ((1 ? (arr_10 [i_3 + 1] [9]) : 15594401084071418989)))) : 633742428));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    arr_18 [1] [i_5] [1] [4] &= (arr_1 [1]);
                    var_24 += ((min(var_17, (arr_15 [i_4] [i_5] [i_5] [8]))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                arr_26 [i_4] [0] [1] [i_4] [i_5] [0] = arr_10 [i_6] [10];
                                var_25 = (max(var_25, (((-((18446744073709551615 ? ((max(-633742452, 65526))) : 18446744073709551597)))))));
                            }
                        }
                    }
                    var_26 = 109;
                }
            }
        }
    }
    #pragma endscop
}
