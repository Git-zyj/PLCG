/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_9 [i_1] [1] [1] [i_3] [1] [i_0] = ((!((min((((arr_5 [i_2 - 2]) & 17817)), (arr_4 [i_0 + 1] [i_0 + 1]))))));
                        var_12 = (((((-(arr_5 [20]))) + 24611)));
                        var_13 -= -27747;
                        var_14 += (((((arr_3 [i_0 + 1] [i_2 + 1] [i_2 - 1]) ? (arr_7 [i_0 + 1] [1]) : (arr_7 [i_0 + 1] [6]))) / (arr_8 [4] [22] [18] [4])));
                    }
                    var_15 = (((arr_5 [i_2 + 1]) * (((((arr_1 [i_0 + 1]) + 2147483647)) >> (75 - 63)))));
                }
            }
        }
    }
    var_16 |= var_10;
    #pragma endscop
}
