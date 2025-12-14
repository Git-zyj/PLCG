/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((max(((max(var_7, 127))), ((144 ? var_13 : 737540900)))), (!var_6)));
    var_17 = -1297416290111702783;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 += ((min((max(-1297416290111702783, 134)), 1238330299)));
                var_19 ^= (min((((((arr_1 [i_0]) ? -1297416290111702783 : -2305843009213693952)))), (arr_5 [i_0])));
            }
        }
    }
    var_20 = 1020;
    #pragma endscop
}
