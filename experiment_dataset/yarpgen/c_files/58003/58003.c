/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] = (arr_5 [i_0 - 1] [i_0 + 4]);
                var_19 *= max(((+(((arr_1 [7]) / (arr_3 [i_0]))))), (((((arr_5 [1] [1]) ? (arr_2 [i_0] [i_0]) : (arr_4 [i_0] [i_0]))) / (arr_1 [i_0]))));
            }
        }
    }
    #pragma endscop
}
