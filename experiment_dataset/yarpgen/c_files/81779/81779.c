/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((64652 ? 0 : 125));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_21 += (max(((-(arr_0 [i_0 - 2] [i_0 - 2]))), (arr_4 [i_0])));
                var_22 = (min((((54844 + 5350) + (arr_4 [i_0 - 4]))), ((max((arr_4 [i_0 + 1]), -56)))));
                var_23 = (max(var_23, ((max(-56, (~67))))));
                var_24 = (max(var_24, (((((56 ? -67 : ((34559 ? (arr_1 [i_0] [i_0]) : -55)))) < ((((!(arr_4 [i_0 - 3]))) ? (84 > 56) : -85)))))));
            }
        }
    }
    #pragma endscop
}
