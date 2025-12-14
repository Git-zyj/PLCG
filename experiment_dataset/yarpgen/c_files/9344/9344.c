/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_14;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            {
                arr_8 [i_0] = (min((((!((((arr_1 [i_0]) + (arr_4 [i_0]))))))), (arr_3 [i_0])));
                var_18 &= ((!((min((((arr_4 [i_0]) ? -2139734137 : (arr_2 [i_0] [i_1 - 4]))), (!2139734137))))));
                var_19 = (min((max((min(-36, var_7)), -78)), (((2139734137 ? (arr_6 [i_0] [i_0]) : (arr_6 [i_0] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
