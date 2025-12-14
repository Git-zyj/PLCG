/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (max((var_14 / 2014203133), ((668768649 ? -32767 : -987061100))))));
                var_19 = (var_13 ? ((((4942 ? var_12 : (arr_1 [i_1]))) ^ ((-17784 ? -2014203133 : -1380559350)))) : (((!(arr_3 [i_0 - 1])))));
            }
        }
    }
    var_20 += var_14;
    #pragma endscop
}
