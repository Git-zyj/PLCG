/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((var_4 ^ var_9), ((var_8 ? 5571782168960080746 : ((max(var_0, var_11)))))));
    var_17 = ((~(55 / 62)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [9] = ((max((arr_0 [i_0]), (arr_5 [i_1]))));
                    var_18 = (max(var_18, ((min((((arr_4 [i_0]) / (((max(181, var_9)))))), (~var_4))))));
                }
            }
        }
        arr_9 [i_0] = ((~((~(arr_4 [i_0])))));
        arr_10 [i_0] [i_0] = (arr_0 [i_0]);
        arr_11 [i_0] = (min(((0 ? ((-63 ? 48 : -48)) : 75)), -1697913788));
    }
    #pragma endscop
}
