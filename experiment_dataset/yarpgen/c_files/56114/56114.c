/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = 1388727113377522846;
                    arr_8 [i_0 - 3] [i_0] [i_0] = (arr_1 [i_0] [i_0]);
                    var_20 = 1;
                    arr_9 [i_0] [i_1] [i_0] [i_0] = ((((min(var_15, var_2) << (2719817237 - 2719817237)))));
                }
            }
        }
    }
    var_21 = 8555392408907936791;
    var_22 = (max(var_22, (((max((min(163485827555194273, 0)), 30393162506247928)) * (((var_2 ? var_2 : var_5)))))));
    #pragma endscop
}
