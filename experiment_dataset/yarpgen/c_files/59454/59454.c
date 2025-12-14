/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((-2147483647 - 1), 17592186044415));
    var_16 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (min((((arr_0 [1] [i_0]) ? var_14 : (arr_2 [i_0]))), ((((arr_1 [i_0] [i_0]) || (arr_4 [1] [i_0] [i_0 + 1]))))));
                var_18 &= ((~(min((arr_1 [i_0] [i_0 - 2]), (arr_1 [1] [i_0 - 2])))));
            }
        }
    }
    var_19 = var_11;
    #pragma endscop
}
