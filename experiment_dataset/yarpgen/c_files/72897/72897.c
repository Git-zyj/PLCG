/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] [i_1] [i_2] = (min(((((arr_11 [i_0] [i_1] [i_1] [i_2] [22] [i_1] [i_4]) && (arr_1 [i_0 - 1])))), 16384));
                                arr_13 [5] [i_1] = (max(((((arr_5 [i_0] [i_0 - 1] [i_0 - 1]) > (arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [11] [i_2] [i_4])))), (min((arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [5] [i_1] [20]), (arr_5 [18] [i_0 - 1] [i_0 - 1])))));
                                arr_14 [i_1] [i_3] [1] [i_3] = ((!(((var_1 ? (arr_9 [i_0 - 1] [i_0] [i_2] [i_0 - 1] [i_4] [i_3]) : (arr_9 [14] [16] [16] [i_1] [i_1] [i_0 - 1]))))));
                                arr_15 [i_0] [i_2] [i_1] = var_10;
                            }
                        }
                    }
                    var_13 ^= ((((((((-1362215825 ? 6 : 16395))) ? (((arr_11 [14] [14] [i_2] [14] [i_2] [0] [i_0]) ? (arr_4 [i_0] [i_0] [i_0]) : var_6)) : ((min((arr_10 [i_2] [i_2]), (arr_0 [i_0]))))))) ? ((((arr_6 [9]) ? 62431 : ((-(arr_10 [i_0] [i_2])))))) : (max((max(var_6, var_0)), ((max(var_11, (arr_2 [i_0]))))))));
                }
            }
        }
    }
    var_14 = (max(var_14, var_4));
    #pragma endscop
}
