/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= 3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 = ((!(arr_9 [i_2] [i_1] [5] [i_2])));
                    var_14 = 30568;
                    arr_11 [i_2] = ((((((arr_6 [i_1]) == (arr_6 [i_2])))) | (arr_6 [i_2])));
                    arr_12 [i_0] [15] [i_2] [i_2] = (max((min(246, -2147483636)), (!34964)));
                }
            }
        }
    }
    var_15 = ((~(min((5 | var_7), var_2))));
    #pragma endscop
}
