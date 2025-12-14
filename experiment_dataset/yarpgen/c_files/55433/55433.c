/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((max((min(585612733, var_9)), (min(var_12, var_11))))), (min((max(var_11, var_5)), ((max(0, 0)))))));
    var_14 = (min(var_14, ((min((min((max(var_8, 0)), ((max(0, var_1))))), (max(((min(var_3, 28252))), (min(var_0, var_4)))))))));
    var_15 &= (max(((min(((min(43857, -117))), (min(var_12, (-2147483647 - 1)))))), (min(((min(var_12, 1))), (min(var_11, var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = (min((min(((max(4, 54826))), (min(var_5, 255)))), (max((min(var_6, 9221120237041090560)), (max((arr_3 [i_2] [i_1 + 1] [8]), var_3))))));
                    var_16 = (max((min(((min(var_9, 28279))), (min(var_2, 0)))), (min((min(24, (arr_3 [i_2] [i_1 - 2] [8]))), ((max((arr_7 [i_1] [i_2]), 103)))))));
                }
                arr_9 [i_1 - 2] [8] = min((min(((max(var_0, var_2))), (min(4227509766, 48522)))), ((max((min(255, 0)), (max(-1316955141, var_11))))));
                arr_10 [i_0] [i_0] = min((min(((min(var_7, var_6))), (min((arr_4 [i_0] [1]), 1)))), (max((min(6977992158633899322, 398642386)), ((min((arr_1 [i_0]), (arr_1 [i_0])))))));
            }
        }
    }
    #pragma endscop
}
