/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((((((arr_4 [i_0] [i_1] [i_1]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_1]))) <= ((((!(arr_4 [i_0] [1] [i_1]))))))))));
                var_21 ^= ((~((97 ? -98 : -76))));
                var_22 = (((arr_2 [i_0] [i_1]) ? (((-(!3238943903)))) : (max((arr_0 [i_0] [3]), (arr_3 [i_1] [i_0])))));
            }
        }
    }
    #pragma endscop
}
