/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(1, ((4120257745 ? -69 : -69))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((!((!(~var_8)))));
                arr_6 [i_0] [i_0] [6] = (((((32 ? (arr_0 [i_0 - 1] [i_1]) : 994963943))) * (((arr_0 [i_0 - 1] [i_1]) ? (arr_3 [i_0] [i_0 - 1] [i_1]) : var_0))));
                var_12 ^= (((((var_6 ? (arr_4 [i_0] [i_0 - 1]) : 69))) ? (min(0, 3035007050122168862)) : (arr_4 [i_0] [i_0 - 1])));
            }
        }
    }
    var_13 = var_7;
    #pragma endscop
}
