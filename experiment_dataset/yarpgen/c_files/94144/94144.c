/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((var_9 | ((406108586 ? (arr_5 [i_0] [i_0] [i_0]) : (((25 ? var_8 : 512)))))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_20 ^= -1598656019;

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_0] [i_3] = 7580955968503522959;
                        var_21 = 1;
                        var_22 = (min(((min(7174312037386475946, var_5))), ((max(var_4, -309660664)))));
                    }
                    var_23 &= 240;
                    var_24 *= ((((((527 <= -406108570) | (490 == 252)))) ? 1 : 115));
                }
            }
        }
    }
    var_25 |= var_15;
    #pragma endscop
}
