/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = ((((max((var_6 != 1), var_15))) ? ((+(max((arr_3 [i_1] [i_1] [i_0]), (arr_2 [6] [i_1]))))) : (((!(arr_0 [i_0] [i_0 + 1]))))));
                var_19 -= ((!(((((!(arr_0 [i_0 - 1] [i_1]))))))));
                var_20 = (min(var_20, ((((((arr_3 [3] [5] [i_1]) < (arr_3 [i_0] [i_1] [i_1]))) ? (((max((arr_3 [i_1] [13] [i_0]), (arr_3 [1] [i_1] [i_1]))))) : (((arr_3 [i_0 - 1] [2] [i_1]) - var_9)))))));
                arr_5 [i_0] = (max(-var_1, ((((max(var_9, (arr_1 [i_1])))) ? (((((arr_0 [i_0] [3]) + 2147483647)) >> (((arr_3 [i_0] [i_1] [i_1]) + 114)))) : (arr_2 [i_0] [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [i_3] = var_15;
                            arr_11 [i_3] [i_3] [10] = ((((max((arr_1 [i_3 + 1]), var_4))) ? ((max((arr_0 [i_0 - 1] [i_1]), (arr_0 [i_0] [i_2])))) : (((!((max((arr_4 [i_0] [10] [i_2]), var_3))))))));
                            arr_12 [i_3] [i_1] [i_1] [i_3] = ((arr_8 [i_0] [5] [5] [i_3] [i_3]) & (((~1) | ((255 ^ (arr_4 [i_1] [i_2] [i_3]))))));
                            arr_13 [i_0] [i_1] [i_3] [i_2] [10] = (max((max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_3]), (var_3 || 32))), -1090860800));
                        }
                    }
                }
            }
        }
    }
    var_21 = (var_11 - -3);
    var_22 = var_15;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            {
                var_23 = (min(var_23, var_13));
                arr_19 [i_4] [i_4] [i_5] = ((-11 >= (((arr_18 [i_4] [i_4] [i_4]) ? (arr_18 [i_4] [i_4] [3]) : (arr_18 [i_4] [i_4] [i_4])))));
            }
        }
    }
    #pragma endscop
}
