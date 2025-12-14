/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((~(((~8003697935194112807) ? (min(var_8, -8003697935194112816)) : 8003697935194112810))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (arr_2 [i_0] [i_1] [i_1 + 2]);
                arr_5 [i_0] [i_0] [i_1] = (max(2201074369, ((min(((((arr_0 [i_0]) >= (arr_0 [2])))), ((-8003697935194112807 ? var_10 : (arr_1 [6]))))))));
            }
        }
    }
    var_18 = var_10;
    #pragma endscop
}
