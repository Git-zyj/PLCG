/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((var_0 + 2147483647) >> (var_2 + 11040))));
    var_14 = -5051365923357080477;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] [i_2] = arr_4 [i_0] [i_0];
                    var_15 = -5051365923357080477;
                    var_16 -= (+(max((((((arr_4 [i_0] [i_2]) + 9223372036854775807)) >> (arr_3 [i_0]))), ((max((arr_5 [i_0] [i_0]), (arr_8 [i_0] [i_0])))))));
                    var_17 *= (max(((((!(arr_2 [i_2] [i_1]))) ? 2168571099336390017 : (min(-7111925972227762420, 19405)))), 3616426576));
                    var_18 += max((arr_1 [i_0]), ((~(arr_1 [i_0]))));
                }
            }
        }
    }
    var_19 = var_12;
    #pragma endscop
}
