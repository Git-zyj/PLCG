/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = (max(var_18, 32767));
                var_19 = (max(var_19, ((min((arr_0 [i_0]), (((-(arr_1 [i_0] [i_0])))))))));
                arr_7 [i_0] [8] = (max((arr_0 [i_0]), 895844732));
            }
        }
    }
    var_20 = ((var_13 + ((max(var_8, 1)))));
    var_21 = (var_6 + -1045094988);
    #pragma endscop
}
