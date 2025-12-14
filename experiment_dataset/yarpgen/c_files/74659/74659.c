/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((var_4 ? -17 : var_2));
    var_12 = max(var_4, (!46614));

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (((((min(var_2, var_7))) == (((!(arr_5 [21] [i_0])))))));
                    var_13 = (arr_1 [i_1]);
                }
            }
        }
        var_14 -= ((28448 ? 26449 : ((var_1 << (((1192413026 - 231) - 1192412794))))));
    }
    var_15 += (max((var_5 - var_4), var_2));
    #pragma endscop
}
