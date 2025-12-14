/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((min((max(4294967295, 17)), 1))), (max((max(4294967287, var_11)), ((max(4294967289, var_3)))))));
    var_21 = (min((max((max(var_19, 8)), (max(var_17, var_13)))), (max(((max(8, 5))), (max(var_3, var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (max((max((max(40, (arr_4 [i_1]))), ((max(37, var_4))))), ((min((max(4294967273, (arr_2 [i_1]))), ((max(var_9, var_3))))))));
                arr_6 [i_1] [i_1] = (max(((max((min(36, (arr_4 [i_1]))), ((max(36, var_0)))))), (min((max((arr_0 [7]), var_11)), ((max((arr_3 [1]), 4294967279)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_1] [i_0] [i_3] = (min(((max(((max(var_16, (arr_8 [i_1] [i_2] [i_1])))), (min(var_12, 8))))), (min(((max(4294967287, 4294967260))), (min(var_9, (arr_4 [i_1])))))));
                            var_22 = (max((min(((max(4294967294, 4294967289))), (max(7, var_19)))), ((max((min(4294967260, var_16)), (max(7, 4294967281)))))));
                            var_23 = (max((max((max(17, 6)), 4294967279)), 8));
                            arr_12 [i_1] [5] [i_1] [i_1] = (min((max(4294967280, 20)), (max((max(4294967279, 4294967267)), (max(5, 19))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_20 [i_4] [i_4] [i_1] [i_5] = (min((max((min(7, (arr_7 [i_1] [i_1]))), ((max((arr_13 [i_1] [8] [i_1]), (arr_1 [i_0] [i_4 - 1])))))), (max((max(4294967278, 26)), 10))));
                            var_24 += (min((min(((min(6, 26))), (max(4294967288, var_7)))), (min(((min(var_0, var_14))), (max(var_16, var_19))))));
                            arr_21 [i_0] [i_1] [i_1] [i_4] [i_4] [i_5] = (max((min(((min(var_10, (arr_14 [i_0] [i_1] [i_1] [i_5])))), (min(var_1, 8)))), (min(4294967279, 0))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
