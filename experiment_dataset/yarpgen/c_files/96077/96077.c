/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((min(14881309220981739432, var_7)) / (min(14881309220981739422, 3565434852727812174)))), (max(var_10, (max(14881309220981739442, var_10))))));
    var_15 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((((var_10 << ((3482348267 ? 19 : 13136899260295176646)))) + var_1));
                arr_6 [2] [i_1] = (min(((((var_9 / var_4) ? 1 : 201))), ((var_4 ? (min(var_13, var_1)) : (min(3565434852727812206, 14881309220981739432))))));
            }
        }
    }
    var_16 = ((((((var_8 | 1) ? (~var_9) : 14881309220981739432))) || ((var_12 <= (min(var_5, 16554296576437684905))))));
    #pragma endscop
}
