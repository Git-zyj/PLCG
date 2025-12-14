/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_5));
    var_14 = (((min(325875626, (14610 || var_0)))) >= 2394309041);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((((max(var_3, -1968988371)))))));
                arr_5 [i_0] [i_0] [i_0] = var_7;
            }
        }
    }
    #pragma endscop
}
