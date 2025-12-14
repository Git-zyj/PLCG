/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_10 = (max(var_10, (((min((~var_4), (var_4 | var_2))) != var_9))));
                arr_7 [i_0] [i_1 + 1] = (var_7 <= var_9);
                arr_8 [i_0] [i_0] [i_1] = (((((var_6 | (var_5 || var_3)))) ? (var_5 > var_8) : (((((min(var_5, var_7))) ? (var_6 != var_7) : (var_2 != var_2))))));
                arr_9 [i_0] [i_0] [i_0] = var_8;
            }
        }
    }
    var_11 = (min(var_11, var_6));
    var_12 = (max((var_3 | var_2), var_8));
    var_13 = var_7;
    #pragma endscop
}
