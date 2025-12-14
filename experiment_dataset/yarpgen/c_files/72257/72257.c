/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 = 29288;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = -64;
                    arr_8 [i_0] = var_8;
                    arr_9 [i_0] [i_2] = -69;
                }
            }
        }
    }
    var_14 = (max(var_14, 7728198185822148501));
    #pragma endscop
}
