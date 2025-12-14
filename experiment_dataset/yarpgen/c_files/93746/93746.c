/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = var_18;
                var_21 = ((~(min((min(var_12, -53)), ((((-48 + 2147483647) << (((arr_0 [i_0] [i_1]) - 317046647326312374)))))))));
                var_22 &= -53;
                arr_7 [i_1] = (max((((((min(8972014882652160, 17170246402235093097))) ? (min((arr_1 [i_0]), (arr_6 [i_0]))) : (((min(-53, (arr_3 [i_1])))))))), var_12));
            }
        }
    }
    var_23 = (max(var_23, var_16));
    var_24 = ((!((min(var_4, 270215977642229760)))));
    #pragma endscop
}
