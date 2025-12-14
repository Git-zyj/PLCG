/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_10 = (((arr_0 [i_0] [i_1]) ? (834130938 + 54) : var_9));
                var_11 = (((((min(var_6, -var_9)) + 9223372036854775807)) << (((arr_5 [i_0] [i_0]) - 31341))));
                arr_6 [i_0] = (min(var_6, ((var_3 ? (((var_7 || (arr_3 [i_0] [i_0] [i_0])))) : ((1864382027 ? 44 : (-32767 - 1)))))));
                var_12 = (max(var_12, ((max((((((min((arr_2 [i_1] [17] [i_0]), (arr_1 [i_1] [i_0])))) ^ var_1))), ((0 ? 65523 : 3552633250)))))));
                var_13 ^= ((((min(var_7, var_9))) ? ((max(0, -32762))) : (arr_4 [i_1] [i_0])));
            }
        }
    }
    var_14 = (((((var_8 ? var_2 : var_4))) > ((65532 ? -7634828002052523582 : 4294967286))));
    var_15 = var_4;
    #pragma endscop
}
