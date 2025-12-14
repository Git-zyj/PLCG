/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = ((((65535 ? 0 : 2495088898)) % (arr_4 [i_2 - 1])));
                    var_21 = ((var_5 ? (((var_10 < 1431008248) ? var_10 : ((var_2 ? var_14 : -16)))) : ((((arr_3 [i_0] [i_1] [i_2 - 2]) == var_13)))));
                    var_22 = (max(((var_3 >> (var_17 - 152))), (arr_1 [i_2 - 1])));
                }
            }
        }
    }
    var_23 = ((((1 ? var_17 : 1)) % ((((var_4 ^ var_6) > var_13)))));
    #pragma endscop
}
