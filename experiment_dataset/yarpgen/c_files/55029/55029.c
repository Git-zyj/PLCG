/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_19 ^= ((((max(-1, 26445))) ? (((arr_4 [i_1 - 1] [i_1 + 1] [i_0 - 2]) ? (arr_5 [i_0 - 2]) : (arr_5 [i_0 - 2]))) : ((((arr_1 [i_1 + 2]) ? (arr_1 [i_1 + 2]) : 1)))));
                var_20 ^= (((((arr_2 [i_0 - 2]) ? 9223372036854775807 : (arr_2 [i_0 - 1]))) << ((((1 < 3143691482) > (min(963670946562582030, 17179869184)))))));
            }
        }
    }
    var_21 |= (!178735216173652850);

    /* vectorizable */
    for (int i_2 = 3; i_2 < 8;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] [i_2] = (((arr_4 [i_2 + 3] [i_2 + 3] [i_2]) ? 8508888445970430670 : (arr_4 [i_2 + 2] [i_2 + 2] [21])));
        arr_9 [i_2] [i_2] = 1;
    }
    for (int i_3 = 3; i_3 < 8;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [i_3] &= ((1147707076 ? 1 : (arr_3 [i_3 - 1] [i_3 - 1] [i_3 + 2])));
        arr_13 [i_3 + 2] [i_3 - 2] = min(-178735216173652877, ((((arr_3 [i_3] [i_3] [i_3 - 3]) <= (arr_3 [i_3] [i_3] [i_3 - 1])))));
    }
    #pragma endscop
}
