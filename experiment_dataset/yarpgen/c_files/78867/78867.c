/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    var_19 = (18446743798831644672 * (((var_1 * var_12) ? 4659188033097133151 : (var_4 * var_10))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = -52;
                    var_21 ^= (4659188033097133151 % var_12);
                    arr_11 [i_0] [i_1] [i_1] = ((127 ? (max(34486, (arr_7 [i_2 + 1] [13] [i_2] [i_0 + 1]))) : (((51 ? (arr_9 [i_2] [i_2] [i_1 + 2] [i_1 + 2]) : (arr_9 [i_1 + 1] [11] [i_1 + 1] [i_1 + 2]))))));
                }
            }
        }
    }
    #pragma endscop
}
