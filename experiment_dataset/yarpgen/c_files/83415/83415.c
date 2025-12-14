/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (arr_2 [i_0] [1]);
                var_16 = (max(var_16, (((var_2 % (((arr_5 [i_0] [i_1] [i_1]) % 16383)))))));
                var_17 = (min(var_17, (((((!(arr_0 [i_0] [i_0]))) ? (arr_0 [i_0] [i_1]) : (((((arr_1 [i_0]) ? 137438953471 : 1027154236)))))))));
                var_18 = (arr_4 [i_0]);
            }
        }
    }
    var_19 = 8184;
    var_20 = var_3;
    var_21 = ((var_1 ? (138 % var_4) : (!var_10)));
    #pragma endscop
}
