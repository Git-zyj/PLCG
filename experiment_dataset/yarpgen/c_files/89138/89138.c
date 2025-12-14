/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (((var_4 <= var_6) ? (var_3 % var_0) : var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((var_4 ^ (((min((arr_0 [i_1]), (arr_3 [i_1] [i_1])))))));
                var_11 = (max(var_11, (((((((-(arr_0 [i_0]))) * 2529021450))) ? (min(((max(var_3, var_1))), var_6)) : ((min(65523, 851112112)))))));
            }
        }
    }
    var_12 = ((var_7 ? (((-(var_6 & var_8)))) : var_3));
    #pragma endscop
}
