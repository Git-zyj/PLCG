/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((((min(var_0, 5296669631743971621)) + -var_11)), (((-((var_6 ? var_9 : var_1)))))));
    var_17 = (max(((var_14 ? ((min(var_15, 1))) : -var_6)), var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((max((min((min(var_1, var_4)), (arr_0 [i_0] [i_1 + 2]))), (((!(((var_5 | (arr_4 [i_0] [i_1]))))))))))));
                arr_6 [i_0] [i_0] = (((((min(2147483647, -1507353989)))) != var_0));
            }
        }
    }
    var_19 += (min(16384, (+-3238283450)));
    var_20 = (max(-4923776252141882435, var_9));
    #pragma endscop
}
