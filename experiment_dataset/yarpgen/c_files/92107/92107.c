/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [20] = 239;
                arr_6 [i_0] = (((arr_1 [i_0] [16]) <= (-110 < var_7)));
                arr_7 [i_1] [5] = (min(57554, (max((max(7999, 2305825417027649536)), (arr_2 [i_1] [i_1])))));
                arr_8 [i_1] &= max(var_6, 131);
            }
        }
    }
    var_13 = (min(var_13, -9011412134096295245));
    var_14 -= (((min(var_0, (max(var_10, var_2)))) == 4294967295));
    var_15 = (min(var_15, ((((0 > 57522) >> (var_4 + 3028))))));
    #pragma endscop
}
