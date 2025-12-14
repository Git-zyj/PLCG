/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~var_10);
    var_12 = ((-((~(max(var_5, 0))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 *= (min((((var_10 > (!1)))), ((var_2 ? (((max(var_9, 7367)))) : (max(var_10, var_1))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (((~(max((arr_1 [i_2]), ((min(-15495, 0))))))))));
                    arr_7 [i_0] [i_0] [i_0] = ((!(((~(((arr_5 [i_2] [i_1] [i_0]) ? var_7 : (arr_1 [i_0]))))))));
                }
            }
        }
        var_15 ^= (max((((((2042374036 << (var_10 - 7335)))) ^ (min((arr_2 [0]), var_3)))), ((((((~255) + 2147483647)) >> (((((arr_1 [16]) & (arr_0 [22]))) - 6188)))))));
    }
    #pragma endscop
}
