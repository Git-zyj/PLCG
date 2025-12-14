/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = (max((max(((max(var_18, var_9))), (min(-4536506311640787912, 4536506311640787915)))), (min(-4536506311640787910, 469762048))));
                    arr_10 [i_2] [i_0] = (max((min((min(var_1, (arr_1 [i_2]))), ((min((arr_3 [i_1] [i_2]), (arr_8 [i_0])))))), (max((min(0, (arr_2 [i_2] [i_0] [i_0]))), ((max(11, (arr_8 [i_0]))))))));
                    var_19 = min(((min(((max(var_5, 215))), (min(4536506311640787911, 30))))), (min(((min(-32, -4536506311640787912))), (max((arr_5 [i_0] [14] [i_0]), (arr_7 [i_0] [i_1] [17] [10]))))));
                    arr_11 [i_0] [i_0] = (min(((max((max((arr_3 [i_2] [i_2]), -4536506311640787912)), (min((arr_8 [i_0]), var_9))))), (min(((min(var_17, -104))), (min((arr_5 [i_0] [i_1] [i_0]), var_8))))));
                    var_20 = max((max((min(4536506311640787912, -14)), ((min(7, (arr_6 [1] [i_0] [i_1] [6])))))), (max(((max(13, var_12))), (max((arr_0 [10]), (arr_2 [1] [i_0] [i_2]))))));
                }
            }
        }
    }
    var_21 = (max((max((max(var_15, var_17)), (max(-4536506311640787937, var_4)))), ((max(((min(var_5, var_10))), (max(var_0, 4294967295)))))));
    var_22 = (min((min(((min(249, var_18))), (min(var_18, var_11)))), ((min((min(var_1, var_9)), ((max(13, var_14))))))));
    #pragma endscop
}
