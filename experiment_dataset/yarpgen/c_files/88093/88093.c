/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = (min((((arr_3 [i_0]) / (arr_3 [i_0]))), ((1 ? (arr_3 [i_0]) : (arr_3 [i_0])))));
                    var_21 = ((((-1441144298 % (arr_3 [i_0]))) + -331209650));
                }
            }
        }
    }
    var_22 &= ((var_13 ? (((var_13 && 1) & var_4)) : var_0));
    var_23 = max((max(1, (min(var_8, var_9)))), (((((min(0, var_17)))) / ((65535 ? 14 : var_17)))));
    #pragma endscop
}
