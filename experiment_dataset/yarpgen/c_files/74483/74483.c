/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((((var_1 < (max(-83, 2053200518140149745))))), var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((min((min(((-(arr_2 [16]))), var_4)), (((max(83, (arr_0 [i_0]))))))))));
                var_12 = 1;
            }
        }
    }
    var_13 = 1;
    var_14 += var_9;
    #pragma endscop
}
