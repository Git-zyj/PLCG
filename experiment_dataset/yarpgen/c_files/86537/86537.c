/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    var_21 = ((((((var_17 ? var_11 : var_7)))) ? var_4 : 248206403));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_22 = (max(var_22, ((((arr_4 [i_1]) + 59362)))));
                var_23 = (max(var_23, (((var_15 ? (max(0, var_13)) : (((((arr_2 [i_1] [0]) > 219)))))))));
                var_24 = (min(var_24, (arr_4 [i_1])));
            }
        }
    }
    #pragma endscop
}
