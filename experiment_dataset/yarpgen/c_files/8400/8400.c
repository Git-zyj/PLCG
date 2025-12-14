/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((var_5 ? ((var_1 ? (((124 ? (-127 - 1) : var_1))) : var_7)) : 124)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = (max(var_11, (((~(~var_2))))));
                arr_6 [i_0] [i_1] = (((~var_9) << (((max(((min((arr_2 [i_1]), 205))), var_5)) - 2805038429108965450))));
            }
        }
    }
    var_12 -= (min((min((var_4 > 6014707744306917572), var_0)), var_7));
    var_13 = (var_6 > var_1);
    #pragma endscop
}
