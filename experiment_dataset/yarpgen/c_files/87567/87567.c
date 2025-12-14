/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = (max((min((arr_0 [i_0] [i_0]), var_0)), (-9223372036854775807 - 1)));
        arr_4 [i_0] = (((min(((~(-9223372036854775807 - 1))), (arr_2 [4]))) - ((((!(((var_13 ? (arr_0 [i_0] [i_0]) : 2548996550)))))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            {
                var_17 = (min(var_8, (arr_9 [i_1])));
                var_18 &= ((((!(arr_7 [i_2]))) ? (!2063105944) : 2260331555));
                var_19 |= (arr_6 [15]);
                var_20 += (((((((!(arr_6 [i_1 + 1])))) - (max((arr_8 [i_1 - 2] [i_1 - 2] [i_1]), (arr_6 [i_2])))))));
            }
        }
    }
    #pragma endscop
}
