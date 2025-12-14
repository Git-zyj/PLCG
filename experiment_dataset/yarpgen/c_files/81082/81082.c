/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((((-(min(4294967268, -5615083840417666008)))) * (((((max(var_14, var_1)) <= (var_14 / 1)))))));
    var_17 = var_2;
    var_18 = ((((min((1 > var_8), (max(var_1, var_3))))) ? (((((((min(var_13, var_14)))) != (max(var_2, var_5)))))) : (min((var_10 | var_3), ((var_6 ? var_0 : 27929))))));
    var_19 = (min((var_15 || 2097151), (max(var_11, var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (min((arr_1 [i_0] [10]), var_0));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] [i_3] [i_3] [i_1] [i_3] = var_5;
                                var_21 = (((arr_5 [i_0] [i_3] [i_4]) * (((var_13 / (arr_10 [i_0] [i_1] [i_1] [i_3]))))));
                                var_22 = (((((!(arr_7 [i_0] [14] [i_0] [i_0]))))) * (max((arr_6 [i_4] [i_1] [i_2] [i_3]), (arr_6 [i_0] [i_0] [i_0] [i_0]))));
                            }
                        }
                    }
                }
                var_23 = ((((min((arr_15 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0] [i_0]), (min(1, (arr_2 [12])))))) ? (((((((arr_8 [20] [20]) <= var_10)) && ((max((arr_2 [i_0]), (arr_7 [i_0] [i_0] [i_0] [i_0])))))))) : ((((min(2060658389, 238))) - (min(var_9, 1241879035))))));
                /* LoopNest 3 */
                for (int i_5 = 3; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_24 = var_12;
                                arr_23 [i_0] [i_1] [i_0] [i_6 - 1] [i_7] = (min((arr_10 [i_6 - 2] [i_5 - 1] [i_5 - 1] [23]), (min((arr_4 [i_5 - 2]), (arr_10 [i_6 + 1] [i_6] [i_5 - 3] [i_5 - 2])))));
                                var_25 = var_3;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
