/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [2] [i_2 - 2] [i_1] [7] = (min((-9568 + -280581378595863989), (min((max(-280581378595863989, (arr_8 [i_0] [i_0] [i_0]))), (arr_3 [i_0] [i_1] [i_2])))));
                    arr_10 [3] [i_1] [1] = (arr_8 [i_0] [7] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
