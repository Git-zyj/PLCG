/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_11, ((((~var_13) == ((((var_3 + 2147483647) << (var_6 - 546471086)))))))));
    var_15 = -6299378465886579218;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (((max((((!(arr_0 [i_0]))), -6299378465886579218)))))));
                var_17 = (((((max((arr_1 [i_0] [i_1]), (arr_0 [i_0]))))) ^ ((+((24057 >> (((arr_3 [i_0] [i_0] [i_0]) - 48609))))))));
            }
        }
    }
    #pragma endscop
}
