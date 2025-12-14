/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    var_19 = (((var_16 ? (var_11 && 2927427194563123559) : (var_12 - var_2))));
    var_20 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_1] [2] [i_1] = (((((((((arr_0 [i_0] [i_0]) ? (arr_2 [6] [i_1] [11]) : (arr_2 [i_0] [i_0] [i_1])))) ? (arr_3 [i_1]) : 33554431))) ? (((max((arr_3 [i_1]), 3)))) : (arr_1 [i_0])));
                var_21 = (((arr_3 [i_1]) << (-36229041 > 14)));
                arr_5 [i_0] [i_1] = (max(-36229041, (min(var_9, ((min((arr_2 [i_0] [i_1] [i_1]), (arr_2 [i_0] [i_1] [i_1]))))))));
                var_22 = ((-36229041 <= (arr_0 [i_1] [i_0])));
            }
        }
    }
    #pragma endscop
}
