/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (((((var_3 ? (arr_5 [i_0] [i_0] [i_2]) : var_3)) > (!var_7))) ? ((((((arr_5 [i_0] [17] [i_2]) ? 9223372036854775807 : (arr_4 [i_0] [i_1] [i_0]))) >= var_7))) : (arr_3 [i_2]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_1] = (arr_6 [i_0] [i_0] [i_2]);
                                var_11 = (max((min(((11602 ? 1 : 245729068746213381)), ((max((arr_6 [i_0] [i_0] [i_0]), (arr_9 [i_1] [i_2] [i_0] [i_4])))))), (((var_6 ? (((min(var_9, (arr_11 [i_0] [i_1] [i_1] [i_1] [i_4] [i_2] [i_4]))))) : (arr_5 [8] [8] [i_3]))))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [i_0] = (min((max(((-(arr_0 [4] [4]))), (((arr_5 [i_0] [i_1] [i_1]) ? var_9 : var_1)))), var_7));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_12 ^= (arr_10 [i_0] [i_0] [i_2] [i_0] [i_6] [i_0]);
                                var_13 = ((((((((arr_17 [i_0] [i_6]) ? (arr_16 [16] [i_0] [i_1] [i_2] [6] [i_6]) : var_1))) ? (arr_5 [i_2] [i_2] [12]) : var_1)) != ((min((arr_18 [i_1] [i_6]), var_9)))));
                                var_14 = var_0;
                                arr_22 [i_0] [9] [i_0] = ((((((arr_1 [i_1]) | (arr_1 [17])))) ^ var_6));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 &= -122;
    #pragma endscop
}
