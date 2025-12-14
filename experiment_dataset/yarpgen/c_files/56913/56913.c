/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = ((~((1 ? 1 : 1150800695))));
                arr_6 [i_1] = (min(((56689 ? (arr_4 [i_0] [i_1 + 1] [i_1]) : (arr_4 [i_0] [i_1 - 1] [i_1]))), ((min((arr_3 [i_0]), (max(153, 17013)))))));
            }
        }
    }
    var_15 &= 989965789;
    var_16 -= 989965789;
    #pragma endscop
}
