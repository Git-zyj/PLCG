/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_3;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 *= (((arr_4 [i_2 + 1] [i_1] [i_1 - 4] [i_0 + 3]) ? (((arr_4 [i_2 - 2] [i_1 - 2] [i_1 - 1] [i_0 - 2]) % (arr_4 [i_2 - 1] [5] [i_1 - 2] [i_0 + 3]))) : ((min((arr_4 [i_2 - 1] [i_1] [i_1 + 1] [i_0 + 2]), (arr_4 [i_2 - 2] [i_1] [i_1 - 4] [i_0 - 3]))))));
                    var_20 = (min((((arr_5 [i_1 - 3] [i_1 - 4] [i_0] [i_0 + 2]) ? (arr_5 [i_1 - 4] [i_1] [i_0] [i_0 + 3]) : (arr_5 [i_1 - 3] [i_1 + 1] [i_0] [i_0 + 3]))), -40));
                    arr_6 [i_0] [i_0] [i_0] [i_1] |= (arr_0 [i_0]);
                }
            }
        }
    }
    var_21 |= var_9;
    #pragma endscop
}
