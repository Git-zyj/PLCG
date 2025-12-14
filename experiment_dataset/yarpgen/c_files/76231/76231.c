/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((max(-5522648837111475917, 1)), (var_1 < var_10)));
    var_12 = (min(var_12, ((max((max(var_8, var_10)), var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (arr_2 [i_0])));
                var_14 = (max(((min(var_0, var_7))), (((var_0 != var_4) ^ (arr_4 [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
