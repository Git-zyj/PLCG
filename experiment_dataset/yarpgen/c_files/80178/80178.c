/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_10 = var_7;
                var_11 = min(((~(var_7 < var_7))), ((((8274150914017455063 ^ 34909494181888) == -var_1))));
                var_12 = (max(((min((arr_3 [i_0] [i_1 - 2] [i_1 - 2]), ((var_9 ? var_3 : (arr_1 [i_0])))))), (((arr_3 [i_0] [i_1 + 1] [i_1 - 2]) ? (arr_3 [i_0] [i_1] [i_1 - 3]) : (arr_0 [i_1 - 3] [i_1 - 3])))));
                var_13 = 1;
            }
        }
    }
    var_14 ^= (~var_8);
    #pragma endscop
}
