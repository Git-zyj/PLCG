/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 -= 1;
        var_14 = (((arr_1 [i_0]) >= ((28 ? 2464519556 : (arr_0 [i_0])))));
        var_15 = (min(-1, ((min(-13149, 0)))));
        arr_2 [i_0] = (~1);
        arr_3 [i_0] [i_0] = ((!(--1513526697)));
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1)
    {
        var_16 = ((((max(1, 1))) > 142));
        arr_6 [i_1] [i_1] = 13138;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_2] [i_1] = ((~((min(1, (arr_10 [i_1 + 4] [i_1] [i_1 + 2] [i_2 + 1]))))));
                    var_17 = ((255 && (((200 - (arr_9 [i_1] [i_2] [i_3]))))));
                }
            }
        }
    }
    var_18 = var_4;
    #pragma endscop
}
