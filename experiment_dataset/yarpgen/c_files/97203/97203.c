/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_3 [2] |= (((~(var_8 & var_2))));
        var_16 |= (min(((max((arr_1 [10] [10]), (arr_2 [i_0 + 1] [i_0 + 2])))), 2828652129));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [1] [i_2 + 3] |= -52;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 |= ((9361456916128746039 & (((~((min(52195, -73))))))));
                                var_18 |= 13510798882111488;
                                var_19 |= ((((min((arr_14 [14] [i_4 - 1] [i_4 - 1] [i_4] [i_4 + 1] [i_4 - 1] [i_4 - 1]), (arr_14 [i_4 - 1] [i_4 + 1] [i_4 - 1] [1] [i_4 + 1] [i_4 - 1] [i_4 - 1])))) ? 2828652129 : (((((21500 ? 1 : 66493290341899552))) - ((3582317973 ? var_9 : 2613983701))))));
                                var_20 = (min(var_20, (arr_1 [2] [6])));
                            }
                        }
                    }
                }
            }
        }
        var_21 |= ((((max(var_10, (arr_2 [i_0 - 1] [i_0 + 2])))) ? (min((arr_2 [1] [i_0 + 1]), var_7)) : (((arr_2 [i_0] [i_0 - 1]) ? 4543 : (arr_2 [i_0 - 1] [i_0 + 2])))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    arr_21 [i_5] |= 4;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_22 = (max(var_22, ((((arr_0 [15]) & (((((max(4366819164070224025, 7969232568687927534))) ? 1 : 24216))))))));
                                var_23 |= (((((((arr_5 [i_5]) ? var_13 : var_10))) ? (((arr_7 [2] [19] [i_7]) ? 9085287157580805577 : 19)) : var_0)));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        arr_29 [22] |= ((+(((arr_28 [i_9] [i_9]) & var_0))));
        var_24 |= (min((max(((var_4 & (arr_28 [i_9] [i_9]))), (arr_27 [17]))), ((((((max((arr_26 [i_9]), (arr_26 [i_9]))))) & 14641615517490600135)))));
    }
    var_25 |= var_12;
    #pragma endscop
}
