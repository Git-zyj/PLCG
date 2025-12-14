/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_10 = (((((((((arr_0 [i_0]) ? (arr_5 [i_0] [i_1] [i_0]) : (arr_3 [i_0] [i_0])))) ? (((arr_3 [i_0] [14]) ? (arr_5 [i_0] [i_1] [i_1]) : (arr_4 [1] [8]))) : (arr_4 [i_1] [i_0])))) ? (((((arr_3 [i_0] [4]) ^ (arr_2 [i_0]))) / ((((arr_6 [1] [i_1] [i_0]) ? (arr_5 [i_0] [i_1 - 1] [i_1]) : (arr_1 [i_0])))))) : ((max(((((arr_1 [i_1]) ? (arr_5 [i_1] [i_0] [i_0]) : (arr_5 [i_0] [i_1] [2])))), (((arr_6 [22] [i_1] [i_1]) - (arr_4 [i_0] [1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [17] [i_2] [i_3] = (((arr_6 [i_0] [i_3] [i_2]) ? ((((min((arr_3 [i_0] [i_0]), (arr_5 [i_3] [i_1] [i_0])))) ? (((arr_6 [7] [i_1 - 3] [7]) | (arr_10 [i_1] [i_2] [i_3]))) : (((arr_0 [i_0]) ? (arr_5 [i_0] [i_2] [i_2]) : (arr_5 [i_0] [i_1] [i_2]))))) : ((min(-85, 7)))));
                            var_11 = (max(var_11, (((((min((arr_0 [i_1]), (arr_3 [8] [i_2 - 3])))) ? (((arr_0 [i_1]) - (((arr_6 [i_0] [i_1 - 1] [i_0]) - (arr_3 [0] [i_1]))))) : ((min((((arr_4 [i_0] [i_2]) ? (arr_1 [i_2]) : (arr_6 [i_1] [i_2] [12]))), (arr_10 [i_0] [i_2] [i_2])))))))));
                        }
                    }
                }
                var_12 = (((arr_0 [10]) ? (-85 < 135) : ((98 ? -98 : 536870911))));
                var_13 &= (((((~((~(arr_7 [i_1 + 4] [i_0])))))) * (arr_8 [i_0] [i_0] [i_1] [6])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 20;i_6 += 1)
            {
                {
                    var_14 = ((((((((arr_13 [i_4]) ? (arr_14 [2]) : (arr_16 [i_6]))) * (arr_15 [i_4 - 1])))) ? (arr_7 [i_4] [i_4]) : (arr_17 [i_4])));
                    var_15 -= (max((((arr_18 [i_4]) | (min((arr_2 [i_4]), (arr_11 [i_4] [i_4] [i_4] [i_4]))))), ((((((arr_8 [i_6] [i_5] [i_4] [i_4 + 1]) > (arr_16 [i_5]))) ? ((((arr_2 [i_6]) == (arr_10 [i_4 + 1] [i_5] [19])))) : (arr_18 [5]))))));
                }
            }
        }
    }
    var_16 = (((((var_2 ? var_0 : var_9)))) ^ -var_1);
    var_17 = (max(var_17, ((min((((((var_2 ? var_5 : var_6))) ? (var_8 | var_6) : (var_9 | var_4))), ((((((var_9 ? var_2 : var_3))) ? var_6 : ((var_1 ? var_6 : var_4))))))))));
    var_18 = var_9;
    #pragma endscop
}
