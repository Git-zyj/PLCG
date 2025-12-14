/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_19 = (4294967295 ? -385949469 : 797343002);
                    arr_10 [i_0 - 1] [11] [5] [i_0 - 1] = ((-(max(1406706768, (-2147483647 - 1)))));
                }
            }
        }
    }
    var_20 = ((((!(var_15 ^ var_4))) ? (0 + 1) : (((((0 ? 16777215 : 1))) ? 61091 : var_13))));
    #pragma endscop
}
