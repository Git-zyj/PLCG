/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((max(((((min(1048568, 19192))) ? ((1048568 ? (arr_1 [i_1] [i_1]) : var_1)) : (min((arr_3 [2] [i_1] [i_1]), 30493)))), ((1218 ? (1584098842 && 1) : ((510 ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0]))))))))));
                arr_5 [i_0] = ((31 & (((arr_1 [i_0] [i_0 + 2]) ? (arr_1 [i_0] [i_0 + 2]) : (arr_1 [i_0] [i_0 + 2])))));
            }
        }
    }
    var_18 = var_1;
    var_19 = -1225;
    var_20 = var_8;
    #pragma endscop
}
