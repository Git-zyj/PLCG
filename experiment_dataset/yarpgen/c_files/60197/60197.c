/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = (((max(7691859536874561022, ((1784842973 ? (-9223372036854775807 - 1) : var_0)))) <= (((((-23174 ? (arr_0 [i_0] [i_0]) : var_1)) + (!var_5))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_21 = (max((((0 ? 2048356895 : (arr_2 [i_0] [i_1] [i_1])))), ((((0 ? var_1 : var_3))))));
                    arr_7 [1] [i_2] = (min((((arr_5 [i_0] [i_2] [i_2 - 3]) % (arr_2 [i_0] [i_2 - 2] [i_2]))), (arr_6 [i_2] [i_2 + 2] [i_2])));
                }
            }
        }
    }
    var_22 = ((-1784842974 ? (min((max(53, 7691859536874561024)), (max(1498149954, 0)))) : 20650));
    #pragma endscop
}
