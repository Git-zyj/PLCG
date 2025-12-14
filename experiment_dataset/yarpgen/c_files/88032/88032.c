/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((min((!78451828636358038), var_16)))));
    var_19 = ((((var_12 ? var_6 : -1275014570724647501))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] [17] [3] = (((min((arr_5 [i_2 + 1] [i_1 - 3]), (~0))) >> (var_8 - 2128653594117818860)));
                    var_20 = (max(var_20, (((max((arr_6 [i_1 - 3] [i_1 - 1] [i_0]), (arr_7 [i_1 + 1] [i_2 - 1] [i_2 + 1])))))));
                }
            }
        }
    }
    var_21 = (min(var_21, var_17));
    #pragma endscop
}
