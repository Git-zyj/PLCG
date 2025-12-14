/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_2] = ((+((((arr_3 [i_0] [i_1]) == 43)))));
                    var_14 = (min(var_14, (((-44 + (min((0 - 0), 1)))))));
                    var_15 -= var_13;
                }
            }
        }
        arr_9 [i_0] = ((((max(var_10, ((((arr_2 [i_0] [1]) < 213)))))) ? (min(-18, (~17401))) : (!39015)));
        var_16 += (arr_0 [i_0] [i_0]);
    }
    var_17 = 17401;
    #pragma endscop
}
