/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (((arr_2 [i_0] [i_0]) ? (((-(arr_0 [i_0] [i_0])))) : (max(127, (var_7 - var_3)))));
                arr_6 [i_0] [i_0] [i_0] = (max(-127, (-127 - 1)));
                var_12 = (max(var_12, ((((((47 ? 431756282 : 31))) ? (47 >= 166) : (arr_4 [i_0] [i_1]))))));
            }
        }
    }
    var_13 = var_6;
    var_14 = ((((max((min(var_7, -127)), var_5))) ? (min(-var_9, -var_0)) : var_10));
    #pragma endscop
}
