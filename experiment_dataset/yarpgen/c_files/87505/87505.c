/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [10] [i_1] [i_1] = (max(-1025849633, -1025849633));
                arr_8 [i_1] = (min((((arr_5 [i_1]) ? ((1025849632 ? (arr_2 [8]) : (arr_3 [i_1]))) : (arr_5 [i_1]))), 62687));
            }
        }
    }
    var_11 = (max(var_11, ((((((var_10 ? var_2 : -1025849617)))) ? var_4 : -1025849633))));
    #pragma endscop
}
