/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_18 -= (min((min((arr_1 [i_0 - 1]), 6019848742659900295)), (((min((arr_3 [i_0]), 18984))))));
                var_19 = (var_10 & ((((var_3 ? var_7 : var_15)) * -1)));
                var_20 = ((((((min(20682, var_17)) * -125))) >= ((((~(arr_1 [i_1]))) >> ((((1 ? -101 : 4279324279459092498)) - 18446744073709551461))))));
            }
        }
    }
    var_21 = (min(((max(0, var_9))), (min(((var_16 << (var_17 - 7083778030074340102))), var_4))));
    var_22 = var_0;
    #pragma endscop
}
