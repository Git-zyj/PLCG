/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!(var_5 - var_5)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [14] [i_1] [14] = (max((((var_8 >= var_3) ? var_10 : (var_3 <= var_0))), ((max(-110, -41)))));
                    var_15 = (min(var_6, (arr_1 [i_0 - 2])));
                    var_16 = (max(var_16, ((-(min((arr_2 [i_0 - 1]), (arr_2 [i_0 - 2])))))));
                    arr_9 [i_0] [i_1] &= (((((524287 ? -1 : 57))) + (min((arr_4 [i_0 + 2]), (var_5 / var_4)))));
                }
            }
        }
    }
    #pragma endscop
}
