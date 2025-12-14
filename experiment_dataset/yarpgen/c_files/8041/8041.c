/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (((0 ? 1372575931 : 53846778)))));
                arr_6 [i_1] [i_1] [i_0] = ((((+(((arr_5 [i_0]) ? (arr_3 [i_0] [i_0] [i_1]) : (arr_3 [i_0] [i_0] [6]))))) / (arr_1 [i_1])));
            }
        }
    }
    var_12 = (var_6 + -var_9);
    var_13 = (max(var_13, (!1372575931)));
    #pragma endscop
}
