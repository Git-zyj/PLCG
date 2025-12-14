/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [15] = (arr_4 [i_0] [i_0 + 1]);
                var_19 = 1;
                var_20 = ((~(min((((9216320288497399181 ? 113 : var_9))), 0))));
                arr_6 [14] = (arr_3 [5]);
            }
        }
    }
    var_21 = (((max(var_12, -var_1)) != var_4));
    var_22 = 0;
    #pragma endscop
}
