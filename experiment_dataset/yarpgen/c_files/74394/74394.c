/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = 2926316303689891043;
                arr_6 [i_1] = 2068596662;
                var_14 = ((var_12 > (min(-258791895, (min((arr_2 [i_1 + 1]), var_5))))));
                var_15 = (min(var_15, (((-(((max(1, var_10)))))))));
            }
        }
    }
    var_16 = (max(9223372036854775807, 32765));
    var_17 = (max(((((max(var_1, 1))) ? (~-11) : (!22))), ((max(0, -32748)))));
    var_18 = 1;
    #pragma endscop
}
