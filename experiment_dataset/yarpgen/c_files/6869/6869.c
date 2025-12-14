/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_20 = max((min((max(var_2, 1422888449)), ((min((arr_0 [i_0]), var_16))))), (max((max(var_2, 3736275193)), (min(2192299185, var_9)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_21 = (min((min(((min(var_7, -1200556496))), (min(770714518, var_12)))), (min((max(var_5, var_4)), (max((arr_7 [1] [1] [17] [i_1]), var_19))))));
                                var_22 &= (max((min((max((arr_7 [i_2] [i_1] [i_2] [i_3]), (arr_3 [i_3] [i_2] [i_0]))), (max(13580, var_4)))), ((max((min((arr_2 [i_3] [i_4]), var_0)), ((min(var_6, var_7))))))));
                            }
                        }
                    }
                    var_23 = min(((max((min(536866816, 0)), ((max((arr_8 [i_0] [i_1] [i_1] [i_2]), var_2)))))), (max((min(3243191127, var_12)), ((max(347401, -13574))))));
                    var_24 = (max((min(((min((arr_8 [i_0] [i_1] [i_2] [i_1 + 4]), (arr_0 [i_1])))), (max(12425219760684400260, 3957404092)))), ((max(((max(0, 0))), 3243191127)))));
                }
            }
        }
    }
    var_25 -= (max(((max(((max(-1772881052, 13590))), (max(var_14, var_7))))), (min((max(var_8, var_5)), (max(122, 9048115364841756146))))));
    #pragma endscop
}
