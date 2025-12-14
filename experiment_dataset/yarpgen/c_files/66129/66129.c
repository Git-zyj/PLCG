/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = (((((max(var_8, (arr_0 [2])))) ? (arr_4 [i_0] [i_1]) : -859925263)));
                var_16 = ((~((-859925263 ? -4220 : (arr_2 [1] [7] [i_1])))));
                arr_5 [0] [i_0] [5] = (5 || 791023555);
            }
        }
    }
    #pragma endscop
}
