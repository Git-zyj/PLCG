/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 += (((arr_6 [i_0] [i_1] [i_2]) * 0));
                    arr_8 [i_0] [i_0] [i_2] = (min((arr_1 [i_0]), ((~(min(511, var_3))))));
                    var_18 = (min(((min((max(var_15, (arr_1 [i_0]))), (22494 + 12288)))), (arr_0 [i_0])));
                    arr_9 [i_0] [i_1] = (((min(((min((arr_4 [i_2] [19] [i_0]), -5100))), (-127 - 1))) & (((var_6 - (((var_7 * (arr_1 [i_0])))))))));
                }
            }
        }
    }
    var_19 += ((~((-((var_8 ? 5901121651197001921 : 0))))));
    #pragma endscop
}
