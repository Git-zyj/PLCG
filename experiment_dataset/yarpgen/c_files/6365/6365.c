/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] = (!var_4);
                var_14 = (((((arr_3 [i_1] [i_0]) ? ((((arr_1 [i_0]) != var_1))) : 1546091729057364438))) ? (((arr_3 [i_0 + 3] [i_0]) ? 57985 : (arr_3 [i_0 + 2] [i_0]))) : (((((arr_3 [i_0 - 1] [i_1 - 1]) >= 1506649651)))));
                var_15 = (1123762773380181370 / -70432436);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            {
                var_16 = ((-(((arr_0 [i_2 + 1]) ^ -2142340874236823584))));
                arr_9 [i_3] [i_2] [i_2 - 1] = 9551433751072310220;
            }
        }
    }
    #pragma endscop
}
