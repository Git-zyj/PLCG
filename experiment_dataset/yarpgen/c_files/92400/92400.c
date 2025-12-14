/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_15 += (((arr_0 [6]) > (arr_0 [10])));
                arr_6 [i_0] [i_0] = (-(min((0 || var_8), var_9)));
                arr_7 [i_1] = (((((min((1130747807 || 780411029), (((arr_1 [i_0]) <= var_4)))))) >= (((max(var_3, var_10)) / 3164219497))));
                arr_8 [i_0] |= ((+((+((((arr_1 [i_1]) < var_10)))))));
            }
        }
    }
    var_16 += (!0);
    var_17 = 1130747807;
    #pragma endscop
}
