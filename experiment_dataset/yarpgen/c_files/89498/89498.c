/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_11 ^= max((max((((arr_3 [10] [i_0] [i_0]) > (arr_3 [4] [i_0] [i_0]))), (((arr_1 [i_0]) || (arr_0 [i_1] [i_0]))))), (((min((arr_2 [i_1] [i_1]), (arr_3 [6] [i_0] [i_1]))) <= (arr_1 [i_0]))));
                var_12 *= (min(((((max((arr_1 [i_1]), (arr_0 [i_0] [i_1])))) != ((min((arr_1 [i_0]), (arr_0 [i_0] [i_1])))))), (((arr_2 [i_0] [i_0]) > (arr_3 [0] [i_0] [i_0])))));
            }
        }
    }
    var_13 *= (min(var_9, (min((max(var_2, var_10)), ((max(var_4, var_10)))))));
    var_14 -= (max((min(var_2, (min(var_3, var_10)))), (min(((max(var_4, var_9))), (min(var_3, var_6))))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_15 = (max(var_15, ((min(((max((max((arr_4 [i_2 - 1]), (arr_10 [i_2] [i_2] [i_2]))), (min((arr_4 [i_2]), (arr_9 [i_3])))))), (max((arr_4 [i_2]), (max((arr_8 [1]), (arr_4 [i_3]))))))))));
                var_16 -= (((min(((min((arr_8 [10]), (arr_4 [0])))), (max((arr_6 [22]), (arr_7 [i_2] [14] [i_2]))))) >= (((((min((arr_4 [i_2]), (arr_9 [i_2 - 1])))) | (((arr_10 [i_2] [i_2] [1]) & (arr_8 [1]))))))));
                var_17 -= (max((((((((arr_7 [i_3] [2] [i_2 - 1]) != (arr_7 [i_2] [6] [i_3])))) <= (((arr_8 [1]) + (arr_5 [i_3])))))), (max((arr_4 [i_3]), ((((arr_4 [i_2]) || (arr_6 [16]))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 14;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_18 -= (((min((((arr_12 [i_5] [i_7]) * (arr_14 [i_5] [i_6 + 1]))), ((((arr_11 [i_5]) * (arr_20 [8] [i_5] [i_6] [i_7])))))) != ((min((((arr_9 [i_4]) & (arr_24 [12] [i_5] [2] [i_7] [12]))), (((arr_20 [i_8] [i_7] [11] [i_5]) + (arr_7 [i_5] [24] [i_5]))))))));
                                var_19 = (max(var_19, (arr_25 [i_8] [i_7] [i_5] [i_4])));
                            }
                        }
                    }
                    var_20 = (max(var_20, ((min((min(((((arr_21 [i_4] [i_5] [i_6 - 1] [i_6] [i_6 + 2]) / (arr_8 [2])))), (min((arr_15 [i_4]), (arr_6 [12]))))), (min((max((arr_17 [0] [i_4] [0]), (arr_22 [i_4] [i_4] [i_5] [0] [0]))), ((((arr_25 [i_4] [i_5] [i_6] [i_4]) >> (((arr_18 [i_4] [i_5] [i_6 - 1]) - 227))))))))))));
                    arr_26 [8] &= (((max((max((arr_13 [i_4] [i_4]), (arr_11 [i_5]))), (((arr_19 [i_5] [i_5] [i_4] [i_4] [i_4]) * (arr_21 [i_4] [i_4] [13] [i_4] [i_4]))))) % (((((min((arr_21 [i_6] [i_6 - 1] [i_5] [i_5] [i_4]), (arr_25 [i_5] [11] [i_5] [i_5])))) && ((max((arr_18 [i_4] [i_4] [i_6 + 2]), (arr_17 [10] [i_5] [6])))))))));
                    var_21 = (min(var_21, ((((arr_8 [10]) * (max((arr_15 [i_5]), ((((arr_10 [i_6 - 1] [i_5] [i_4]) / (arr_14 [i_6] [i_4])))))))))));
                    var_22 -= min((((((min((arr_8 [0]), (arr_11 [i_4])))) && (((arr_23 [i_5]) <= (arr_10 [i_4] [i_5] [i_6 + 1])))))), (arr_6 [4]));
                }
            }
        }
    }
    #pragma endscop
}
