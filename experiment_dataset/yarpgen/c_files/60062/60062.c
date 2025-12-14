/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_7, var_2));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = (min(var_12, var_5));
                var_13 -= (((!-9223372036854775789) ? ((~(arr_2 [i_0 + 2]))) : (((!(!var_9))))));
                var_14 = (min(67100672, (min((arr_5 [i_0] [i_0] [i_0 + 2]), (arr_2 [i_1])))));
            }
        }
    }
    #pragma endscop
}
