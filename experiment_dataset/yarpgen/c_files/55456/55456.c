/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (((-(((arr_3 [i_1 + 2]) - var_9)))))));
                arr_5 [i_1] = (!var_2);
            }
        }
    }
    var_20 = (((var_2 ? (var_3 * 5102028843681728685) : var_10)) * var_12);
    #pragma endscop
}
