/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (arr_0 [i_2 + 1])));
                    var_17 = (i_1 % 2 == 0) ? ((min((((((arr_2 [i_0] [i_0]) ? (arr_5 [14] [i_1] [i_1] [i_1]) : (arr_0 [i_1]))) << (((((arr_1 [i_1]) ? (arr_6 [i_1]) : (arr_5 [i_0] [i_1] [i_2] [i_2]))) - 23)))), (max(((max((arr_0 [10]), (arr_2 [i_0] [i_0])))), (((arr_4 [i_1] [i_1]) << (((arr_3 [i_0] [i_1]) - 2547879453))))))))) : ((min((((((arr_2 [i_0] [i_0]) ? (arr_5 [14] [i_1] [i_1] [i_1]) : (arr_0 [i_1]))) << (((((((arr_1 [i_1]) ? (arr_6 [i_1]) : (arr_5 [i_0] [i_1] [i_2] [i_2]))) - 23)) + 148)))), (max(((max((arr_0 [10]), (arr_2 [i_0] [i_0])))), (((arr_4 [i_1] [i_1]) << (((arr_3 [i_0] [i_1]) - 2547879453)))))))));
                }
            }
        }
    }
    #pragma endscop
}
