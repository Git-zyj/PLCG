/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] = (min(((628101272 ? 154 : 9440680857742269594)), var_19));
                    var_20 = 172;
                    var_21 = (max(var_21, 0));
                }
            }
        }
    }
    var_22 = (min(var_22, (((62744 ? (!62750) : var_19)))));
    #pragma endscop
}
